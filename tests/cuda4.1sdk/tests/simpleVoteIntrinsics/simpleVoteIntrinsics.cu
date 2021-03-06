/*
 * Copyright 1993-2010 NVIDIA Corporation.  All rights reserved.
 *
 * Please refer to the NVIDIA end user license agreement (EULA) associated
 * with this source code for terms and conditions that govern your use of
 * this software. Any use, reproduction, disclosure, or distribution of
 * this software and related documentation outside the terms of the EULA
 * is strictly prohibited.
 *
 */

#include <shrUtils.h>
#include <stdio.h>
#include <stdlib.h>
#include <cutil_inline.h>
#include <shrQATest.h>

static char *sSDKsample = "[simpleVoteIntrinsics]\0";

////////////////////////////////////////////////////////////////////////////////
// Global types and parameters
////////////////////////////////////////////////////////////////////////////////
#define VOTE_DATA_GROUP 4

////////////////////////////////////////////////////////////////////////////////
// CUDA Voting Kernel functions
////////////////////////////////////////////////////////////////////////////////
#include "simpleVote_kernel.cu"

// Generate the test pattern for Tests 1 and 2
void genVoteTestPattern(unsigned int *VOTE_PATTERN, int size)
{
	// For testing VOTE.Any (all of these threads will return 0)
	for (int i=0; i < size/4; i++)
		VOTE_PATTERN[i] = 0x00000000;

	// For testing VOTE.Any (1/2 these threads will return 1)
	for (int i=2*size/8; i < 4*size/8; i++)
		VOTE_PATTERN[i] = (i&0x01) ? i : 0;

	// For testing VOTE.all (1/2 of these threads will return 0)
	for (int i=2*size/4; i < 3*size/4; i++)
		VOTE_PATTERN[i] = (i&0x01) ? 0 : i;
	
	// For testing VOTE.all (all of these threads will return 1)
	for (int i=3*size/4; i < 4*size/4; i++)
		VOTE_PATTERN[i] = 0xffffffff;
}

int checkErrors1(unsigned int *h_result, int start, int end, int warp_size, char *voteType)
{
	int i, sum=0;

	for (sum=0, i=start; i < end; i++) {
		sum += h_result[i];
	}
	if (sum > 0) {
		printf("\t<%s>[%d - %d] = ", voteType, start, end-1);
		for (i=start; i < end; i++) {
			printf("%d", h_result[i]);
		}
		printf(" - FAILED\n", sum);
	}
	return (sum>0);
}

int checkErrors2(unsigned int *h_result, int start, int end, int warp_size, char *voteType)
{
	int i, sum=0;

	for (sum=0, i=start; i < end; i++) {
		sum += h_result[i];
	}
	if (sum!=warp_size) {
		printf("\t<%s>[%d - %d] = ", voteType, start, end-1);
		for (i=start; i < end; i++) {
			printf("%d", h_result[i]);
		}
		printf(" - FAILED\n");
	}
	return (sum!=warp_size);
}


// Verification code for Kernel #1
int checkResultsVoteAnyKernel1(unsigned int *h_result, int size, int warp_size)
{
	int error_count = 0;

	error_count += checkErrors1(h_result,                             0,   VOTE_DATA_GROUP*warp_size/4, warp_size, "Vote.Any");
	error_count += checkErrors2(h_result,   VOTE_DATA_GROUP*warp_size/4, 2*VOTE_DATA_GROUP*warp_size/4, warp_size, "Vote.Any");
	error_count += checkErrors2(h_result, 2*VOTE_DATA_GROUP*warp_size/4, 3*VOTE_DATA_GROUP*warp_size/4, warp_size, "Vote.Any");
	error_count += checkErrors2(h_result, 3*VOTE_DATA_GROUP*warp_size/4, 4*VOTE_DATA_GROUP*warp_size/4, warp_size, "Vote.Any");

	printf((error_count == 0) ? "\tOK\n" : "\tERROR\n");
	return error_count;
}

// Verification code for Kernel #2
int checkResultsVoteAllKernel2(unsigned int *h_result, int size, int warp_size)
{
	int error_count = 0;

	error_count += checkErrors1(h_result,                             0,   VOTE_DATA_GROUP*warp_size/4, warp_size, "Vote.All");
	error_count += checkErrors1(h_result,   VOTE_DATA_GROUP*warp_size/4, 2*VOTE_DATA_GROUP*warp_size/4, warp_size, "Vote.All");
	error_count += checkErrors1(h_result, 2*VOTE_DATA_GROUP*warp_size/4, 3*VOTE_DATA_GROUP*warp_size/4, warp_size, "Vote.All");
	error_count += checkErrors2(h_result, 3*VOTE_DATA_GROUP*warp_size/4, 4*VOTE_DATA_GROUP*warp_size/4, warp_size, "Vote.All");

	printf((error_count == 0) ? "\tOK\n" : "\tERROR\n");
	return error_count;
}

// Verification code for Kernel #3
int checkResultsVoteAnyKernel3(bool *hinfo, int size)
{
	int i, error_count = 0;

	for (i = 0; i < size * 3; i++)  {
      switch(i % 3) {
        case 0:
          // First warp should be all zeros.
          if (hinfo[i] != (i >= size * 1)) {
            error_count++;
          }
          break;
        case 1:
          // First warp and half of second should be all zeros.
          if (hinfo[i] != (i >= size * 3 / 2)) {
            error_count++;
          }
          break;
        case 2:
          // First two warps should be all zeros.
          if (hinfo[i] != (i >= size * 2)) {
            error_count++;
          }
          break;
      }
    }

	printf((error_count == 0) ? "\tOK\n" : "\tERROR\n");
	return error_count;
}

int main(int argc, char **argv)
{
    unsigned int *h_input, *h_result;
    unsigned int *d_input, *d_result;

    bool *dinfo = NULL, *hinfo = NULL;
    int error_count[3] = { 0, 0, 0 };
    
    shrQAStart(argc, argv);

    cudaDeviceProp deviceProp;
    int devID, warp_size;

    printf("%s\n", sSDKsample);

    // This will pick the best possible CUDA capable device
    devID = cutilChooseCudaDevice(argc, argv);

    cutilSafeCall( cudaGetDeviceProperties(&deviceProp, devID) );

    // Statistics about the GPU device
    printf("> GPU device has %d Multi-Processors, SM %d.%d compute capabilities\n\n", 
		deviceProp.multiProcessorCount, deviceProp.major, deviceProp.minor);

	int version = (deviceProp.major * 0x10 + deviceProp.minor);

	if (version >= 0x12) 
	{
		printf("%s: Using Device %d: \"%s\"\n", sSDKsample, devID, deviceProp.name);
	} else {
		printf("%s: requires minimum of Compute Capability 1.2 or higher, waiving test...\n", sSDKsample);
		cutilDeviceReset();
        shrQAFinishExit(argc, (const char **)argv, QA_WAIVED);
    }
	warp_size = deviceProp.warpSize;

    h_input  = (unsigned int *)malloc(             VOTE_DATA_GROUP*warp_size * sizeof(unsigned int));
    h_result = (unsigned int *)malloc(             VOTE_DATA_GROUP*warp_size * sizeof(unsigned int));
    cutilSafeCall( cudaMalloc((void **)&d_input,  VOTE_DATA_GROUP*warp_size * sizeof(unsigned int)) );
    cutilSafeCall( cudaMalloc((void **)&d_result, VOTE_DATA_GROUP*warp_size * sizeof(unsigned int)) );
	genVoteTestPattern(h_input, VOTE_DATA_GROUP*warp_size);
	cutilSafeCall( cudaMemcpy(d_input, h_input, VOTE_DATA_GROUP*warp_size * sizeof(unsigned int), cudaMemcpyHostToDevice) );

	// Start of Vote Any Test Kernel #1
	printf("[VOTE Kernel Test 1/3]\n");
	printf("\tRunning <<Vote.Any>> kernel1 ...\n");
	{
		cutilSafeCall( cutilDeviceSynchronize() );
		dim3 gridBlock(1, 1);
		dim3 threadBlock(VOTE_DATA_GROUP*warp_size, 1);
		VoteAnyKernel1<<<gridBlock, threadBlock>>>(d_input, d_result, VOTE_DATA_GROUP*warp_size);
		cutilCheckMsg("VoteAnyKernel() execution failed\n");
		cutilSafeCall( cutilDeviceSynchronize() );
	}
	cutilSafeCall( cudaMemcpy(h_result, d_result, VOTE_DATA_GROUP*warp_size * sizeof(unsigned int), cudaMemcpyDeviceToHost) );
	error_count[0] += checkResultsVoteAnyKernel1(h_result, VOTE_DATA_GROUP*warp_size, warp_size);

	// Start of Vote All Test Kernel #2
	printf("\n[VOTE Kernel Test 2/3]\n");
	printf("\tRunning <<Vote.All>> kernel2 ...\n");
	{
		cutilSafeCall( cutilDeviceSynchronize() );
		dim3 gridBlock(1, 1);
		dim3 threadBlock(VOTE_DATA_GROUP*warp_size, 1);
	    VoteAllKernel2<<<gridBlock, threadBlock>>>(d_input, d_result, VOTE_DATA_GROUP*warp_size);
		cutilCheckMsg("VoteAllKernel() execution failed\n");
		cutilSafeCall( cutilDeviceSynchronize() );
	}
	cutilSafeCall( cudaMemcpy(h_result, d_result, VOTE_DATA_GROUP*warp_size * sizeof(unsigned int), cudaMemcpyDeviceToHost) );
	error_count[1] += checkResultsVoteAllKernel2(h_result, VOTE_DATA_GROUP*warp_size, warp_size);

	// Second Vote Kernel Test #3 (both Any/All)
	hinfo = (bool *)calloc(warp_size * 3 * 3, sizeof(bool));
    cudaMalloc((void**)&dinfo, warp_size * 3 * 3 * sizeof(bool));
    cudaMemcpy(dinfo, hinfo, warp_size * 3 * 3 * sizeof(bool),
               cudaMemcpyHostToDevice);

	printf("\n[VOTE Kernel Test 3/3]\n");
	printf("\tRunning <<Vote.Any>> kernel3 ...\n");
	{
		cutilSafeCall( cutilDeviceSynchronize() );
		VoteAnyKernel3<<<1, warp_size*3>>>(dinfo, warp_size);
		cutilSafeCall( cutilDeviceSynchronize() );
	}

    cudaMemcpy(hinfo, dinfo, warp_size * 3 * 3 * sizeof(bool),
               cudaMemcpyDeviceToHost);

	error_count[2] = checkResultsVoteAnyKernel3(hinfo, warp_size * 3);
 
	// Now free these resources for Test #1,2
    cutilSafeCall( cudaFree(d_input) );
    cutilSafeCall( cudaFree(d_result) );
    free(h_input);
    free(h_result);

	// Free resources from Test #3
    free(hinfo); cudaFree(dinfo);

	printf("\tShutting down...\n");

    cutilDeviceReset();
    shrQAFinishExit(argc, (const char **)argv, (error_count[0] == 0 && error_count[1] == 0 && error_count[2] == 0) ? QA_PASSED : QA_FAILED);
}
