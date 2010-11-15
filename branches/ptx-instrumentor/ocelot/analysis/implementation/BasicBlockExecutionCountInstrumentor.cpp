/*! \file BasicBlockExecutionCountInstrumentor.cpp
	\date Saturday November 13, 2010
	\author Naila Farooqui <naila@cc.gatech.edu>
	\brief The source file for the BasicBlockExecutionCountInstrumentor class.
*/

#ifndef BASIC_BLOCK_EXECUTION_COUNT_INSTRUMENTOR_CPP_INCLUDED
#define BASIC_BLOCK_EXECUTION_COUNT_INSTRUMENTOR_CPP_INCLUDED

#include <ocelot/analysis/interface/BasicBlockExecutionCountInstrumentor.h>

#include <ocelot/cuda/interface/cuda_runtime.h>

#include <ocelot/analysis/interface/BasicBlockExecutionCountPass.h>
#include <ocelot/ir/interface/Module.h>

#include <hydrazine/implementation/ArgumentParser.h>
#include <hydrazine/implementation/string.h>
#include <hydrazine/implementation/debug.h>

#include <fstream>

namespace analysis
{
    void BasicBlockExecutionCountInstrumentor::initialize() {
        

        basicBlocks = module->getKernel(kernelName)->cfg()->size();
      
        counter = 0;

        cudaMalloc((void **) &counter, basicBlocks * ctas * threads * sizeof(size_t));
        cudaMemset( counter, 0, basicBlocks * ctas * threads * sizeof( size_t ));

        cudaMemcpyToSymbol(((BasicBlockExecutionCountPass *)pass)->basicBlockCounterBase().c_str(), &counter, sizeof(*counter), 0, cudaMemcpyHostToDevice);

        cudaConfigureCall( dim3(ctas, 1, 1), dim3( threads, 1, 1), 0, 0 );      
    }

    analysis::Pass *BasicBlockExecutionCountInstrumentor::createPass() {
        return new analysis::BasicBlockExecutionCountPass;
    }

    void BasicBlockExecutionCountInstrumentor::finalize() {

        size_t *counterHost = new size_t[basicBlocks * threads * ctas];
        cudaMemcpy(counterHost, counter, basicBlocks * threads * ctas * sizeof( size_t ), cudaMemcpyDeviceToHost);
        
        std::cout << "\n\n" << kernelName << ":\n";
        std::cout << "\n--------------- Basic Block Execution Count Per Thread ---------------\n\n";

        unsigned int i = 0;
        unsigned int j = 0;
        unsigned int k = 0;
        
        for(k = 1; k <= ctas; k++) {
            std::cout << "CTA " << k << ":\n";
            for(i = 0; i < threads; i++) {
                std::cout << "Thread " << (i + 1) << ":\n";
                for(j = 0; j < basicBlocks; j++) {
                    std::cout << "basicBlock " << (j + 1) << ": " << counterHost[(i*basicBlocks * ctas) + j] << "\n";
                }
            }   
        }

        delete[] counterHost;
        cudaFree(counter);
    }

    BasicBlockExecutionCountInstrumentor::BasicBlockExecutionCountInstrumentor() {

    }

    BasicBlockExecutionCountInstrumentor::BasicBlockExecutionCountInstrumentor(const std::string input, const std::string output, unsigned int ctas, unsigned int threads )
    {
        PTXInstrumentor::input = input;
        PTXInstrumentor::output = output;
        PTXInstrumentor::ctas = ctas;
        PTXInstrumentor::threads = threads;    
    }

}

#endif
