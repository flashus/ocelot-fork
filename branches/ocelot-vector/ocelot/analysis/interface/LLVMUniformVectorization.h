/*!
	\file LLVMUniformVectorization.h
	\author Andrew Kerr <arkerr@gatech.edu>
	\brief transformation pass on LLVM functions that performs vectorization for kernels with
			entirely uniform control flow
*/

#ifndef OCELOT_ANALYSIS_LLVMUNIFORMVECTORIZATION_H_INCLUDED
#define OCELOT_ANALYSIS_LLVMUNIFORMVECTORIZATION_H_INCLUDED

// C++ includes
#include <list>
#include <map>
#include <vector>

// Ocelot includes

// Hydrazine includes

// LLVM includes
#include <llvm/Module.h>
#include <llvm/PassManager.h>

namespace analysis
{

	/*!
		\brief pass applied to kernels with completely uniform control flow for warps of a given
			size
	*/
	class LLVMUniformVectorization: public llvm::FunctionPass {
	public:
		typedef std::list< llvm::BasicBlock *> BasicBlockList;
		typedef std::map< llvm::Value *, std::vector< llvm::Instruction *> > WarpInstructionMap;
		typedef std::map< llvm::BasicBlock *, llvm::BasicBlock *> BasicBlockMap;

		/*!
			\brief data structure associated with a divergent branch
		*/
		class DivergentBranch {
		public:
			DivergentBranch();
			DivergentBranch(llvm::BasicBlock *scBlock, llvm::BasicBlock *wsBlock);
			
		public:
			/*!
				\brief basic block in scalar function terminated by divergent branch
			*/
			llvm::BasicBlock *scalarBlock;
			
			/*!
				\brief basic block in warp-synchronous phase whose terminator must be modified
			*/
			llvm::BasicBlock *warpBlock;
		
			/*!
				\brief basic block handling the event of a dynamic divergent branch
			*/
			llvm::BasicBlock *handler;
		};
		
		typedef std::map< llvm::BasicBlock *, DivergentBranch > DivergentBranchMap;

		/*!
			\brief warp scheduler block
		*/
		class WarpScheduler {
		public:
			WarpScheduler();
			
		public:
		
			//! \brief start of region
			llvm::BasicBlock *start;
			
			//! \brief end of region
			llvm::BasicBlock *end;
		};
		
		typedef std::map< llvm::BasicBlock *, WarpScheduler > WarpSchedulerMap;

		/*!
			\brief object storing intermediate results needed by the translation
		*/
		class Translation {
		public:
			Translation(llvm::Function *f): F(f) { }
			~Translation();
			
			//! \brief gets a warp-synchronous block from a scalar block
			llvm::BasicBlock * getWarpBlockFromScalar(llvm::BasicBlock *scalarBlock);
			
			//! \brief gets a scalar block corresponding to a warp-synchronous block
			llvm::BasicBlock * getScalarBlockFromWarp(llvm::BasicBlock *warpBlock);
			
		
		public:
		
			/*!
				\brief pointer to LLVM function
			*/
			llvm::Function *F;
		
			/*!
				\brief traverses scalar blocks breadth-first
			*/
			BasicBlockList traversal;
		
			/*! \brief maps instructions from scalar phase onto vectors of instructions in warp
				synchronous phase
			*/
			WarpInstructionMap warpInstructionMap;
			
			/*!
				\brief maps scalar blocks onto warp-synchronous blocks
			*/
			BasicBlockMap warpBlocksMap;
			
			/*!
				\brief maps a warp-synchronous divergent branching block onto a data structure
					for handling divergence
			*/
			DivergentBranchMap divergingBranchMap;
			
			/*!
				\brief maps cloned getelementptr instruction obtaining ptr to tidx to its warp-sync thread ID
			*/
			std::map< llvm::Instruction *, int > threadIdxMap;
			
			/*!
				\brief indirect jumps based on warp id and last divergent branch handled by this block
			*/
			llvm::BasicBlock *schedulerBlock;
			
			/*!
				\brief maps basic blocks to warp scheduler blocks
			*/
			WarpSchedulerMap warpSchedulerBlocks;
			
		};

	public:
		/*!
			\brief vectorizes kernels assuming all control flow is uniform across warps

			\param warpSize number of logical threads per warp
		*/
		LLVMUniformVectorization(int warpSize=4);
		~LLVMUniformVectorization();

	public:

		//! \brief entry point for pass
		virtual bool runOnFunction(llvm::Function &F);

		//! \brief gets the name of the pass
		virtual const char *getPassName() const;

		//! \brief gets the kind of tye pass
		virtual llvm::PassKind getPassKind() const;

	public:


	protected:

		/*!
			\brief entry point to pass
		*/
		void addWarpSynchronous(llvm::Function &F);
		
		/*!
			\brief visits every instruction in the scalar phase and inserts a set of cloned
				instructions in the parallel warp-synchronous block structure
		*/
		void addInterleavedInstructions(Translation &translation);
		
		/*!
			\brief given a cloned instruction, update data dependencies to correspond to
				cloned instructions from previous blocks
		*/
		void updateDependencies(Translation &translation, llvm::Instruction *instr, int tid);
		
		/*!
			\brief loaded tidx values are incremented by threadID within warp
		*/
		void updateThreadIdxUses(Translation &translation);
		
		/*!
			\brief replace dummy terminators in warp-synchronous block structure with
				tests for warp-synchronous behavior and either branches to successor blocks
				or returns to Ocelot multicore runtime
		*/
		void resolveControlFlow(Translation &translation);
		
		/*!
			\brief visits each of the warp scheduler blocks and changes control flow to point
				to warp-synchronous regions
		*/
		void updateSchedulerBlocks(Translation &translation);
		
		/*!
			\brief deals with a particular divergent branch
		*/
		void handleDivergentBranch(Translation &translation, DivergentBranch &divergent);
		
		/*!
			\brief emit spill code or handler for a branch known to be divergent
		*/
		void divergenceHandlerBranch(Translation &translation, DivergentBranch &divergent);
		
		/*!
			\brief inserts a schedular block that handles control flow
		*/
		void createSchedulerBlock(Translation &translation);
		
		/*!
			\brief this could probably be implemented as a second function pass, but examine
				collections of instructions of size <warpSize>, hoist or sink instructions, and
				make into vectors for vector processing
		*/
		void vectorize(Translation &translation);

	protected:

		/*!
			\brief performs breadth-first traversal of blocks in function F constructing a
				list of blocks visited
		*/
		void breadthFirstTraversal(BasicBlockList & traversal, llvm::Function *F);

	public:

		//! \brief number of consecutive threads to pack into a single hardware thread
		int warpSize;
	};

}

#endif

