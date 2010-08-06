/*!
	\file CTAContext.h

	\author Andrew Kerr <arkerr@gatech.edu>

	\brief the CTAContext contain block- and thread-specific data structures
*/

#ifndef EXECUTIVE_CTACONTEXT_H_INCLUDED
#define EXECUTIVE_CTACONTEXT_H_INCLUDED

#include <boost/dynamic_bitset.hpp>
#include <ocelot/ir/interface/PTXOperand.h>
#include <ocelot/ir/interface/Kernel.h>

namespace executive {

	class EmulatedKernel;
	class CooperativeThreadArray;

	class CTAContext {
	public:
		CTAContext(const EmulatedKernel *kernel, CooperativeThreadArray *cta);

		~CTAContext();

		/*! Program counter - index into PTXInstruction vector */
		int PC;

		/*! Indicates whether the block is still running */
		bool running;

		/*! Thread mask with a 1 indicating activity */
		boost::dynamic_bitset<> active;

		/*! Pointer to owning kernel */
		const EmulatedKernel *kernel;

		/*! Pointer to owning CTA */
		CooperativeThreadArray *cta;

	public:

		/*! Given a thread's ID, determine if the instruction should execute */
		bool predicated(int threadID, const ir::PTXInstruction &instr);
		
	};

}

#endif

