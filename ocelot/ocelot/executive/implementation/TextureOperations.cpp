/*!
	\file TextureOperations.cpp
	\author Gregory Diamos <gregory.diamos@gatech.edu>
	\date Tuesday September 29, 2009
	\brief Implementations of texture operations.
*/

#ifndef TEXTURE_OPERATIONS_CPP_INCLUDED
#define TEXTURE_OPERATIONS_CPP_INCLUDED

#include <ocelot/executive/interface/TextureOperations.h>

namespace executive
{
	namespace tex
	{
		ir::PTXF64 wrap( ir::PTXF64 b, unsigned int limit, 
			ir::Texture::AddressMode mode ) {
			if (mode == ir::Texture::Wrap) {
				if (b < 0) {
					b = fmod(-b, limit);
					b = limit - b;
				}
				else {
					b = fmod(b, limit);
				}
				if (b < 0) {
					b = limit - 1 + b;
				} else if (b > limit - 1) {
					b = b - limit + 1;
				}
			}
			else {
				b = fmax(b, 0);
				b = fmin(b, limit - 1);
			}
	
			return b;
		}
		
		ir::PTXF32 channelReadF32( const ir::Texture& texture, 
			unsigned int shift, unsigned int mask, unsigned int index )
		{
			unsigned int bits = texture.x + texture.y + texture.z + texture.w;
			unsigned int bytes = bits / 8;
			unsigned int offset = shift / 8;
			type_F32_U32 value;

			value.f32 = *((ir::PTXF32*)(((ir::PTXB8*) texture.data) 
				+ index*bytes + offset));
			value.u32 &= mask;
			return value.f32;
		}
		
		ir::PTXF32 channelReadF32( const ir::Texture& texture, 
			unsigned int shift, unsigned int mask, unsigned int index, 
			ir::PTXB8*& address )
		{
			unsigned int bits = texture.x + texture.y + texture.z + texture.w;
			unsigned int bytes = bits / 8;
			unsigned int offset = shift / 8;
			type_F32_U32 value;

			value.f32 = *((ir::PTXF32*)(address = ((ir::PTXB8*) texture.data) 
				+ index*bytes + offset) );
			value.u32 &= mask;
			return value.f32;
		}
		
	}
}

#endif

