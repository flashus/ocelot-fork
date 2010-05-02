/*! \file EmulatorDevice.cpp
	\author Gregory Diamos
	\date April 15, 2010
	\brief The source file for the EmulatorDevice class.
*/

#ifndef EMULATOR_DEVICE_CPP_INCLUDED
#define EMULATOR_DEVICE_CPP_INCLUDED

// ocelot includes
#include <ocelot/api/interface/OcelotConfiguration.h>
#include <ocelot/executive/interface/EmulatorDevice.h>
#include <ocelot/executive/interface/EmulatedKernel.h>
#include <ocelot/cuda/interface/cuda_runtime.h>

// hydrazine includes
#include <hydrazine/implementation/debug.h>
#include <hydrazine/implementation/Exception.h>
#include <hydrazine/interface/Casts.h>

#ifdef REPORT_BASE
#undef REPORT_BASE
#endif

// OpenGL includes
#include <GL/glew.h>

// Linux includes
#include <sys/sysinfo.h>

// Standard library includes
#include <cstring>

// Macros
#define Throw(x) {std::stringstream s; s << x; \
	throw hydrazine::Exception(s.str());}

// Turn on report messages
#define REPORT_BASE 0

namespace executive 
{
	EmulatorDevice::MemoryAllocation::MemoryAllocation() 
		: Device::MemoryAllocation(false, false), _size(0), 
		_pointer(0), _flags(0), _external(false)
	{
	
	}
	
	EmulatorDevice::MemoryAllocation::MemoryAllocation(size_t size) 
		: Device::MemoryAllocation(false, false), _size(size), 
		_pointer(std::malloc(size)), _flags(0), _external(false)
	{
	
	}
	
	EmulatorDevice::MemoryAllocation::MemoryAllocation(size_t size, 
		unsigned int flags) : Device::MemoryAllocation(false, true), 
		_size(size), _pointer(std::malloc(size)), _flags(flags),
		_external(false)
	{
		
	}

	EmulatorDevice::MemoryAllocation::MemoryAllocation(const ir::Global& global)
		: Device::MemoryAllocation(true, false), 
		_size(global.statement.bytes()), 
		_pointer(std::malloc(global.statement.bytes())), 
		_flags(0), _external(false)
	{
		global.statement.copy(_pointer);
	}

	EmulatorDevice::MemoryAllocation::MemoryAllocation(void* pointer, 
		size_t size) : Device::MemoryAllocation(false, false), _size(size),
		_pointer(pointer), _flags(0), _external(true)
	{
	
	}
	
	EmulatorDevice::MemoryAllocation::~MemoryAllocation()
	{
		if(!_external) std::free(_pointer);
	}

	EmulatorDevice::MemoryAllocation::MemoryAllocation(
		const MemoryAllocation& a) : Device::MemoryAllocation(a), 
		_size(a.size()), _pointer(std::malloc(a.size())), _flags(a.flags())
	{
		std::memcpy(_pointer, a.pointer(), size());
	}
	
	EmulatorDevice::MemoryAllocation::MemoryAllocation(MemoryAllocation&& a) 
		: Device::MemoryAllocation(false, false), _size(0), 
		_pointer(0), _flags(0)
	{
		*this = a;
	}
	
	EmulatorDevice::MemoryAllocation::MemoryAllocation& 
		EmulatorDevice::MemoryAllocation::operator=(const MemoryAllocation& a)
	{
		if(&a == this) return *this;
		
		if(!_external) std::free(_pointer);
		
		_global = a.global();
		_host = a.host();
		_size = a.size();
		_flags = a.flags();
		_external = a._external;

		if(!a._external)
		{
			_pointer = std::malloc(size());
			std::memcpy(pointer(), a.pointer(), size());
		}
		else
		{
			_pointer = a.pointer();
		}
				
		return *this;
	}

	EmulatorDevice::MemoryAllocation::MemoryAllocation& 
		EmulatorDevice::MemoryAllocation::operator=(MemoryAllocation&& a)
	{
		if(&a == this) return *this;
	
		std::swap(_global, a._global);
		std::swap(_host, a._host);
		std::swap(_size, a._size);
		std::swap(_pointer, a._pointer);
		std::swap(_flags, a._flags);
		std::swap(_external, a._external);
		
		return *this;
	}

	unsigned int EmulatorDevice::MemoryAllocation::flags() const
	{
		return _flags;
	}

	void* EmulatorDevice::MemoryAllocation::mappedPointer() const
	{
		assert(host());
		return _pointer;
	}
	
	void* EmulatorDevice::MemoryAllocation::pointer() const
	{
		assert(!host() || (_flags & cudaHostAllocMapped));
		return _pointer;
	}

	size_t EmulatorDevice::MemoryAllocation::size() const
	{
		return _size;
	}
	
	void EmulatorDevice::MemoryAllocation::copy(size_t offset, 
		const void* host, size_t s)
	{
		assert(offset + s <= size());
		std::memcpy((char*)pointer() + offset, host, s);
	}
	
	void EmulatorDevice::MemoryAllocation::copy(void* host, size_t offset, 
		size_t s) const
	{
		assert(offset + s <= size());
		std::memcpy(host, (char*)pointer() + offset, s);
	}

	void EmulatorDevice::MemoryAllocation::memset(size_t offset, 
		int value, size_t s)
	{
		assert(offset + s <= size());
		std::memset((char*)pointer() + offset, value, s);
	}

	void EmulatorDevice::MemoryAllocation::copy(Device::MemoryAllocation* a, 
		size_t toOffset, size_t fromOffset, size_t s) const
	{
		MemoryAllocation* allocation = dynamic_cast<MemoryAllocation*>(a);
		
		assert(fromOffset + s <= size());
		assert(toOffset + s <= allocation->size());
		
		std::memcpy((char*)allocation->pointer() + toOffset, 
			(char*)pointer() + fromOffset, s);
	}

	EmulatorDevice::Module::Module(const ir::Module* m, Device* d) 
		: ir(m), device(d)
	{
		
	}
	
	EmulatorDevice::Module::Module(const Module& m) : ir(m.ir), 
		device(m.device)
	{
	
	}
	
	EmulatorDevice::Module::~Module()
	{
		for(KernelMap::iterator kernel = kernels.begin(); 
			kernel != kernels.end(); ++kernel)
		{
			delete kernel->second;
		}
	}

	EmulatorDevice::Module::AllocationVector 
		EmulatorDevice::Module::loadGlobals()
	{
		assert(globals.empty());

		AllocationVector allocations;
		
		for(ir::Module::GlobalMap::const_iterator global = ir->globals.begin(); 
			global != ir->globals.end(); ++global)
		{
			MemoryAllocation* allocation = new MemoryAllocation(global->second);
			globals.insert(std::make_pair(global->first, 
				allocation->pointer()));
			allocations.push_back(allocation);
		}
		
		return allocations;
	}
	
	ExecutableKernel* EmulatorDevice::Module::getKernel(const std::string& name)
	{
		KernelMap::iterator kernel = kernels.find(name);
		if(kernel != kernels.end())
		{
			return kernel->second;
		}
		
		ir::Module::KernelMap::const_iterator ptxKernel = 
			ir->kernels.find(name);
		if(ptxKernel != ir->kernels.end())
		{
			kernel = kernels.insert(std::make_pair(name, 
				new EmulatedKernel(ptxKernel->second, device))).first;
			return kernel->second;
		}
		
		return 0;
	}
	
	ir::Texture* EmulatorDevice::Module::getTexture(const std::string& name)
	{
		if(textures.size() != ir->textures.size())
		{
			textures = ir->textures;
		}

		TextureMap::iterator texture = textures.find(name);
		if(texture == textures.end()) return 0;
		return &texture->second;
	}
	
	EmulatorDevice::OpenGLResource::OpenGLResource(unsigned int b) : 
		buffer(b), pointer(0)
	{
	
	}
	
	EmulatorDevice::EmulatorDevice( unsigned int flags) : 
		_selected(false), _next(1)
	{
		_timer.start();
	
		_properties.ISA = ir::Instruction::Emulated;
		_properties.addressSpace = 0;
		_properties.name = "Ocelot PTX Emulator";
		
		_properties.totalMemory = get_avphys_pages() * getpagesize();
		_properties.multiprocessorCount = 1;
		_properties.memcpyOverlap = false;
		_properties.maxThreadsPerBlock = 1024;
		_properties.maxThreadsDim[0] = 1024;
		_properties.maxThreadsDim[1] = 1024;
		_properties.maxThreadsDim[2] = 1024;
		_properties.maxGridSize[0] = 65536;
		_properties.maxGridSize[1] = 65536;
		_properties.maxGridSize[2] = 65536;
		_properties.sharedMemPerBlock = 16384;
		_properties.totalConstantMemory = 65536;
		_properties.SIMDWidth = 512;
		_properties.memPitch = 1;
		_properties.regsPerBlock = 8192;
		_properties.clockRate = 2;
		_properties.textureAlign = 1;
		_properties.integrated = 1;
		_properties.concurrentKernels = 0;
		_properties.major = 2;
		_properties.minor = 0;
	}
	
	EmulatorDevice::~EmulatorDevice()
	{
		for(AllocationMap::iterator allocation = _allocations.begin(); 
			allocation != _allocations.end(); ++allocation)
		{
			delete allocation->second;
		}
	}
			
	Device::MemoryAllocation* EmulatorDevice::getMemoryAllocation(
		const void* address, bool hostAllocation) const
	{
		MemoryAllocation* allocation = 0;
		if(hostAllocation)
		{
			for(AllocationMap::const_iterator alloc = _allocations.begin(); 
				alloc != _allocations.end(); ++alloc)
			{
				if(alloc->second->host())
				{
					if((char*)address >= alloc->second->mappedPointer() 
						&& (char*)address < 
						(char*)alloc->second->mappedPointer()
						+ alloc->second->size())
					{
						allocation = alloc->second;
						break;
					}
				}
			}
		}
		else
		{
			if(!_allocations.empty())
			{
				AllocationMap::const_iterator alloc = _allocations.upper_bound(
					(void*)address);
				if(alloc != _allocations.begin()) --alloc;
				if(alloc != _allocations.end())
				{
					if(!alloc->second->host()
					 	&& (char*)address >= (char*)alloc->second->pointer())
					{
						allocation = alloc->second;
					}
				}
			}
		}

		return allocation;		
	}

	Device::MemoryAllocation* EmulatorDevice::getGlobalAllocation(
		const std::string& moduleName, const std::string& name)
	{
		if(moduleName.empty())
		{
			// try a brute force search over all modules
			for(ModuleMap::iterator module = _modules.begin(); 
				module != _modules.end(); ++module)
			{
				if(module->second->globals.empty())
				{
					Module::AllocationVector allocations = std::move(
						module->second->loadGlobals());
					for(Module::AllocationVector::iterator 
						allocation = allocations.begin(); 
						allocation != allocations.end(); ++allocation)
					{
						_allocations.insert(std::make_pair(
							(*allocation)->pointer(), *allocation));
					}
				}

				Module::GlobalMap::iterator global = 
					module->second->globals.find(name);
				if(global != module->second->globals.end())
				{
					return getMemoryAllocation(global->second, false);
				}
			}
			return 0;
		}

		ModuleMap::iterator module = _modules.find(moduleName);
		if(module == _modules.end()) return 0;
		
		if(module->second->globals.empty())
		{
			Module::AllocationVector allocations = std::move(
				module->second->loadGlobals());
			for(Module::AllocationVector::iterator 
				allocation = allocations.begin(); 
				allocation != allocations.end(); ++allocation)
			{
				_allocations.insert(std::make_pair((*allocation)->pointer(), 
					*allocation));
			}
		}
		
		Module::GlobalMap::iterator global = module->second->globals.find(name);
		if(global == module->second->globals.end()) return 0;
		
		return getMemoryAllocation(global->second, false);
	}

	Device::MemoryAllocation* EmulatorDevice::allocate(size_t size)
	{
		MemoryAllocation* allocation = new MemoryAllocation(size);
		_allocations.insert(std::make_pair(allocation->pointer(), allocation));
		return allocation;
	}

	Device::MemoryAllocation* EmulatorDevice::allocateHost(size_t size, 
		unsigned int flags)
	{
		MemoryAllocation* allocation = new MemoryAllocation(size, flags);
		_allocations.insert(std::make_pair(allocation->mappedPointer(), 
			allocation));
		return allocation;
	}
	
	void EmulatorDevice::free(void* pointer)
	{
		if(pointer == 0) return;
		
		AllocationMap::iterator allocation = _allocations.find(pointer);
		if(allocation != _allocations.end())
		{
			if(allocation->second->global())
			{
				Throw("Cannot free global pointer - " << pointer);
			}
			delete allocation->second;
			_allocations.erase(allocation);
		}
		else
		{
			Throw("Tried to free invalid pointer - " << pointer);
		}
	}
	
	EmulatorDevice::MemoryAllocationVector EmulatorDevice::getNearbyAllocations(
		void* pointer) const
	{
		MemoryAllocationVector allocations;
		for(AllocationMap::const_iterator allocation = _allocations.begin(); 
			allocation != _allocations.end(); ++allocation)
		{
			allocations.push_back(allocation->second);
		}
		return std::move(allocations);
	}

	Device::MemoryAllocationVector EmulatorDevice::getAllAllocations() const
	{
		MemoryAllocationVector allocations;
		for(AllocationMap::const_iterator allocation = _allocations.begin(); 
			allocation != _allocations.end(); ++allocation)
		{
			allocations.push_back(allocation->second);
		}
		
		return std::move(allocations);
	}

	void EmulatorDevice::clearMemory()
	{
		for(AllocationMap::iterator allocation = _allocations.begin(); 
			allocation != _allocations.end();)
		{
			if(allocation->second->global())
			{
				++allocation;			
			}
			else
			{
				delete allocation->second;
				_allocations.erase(allocation++);
			}
		}
	}

	void* EmulatorDevice::glRegisterBuffer(unsigned int buffer, 
		unsigned int flags)
	{
		unsigned int handle = _next++;
		report(" Registering opengl buffer " << buffer 
			<< " to handle " << handle);
		_graphics.insert(std::make_pair(handle, OpenGLResource(buffer)));
		return (void*) handle;
	}
	
	void* EmulatorDevice::glRegisterImage(unsigned int image, 
		unsigned int target, unsigned int flags)
	{
		unsigned int handle = _next++;
		_graphics.insert(std::make_pair(handle, OpenGLResource(image)));
		return (void*) handle;
	}

	void EmulatorDevice::unRegisterGraphicsResource(void* resource)
	{
		unsigned int handle = hydrazine::bit_cast<unsigned int>(resource);
		GraphicsMap::iterator graphic = _graphics.find(handle);
		if(graphic == _graphics.end())
		{
			Throw("Invalid graphics resource - " << handle);
		}
		assert(graphic->second.pointer == 0);
		_graphics.erase(graphic);
	}

	void EmulatorDevice::mapGraphicsResource(void* resource, int count, 
		unsigned int stream)
	{
		report("mapGraphicsResource(" << resource << ", " 
			<< count << ", " << stream << ")");
		
		unsigned int handle = hydrazine::bit_cast<unsigned int>(resource);
		GraphicsMap::iterator graphic = _graphics.find(handle);
		if(graphic == _graphics.end())
		{
			Throw("Invalid graphics resource - " << handle);
		}
		
		report(" Binding GL array buffer to " << graphic->second.buffer);
		glBindBuffer(GL_ARRAY_BUFFER, graphic->second.buffer);

		if(glGetError() != GL_NO_ERROR)
		{
			Throw("OpenGL Error in mapGraphicsResource() - glBindBuffer.")
		}

		report(" Mapping GL buffer.");
		graphic->second.pointer = glMapBuffer(GL_ARRAY_BUFFER, GL_READ_WRITE);
		
		if(glGetError() != GL_NO_ERROR)
		{
			Throw("OpenGL Error in mapGraphicsResource() - glMapBuffer1.")
		}
		
		report(" Getting buffer size.");

		int bytes = 0;
		glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, &bytes);
		report("  size is - " << bytes);

		if(glGetError() != GL_NO_ERROR)
		{
			Throw("OpenGL Error in mapGraphicsResource() " 
				<< "- glGetBufferParameteriv.")
		}
				
		_allocations.insert(std::make_pair(graphic->second.pointer, 
			new MemoryAllocation(graphic->second.pointer, bytes)));
		
		report(" Binding GL array buffer back to 0.");
		glBindBuffer(GL_ARRAY_BUFFER, 0);

		if(glGetError() != GL_NO_ERROR)
		{
			Throw("OpenGL Error in mapGraphicsResource() - glBindBuffer2.")
		}
	}

	void* EmulatorDevice::getPointerToMappedGraphicsResource(size_t& size, 
		void* resource)
	{
		unsigned int handle = hydrazine::bit_cast<unsigned int>(resource);
		GraphicsMap::const_iterator graphic = _graphics.find(handle);
		if(graphic == _graphics.end())
		{
			Throw("Invalid graphics resource - " << handle);
		}
		
		if(graphic->second.pointer == 0)
		{
			Throw("Graphics resource - " << handle << " is not mapped.");
		}
		
		AllocationMap::const_iterator allocation = _allocations.find(
			graphic->second.pointer);
		assert(allocation != _allocations.end());
		
		size = allocation->second->size();
		
		return graphic->second.pointer;
	}

	void EmulatorDevice::setGraphicsResourceFlags(void* resource, 
		unsigned int flags)
	{
		unsigned int handle = hydrazine::bit_cast<unsigned int>(resource);
		GraphicsMap::iterator graphic = _graphics.find(handle);
		if(graphic == _graphics.end())
		{
			Throw("Invalid graphics resource - " << handle);
		}
		// we ignore flags
	}

	void EmulatorDevice::unmapGraphicsResource(void* resource)
	{
		unsigned int handle = hydrazine::bit_cast<unsigned int>(resource);
		GraphicsMap::iterator graphic = _graphics.find(handle);
		if(graphic == _graphics.end())
		{
			Throw("Invalid graphics resource - " << handle);
		}

		if(graphic->second.pointer == 0)
		{
			Throw("Graphics resource - " << handle << " is not mapped.");
		}
		
		glBindBuffer(GL_ARRAY_BUFFER, graphic->second.buffer);

		if(glGetError() != GL_NO_ERROR)
		{
			Throw("OpenGL Error in unmapGraphicsResource() - glBindBuffer.")
		}

		glUnmapBuffer(GL_ARRAY_BUFFER);

		if(glGetError() != GL_NO_ERROR)
		{
			Throw("OpenGL Error in unmapGraphicsResource() - glUnmapBuffer.")
		}

		AllocationMap::iterator allocation = _allocations.find(
			graphic->second.pointer);
		assert(allocation != _allocations.end());
		
		delete allocation->second;
		_allocations.erase(allocation);

		graphic->second.pointer = 0;
	
		glBindBuffer(GL_ARRAY_BUFFER, 0);			

		if(glGetError() != GL_NO_ERROR)
		{
			Throw("OpenGL Error in unmapGraphicsResource() - glBindBuffer.")
		}
	}

	void EmulatorDevice::load(const ir::Module* module)
	{
		if(_modules.count(module->modulePath) != 0)
		{
			Throw("Duplicate module - " << module->modulePath);
		}
		_modules.insert(std::make_pair(module->modulePath, 
			new Module(module, this)));
	}
	
	void EmulatorDevice::unload(const std::string& name)
	{
		ModuleMap::iterator module = _modules.find(name);
		if(module == _modules.end())
		{
			Throw("Cannot unload unknown module - " << name);
		}
		
		for(Module::GlobalMap::iterator global = module->second->globals.begin();
			global != module->second->globals.end(); ++global)
		{
			AllocationMap::iterator allocation = 
				_allocations.find(global->second);
			assert(allocation != _allocations.end());
			delete allocation->second;
			_allocations.erase(allocation);
		}
		
		delete module->second;
		
		_modules.erase(module);
	}

	unsigned int EmulatorDevice::createEvent(int flags)
	{
		unsigned int handle = _next++;
		_events.insert(std::make_pair(handle, _timer.absolute()));
		return handle;
	}

	void EmulatorDevice::destroyEvent(unsigned int handle)
	{
		EventMap::iterator event = _events.find(handle);
		if(event == _events.end())
		{
			Throw("Invalid event - " << handle);
		}
		_events.erase(event);
	}

	bool EmulatorDevice::queryEvent(unsigned int handle) const
	{
		EventMap::const_iterator event = _events.find(handle);
		if(event == _events.end())
		{
			Throw("Invalid event - " << handle);
		}
		return true;	
	}
	
	void EmulatorDevice::recordEvent(unsigned int handle, unsigned int sHandle)
	{
		EventMap::iterator event = _events.find(handle);
		if(event == _events.end())
		{
			Throw("Invalid event - " << handle);
		}
		
		if(sHandle != 0)
		{
			StreamSet::iterator stream = _streams.find(sHandle);
			if(stream == _streams.end())
			{
				Throw("Invalid stream - " << sHandle);
			}
		}
		
		event->second = _timer.absolute();
	}

	void EmulatorDevice::synchronizeEvent(unsigned int handle)
	{
		EventMap::iterator event = _events.find(handle);
		if(event == _events.end())
		{
			Throw("Invalid event - " << handle);
		}
	}
	
	float EmulatorDevice::getEventTime(unsigned int startHandle, 
		unsigned int endHandle) const
	{
		EventMap::const_iterator startEvent = _events.find(startHandle);
		if(startEvent == _events.end())
		{
			Throw("Invalid event - " << startHandle);
		}
		
		EventMap::const_iterator endEvent = _events.find(endHandle);
		if(endEvent == _events.end())
		{
			Throw("Invalid event - " << endHandle);
		}
		
		return (endEvent->second - startEvent->second) * 1000.0;
	}

	unsigned int EmulatorDevice::createStream()
	{
		unsigned int handle = _next++;
		_streams.insert(handle);
		return handle;
	}
	
	void EmulatorDevice::destroyStream(unsigned int handle)
	{
		StreamSet::iterator stream = _streams.find(handle);
		if(stream == _streams.end())
		{
			Throw("Invalid stream - " << handle);
		}
		_streams.erase(stream);
	}

	bool EmulatorDevice::queryStream(unsigned int handle) const
	{
		StreamSet::const_iterator stream = _streams.find(handle);
		if(stream == _streams.end())
		{
			Throw("Invalid stream - " << handle);
		}
		return true;		
	}

	void EmulatorDevice::synchronizeStream(unsigned int handle)
	{
		StreamSet::iterator stream = _streams.find(handle);
		if(stream == _streams.end())
		{
			Throw("Invalid stream - " << handle);
		}
	}

	void EmulatorDevice::setStream(unsigned int handle)
	{
		// this is a nop, there are FOUR streams (I mean only one stream)
	}
	
	void EmulatorDevice::select()
	{
		assert(!selected());
		_selected = true;
	}
	
	bool EmulatorDevice::selected() const
	{
		return _selected;
	}

	void EmulatorDevice::unselect()
	{
		assert(selected());
		_selected = false;
	}

	static ir::Texture::Interpolation convert(cudaTextureFilterMode filter)
	{
		switch(filter)
		{
			case cudaFilterModePoint: return ir::Texture::Nearest;
			case cudaFilterModeLinear: return ir::Texture::Linear;
		}
		
		return ir::Texture::Nearest;
	}
	
	static ir::Texture::AddressMode convert(cudaTextureAddressMode mode)
	{
		switch(mode)
		{
			case cudaAddressModeWrap: return ir::Texture::Wrap;
			case cudaAddressModeClamp: return ir::Texture::Clamp;
		}
		
		return ir::Texture::Clamp;
	}

	void EmulatorDevice::bindTexture(void* pointer, 
		const std::string& moduleName, const std::string& textureName, 
		const textureReference& ref, const cudaChannelFormatDesc& desc, 
		const ir::Dim3& size)
	{
		ModuleMap::iterator module = _modules.find(moduleName);
		if(module == _modules.end())
		{
			Throw("Invalid Module - " << moduleName);
		}
		
		ir::Texture* tex = module->second->getTexture(textureName);
		if(tex == 0)
		{
			Throw("Invalid Texture - " << textureName 
				<< " in Module - " << moduleName);
		}
		
		ir::Texture& texture = *tex;

		texture.x = desc.x;
		texture.y = desc.y;
		texture.z = desc.z;
		texture.w = desc.w;

		switch(desc.f) 
		{
			case cudaChannelFormatKindSigned:
				texture.type = ir::Texture::Signed;
				break;
			case cudaChannelFormatKindUnsigned:
				texture.type = ir::Texture::Unsigned;
				break;
			case cudaChannelFormatKindFloat:
				texture.type = ir::Texture::Float;
				break;
			default:
				texture.type = ir::Texture::Invalid;
				break;
		}
		
		texture.interpolation = convert(ref.filterMode);
		texture.addressMode[0] = convert(ref.addressMode[0]);
		texture.addressMode[1] = convert(ref.addressMode[1]);
		texture.addressMode[2] = convert(ref.addressMode[2]);
		texture.normalize = ref.normalized;
		
		texture.size.x = size.x;
		texture.size.y = size.y;
		texture.size.z = size.z;
		texture.data = pointer;
	}

	void EmulatorDevice::unbindTexture(const std::string& moduleName, 
		const std::string& textureName)
	{
		ModuleMap::iterator module = _modules.find(moduleName);
		if(module == _modules.end())
		{
			Throw("Invalid Module - " << moduleName);
		}
		
		ir::Texture* tex = module->second->getTexture(textureName);
		if(tex == 0)
		{
			Throw("Invalid Texture - " << textureName 
				<< " in Module - " << moduleName);
		}
		
		ir::Texture& texture = *tex;
		
		texture.data = 0;
	}

	void* EmulatorDevice::getTextureReference(const std::string& moduleName, 
		const std::string& textureName)
	{
		ModuleMap::iterator module = _modules.find(moduleName);
		if(module == _modules.end()) return 0;
		
		return module->second->getTexture(textureName);
	}
		
	void EmulatorDevice::launch(const std::string& moduleName, 
		const std::string& kernelName, const ir::Dim3& grid, 
		const ir::Dim3& block, size_t sharedMemory, 
		const void* parameterBlock, size_t parameterBlockSize, 
		const trace::TraceGeneratorVector& traceGenerators)
	{
		ModuleMap::iterator module = _modules.find(moduleName);
		
		if(module == _modules.end())
		{
			Throw("Unknown module - " << moduleName);
		}
		
		ExecutableKernel* kernel = module->second->getKernel(kernelName);
		
		if(kernel == 0)
		{
			Throw("Unknown kernel - " << kernelName 
				<< " in module " << moduleName);
		}
		
		if(kernel->sharedMemorySize() + sharedMemory > 
			(size_t)properties().sharedMemPerBlock)
		{
			Throw("Out of shared memory for kernel \""
				<< kernel->name << "\" : \n\tpreallocated "
				<< kernel->sharedMemorySize() << " + requested " 
				<< sharedMemory << " is greater than available " 
				<< properties().sharedMemPerBlock << " for device " 
				<< properties().name);
		}
		
		if(kernel->constMemorySize() > (size_t)properties().totalConstantMemory)
		{
			Throw("Out of shared memory for kernel \""
				<< kernel->name << "\" : \n\tpreallocated "
				<< kernel->constMemorySize() << " is greater than available " 
				<< properties().totalConstantMemory << " for device " 
				<< properties().name);
		}
		
		kernel->setKernelShape(block.x, block.y, block.z);
		kernel->setParameterBlock((const unsigned char*)parameterBlock, 
			parameterBlockSize);
		kernel->updateParameterMemory();
		kernel->updateMemory();
		kernel->setExternSharedMemorySize(sharedMemory);
	
		if(api::OcelotConfiguration::getTrace().enabled) 
		{
			for(trace::TraceGeneratorVector::const_iterator 
				gen = traceGenerators.begin(); 
				gen != traceGenerators.end(); ++gen) 
			{
				kernel->addTraceGenerator(*gen);
			}
		}
	
		try
		{
			kernel->launchGrid(grid.x, grid.y);
		}
		catch(...)
		{
			if(api::OcelotConfiguration::getTrace().enabled) 
			{
				for(trace::TraceGeneratorVector::const_iterator 
					gen = traceGenerators.begin(); 
					gen != traceGenerators.end(); ++gen) 
				{
					kernel->removeTraceGenerator(*gen);
				}
			}
			throw;		
		}
		
		if(api::OcelotConfiguration::getTrace().enabled) 
		{
			for(trace::TraceGeneratorVector::const_iterator 
				gen = traceGenerators.begin(); 
				gen != traceGenerators.end(); ++gen) 
			{
				kernel->removeTraceGenerator(*gen);
			}
		}
	}
	
	cudaFuncAttributes EmulatorDevice::getAttributes(const std::string& path, 
		const std::string& kernelName)
	{
		ModuleMap::iterator module = _modules.find(path);
		
		if(module == _modules.end())
		{
			Throw("Unknown module - " << path);
		}
		
		ExecutableKernel* kernel = module->second->getKernel(kernelName);
		
		if(kernel == 0)
		{
			Throw("Unknown kernel - " << kernelName 
				<< " in module " << path);
		}
		
		cudaFuncAttributes attributes;

		memset(&attributes, 0, sizeof(cudaFuncAttributes));
		attributes.sharedSizeBytes = kernel->sharedMemorySize();
		attributes.constSizeBytes = kernel->constMemorySize();
		attributes.localSizeBytes = kernel->localMemorySize();
		attributes.maxThreadsPerBlock = kernel->maxThreadsPerBlock();
		attributes.numRegs = kernel->registerCount();
		
		return std::move(attributes);
	}

	unsigned int EmulatorDevice::getLastError() const
	{
		return 0;
	}

	void EmulatorDevice::synchronize()
	{
		// nop - this device is still synchronous
	}
	
	void EmulatorDevice::limitWorkerThreads(unsigned int threads)
	{
		// this should only be set after multithreading support is added 
		// to the emulator
	}

	void EmulatorDevice::setOptimizationLevel(
		translator::Translator::OptimizationLevel level)
	{
		// This is emulation so we probably don't ever want to do optimization
	}
}

#endif
