/*! \file MemoryRaceDetector.cpp
	\date Wednesday March 24, 2010
	\author Gregory Diamos <gregory.diamos@gatech.edu>
	\brief The source file for the MemoryRaceDetector class.
*/

#ifndef MEMORY_RACE_DETECTOR_CPP_INCLUDED
#define MEMORY_RACE_DETECTOR_CPP_INCLUDED

// Ocelot includes
#include <ocelot/trace/interface/MemoryRaceDetector.h>
#include <ocelot/trace/interface/TraceEvent.h>
#include <ocelot/executive/interface/EmulatedKernel.h>
#include <ocelot/executive/interface/Executive.h>

// hydrazine includes
#include <hydrazine/implementation/Exception.h>

namespace trace
{
	static std::string prefix( unsigned int thread, const ir::Dim3& dim, 
		const TraceEvent& e )
	{
		const unsigned int cta = e.blockId.x + e.blockId.y * dim.x 
			+ dim.x * dim.y * e.blockId.z;
		
		std::stringstream stream;
		stream << "[PC " << e.PC << "] ";
		stream << "[thread " << thread << "] ";
		stream << "[cta " << cta << "] ";
		stream << e.instruction->toString() << " - ";
		
		return stream.str();
	}

	void MemoryRaceDetector::_write( const TraceEvent& event )
	{
		TraceEvent::U64Vector::const_iterator 
			address = event.memory_addresses.begin();
		int threads = event.active.size();
		for( int thread = 0; thread < threads; ++thread )
		{
			if( !event.active[ thread ] ) continue;
			for( ir::PTXU64 byte = *address; 
				byte < *address + event.memory_size; ++byte )
			{
				if( _writers[ byte ] != -1 && _writers[ byte ] != thread )
				{
					std::stringstream stream;
					stream << prefix( thread, _dim, event );
					stream << "Shared memory race condition, address "
						<< (void*)byte << " was previously written by thread " 
						<< _writers[ byte ] 
						<< " without a memory barrier in between.";
					stream << "\n";
					stream << "Near " << _kernel->location( event.PC ) << "\n";
				}
				else if( _readers[ byte ] != -1 && _readers[ byte ] != thread )
				{
					std::stringstream stream;
					stream << prefix( thread, _dim, event );
					stream << "Shared memory race condition, address "
						<< (void*)byte << " was previously read by thread " 
						<< _readers[ byte ] 
						<< " without a memory barrier in between.";
					stream << "\n";
					stream << "Near " << _kernel->location( event.PC ) << "\n";
				}
				else
				{
					_writers[ byte ] = thread;
				}
			}
			++address;
		}
	}
	
	void MemoryRaceDetector::_read( const TraceEvent& event )
	{
		TraceEvent::U64Vector::const_iterator 
			address = event.memory_addresses.begin();
		int threads = event.active.size();
		for( int thread = 0; thread < threads; ++thread )
		{
			if( !event.active[ thread ] ) continue;
			for( ir::PTXU64 byte = *address; 
				byte < *address + event.memory_size; ++byte )
			{
				if( _writers[ byte ] != -1 && _writers[ byte ] != thread )
				{
					std::stringstream stream;
					stream << prefix( thread, _dim, event );
					stream << "Shared memory race condition, address "
						<< (void*)byte << " was previously written by thread " 
						<< _writers[byte] 
						<< " without a memory barrier in between.";
					stream << "\n";
					stream << "Near " << _kernel->location( event.PC ) << "\n";
				}
				else
				{
					_readers[ byte ] = thread;
				}
			}
			++address;
		}
	}
	
	void MemoryRaceDetector::_barrier()
	{
		_writers.assign( _writers.size(), -1 );
		_readers.assign( _readers.size(), -1 );
	}
	
	MemoryRaceDetector::MemoryRaceDetector()
	{
	
	}
	
	void MemoryRaceDetector::initialize( const ir::ExecutableKernel& kernel )
	{
		_dim = kernel.blockDim();

		_writers.assign( kernel.totalSharedMemorySize(), -1 );
		_readers.assign( kernel.totalSharedMemorySize(), -1 );
		
		_kernel = static_cast< const executive::EmulatedKernel* >( &kernel );
	}
	
	void MemoryRaceDetector::event( const TraceEvent& event )
	{
		if( event.instruction->addressSpace == ir::PTXInstruction::Shared )
		{
			if( event.instruction->opcode == ir::PTXInstruction::Ld )
			{
				_read( event );
			}
			else if( event.instruction->opcode == ir::PTXInstruction::St )
			{
				_write( event );
			}
		}
		else if( event.instruction->opcode == ir::PTXInstruction::Bar )
		{
			_barrier();
		}
	}
	
	void MemoryRaceDetector::finish()
	{
	
	}
}

#endif

