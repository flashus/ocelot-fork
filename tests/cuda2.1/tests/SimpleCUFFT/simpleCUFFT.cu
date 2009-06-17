/*
* Copyright 1993-2006 NVIDIA Corporation.  All rights reserved.
*
* NOTICE TO USER:
*
* This source code is subject to NVIDIA ownership rights under U.S. and
* international Copyright laws.
*
* NVIDIA MAKES NO REPRESENTATION ABOUT THE SUITABILITY OF THIS SOURCE
* CODE FOR ANY PURPOSE.  IT IS PROVIDED "AS IS" WITHOUT EXPRESS OR
* IMPLIED WARRANTY OF ANY KIND.  NVIDIA DISCLAIMS ALL WARRANTIES WITH
* REGARD TO THIS SOURCE CODE, INCLUDING ALL IMPLIED WARRANTIES OF
* MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE.
* IN NO EVENT SHALL NVIDIA BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL,
* OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
* OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
* OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE
* OR PERFORMANCE OF THIS SOURCE CODE.
*
* U.S. Government End Users.  This source code is a "commercial item" as
* that term is defined at 48 C.F.R. 2.101 (OCT 1995), consisting  of
* "commercial computer software" and "commercial computer software
* documentation" as such terms are used in 48 C.F.R. 12.212 (SEPT 1995)
* and is provided to the U.S. Government only as a commercial end item.
* Consistent with 48 C.F.R.12.212 and 48 C.F.R. 227.7202-1 through
* 227.7202-4 (JUNE 1995), all U.S. Government End Users acquire the
* source code with only those rights set forth herein.
*/

/* Example showing the use of CUFFT for fast 1D-convolution using FFT. */

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

// includes, system
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// includes, project
#include <cufft.h>
#include <cutil_inline.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

// Complex data type
typedef float2 Complex; 
static __device__ __host__ inline Complex ComplexAdd(Complex, Complex);
static __device__ __host__ inline Complex ComplexScale(Complex, float);
static __device__ __host__ inline Complex ComplexMul(Complex, Complex);
static __global__ void ComplexPointwiseMulAndScale(Complex*, const Complex*, int, float);

// Filtering functions
void Convolve(const Complex*, int, const Complex*, int, Complex*);

// Padding functions
int PadData(const Complex*, Complex**, int,
            const Complex*, Complex**, int);

//////////////////////////////////////////////////////////////////////////////////////////////////
// declaration, forward
void runTest(int argc, char** argv);

// The filter size is assumed to be a number smaller than the signal size
#define SIGNAL_SIZE        50
#define FILTER_KERNEL_SIZE 11

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

/*!
	Writes a complex vector to file data/simplefft/%s.m where %s is the vector's
	name. Defines two variables within the file, %s_len and %s. %s_len is the number
	of elements in the vector. %s is the vector itself.

	Padding with zeros is easily done without resizing the vector in memory.

	\param name name of vector and file
	\param data input data
	\param N number of elements in data
	\param padded_length length of vector as written

	\return 0 on success, -1 on I/O failure
*/
int write_vector(const char *name, Complex *data, int N, int padded_length) {
	char fname[256] = {0};
	FILE *file = 0;
	int n;

	sprintf(fname, "data/simplefft/%s.m", name);
	if (!(file = fopen(fname, "w"))) {
		fprintf(stderr, "failed to open file %s for writing\n", fname);
		return -1;
	}

	fprintf(file, "%s_len = %d;\n", name, padded_length);
	fprintf(file, "%s = [\n", name);

	for (n = 0; n < padded_length; n++) {
		if (n < N) {
			float r = data[n].x, i = data[n].y;
			fprintf(file, " %f %s %fi ;\n", r, (i >= 0 ? "+" : "-"), (float)fabs(i));
		}
		else {
			fprintf(file, " 0 ;\n");
		}
	}
	
	fprintf(file, "];\n");

	fclose(file);
	return 0;
}

/*!
	Returns a power of two not less than n.
*/
int ceiling_power_of_two(int n) {

	n |= (n >> (1<<0));
	n |= (n >> (1<<1));
	n |= (n >> (1<<2));
	n |= (n >> (1<<3));
	n |= (n >> (1<<4));

	return n + 1;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// Program main
//////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv) 
{
	printf("CUFFT test entered\n"); fflush(stdout);

    runTest(argc, argv);

//    cutilExit(argc, argv);
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//! Run a simple test for CUDA
//////////////////////////////////////////////////////////////////////////////////////////////////
void runTest(int argc, char** argv) 
{
	if( cutCheckCmdLineFlag(argc, (const char**)argv, "device") ) {
		cutilDeviceInit(argc, argv);
	}
	else {
		cudaSetDevice( cutGetMaxGflopsDeviceId() );
	}

	// Allocate host memory for the signal
	Complex* h_signal = (Complex*)malloc(sizeof(Complex) * SIGNAL_SIZE);
	// Initalize the memory for the signal
	for (unsigned int i = 0; i < SIGNAL_SIZE; ++i) {
	  h_signal[i].x = rand() / (float)RAND_MAX;
	  h_signal[i].y = 0;
	}

	// Allocate host memory for the filter
	Complex* h_filter_kernel = (Complex*)malloc(sizeof(Complex) * FILTER_KERNEL_SIZE);
	// Initalize the memory for the filter
	for (unsigned int i = 0; i < FILTER_KERNEL_SIZE; ++i) {
	  h_filter_kernel[i].x = rand() / (float)RAND_MAX;
	  h_filter_kernel[i].y = 0;
	}

	// Pad signal and filter kernel
	Complex* h_padded_signal;
	Complex* h_padded_filter_kernel;
	int new_size = PadData(h_signal, &h_padded_signal, SIGNAL_SIZE,
		                     h_filter_kernel, &h_padded_filter_kernel, FILTER_KERNEL_SIZE);
	int mem_size = sizeof(Complex) * new_size;

	write_vector("T_signal", h_signal, SIGNAL_SIZE, new_size);
	write_vector("T_filter", h_filter_kernel, FILTER_KERNEL_SIZE, new_size);

	// Allocate device memory for signal
	Complex* d_signal;
	cutilSafeCall(cudaMalloc((void**)&d_signal, mem_size));
	// Copy host memory to device
	cutilSafeCall(cudaMemcpy(d_signal, h_padded_signal, mem_size,
		                        cudaMemcpyHostToDevice));

	// Allocate device memory for filter kernel
	Complex* d_filter_kernel;
	cutilSafeCall(cudaMalloc((void**)&d_filter_kernel, mem_size));

	// Copy host memory to device
	cutilSafeCall(cudaMemcpy(d_filter_kernel, h_padded_filter_kernel, mem_size,
		                        cudaMemcpyHostToDevice));

	// CUFFT plan
	cufftHandle plan;
	cufftSafeCall(cufftPlan1d(&plan, new_size, CUFFT_C2C, 1));

	// Transform signal and kernel
	cufftSafeCall(cufftExecC2C(plan, (cufftComplex *)d_signal, 
		(cufftComplex *)d_signal, CUFFT_FORWARD));

	{
		Complex *Freq_signal = (Complex *)malloc(new_size * sizeof(Complex));
		cudaMemcpy(Freq_signal, d_signal, sizeof(Complex)*new_size, cudaMemcpyDeviceToHost);
		write_vector("F_signal", Freq_signal, new_size, (new_size));
		free(Freq_signal);
	}
	
	cufftSafeCall(cufftExecC2C(plan, (cufftComplex *)d_filter_kernel, 
		(cufftComplex *)d_filter_kernel, CUFFT_FORWARD));


	{
		Complex *Freq_filter_kernel = (Complex *)malloc(new_size * sizeof(Complex));
		cudaMemcpy(Freq_filter_kernel, d_filter_kernel, 
			sizeof(Complex)*new_size, cudaMemcpyDeviceToHost);
		write_vector("F_filter", Freq_filter_kernel, new_size, (new_size));
		free(Freq_filter_kernel);
	}

	// Multiply the coefficients together and normalize the result
	ComplexPointwiseMulAndScale<<<32, 256>>>(d_signal, d_filter_kernel, new_size, 1.0f / new_size);

	{
		Complex *F_filtered = (Complex *)malloc(sizeof(Complex) * new_size);
		cudaMemcpy(F_filtered, d_signal, sizeof(Complex) * new_size, cudaMemcpyDeviceToHost);
		write_vector("F_output", F_filtered, new_size, (new_size));
		free(F_filtered);
	}

	// Check if kernel execution generated and error
	cutilCheckMsg("Kernel execution failed [ ComplexPointwiseMulAndScale ]");

	// Transform signal back
	cufftSafeCall(cufftExecC2C(plan, (cufftComplex *)d_signal, 
		(cufftComplex *)d_signal, CUFFT_INVERSE));

	{
		Complex *T_filtered = (Complex *)malloc(sizeof(Complex) * new_size);
		cudaMemcpy(T_filtered, d_signal, sizeof(Complex) * new_size, cudaMemcpyDeviceToHost);
		write_vector("T_output", T_filtered, new_size, (new_size));
		free(T_filtered);
	}

	// Copy device memory to host
	Complex* h_convolved_signal = h_padded_signal;
	cutilSafeCall(cudaMemcpy(h_convolved_signal, d_signal, mem_size,
		                        cudaMemcpyDeviceToHost));

	// Allocate host memory for the convolution result
	Complex* h_convolved_signal_ref = (Complex*)malloc(sizeof(Complex) * SIGNAL_SIZE);

	// Convolve on the host
	Convolve(h_signal, SIGNAL_SIZE,
		       h_filter_kernel, FILTER_KERNEL_SIZE,
		       h_convolved_signal_ref);

	// check result
	printf("Test finished, checking results...\n");
	CUTBoolean res = cutCompareL2fe((float*)h_convolved_signal_ref, 
		(float*)h_convolved_signal, 2 * SIGNAL_SIZE, 1e-5f);
	printf("Test %s\n", (1 == res) ? "PASSED" : "FAILED");

	//Destroy CUFFT context
	cufftSafeCall(cufftDestroy(plan));

	// cleanup memory
	free(h_signal);
	free(h_filter_kernel);
	free(h_padded_signal);
	free(h_padded_filter_kernel);
	free(h_convolved_signal_ref);
	cutilSafeCall(cudaFree(d_signal));
	cutilSafeCall(cudaFree(d_filter_kernel));

	cudaThreadExit();
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// Pad data
//////////////////////////////////////////////////////////////////////////////////////////////////
int PadData(const Complex* signal, Complex** padded_signal, int signal_size,
	      const Complex* filter_kernel, Complex** padded_filter_kernel, int filter_kernel_size) {

	int minRadius = filter_kernel_size / 2;
	int maxRadius = filter_kernel_size - minRadius;
	int new_size = signal_size + maxRadius;

	// Pad signal
	Complex* new_data = (Complex*)malloc(sizeof(Complex) * new_size);
	memcpy(new_data + 0, signal, signal_size * sizeof(Complex));
	memset(new_data + signal_size, 0, (new_size - signal_size) * sizeof(Complex));
	*padded_signal = new_data;

	// Pad filter
	new_data = (Complex*)malloc(sizeof(Complex) * new_size);  
	memcpy(new_data + 0, filter_kernel + minRadius, maxRadius * sizeof(Complex));
	memset(new_data + maxRadius, 0, (new_size - filter_kernel_size) * sizeof(Complex));   
	memcpy(new_data + new_size - minRadius, filter_kernel, minRadius * sizeof(Complex));
	*padded_filter_kernel = new_data;

	return new_size;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// Filtering operations
//////////////////////////////////////////////////////////////////////////////////////////////////

// Computes convolution on the host
void Convolve(const Complex* signal, int signal_size,
              const Complex* filter_kernel, int filter_kernel_size,
              Complex* filtered_signal)
{
	int minRadius = filter_kernel_size / 2;
	int maxRadius = filter_kernel_size - minRadius;
	// Loop over output element indices
	for (int i = 0; i < signal_size; ++i) {
	  filtered_signal[i].x = filtered_signal[i].y = 0;
	  // Loop over convolution indices
		for (int j = - maxRadius + 1; j <= minRadius; ++j) {
			int k = i + j;
			if (k >= 0 && k < signal_size) {
				filtered_signal[i] = ComplexAdd(filtered_signal[i], ComplexMul(signal[k], 
					filter_kernel[minRadius - j]));
			}
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// Complex operations
//////////////////////////////////////////////////////////////////////////////////////////////////

// Complex addition
static __device__ __host__ inline Complex ComplexAdd(Complex a, Complex b)
{
	Complex c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

// Complex scale
static __device__ __host__ inline Complex ComplexScale(Complex a, float s)
{
	Complex c;
	c.x = s * a.x;
	c.y = s * a.y;
	return c;
}

// Complex multiplication
static __device__ __host__ inline Complex ComplexMul(Complex a, Complex b)
{
	Complex c;
	c.x = a.x * b.x - a.y * b.y;
	c.y = a.x * b.y + a.y * b.x;
	return c;
}

// Complex pointwise multiplication
static __global__ void ComplexPointwiseMulAndScale(
	Complex* a, const Complex* b, int size, float scale)
{
	const int numThreads = blockDim.x * gridDim.x;
	const int threadID = blockIdx.x * blockDim.x + threadIdx.x;
	for (int i = threadID; i < size; i += numThreads)
		a[i] = ComplexScale(ComplexMul(a[i], b[i]), scale);     
}

//////////////////////////////////////////////////////////////////////////////////////////////////
