# 1 "/tmp/tmpxft_000062f6_00000000-1_particleSystem.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_000062f6_00000000-1_particleSystem.cudafe1.cpp"
# 1 "particleSystem.cu"
# 233 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
namespace std __attribute__((visibility("default"))) {
# 245 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
}
# 46 "/home/normal/cuda/bin/../include/device_types.h"
# 152 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef long ptrdiff_t;
# 214 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 1 3
# 80 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 1 3
# 53 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
# 1 "/home/normal/cuda/bin/../include/host_defines.h" 1 3
# 54 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 2 3
# 1 "/home/normal/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/home/normal/cuda/bin/../include/builtin_types.h" 3
# 1 "/home/normal/cuda/bin/../include/device_types.h" 1 3
# 46 "/home/normal/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/home/normal/cuda/bin/../include/driver_types.h" 1 3
# 90 "/home/normal/cuda/bin/../include/driver_types.h" 3
enum cudaError
{
  cudaSuccess = 0,
  cudaErrorMissingConfiguration = 1,
  cudaErrorMemoryAllocation = 2,
  cudaErrorInitializationError = 3,
  cudaErrorLaunchFailure = 4,
  cudaErrorPriorLaunchFailure = 5,
  cudaErrorLaunchTimeout = 6,
  cudaErrorLaunchOutOfResources = 7,
  cudaErrorInvalidDeviceFunction = 8,
  cudaErrorInvalidConfiguration = 9,
  cudaErrorInvalidDevice = 10,
  cudaErrorInvalidValue = 11,
  cudaErrorInvalidPitchValue = 12,
  cudaErrorInvalidSymbol = 13,
  cudaErrorMapBufferObjectFailed = 14,
  cudaErrorUnmapBufferObjectFailed = 15,
  cudaErrorInvalidHostPointer = 16,
  cudaErrorInvalidDevicePointer = 17,
  cudaErrorInvalidTexture = 18,
  cudaErrorInvalidTextureBinding = 19,
  cudaErrorInvalidChannelDescriptor = 20,
  cudaErrorInvalidMemcpyDirection = 21,
  cudaErrorAddressOfConstant = 22,
  cudaErrorTextureFetchFailed = 23,
  cudaErrorTextureNotBound = 24,
  cudaErrorSynchronizationError = 25,
  cudaErrorInvalidFilterSetting = 26,
  cudaErrorInvalidNormSetting = 27,
  cudaErrorMixedDeviceExecution = 28,
  cudaErrorCudartUnloading = 29,
  cudaErrorUnknown = 30,
  cudaErrorNotYetImplemented = 31,
  cudaErrorMemoryValueTooLarge = 32,
  cudaErrorInvalidResourceHandle = 33,
  cudaErrorNotReady = 34,
  cudaErrorInsufficientDriver = 35,
  cudaErrorSetOnActiveProcess = 36,
  cudaErrorNoDevice = 38,
  cudaErrorStartupFailure = 0x7f,
  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3
};





struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};





struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};





struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaFuncAttributes
{
   size_t sharedSizeBytes;
   size_t constSizeBytes;
   size_t localSizeBytes;
   int maxThreadsPerBlock;
   int numRegs;
   int __cudaReserved[8];
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};






struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int __cudaReserved[36];
};
# 318 "/home/normal/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef int cudaStream_t;





typedef int cudaEvent_t;
# 44 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/home/normal/cuda/bin/../include/texture_types.h" 1 3
# 54 "/home/normal/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap,
  cudaAddressModeClamp
};


enum cudaTextureFilterMode
{
  cudaFilterModePoint,
  cudaFilterModeLinear
};


enum cudaTextureReadMode
{
  cudaReadModeElementType,
  cudaReadModeNormalizedFloat
};


struct textureReference
{
  int normalized;
  enum cudaTextureFilterMode filterMode;
  enum cudaTextureAddressMode addressMode[3];
  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 45 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/home/normal/cuda/bin/../include/vector_types.h" 1 3
# 54 "/home/normal/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct char2
{
  signed char x, y;
};


struct uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct char4
{
  signed char x, y, z, w;
};


struct uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct short2
{
  short x, y;
};


struct ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct short4
{
  short x, y, z, w;
};


struct ushort4
{
  unsigned short x, y, z, w;
};


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct int2
{
  int x, y;
};


struct uint2
{
  unsigned int x, y;
};


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct int4
{
  int x, y, z, w;
};


struct uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};


struct



      

                                             long2
{
  long int x, y;
};


struct



      

                                                      ulong2
{
  unsigned long int x, y;
};
# 262 "/home/normal/cuda/bin/../include/vector_types.h" 3
struct float1
{
  float x;
};


struct float2
{
  float x, y;
};


struct float3
{
  float x, y, z;
};


struct float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct longlong2
{
  long long int x, y;
};


struct ulonglong2
{
  unsigned long long int x, y;
};


struct double1
{
  double x;
};


struct double2
{
  double x, y;
};
# 328 "/home/normal/cuda/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct double1 double1;

typedef struct double2 double2;
# 419 "/home/normal/cuda/bin/../include/vector_types.h" 3
typedef struct dim3 dim3;


struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int x = 1, unsigned int y = 1, unsigned int z = 1) : x(x), y(y), z(z) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};
# 45 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 55 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 2 3
# 80 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern "C" {
# 89 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3D(struct cudaPitchedPtr* pitchedDevPtr, struct cudaExtent extent);
extern cudaError_t cudaMalloc3DArray(struct cudaArray** arrayPtr, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent);
extern cudaError_t cudaMemset3D(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent);
extern cudaError_t cudaMemcpy3D(const struct cudaMemcpy3DParms *p);
extern cudaError_t cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream);
# 102 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc(void **devPtr, size_t size);
extern cudaError_t cudaMallocHost(void **ptr, size_t size);
extern cudaError_t cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height);
extern cudaError_t cudaMallocArray(struct cudaArray **array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height );
extern cudaError_t cudaFree(void *devPtr);
extern cudaError_t cudaFreeHost(void *ptr);
extern cudaError_t cudaFreeArray(struct cudaArray *array);

extern cudaError_t cudaHostAlloc(void **pHost, size_t bytes, unsigned int flags);
extern cudaError_t cudaHostGetDevicePointer(void **pDevice, void *pHost, unsigned int flags);
# 120 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyFromArray(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DFromArray(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyToSymbol(const char *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyFromSymbol(void *dst, const char *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind );







extern cudaError_t cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromArrayAsync(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToSymbolAsync(const char *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromSymbolAsync(void *dst, const char *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);







extern cudaError_t cudaMemset(void *devPtr, int value, size_t count);
extern cudaError_t cudaMemset2D(void *devPtr, size_t pitch, int value, size_t width, size_t height);







extern cudaError_t cudaGetSymbolAddress(void **devPtr, const char *symbol);
extern cudaError_t cudaGetSymbolSize(size_t *size, const char *symbol);







extern cudaError_t cudaGetDeviceCount(int *count);
extern cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device);
extern cudaError_t cudaChooseDevice(int *device, const struct cudaDeviceProp *prop);
extern cudaError_t cudaSetDevice(int device);
extern cudaError_t cudaGetDevice(int *device);
extern cudaError_t cudaSetValidDevices(int *device_arr, int len);
extern cudaError_t cudaSetDeviceFlags( int flags );







extern cudaError_t cudaBindTexture(size_t *offset, const struct textureReference *texref, const void *devPtr, const struct cudaChannelFormatDesc *desc, size_t size );
extern cudaError_t cudaBindTexture2D(size_t *offset,const struct textureReference *texref,const void *devPtr, const struct cudaChannelFormatDesc *desc,size_t width, size_t height, size_t pitch);
extern cudaError_t cudaBindTextureToArray(const struct textureReference *texref, const struct cudaArray *array, const struct cudaChannelFormatDesc *desc);
extern cudaError_t cudaUnbindTexture(const struct textureReference *texref);
extern cudaError_t cudaGetTextureAlignmentOffset(size_t *offset, const struct textureReference *texref);
extern cudaError_t cudaGetTextureReference(const struct textureReference **texref, const char *symbol);







extern cudaError_t cudaGetChannelDesc(struct cudaChannelFormatDesc *desc, const struct cudaArray *array);
extern struct cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, enum cudaChannelFormatKind f);







extern cudaError_t cudaGetLastError(void);
extern const char* cudaGetErrorString(cudaError_t error);







extern cudaError_t cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem , cudaStream_t stream );
extern cudaError_t cudaSetupArgument(const void *arg, size_t size, size_t offset);
extern cudaError_t cudaLaunch(const char *entry);
extern cudaError_t cudaFuncGetAttributes(struct cudaFuncAttributes *attr, const char *func);







extern cudaError_t cudaStreamCreate(cudaStream_t *pStream);
extern cudaError_t cudaStreamDestroy(cudaStream_t stream);
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream);
extern cudaError_t cudaStreamQuery(cudaStream_t stream);







extern cudaError_t cudaEventCreate(cudaEvent_t *event);
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t *event, int flags);
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream);
extern cudaError_t cudaEventQuery(cudaEvent_t event);
extern cudaError_t cudaEventSynchronize(cudaEvent_t event);
extern cudaError_t cudaEventDestroy(cudaEvent_t event);
extern cudaError_t cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end);







extern cudaError_t cudaSetDoubleForDevice(double *d);
extern cudaError_t cudaSetDoubleForHost(double *d);







extern cudaError_t cudaThreadExit(void);
extern cudaError_t cudaThreadSynchronize(void);







extern cudaError_t cudaDriverGetVersion(int *driverVersion);
extern cudaError_t cudaRuntimeGetVersion(int *runtimeVersion);


}
# 81 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/home/normal/cuda/bin/../include/crt/storage_class.h" 1 3
# 82 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2 3
# 216 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 2 3
# 90 "/home/normal/cuda/bin/../include/driver_types.h"
# 138 "/home/normal/cuda/bin/../include/driver_types.h"
# 150 "/home/normal/cuda/bin/../include/driver_types.h"
# 163 "/home/normal/cuda/bin/../include/driver_types.h"
# 169 "/home/normal/cuda/bin/../include/driver_types.h"
# 181 "/home/normal/cuda/bin/../include/driver_types.h"
# 193 "/home/normal/cuda/bin/../include/driver_types.h"
# 204 "/home/normal/cuda/bin/../include/driver_types.h"
# 215 "/home/normal/cuda/bin/../include/driver_types.h"
# 233 "/home/normal/cuda/bin/../include/driver_types.h"
# 247 "/home/normal/cuda/bin/../include/driver_types.h"
# 259 "/home/normal/cuda/bin/../include/driver_types.h"
# 318 "/home/normal/cuda/bin/../include/driver_types.h"
# 324 "/home/normal/cuda/bin/../include/driver_types.h"
# 330 "/home/normal/cuda/bin/../include/driver_types.h"
# 54 "/home/normal/cuda/bin/../include/texture_types.h"
# 61 "/home/normal/cuda/bin/../include/texture_types.h"
# 68 "/home/normal/cuda/bin/../include/texture_types.h"
# 75 "/home/normal/cuda/bin/../include/texture_types.h"
# 54 "/home/normal/cuda/bin/../include/vector_types.h"
# 60 "/home/normal/cuda/bin/../include/vector_types.h"
# 66 "/home/normal/cuda/bin/../include/vector_types.h"
# 72 "/home/normal/cuda/bin/../include/vector_types.h"
# 78 "/home/normal/cuda/bin/../include/vector_types.h"
# 84 "/home/normal/cuda/bin/../include/vector_types.h"
# 90 "/home/normal/cuda/bin/../include/vector_types.h"
# 96 "/home/normal/cuda/bin/../include/vector_types.h"
# 102 "/home/normal/cuda/bin/../include/vector_types.h"
# 108 "/home/normal/cuda/bin/../include/vector_types.h"
# 114 "/home/normal/cuda/bin/../include/vector_types.h"
# 120 "/home/normal/cuda/bin/../include/vector_types.h"
# 126 "/home/normal/cuda/bin/../include/vector_types.h"
# 132 "/home/normal/cuda/bin/../include/vector_types.h"
# 138 "/home/normal/cuda/bin/../include/vector_types.h"
# 144 "/home/normal/cuda/bin/../include/vector_types.h"
# 150 "/home/normal/cuda/bin/../include/vector_types.h"
# 156 "/home/normal/cuda/bin/../include/vector_types.h"
# 162 "/home/normal/cuda/bin/../include/vector_types.h"
# 168 "/home/normal/cuda/bin/../include/vector_types.h"
# 174 "/home/normal/cuda/bin/../include/vector_types.h"
# 180 "/home/normal/cuda/bin/../include/vector_types.h"
# 186 "/home/normal/cuda/bin/../include/vector_types.h"
# 192 "/home/normal/cuda/bin/../include/vector_types.h"
# 198 "/home/normal/cuda/bin/../include/vector_types.h"
# 204 "/home/normal/cuda/bin/../include/vector_types.h"
# 216 "/home/normal/cuda/bin/../include/vector_types.h"
# 228 "/home/normal/cuda/bin/../include/vector_types.h"
# 262 "/home/normal/cuda/bin/../include/vector_types.h"
# 268 "/home/normal/cuda/bin/../include/vector_types.h"
# 274 "/home/normal/cuda/bin/../include/vector_types.h"
# 280 "/home/normal/cuda/bin/../include/vector_types.h"
# 286 "/home/normal/cuda/bin/../include/vector_types.h"
# 292 "/home/normal/cuda/bin/../include/vector_types.h"
# 298 "/home/normal/cuda/bin/../include/vector_types.h"
# 304 "/home/normal/cuda/bin/../include/vector_types.h"
# 310 "/home/normal/cuda/bin/../include/vector_types.h"
# 316 "/home/normal/cuda/bin/../include/vector_types.h"
# 328 "/home/normal/cuda/bin/../include/vector_types.h"
# 330 "/home/normal/cuda/bin/../include/vector_types.h"
# 332 "/home/normal/cuda/bin/../include/vector_types.h"
# 334 "/home/normal/cuda/bin/../include/vector_types.h"
# 336 "/home/normal/cuda/bin/../include/vector_types.h"
# 338 "/home/normal/cuda/bin/../include/vector_types.h"
# 340 "/home/normal/cuda/bin/../include/vector_types.h"
# 342 "/home/normal/cuda/bin/../include/vector_types.h"
# 344 "/home/normal/cuda/bin/../include/vector_types.h"
# 346 "/home/normal/cuda/bin/../include/vector_types.h"
# 348 "/home/normal/cuda/bin/../include/vector_types.h"
# 350 "/home/normal/cuda/bin/../include/vector_types.h"
# 352 "/home/normal/cuda/bin/../include/vector_types.h"
# 354 "/home/normal/cuda/bin/../include/vector_types.h"
# 356 "/home/normal/cuda/bin/../include/vector_types.h"
# 358 "/home/normal/cuda/bin/../include/vector_types.h"
# 360 "/home/normal/cuda/bin/../include/vector_types.h"
# 362 "/home/normal/cuda/bin/../include/vector_types.h"
# 364 "/home/normal/cuda/bin/../include/vector_types.h"
# 366 "/home/normal/cuda/bin/../include/vector_types.h"
# 368 "/home/normal/cuda/bin/../include/vector_types.h"
# 370 "/home/normal/cuda/bin/../include/vector_types.h"
# 372 "/home/normal/cuda/bin/../include/vector_types.h"
# 374 "/home/normal/cuda/bin/../include/vector_types.h"
# 376 "/home/normal/cuda/bin/../include/vector_types.h"
# 378 "/home/normal/cuda/bin/../include/vector_types.h"
# 380 "/home/normal/cuda/bin/../include/vector_types.h"
# 382 "/home/normal/cuda/bin/../include/vector_types.h"
# 384 "/home/normal/cuda/bin/../include/vector_types.h"
# 386 "/home/normal/cuda/bin/../include/vector_types.h"
# 388 "/home/normal/cuda/bin/../include/vector_types.h"
# 390 "/home/normal/cuda/bin/../include/vector_types.h"
# 392 "/home/normal/cuda/bin/../include/vector_types.h"
# 394 "/home/normal/cuda/bin/../include/vector_types.h"
# 396 "/home/normal/cuda/bin/../include/vector_types.h"
# 398 "/home/normal/cuda/bin/../include/vector_types.h"
# 400 "/home/normal/cuda/bin/../include/vector_types.h"
# 402 "/home/normal/cuda/bin/../include/vector_types.h"
# 404 "/home/normal/cuda/bin/../include/vector_types.h"
# 406 "/home/normal/cuda/bin/../include/vector_types.h"
# 408 "/home/normal/cuda/bin/../include/vector_types.h"
# 410 "/home/normal/cuda/bin/../include/vector_types.h"
# 419 "/home/normal/cuda/bin/../include/vector_types.h"
# 422 "/home/normal/cuda/bin/../include/vector_types.h"
# 89 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent);
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t);
# 102 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
extern "C" cudaError_t cudaMallocHost(void **, size_t);
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (1));
extern "C" cudaError_t cudaFree(void *);
extern "C" cudaError_t cudaFreeHost(void *);
extern "C" cudaError_t cudaFreeArray(cudaArray *);

extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 120 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 137 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 152 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 161 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 170 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
extern "C" cudaError_t cudaSetDevice(int);
extern "C" cudaError_t cudaGetDevice(int *);
extern "C" cudaError_t cudaSetValidDevices(int *, int);
extern "C" cudaError_t cudaSetDeviceFlags(int);
# 184 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 197 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 206 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
extern "C" const char *cudaGetErrorString(cudaError_t);
# 215 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = (0));
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
extern "C" cudaError_t cudaLaunch(const char *);
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 226 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 237 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, int);
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t);
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 251 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 260 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
extern "C" cudaError_t cudaThreadSynchronize();
# 269 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 93 "/home/normal/cuda/bin/../include/channel_descriptor.h"
template<class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
{
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
{
auto int e = (((int)sizeof(char)) * 8);




return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);

}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}
# 337 "/home/normal/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
}
# 54 "/home/normal/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
{
auto cudaPitchedPtr s;

(s.ptr) = d;
(s.pitch) = p;
(s.xsize) = xsz;
(s.ysize) = ysz;

return s;
}

static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
{
auto cudaPos p;

(p.x) = x;
(p.y) = y;
(p.z) = z;

return p;
}

static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
{
auto cudaExtent e;

(e.width) = w;
(e.height) = h;
(e.depth) = d;

return e;
}
# 54 "/home/normal/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
{
auto char1 t; (t.x) = x; return t;
}

static inline uchar1 make_uchar1(unsigned char x)
{
auto uchar1 t; (t.x) = x; return t;
}

static inline char2 make_char2(signed char x, signed char y)
{
auto char2 t; (t.x) = x; (t.y) = y; return t;
}

static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
{
auto uchar2 t; (t.x) = x; (t.y) = y; return t;
}

static inline char3 make_char3(signed char x, signed char y, signed char z)
{
auto char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
{
auto uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
{
auto char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
{
auto uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline short1 make_short1(short x)
{
auto short1 t; (t.x) = x; return t;
}

static inline ushort1 make_ushort1(unsigned short x)
{
auto ushort1 t; (t.x) = x; return t;
}

static inline short2 make_short2(short x, short y)
{
auto short2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
{
auto ushort2 t; (t.x) = x; (t.y) = y; return t;
}

static inline short3 make_short3(short x, short y, short z)
{
auto short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
{
auto ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline short4 make_short4(short x, short y, short z, short w)
{
auto short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
{
auto ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline int1 make_int1(int x)
{
auto int1 t; (t.x) = x; return t;
}

static inline uint1 make_uint1(unsigned x)
{
auto uint1 t; (t.x) = x; return t;
}

static inline int2 make_int2(int x, int y)
{
auto int2 t; (t.x) = x; (t.y) = y; return t;
}

static inline uint2 make_uint2(unsigned x, unsigned y)
{
auto uint2 t; (t.x) = x; (t.y) = y; return t;
}

static inline int3 make_int3(int x, int y, int z)
{
auto int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
{
auto uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline int4 make_int4(int x, int y, int z, int w)
{
auto int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
{
auto uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline long1 make_long1(long x)
{
auto long1 t; (t.x) = x; return t;
}

static inline ulong1 make_ulong1(unsigned long x)
{
auto ulong1 t; (t.x) = x; return t;
}

static inline long2 make_long2(long x, long y)
{
auto long2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
{
auto ulong2 t; (t.x) = x; (t.y) = y; return t;
}
# 218 "/home/normal/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
{
auto float1 t; (t.x) = x; return t;
}

static inline float2 make_float2(float x, float y)
{
auto float2 t; (t.x) = x; (t.y) = y; return t;
}

static inline float3 make_float3(float x, float y, float z)
{
auto float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline float4 make_float4(float x, float y, float z, float w)
{
auto float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline longlong1 make_longlong1(long long x)
{
auto longlong1 t; (t.x) = x; return t;
}

static inline ulonglong1 make_ulonglong1(unsigned long long x)
{
auto ulonglong1 t; (t.x) = x; return t;
}

static inline longlong2 make_longlong2(long long x, long long y)
{
auto longlong2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
{
auto ulonglong2 t; (t.x) = x; (t.y) = y; return t;
}

static inline double1 make_double1(double x)
{
auto double1 t; (t.x) = x; return t;
}

static inline double2 make_double2(double x, double y)
{
auto double2 t; (t.x) = x; (t.y) = y; return t;
}
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
extern "C" { typedef unsigned short __u_short; }
extern "C" { typedef unsigned __u_int; }
extern "C" { typedef unsigned long __u_long; }


extern "C" { typedef signed char __int8_t; }
extern "C" { typedef unsigned char __uint8_t; }
extern "C" { typedef signed short __int16_t; }
extern "C" { typedef unsigned short __uint16_t; }
extern "C" { typedef signed int __int32_t; }
extern "C" { typedef unsigned __uint32_t; }

extern "C" { typedef signed long __int64_t; }
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
extern "C" { typedef unsigned __uid_t; }
extern "C" { typedef unsigned __gid_t; }
extern "C" { typedef unsigned long __ino_t; }
extern "C" { typedef unsigned long __ino64_t; }
extern "C" { typedef unsigned __mode_t; }
extern "C" { typedef unsigned long __nlink_t; }
extern "C" { typedef long __off_t; }
extern "C" { typedef long __off64_t; }
extern "C" { typedef int __pid_t; }
extern "C" { typedef struct __fsid_t { int __val[2]; } __fsid_t; }
extern "C" { typedef long __clock_t; }
extern "C" { typedef unsigned long __rlim_t; }
extern "C" { typedef unsigned long __rlim64_t; }
extern "C" { typedef unsigned __id_t; }
extern "C" { typedef long __time_t; }
extern "C" { typedef unsigned __useconds_t; }
extern "C" { typedef long __suseconds_t; }

extern "C" { typedef int __daddr_t; }
extern "C" { typedef long __swblk_t; }
extern "C" { typedef int __key_t; }


extern "C" { typedef int __clockid_t; }


extern "C" { typedef void *__timer_t; }


extern "C" { typedef long __blksize_t; }




extern "C" { typedef long __blkcnt_t; }
extern "C" { typedef long __blkcnt64_t; }


extern "C" { typedef unsigned long __fsblkcnt_t; }
extern "C" { typedef unsigned long __fsblkcnt64_t; }


extern "C" { typedef unsigned long __fsfilcnt_t; }
extern "C" { typedef unsigned long __fsfilcnt64_t; }

extern "C" { typedef long __ssize_t; }



extern "C" { typedef __off64_t __loff_t; }
extern "C" { typedef __quad_t *__qaddr_t; }
extern "C" { typedef char *__caddr_t; }


extern "C" { typedef long __intptr_t; }


extern "C" { typedef unsigned __socklen_t; }
# 61 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 77 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 93 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 105 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 121 "/usr/include/time.h" 3
extern "C" { struct timespec {

__time_t tv_sec;
long tv_nsec;
}; }
# 134 "/usr/include/time.h" 3
extern "C" { struct tm {

int tm_sec;
int tm_min;
int tm_hour;
int tm_mday;
int tm_mon;
int tm_year;
int tm_wday;
int tm_yday;
int tm_isdst;


long tm_gmtoff;
const char *tm_zone;




}; }
# 162 "/usr/include/time.h" 3
extern "C" { struct itimerspec {

timespec it_interval;
timespec it_value;
}; }


struct sigevent;
# 175 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 184 "/usr/include/time.h" 3
extern "C" __attribute__((__weak__)) clock_t clock() throw();


extern "C" time_t time(time_t *) throw();


extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));



extern "C" time_t mktime(tm *) throw();
# 200 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 208 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {


struct locale_data *__locales[13];


const unsigned short *__ctype_b;
const int *__ctype_tolower;
const int *__ctype_toupper;


const char *__names[13];
} *__locale_t; }
# 218 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();




extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 232 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();



extern "C" tm *localtime(const time_t *) throw();
# 242 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();




extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 254 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();


extern "C" char *ctime(const time_t *) throw();
# 265 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();



extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 275 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
extern "C" { extern int __daylight; }
extern "C" { extern long __timezone; }




extern "C" { extern char *tzname[2]; }



extern "C" void tzset() throw();



extern "C" { extern int daylight; }
extern "C" { extern long timezone; }
# 297 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 312 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();


extern "C" time_t timelocal(tm *) throw();


extern "C" int dysize(int) throw() __attribute__((__const__));
# 327 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);




extern "C" int clock_getres(clockid_t, timespec *) throw();


extern "C" int clock_gettime(clockid_t, timespec *) throw();


extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 346 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);




extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();




extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();




extern "C" int timer_delete(timer_t) throw();


extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();




extern "C" int timer_gettime(timer_t, itimerspec *) throw();



extern "C" int timer_getoverrun(timer_t) throw();
# 389 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 398 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 412 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 38 "/usr/include/string.h" 3
extern "C" __attribute__((__weak__)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw();




extern "C" void *memmove(void *, const void *, size_t) throw();
# 51 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw();
# 59 "/usr/include/string.h" 3
extern "C" __attribute__((__weak__)) void *memset(void *, int, size_t) throw();


extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));



extern "C" void *memchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 73 "/usr/include/string.h" 3
extern "C" void *rawmemchr(const void *, int) throw() __attribute__((__pure__));



extern "C" void *memrchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 84 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw();


extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw();




extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw();


extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw();



extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__));


extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__));



extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__));


extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw();
# 121 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));


extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw();
# 130 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__));
# 138 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__));
# 167 "/usr/include/string.h" 3
extern "C" char *strchr(const char *, int) throw() __attribute__((__pure__));


extern "C" char *strrchr(const char *, int) throw() __attribute__((__pure__));
# 177 "/usr/include/string.h" 3
extern "C" char *strchrnul(const char *, int) throw() __attribute__((__pure__));
# 184 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__));



extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__));


extern "C" char *strpbrk(const char *, const char *) throw() __attribute__((__pure__));


extern "C" char *strstr(const char *, const char *) throw() __attribute__((__pure__));




extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw();
# 205 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();




extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();
# 217 "/usr/include/string.h" 3
extern "C" char *strcasestr(const char *, const char *) throw() __attribute__((__pure__));
# 225 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__));
# 231 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw();


extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw();
# 242 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__));
# 249 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__));
# 256 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 281 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw();
# 288 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 294 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw();



extern "C" void bcopy(const void *, void *, size_t) throw();



extern "C" void bzero(void *, size_t) throw();


extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));



extern "C" char *index(const char *, int) throw() __attribute__((__pure__));



extern "C" char *rindex(const char *, int) throw() __attribute__((__pure__));




extern "C" int ffs(int) throw() __attribute__((__const__));




extern "C" int ffsl(long) throw() __attribute__((__const__));

extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 331 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__));



extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__));
# 342 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));



extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__));
# 354 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw();
# 361 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__));



extern "C" char *strsignal(int) throw();


extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw();

extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw();




extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw();


extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw();




extern "C" char *strfry(char *) throw();


extern "C" void *memfrob(void *, size_t) throw();
# 393 "/usr/include/string.h" 3
extern "C" char *basename(const char *) throw();
# 56 "/home/normal/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((__weak__)) clock_t clock() throw();


extern "C" __attribute__((__weak__)) void *memset(void *, int, size_t) throw();


extern "C" __attribute__((__weak__)) void *memcpy(void *, const void *, size_t) throw();
# 65 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int min(int, int);

extern "C" __attribute__((__weak__)) unsigned umin(unsigned, unsigned);

extern "C" __attribute__((__weak__)) float fminf(float, float) throw();

extern "C" __attribute__((__weak__)) double fmin(double, double) throw();


extern "C" __attribute__((__weak__)) int max(int, int);

extern "C" __attribute__((__weak__)) unsigned umax(unsigned, unsigned);

extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw();

extern "C" __attribute__((__weak__)) double fmax(double, double) throw();


extern "C" __attribute__((__weak__)) double sin(double) throw();

extern "C" __attribute__((__weak__)) float sinf(float) throw();


extern "C" __attribute__((__weak__)) double cos(double) throw();

extern "C" __attribute__((__weak__)) float cosf(float) throw();


extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw();

extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();


extern "C" __attribute__((__weak__)) double tan(double) throw();

extern "C" __attribute__((__weak__)) float tanf(float) throw();


extern "C" __attribute__((__weak__)) double sqrt(double) throw();

extern "C" __attribute__((__weak__)) float sqrtf(float) throw();


extern "C" __attribute__((__weak__)) double rsqrt(double);

extern "C" __attribute__((__weak__)) float rsqrtf(float);


extern "C" __attribute__((__weak__)) double exp2(double) throw();

extern "C" __attribute__((__weak__)) float exp2f(float) throw();


extern "C" __attribute__((__weak__)) double exp10(double) throw();

extern "C" __attribute__((__weak__)) float exp10f(float) throw();


extern "C" __attribute__((__weak__)) double expm1(double) throw();

extern "C" __attribute__((__weak__)) float expm1f(float) throw();


extern "C" __attribute__((__weak__)) double log2(double) throw();

extern "C" __attribute__((__weak__)) float log2f(float) throw();


extern "C" __attribute__((__weak__)) double log10(double) throw();

extern "C" __attribute__((__weak__)) float log10f(float) throw();


extern "C" __attribute__((__weak__)) double log(double) throw();

extern "C" __attribute__((__weak__)) float logf(float) throw();


extern "C" __attribute__((__weak__)) double log1p(double) throw();

extern "C" __attribute__((__weak__)) float log1pf(float) throw();


extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double exp(double) throw();

extern "C" __attribute__((__weak__)) float expf(float) throw();


extern "C" __attribute__((__weak__)) double cosh(double) throw();

extern "C" __attribute__((__weak__)) float coshf(float) throw();


extern "C" __attribute__((__weak__)) double sinh(double) throw();

extern "C" __attribute__((__weak__)) float sinhf(float) throw();


extern "C" __attribute__((__weak__)) double tanh(double) throw();

extern "C" __attribute__((__weak__)) float tanhf(float) throw();


extern "C" __attribute__((__weak__)) double acosh(double) throw();

extern "C" __attribute__((__weak__)) float acoshf(float) throw();


extern "C" __attribute__((__weak__)) double asinh(double) throw();

extern "C" __attribute__((__weak__)) float asinhf(float) throw();


extern "C" __attribute__((__weak__)) double atanh(double) throw();

extern "C" __attribute__((__weak__)) float atanhf(float) throw();


extern "C" __attribute__((__weak__)) double ldexp(double, int) throw();

extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw();


extern "C" __attribute__((__weak__)) double logb(double) throw();

extern "C" __attribute__((__weak__)) float logbf(float) throw();


extern "C" __attribute__((__weak__)) int ilogb(double) throw();

extern "C" __attribute__((__weak__)) int ilogbf(float) throw();


extern "C" __attribute__((__weak__)) double scalbn(double, int) throw();

extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw();


extern "C" __attribute__((__weak__)) double scalbln(double, long) throw();

extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw();


extern "C" __attribute__((__weak__)) double frexp(double, int *) throw();

extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw();


extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) long lround(double) throw();

extern "C" __attribute__((__weak__)) long lroundf(float) throw();


extern "C" __attribute__((__weak__)) long long llround(double) throw();

extern "C" __attribute__((__weak__)) long long llroundf(float) throw();


extern "C" __attribute__((__weak__)) double rint(double) throw();

extern "C" __attribute__((__weak__)) float rintf(float) throw();


extern "C" __attribute__((__weak__)) long lrint(double) throw();

extern "C" __attribute__((__weak__)) long lrintf(float) throw();


extern "C" __attribute__((__weak__)) long long llrint(double) throw();

extern "C" __attribute__((__weak__)) long long llrintf(float) throw();


extern "C" __attribute__((__weak__)) double nearbyint(double) throw();

extern "C" __attribute__((__weak__)) float nearbyintf(float) throw();


extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fdim(double, double) throw();

extern "C" __attribute__((__weak__)) float fdimf(float, float) throw();


extern "C" __attribute__((__weak__)) double atan2(double, double) throw();

extern "C" __attribute__((__weak__)) float atan2f(float, float) throw();


extern "C" __attribute__((__weak__)) double atan(double) throw();

extern "C" __attribute__((__weak__)) float atanf(float) throw();


extern "C" __attribute__((__weak__)) double asin(double) throw();

extern "C" __attribute__((__weak__)) float asinf(float) throw();


extern "C" __attribute__((__weak__)) double acos(double) throw();

extern "C" __attribute__((__weak__)) float acosf(float) throw();


extern "C" __attribute__((__weak__)) double hypot(double, double) throw();

extern "C" __attribute__((__weak__)) float hypotf(float, float) throw();


extern "C" __attribute__((__weak__)) double cbrt(double) throw();

extern "C" __attribute__((__weak__)) float cbrtf(float) throw();


extern "C" __attribute__((__weak__)) double pow(double, double) throw();

extern "C" __attribute__((__weak__)) float powf(float, float) throw();


extern "C" __attribute__((__weak__)) double modf(double, double *) throw();

extern "C" __attribute__((__weak__)) float modff(float, float *) throw();


extern "C" __attribute__((__weak__)) double fmod(double, double) throw();

extern "C" __attribute__((__weak__)) float fmodf(float, float) throw();


extern "C" __attribute__((__weak__)) double remainder(double, double) throw();

extern "C" __attribute__((__weak__)) float remainderf(float, float) throw();


extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw();

extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw();


extern "C" __attribute__((__weak__)) double erf(double) throw();

extern "C" __attribute__((__weak__)) float erff(float) throw();


extern "C" __attribute__((__weak__)) double erfinv(double) throw();

extern "C" __attribute__((__weak__)) float erfinvf(float) throw();


extern "C" __attribute__((__weak__)) double erfc(double) throw();

extern "C" __attribute__((__weak__)) float erfcf(float) throw();


extern "C" __attribute__((__weak__)) double erfcinv(double) throw();

extern "C" __attribute__((__weak__)) float erfcinvf(float) throw();


extern "C" __attribute__((__weak__)) double lgamma(double) throw();

extern "C" __attribute__((__weak__)) float lgammaf(float) throw();


extern "C" __attribute__((__weak__)) double tgamma(double) throw();

extern "C" __attribute__((__weak__)) float tgammaf(float) throw();


extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));
# 400 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fma(double, double, double) throw();

extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw();
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acos(double) throw(); extern "C" double __acos(double) throw();

extern "C" __attribute__((__weak__)) double asin(double) throw(); extern "C" double __asin(double) throw();

extern "C" __attribute__((__weak__)) double atan(double) throw(); extern "C" double __atan(double) throw();

extern "C" __attribute__((__weak__)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();


extern "C" __attribute__((__weak__)) double cos(double) throw(); extern "C" double __cos(double) throw();

extern "C" __attribute__((__weak__)) double sin(double) throw(); extern "C" double __sin(double) throw();

extern "C" __attribute__((__weak__)) double tan(double) throw(); extern "C" double __tan(double) throw();




extern "C" __attribute__((__weak__)) double cosh(double) throw(); extern "C" double __cosh(double) throw();

extern "C" __attribute__((__weak__)) double sinh(double) throw(); extern "C" double __sinh(double) throw();

extern "C" __attribute__((__weak__)) double tanh(double) throw(); extern "C" double __tanh(double) throw();




extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acosh(double) throw(); extern "C" double __acosh(double) throw();

extern "C" __attribute__((__weak__)) double asinh(double) throw(); extern "C" double __asinh(double) throw();

extern "C" __attribute__((__weak__)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp(double) throw(); extern "C" double __exp(double) throw();


extern "C" __attribute__((__weak__)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();


extern "C" __attribute__((__weak__)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();


extern "C" __attribute__((__weak__)) double log(double) throw(); extern "C" double __log(double) throw();


extern "C" __attribute__((__weak__)) double log10(double) throw(); extern "C" double __log10(double) throw();


extern "C" __attribute__((__weak__)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();




extern "C" __attribute__((__weak__)) double exp10(double) throw(); extern "C" double __exp10(double) throw();

extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double expm1(double) throw(); extern "C" double __expm1(double) throw();


extern "C" __attribute__((__weak__)) double log1p(double) throw(); extern "C" double __log1p(double) throw();


extern "C" __attribute__((__weak__)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp2(double) throw(); extern "C" double __exp2(double) throw();


extern "C" __attribute__((__weak__)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();


extern "C" __attribute__((__weak__)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();




extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));


extern "C" int finite(double) throw() __attribute__((__const__));


extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();



extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));



extern "C" int isnan(double) throw() __attribute__((__const__));


extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double erf(double) throw(); extern "C" double __erf(double) throw();
extern "C" __attribute__((__weak__)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
extern "C" __attribute__((__weak__)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double rint(double) throw(); extern "C" double __rint(double) throw();


extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));

extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();



extern "C" __attribute__((__weak__)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();



extern "C" __attribute__((__weak__)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();




extern "C" __attribute__((__weak__)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();



extern "C" __attribute__((__weak__)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();



extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
extern "C" __attribute__((__weak__)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();



extern "C" __attribute__((__weak__)) long lround(double) throw(); extern "C" long __lround(double) throw();
extern "C" __attribute__((__weak__)) long long llround(double) throw(); extern "C" long long __llround(double) throw();



extern "C" __attribute__((__weak__)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();


extern "C" __attribute__((__weak__)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();


extern "C" __attribute__((__weak__)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();



extern "C" int __fpclassify(double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acosf(float) throw(); extern "C" float __acosf(float) throw();

extern "C" __attribute__((__weak__)) float asinf(float) throw(); extern "C" float __asinf(float) throw();

extern "C" __attribute__((__weak__)) float atanf(float) throw(); extern "C" float __atanf(float) throw();

extern "C" __attribute__((__weak__)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();


extern "C" __attribute__((__weak__)) float cosf(float) throw();

extern "C" __attribute__((__weak__)) float sinf(float) throw();

extern "C" __attribute__((__weak__)) float tanf(float) throw();




extern "C" __attribute__((__weak__)) float coshf(float) throw(); extern "C" float __coshf(float) throw();

extern "C" __attribute__((__weak__)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();

extern "C" __attribute__((__weak__)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();




extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();

extern "C" __attribute__((__weak__)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();

extern "C" __attribute__((__weak__)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expf(float) throw();


extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();


extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();


extern "C" __attribute__((__weak__)) float logf(float) throw();


extern "C" __attribute__((__weak__)) float log10f(float) throw();


extern "C" __attribute__((__weak__)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();




extern "C" __attribute__((__weak__)) float exp10f(float) throw();

extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();


extern "C" __attribute__((__weak__)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();


extern "C" __attribute__((__weak__)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();


extern "C" __attribute__((__weak__)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float powf(float, float) throw();


extern "C" __attribute__((__weak__)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();




extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));


extern "C" int finitef(float) throw() __attribute__((__const__));


extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();



extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));



extern "C" int isnanf(float) throw() __attribute__((__const__));


extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float erff(float) throw(); extern "C" float __erff(float) throw();
extern "C" __attribute__((__weak__)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
extern "C" __attribute__((__weak__)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float rintf(float) throw(); extern "C" float __rintf(float) throw();


extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));

extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();



extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();



extern "C" __attribute__((__weak__)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();




extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();



extern "C" __attribute__((__weak__)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();



extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
extern "C" __attribute__((__weak__)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();



extern "C" __attribute__((__weak__)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
extern "C" __attribute__((__weak__)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();



extern "C" __attribute__((__weak__)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();


extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();


extern "C" __attribute__((__weak__)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();



extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();

extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();

extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();

extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();


extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();

extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();

extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();




extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();

extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();

extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();




extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();

extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();

extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();


extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();


extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();


extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();


extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();


extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();




extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();

extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();


extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();


extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();


extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();


extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));


extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));


extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));


extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();




extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));


extern "C" int finitel(long double) throw() __attribute__((__const__));


extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();



extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));



extern "C" int isnanl(long double) throw() __attribute__((__const__));


extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();


extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));

extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));



extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();



extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();



extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();




extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();



extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();



extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));



extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));




extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();



extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();



extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();


extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();


extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();



extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__const__));




extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 157 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 199 "/usr/include/math.h" 3
enum __cuda_FP_NAN {
FP_NAN,

FP_INFINITE,

FP_ZERO,

FP_SUBNORMAL,

FP_NORMAL

};
# 291 "/usr/include/math.h" 3
extern "C" { typedef
# 285 "/usr/include/math.h" 3
enum {
_IEEE_ = (-1),
_SVID_,
_XOPEN_,
_POSIX_,
_ISOC_
} _LIB_VERSION_TYPE; }




extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 307 "/usr/include/math.h" 3
extern "C" { struct __exception {




int type;
char *name;
double arg1;
double arg2;
double retval;
}; }


extern "C" int matherr(__exception *) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {

int w_status;

struct {

unsigned __w_termsig:7;
unsigned __w_coredump:1;
unsigned __w_retcode:8;
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;

struct {

unsigned __w_stopval:8;
unsigned __w_stopsig:8;
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct div_t {
int quot;
int rem;
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct ldiv_t {
long quot;
long rem;
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct lldiv_t {
long long quot;
long long rem;
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();




extern "C" double atof(const char *) throw() __attribute__((__pure__));


extern "C" int atoi(const char *) throw() __attribute__((__pure__));


extern "C" long atol(const char *) throw() __attribute__((__pure__));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw();
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw();


extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw();
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw();



extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw();
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw();




extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw();
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw();




extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw();
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();



extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();




extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw();



extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw();



extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw();
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();


extern "C" long a64l(const char *) throw() __attribute__((__pure__));
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
extern "C" { typedef __u_short u_short; }
extern "C" { typedef __u_int u_int; }
extern "C" { typedef __u_long u_long; }
extern "C" { typedef __quad_t quad_t; }
extern "C" { typedef __u_quad_t u_quad_t; }
extern "C" { typedef __fsid_t fsid_t; }




extern "C" { typedef __loff_t loff_t; }



extern "C" { typedef __ino_t ino_t; }
# 57 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }




extern "C" { typedef __dev_t dev_t; }




extern "C" { typedef __gid_t gid_t; }




extern "C" { typedef __mode_t mode_t; }




extern "C" { typedef __nlink_t nlink_t; }




extern "C" { typedef __uid_t uid_t; }
# 88 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 95 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }




extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }



extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
extern "C" { typedef unsigned short ushort; }
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
extern "C" { typedef short int16_t; }
extern "C" { typedef int int32_t; }
extern "C" { typedef long int64_t; }


extern "C" { typedef unsigned char u_int8_t; }
extern "C" { typedef unsigned short u_int16_t; }
extern "C" { typedef unsigned u_int32_t; }
extern "C" { typedef unsigned long u_int64_t; }

extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct __sigset_t {
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 69 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {

__time_t tv_sec;
__suseconds_t tv_usec;
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct fd_set {



__fd_mask fds_bits[((1024) / ((8) * sizeof(__fd_mask)))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long) throw();


extern "C" unsigned gnu_dev_minor(unsigned long long) throw();


extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 228 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 235 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }



extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }



extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 262 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union pthread_attr_t {
char __size[56];
long __align;
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {

__pthread_internal_list *__prev;
__pthread_internal_list *__next;
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutex_t {
struct __pthread_mutex_s {

int __lock;
unsigned __count;
int __owner;

unsigned __nusers;



int __kind;

int __spins;
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
char __size[40];
long __align;
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutexattr_t {
char __size[4];
int __align;
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union pthread_cond_t {

struct {
int __lock;
unsigned __futex;
unsigned long long __total_seq;
unsigned long long __wakeup_seq;
unsigned long long __woken_seq;
void *__mutex;
unsigned __nwaiters;
unsigned __broadcast_seq;
} __data;
char __size[48];
long long __align;
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union pthread_condattr_t {
char __size[4];
int __align;
} pthread_condattr_t; }



extern "C" { typedef unsigned pthread_key_t; }



extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union pthread_rwlock_t {


struct {
int __lock;
unsigned __nr_readers;
unsigned __readers_wakeup;
unsigned __writer_wakeup;
unsigned __nr_readers_queued;
unsigned __nr_writers_queued;
int __writer;
int __shared;
unsigned long __pad1;
unsigned long __pad2;


unsigned __flags;
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
long __align;
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union pthread_rwlockattr_t {
char __size[8];
long __align;
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrier_t {
char __size[32];
long __align;
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrierattr_t {
char __size[4];
int __align;
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();


extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw();




extern "C" char *setstate(char *) throw();
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {

int32_t *fptr;
int32_t *rptr;
int32_t *state;
int rand_type;
int rand_deg;
int rand_sep;
int32_t *end_ptr;
}; }

extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw();


extern "C" int srandom_r(unsigned, random_data *) throw();


extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw();




extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw();
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();

extern "C" void srand(unsigned) throw();




extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
extern "C" double erand48(unsigned short [3]) throw();


extern "C" long lrand48() throw();
extern "C" long nrand48(unsigned short [3]) throw();



extern "C" long mrand48() throw();
extern "C" long jrand48(unsigned short [3]) throw();



extern "C" void srand48(long) throw();
extern "C" unsigned short *seed48(unsigned short [3]) throw();

extern "C" void lcong48(unsigned short [7]) throw();
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {

unsigned short __x[3];
unsigned short __old_x[3];
unsigned short __c;
unsigned short __init;
unsigned long long __a;
}; }


extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw();

extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw();




extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw();


extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw();


extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw();


extern "C" int seed48_r(unsigned short [3], drand48_data *) throw();


extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw();
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));

extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw();


extern "C" void free(void *) throw();




extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 502 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));




extern "C" int posix_memalign(void **, size_t, size_t) throw();
# 513 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));



extern "C" int atexit(void (*)(void)) throw();
# 523 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw();
# 531 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 538 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 545 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw();




extern "C" char *__secure_getenv(const char *) throw();
# 557 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw();
# 563 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw();



extern "C" int unsetenv(const char *) throw();
# 574 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 583 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw();
# 594 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *);
# 604 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *);
# 614 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw();
# 625 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int);
# 635 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int);
# 645 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 652 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw();
# 662 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 670 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }


extern "C" { typedef __compar_fn_t comparison_fn_t; }



extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 683 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t);
# 689 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t);


extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *);
# 699 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));
extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));
# 713 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));

extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 721 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 735 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw();
# 741 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw();
# 747 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw();
# 753 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw();


extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw();


extern "C" char *qgcvt(long double, int, char *) throw();
# 765 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();


extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();



extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();



extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 787 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();


extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();



extern "C" int wctomb(char *, wchar_t) throw();



extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();


extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 812 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw();
# 823 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw();
# 832 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw();
# 840 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 848 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();



extern "C" int unlockpt(int) throw();




extern "C" char *ptsname(int) throw();
# 864 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw();



extern "C" int getpt();
# 875 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw();
# 74 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {

template<class _Iterator, class _Container> class __normal_iterator;


}

namespace std __attribute__((visibility("default"))) {

struct __true_type { };
struct __false_type { };

template<bool __T0>
struct __truth_type {
typedef __false_type __type; };


template<> struct __truth_type< true> {
typedef __true_type __type; };



template<class _Sp, class _Tp>
struct __traitor {

enum __cuda___value { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
typedef typename __truth_type< (((bool)_Sp::__value) || ((bool)_Tp::__value))> ::__type __type;
};



template<class _Sp, class _Tp>
struct __traitand {

enum __cuda___value { __value = (((bool)_Sp::__value) && ((bool)_Tp::__value))};
typedef typename __truth_type< (((bool)_Sp::__value) && ((bool)_Tp::__value))> ::__type __type;
};


template<class , class >
struct __are_same {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Tp>
struct __are_same< _Tp, _Tp> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<class _Tp>
struct __is_void {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_void< void> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_integer {

enum __cuda___value { __value};
typedef __false_type __type;
};
# 156 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< signed char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_integer< wchar_t> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_integer< short> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned short> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< int> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< long long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned long long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_floating {

enum __cuda___value { __value};
typedef __false_type __type;
};



template<> struct __is_floating< float> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_floating< double> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_floating< long double> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_pointer {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Tp>
struct __is_pointer< _Tp *> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_normal_iterator {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Iterator, class _Container>
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {


enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {

};




template<class _Tp>
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {

};




template<class _Tp>
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {

};




template<class _Tp>
struct __is_char {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_char< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_char< wchar_t> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<class _Tp>
struct __is_byte {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_byte< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_byte< signed char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_byte< unsigned char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_move_iterator {

enum __cuda___value { __value};
typedef __false_type __type;
};
# 415 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
}
# 43 "/usr/include/c++/4.3/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {


template<bool __T1, class >
struct __enable_if {
};

template<class _Tp>
struct __enable_if< true, _Tp> {
typedef _Tp __type; };



template<bool _Cond, class _Iftrue, class _Iffalse>
struct __conditional_type {
typedef _Iftrue __type; };

template<class _Iftrue, class _Iffalse>
struct __conditional_type< false, _Iftrue, _Iffalse> {
typedef _Iffalse __type; };



template<class _Tp>
struct __add_unsigned {


private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;


public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
};


template<> struct __add_unsigned< char> {
typedef unsigned char __type; };


template<> struct __add_unsigned< signed char> {
typedef unsigned char __type; };


template<> struct __add_unsigned< short> {
typedef unsigned short __type; };


template<> struct __add_unsigned< int> {
typedef unsigned __type; };


template<> struct __add_unsigned< long> {
typedef unsigned long __type; };


template<> struct __add_unsigned< long long> {
typedef unsigned long long __type; };



template<> struct __add_unsigned< bool> ;


template<> struct __add_unsigned< wchar_t> ;



template<class _Tp>
struct __remove_unsigned {


private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;


public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
};


template<> struct __remove_unsigned< char> {
typedef signed char __type; };


template<> struct __remove_unsigned< unsigned char> {
typedef signed char __type; };


template<> struct __remove_unsigned< unsigned short> {
typedef short __type; };


template<> struct __remove_unsigned< unsigned> {
typedef int __type; };


template<> struct __remove_unsigned< unsigned long> {
typedef long __type; };


template<> struct __remove_unsigned< unsigned long long> {
typedef long long __type; };



template<> struct __remove_unsigned< bool> ;


template<> struct __remove_unsigned< wchar_t> ;



template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }

template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }



template<class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
struct __promote {
typedef double __type; };

template<class _Tp>
struct __promote< _Tp, false> {
typedef _Tp __type; };

template<class _Tp, class _Up>
struct __promote_2 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;


public: typedef __typeof__((__type1() + __type2())) __type;
};

template<class _Tp, class _Up, class _Vp>
struct __promote_3 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;


public: typedef __typeof__(((__type1() + __type2()) + __type3())) __type;
};

template<class _Tp, class _Up, class _Vp, class _Wp>
struct __promote_4 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;


public: typedef __typeof__((((__type1() + __type2()) + __type3()) + __type4())) __type;
};

}
# 82 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {



template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );

template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }


inline double abs(double __x)
{ return __builtin_fabs(__x); }


inline float abs(float __x)
{ return __builtin_fabsf(__x); }


inline long double abs(long double __x)
{ return __builtin_fabsl(__x); }

using ::acos;


inline float acos(float __x)
{ return __builtin_acosf(__x); }


inline long double acos(long double __x)
{ return __builtin_acosl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }

using ::asin;


inline float asin(float __x)
{ return __builtin_asinf(__x); }


inline long double asin(long double __x)
{ return __builtin_asinl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }

using ::atan;


inline float atan(float __x)
{ return __builtin_atanf(__x); }


inline long double atan(long double __x)
{ return __builtin_atanl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }

using ::atan2;


inline float atan2(float __y, float __x)
{ return __builtin_atan2f(__y, __x); }


inline long double atan2(long double __y, long double __x)
{ return __builtin_atan2l(__y, __x); }

template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __traitand < __is_arithmetic < _Tp >,
            __is_arithmetic < _Up > > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }

using ::ceil;


inline float ceil(float __x)
{ return __builtin_ceilf(__x); }


inline long double ceil(long double __x)
{ return __builtin_ceill(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }

using ::cos;


inline float cos(float __x)
{ return __builtin_cosf(__x); }


inline long double cos(long double __x)
{ return __builtin_cosl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }

using ::cosh;


inline float cosh(float __x)
{ return __builtin_coshf(__x); }


inline long double cosh(long double __x)
{ return __builtin_coshl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }

using ::exp;


inline float exp(float __x)
{ return __builtin_expf(__x); }


inline long double exp(long double __x)
{ return __builtin_expl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }

using ::fabs;


inline float fabs(float __x)
{ return __builtin_fabsf(__x); }


inline long double fabs(long double __x)
{ return __builtin_fabsl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }

using ::floor;


inline float floor(float __x)
{ return __builtin_floorf(__x); }


inline long double floor(long double __x)
{ return __builtin_floorl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }

using ::fmod;


inline float fmod(float __x, float __y)
{ return __builtin_fmodf(__x, __y); }


inline long double fmod(long double __x, long double __y)
{ return __builtin_fmodl(__x, __y); }

using ::frexp;


inline float frexp(float __x, int *__exp)
{ return __builtin_frexpf(__x, __exp); }


inline long double frexp(long double __x, int *__exp)
{ return __builtin_frexpl(__x, __exp); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }

using ::ldexp;


inline float ldexp(float __x, int __exp)
{ return __builtin_ldexpf(__x, __exp); }


inline long double ldexp(long double __x, int __exp)
{ return __builtin_ldexpl(__x, __exp); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }

using ::log;


inline float log(float __x)
{ return __builtin_logf(__x); }


inline long double log(long double __x)
{ return __builtin_logl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }

using ::log10;


inline float log10(float __x)
{ return __builtin_log10f(__x); }


inline long double log10(long double __x)
{ return __builtin_log10l(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }

using ::modf;


inline float modf(float __x, float *__iptr)
{ return __builtin_modff(__x, __iptr); }


inline long double modf(long double __x, long double *__iptr)
{ return __builtin_modfl(__x, __iptr); }

using ::pow;


inline float pow(float __x, float __y)
{ return __builtin_powf(__x, __y); }


inline long double pow(long double __x, long double __y)
{ return __builtin_powl(__x, __y); }



inline double pow(double __x, int __i)
{ return __builtin_powi(__x, __i); }


inline float pow(float __x, int __n)
{ return __builtin_powif(__x, __n); }


inline long double pow(long double __x, int __n)
{ return __builtin_powil(__x, __n); }

template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __traitand < __is_arithmetic < _Tp >,
            __is_arithmetic < _Up > > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }

using ::sin;


inline float sin(float __x)
{ return __builtin_sinf(__x); }


inline long double sin(long double __x)
{ return __builtin_sinl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }

using ::sinh;


inline float sinh(float __x)
{ return __builtin_sinhf(__x); }


inline long double sinh(long double __x)
{ return __builtin_sinhl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }

using ::sqrt;


inline float sqrt(float __x)
{ return __builtin_sqrtf(__x); }


inline long double sqrt(long double __x)
{ return __builtin_sqrtl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }

using ::tan;


inline float tan(float __x)
{ return __builtin_tanf(__x); }


inline long double tan(long double __x)
{ return __builtin_tanl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }

using ::tanh;


inline float tanh(float __x)
{ return __builtin_tanhf(__x); }


inline long double tanh(long double __x)
{ return __builtin_tanhl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }

}
# 483 "/usr/include/c++/4.3/cmath" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {

template < typename _Tp >
    inline int
    __capture_fpclassify ( _Tp __f ) { return ( sizeof ( __f ) == sizeof ( float ) ? __fpclassifyf ( __f ) : sizeof ( __f ) == sizeof ( double ) ? __fpclassify ( __f ) : __fpclassifyl ( __f ) ); }

}
# 505 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return :: __gnu_cxx :: __capture_fpclassify ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }

}
# 40 "/usr/include/c++/4.3/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {

template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }

}
# 54 "/usr/include/c++/4.3/cstddef" 3
namespace std __attribute__((visibility("default"))) {

using ::ptrdiff_t;
using ::size_t;

}
# 105 "/usr/include/c++/4.3/cstdlib" 3
namespace std __attribute__((visibility("default"))) {

using ::div_t;
using ::ldiv_t;

using ::abort;
using ::abs;
using ::atexit;
using ::atof;
using ::atoi;
using ::atol;
using ::bsearch;
using ::calloc;
using ::div;
using ::exit;
using ::free;
using ::getenv;
using ::labs;
using ::ldiv;
using ::malloc;

using ::mblen;
using ::mbstowcs;
using ::mbtowc;

using ::qsort;
using ::rand;
using ::realloc;
using ::srand;
using ::strtod;
using ::strtol;
using ::strtoul;
using ::system;

using ::wcstombs;
using ::wctomb;



inline long abs(long __i) { return labs(__i); }


inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }

}
# 162 "/usr/include/c++/4.3/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {


using ::lldiv_t;
# 171 "/usr/include/c++/4.3/cstdlib" 3
using ::_Exit;



inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }


using ::llabs;


inline lldiv_t div(long long __n, long long __d)
{ auto lldiv_t __q; (__q.quot) = __n / __d; (__q.rem) = __n % __d; return __q; }

using ::lldiv;
# 195 "/usr/include/c++/4.3/cstdlib" 3
using ::atoll;
using ::strtoll;
using ::strtoull;

using ::strtof;
using ::strtold;

}

namespace std __attribute__((visibility("default"))) {


using __gnu_cxx::lldiv_t;

using __gnu_cxx::_Exit;
using __gnu_cxx::abs;

using __gnu_cxx::llabs;
using __gnu_cxx::div;
using __gnu_cxx::lldiv;

using __gnu_cxx::atoll;
using __gnu_cxx::strtof;
using __gnu_cxx::strtoll;
using __gnu_cxx::strtoull;
using __gnu_cxx::strtold;

}
# 434 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));
# 448 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 473 "/home/normal/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {

extern inline long long abs(long long) __attribute__((visibility("default")));
}

namespace std {

template<class T> extern inline T __pow_helper(T, int);
template<class T> extern inline T __cmath_power(T, unsigned);
}

using std::abs;
using std::fabs;
using std::ceil;
using std::floor;
using std::sqrt;
using std::pow;
using std::log;
using std::log10;
using std::fmod;
using std::modf;
using std::exp;
using std::frexp;
using std::ldexp;
using std::asin;
using std::sin;
using std::sinh;
using std::acos;
using std::cos;
using std::cosh;
using std::atan;
using std::atan2;
using std::tan;
using std::tanh;
# 560 "/home/normal/cuda/bin/../include/math_functions.h"
namespace std {


extern inline long abs(long) __attribute__((visibility("default")));
extern inline float abs(float) __attribute__((visibility("default")));
extern inline double abs(double) __attribute__((visibility("default")));
extern inline float fabs(float) __attribute__((visibility("default")));
extern inline float ceil(float) __attribute__((visibility("default")));
extern inline float floor(float) __attribute__((visibility("default")));
extern inline float sqrt(float) __attribute__((visibility("default")));
extern inline float pow(float, float) __attribute__((visibility("default")));
extern inline float pow(float, int) __attribute__((visibility("default")));
extern inline double pow(double, int) __attribute__((visibility("default")));
extern inline float log(float) __attribute__((visibility("default")));
extern inline float log10(float) __attribute__((visibility("default")));
extern inline float fmod(float, float) __attribute__((visibility("default")));
extern inline float modf(float, float *) __attribute__((visibility("default")));
extern inline float exp(float) __attribute__((visibility("default")));
extern inline float frexp(float, int *) __attribute__((visibility("default")));
extern inline float ldexp(float, int) __attribute__((visibility("default")));
extern inline float asin(float) __attribute__((visibility("default")));
extern inline float sin(float) __attribute__((visibility("default")));
extern inline float sinh(float) __attribute__((visibility("default")));
extern inline float acos(float) __attribute__((visibility("default")));
extern inline float cos(float) __attribute__((visibility("default")));
extern inline float cosh(float) __attribute__((visibility("default")));
extern inline float atan(float) __attribute__((visibility("default")));
extern inline float atan2(float, float) __attribute__((visibility("default")));
extern inline float tan(float) __attribute__((visibility("default")));
extern inline float tanh(float) __attribute__((visibility("default")));


}


static inline float logb(float a)
{
return logbf(a);
}

static inline int ilogb(float a)
{
return ilogbf(a);
}

static inline float scalbn(float a, int b)
{
return scalbnf(a, b);
}

static inline float scalbln(float a, long b)
{
return scalblnf(a, b);
}

static inline float exp2(float a)
{
return exp2f(a);
}

static inline float exp10(float a)
{
return exp10f(a);
}

static inline float expm1(float a)
{
return expm1f(a);
}

static inline float log2(float a)
{
return log2f(a);
}

static inline float log1p(float a)
{
return log1pf(a);
}

static inline float rsqrt(float a)
{
return rsqrtf(a);
}

static inline float acosh(float a)
{
return acoshf(a);
}

static inline float asinh(float a)
{
return asinhf(a);
}

static inline float atanh(float a)
{
return atanhf(a);
}

static inline float hypot(float a, float b)
{
return hypotf(a, b);
}

static inline float cbrt(float a)
{
return cbrtf(a);
}

static inline void sincos(float a, float *sptr, float *cptr)
{
sincosf(a, sptr, cptr);
}

static inline float erf(float a)
{
return erff(a);
}

static inline float erfinv(float a)
{
return erfinvf(a);
}

static inline float erfc(float a)
{
return erfcf(a);
}

static inline float erfcinv(float a)
{
return erfcinvf(a);
}

static inline float lgamma(float a)
{
return lgammaf(a);
}

static inline float tgamma(float a)
{
return tgammaf(a);
}

static inline float copysign(float a, float b)
{
return copysignf(a, b);
}

static inline double copysign(double a, float b)
{
return copysign(a, (double)b);
}

static inline float copysign(float a, double b)
{
return copysignf(a, (float)b);
}

static inline float nextafter(float a, float b)
{
return nextafterf(a, b);
}

static inline float remainder(float a, float b)
{
return remainderf(a, b);
}

static inline float remquo(float a, float b, int *quo)
{
return remquof(a, b, quo);
}

static inline float round(float a)
{
return roundf(a);
}

static inline long lround(float a)
{
return lroundf(a);
}

static inline long long llround(float a)
{
return llroundf(a);
}

static inline float trunc(float a)
{
return truncf(a);
}

static inline float rint(float a)
{
return rintf(a);
}

static inline long lrint(float a)
{
return lrintf(a);
}

static inline long long llrint(float a)
{
return llrintf(a);
}

static inline float nearbyint(float a)
{
return nearbyintf(a);
}

static inline float fdim(float a, float b)
{
return fdimf(a, b);
}

static inline float fma(float a, float b, float c)
{
return fmaf(a, b, c);
}

static inline unsigned min(unsigned a, unsigned b)
{
return umin(a, b);
}

static inline unsigned min(int a, unsigned b)
{
return umin((unsigned)a, b);
}

static inline unsigned min(unsigned a, int b)
{
return umin(a, (unsigned)b);
}

static inline float min(float a, float b)
{
return fminf(a, b);
}

static inline double min(double a, double b)
{
return fmin(a, b);
}

static inline double min(float a, double b)
{
return fmin((double)a, b);
}

static inline double min(double a, float b)
{
return fmin(a, (double)b);
}

static inline unsigned max(unsigned a, unsigned b)
{
return umax(a, b);
}

static inline unsigned max(int a, unsigned b)
{
return umax((unsigned)a, b);
}

static inline unsigned max(unsigned a, int b)
{
return umax(a, (unsigned)b);
}

static inline float max(float a, float b)
{
return fmaxf(a, b);
}

static inline double max(double a, double b)
{
return fmax(a, b);
}

static inline double max(float a, double b)
{
return fmax((double)a, b);
}

static inline double max(double a, float b)
{
return fmax(a, (double)b);
}
# 59 "/home/normal/cuda/bin/../include/cuda_texture_types.h"
template<class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
struct texture : public textureReference {

texture(int norm = 0, cudaTextureFilterMode
fMode = cudaFilterModePoint, cudaTextureAddressMode
aMode = cudaAddressModeClamp)
{
(this->normalized) = norm;
(this->filterMode) = fMode;
((this->addressMode)[0]) = aMode;
((this->addressMode)[1]) = aMode;
((this->addressMode)[2]) = aMode;
(this->channelDesc) = cudaCreateChannelDesc< T> ();
}

texture(int norm, cudaTextureFilterMode
fMode, cudaTextureAddressMode
aMode, cudaChannelFormatDesc
desc)
{
(this->normalized) = norm;
(this->filterMode) = fMode;
((this->addressMode)[0]) = aMode;
((this->addressMode)[1]) = aMode;
((this->addressMode)[2]) = aMode;
(this->channelDesc) = desc;
}
};
# 53 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 55 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 57 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 59 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 61 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 98 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaSetupArgument(T
arg, size_t
offset)

{
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
}
# 120 "/home/normal/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
symbol, const void *
src, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyHostToDevice)

{
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
}

template<class T> inline cudaError_t
cudaMemcpyToSymbol(const T &
symbol, const void *
src, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyHostToDevice)

{
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
}

static inline cudaError_t cudaMemcpyToSymbolAsync(char *
symbol, const void *
src, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
}

template<class T> inline cudaError_t
cudaMemcpyToSymbolAsync(const T &
symbol, const void *
src, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
}
# 174 "/home/normal/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
dst, char *
symbol, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyDeviceToHost)

{
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
}

template<class T> inline cudaError_t
cudaMemcpyFromSymbol(void *
dst, const T &
symbol, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyDeviceToHost)

{
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
}

static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
dst, char *
symbol, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
}

template<class T> inline cudaError_t
cudaMemcpyFromSymbolAsync(void *
dst, const T &
symbol, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
}

static inline cudaError_t cudaGetSymbolAddress(void **
devPtr, char *
symbol)

{
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
}
# 252 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaGetSymbolAddress(void **
devPtr, const T &
symbol)

{
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
}
# 267 "/home/normal/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
size, char *
symbol)

{
return cudaGetSymbolSize(size, (const char *)symbol);
}
# 296 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaGetSymbolSize(size_t *
size, const T &
symbol)

{
return cudaGetSymbolSize(size, (const char *)(&symbol));
}
# 352 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, const cudaChannelFormatDesc &
desc, size_t
size = (((2147483647) * 2U) + 1U))

{
return cudaBindTexture(offset, &tex, devPtr, (&desc), size);
}
# 396 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, size_t
size = (((2147483647) * 2U) + 1U))

{
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
}
# 451 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture2D(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, const cudaChannelFormatDesc &
desc, size_t
width, size_t
height, size_t
pitch)

{
return cudaBindTexture2D(offset, &tex, devPtr, (&desc), width, height, pitch);
}
# 493 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTextureToArray(const texture< T, dim, readMode> &
tex, const cudaArray *
array, const cudaChannelFormatDesc &
desc)

{
return cudaBindTextureToArray(&tex, array, (&desc));
}
# 530 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTextureToArray(const texture< T, dim, readMode> &
tex, const cudaArray *
array)

{
auto cudaChannelFormatDesc desc;
auto cudaError_t err = cudaGetChannelDesc(&desc, array);

return (err == (cudaSuccess)) ? (cudaBindTextureToArray(tex, array, desc)) : err;
}
# 568 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaUnbindTexture(const texture< T, dim, readMode> &
tex)

{
return cudaUnbindTexture(&tex);
}
# 607 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaGetTextureAlignmentOffset(size_t *
offset, const texture< T, dim, readMode> &
tex)

{
return cudaGetTextureAlignmentOffset(offset, &tex);
}
# 649 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaLaunch(T *
entry)

{
return cudaLaunch((const char *)entry);
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;



extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 90 "/usr/include/wchar.h" 3
extern "C" { typedef
# 79 "/usr/include/wchar.h" 3
struct __mbstate_t {
int __count;

union {

unsigned __wch;



char __wchb[4];
} __value;
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct _G_fpos_t {
__off_t __pos;
__mbstate_t __state;
} _G_fpos_t; }




extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct _G_fpos64_t {
__off64_t __pos;
__mbstate_t __state;
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
extern "C" { typedef int _G_int32_t; }
extern "C" { typedef unsigned short _G_uint16_t; }
extern "C" { typedef unsigned _G_uint32_t; }
# 43 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
_IO_marker *_next;
_IO_FILE *_sbuf;



int _pos;
# 203 "/usr/include/libio.h" 3
}; }


enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
int _flags;




char *_IO_read_ptr;
char *_IO_read_end;
char *_IO_read_base;
char *_IO_write_base;
char *_IO_write_ptr;
char *_IO_write_end;
char *_IO_buf_base;
char *_IO_buf_end;

char *_IO_save_base;
char *_IO_backup_base;
char *_IO_save_end;

_IO_marker *_markers;

_IO_FILE *_chain;

int _fileno;



int _flags2;

__off_t _old_offset;



unsigned short _cur_column;
signed char _vtable_offset;
char _shortbuf[1];



_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
void *__pad2;
void *__pad3;
void *__pad4;
size_t __pad5;

int _mode;

char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];

}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;

extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }


extern "C" { typedef int __io_close_fn(void *); }




extern "C" { typedef __io_read_fn cookie_read_function_t; }
extern "C" { typedef __io_write_fn cookie_write_function_t; }
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct _IO_cookie_io_functions_t {
__io_read_fn *read;
__io_write_fn *write;
__io_seek_fn *seek;
__io_close_fn *close;
} _IO_cookie_io_functions_t; }
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }

struct _IO_cookie_file;


extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
extern "C" int __uflow(_IO_FILE *);
extern "C" int __overflow(_IO_FILE *, int);
# 458 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
extern "C" int _IO_putc(int, _IO_FILE *);
extern "C" int _IO_feof(_IO_FILE *) throw();
extern "C" int _IO_ferror(_IO_FILE *) throw();

extern "C" int _IO_peekc_locked(_IO_FILE *);
# 469 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 488 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);

extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);

extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);

extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);

extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 91 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 97 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 145 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
extern "C" { extern _IO_FILE *stdout; }
extern "C" { extern _IO_FILE *stderr; }
# 155 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();

extern "C" int rename(const char *, const char *) throw();




extern "C" int renameat(int, const char *, int, const char *) throw();
# 172 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 182 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();



extern "C" char *tmpnam(char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 204 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 214 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);




extern "C" int fflush(FILE *);
# 229 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 249 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 255 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 274 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);

extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 283 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 289 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();




extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 300 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 307 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();



extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 318 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();



extern "C" void setlinebuf(FILE *) throw();
# 331 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 337 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);

extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 346 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 352 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);

extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 361 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();



extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 374 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();


extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();


extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 390 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);


extern "C" int dprintf(int, const char *__restrict__, ...);
# 403 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 409 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);

extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 449 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 457 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);



extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 509 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
extern "C" int getc(FILE *);
# 516 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 528 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
extern "C" int getchar_unlocked();
# 539 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 551 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
extern "C" int putc(int, FILE *);
# 558 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 572 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 580 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
extern "C" int putchar_unlocked(int);
# 588 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);


extern "C" int putw(int, FILE *);
# 600 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 608 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 618 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 634 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);


extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 647 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 664 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 671 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 678 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 684 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 695 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 706 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);

extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 718 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);




extern "C" long ftell(FILE *);




extern "C" void rewind(FILE *);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);




extern "C" __off_t ftello(FILE *);
# 767 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);




extern "C" int fsetpos(FILE *, const fpos_t *);
# 787 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
extern "C" __off64_t ftello64(FILE *);
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
extern "C" int fsetpos64(FILE *, const fpos64_t *);




extern "C" void clearerr(FILE *) throw();

extern "C" int feof(FILE *) throw();

extern "C" int ferror(FILE *) throw();




extern "C" void clearerr_unlocked(FILE *) throw();
extern "C" int feof_unlocked(FILE *) throw();
extern "C" int ferror_unlocked(FILE *) throw();
# 815 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
extern "C" { extern const char *const sys_errlist[]; }


extern "C" { extern int _sys_nerr; }
extern "C" { extern const char *const _sys_errlist[]; }
# 827 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();




extern "C" int fileno_unlocked(FILE *) throw();
# 842 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 848 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 854 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 860 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);




struct obstack;


extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();


extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 882 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();



extern "C" int ftrylockfile(FILE *) throw();


extern "C" void funlockfile(FILE *) throw();
# 62 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef unsigned CUdeviceptr; }

extern "C" { typedef int CUdevice; }
extern "C" { typedef struct CUctx_st *CUcontext; }
extern "C" { typedef struct CUmod_st *CUmodule; }
extern "C" { typedef struct CUfunc_st *CUfunction; }
extern "C" { typedef struct CUarray_st *CUarray; }
extern "C" { typedef struct CUtexref_st *CUtexref; }
extern "C" { typedef struct CUevent_st *CUevent; }
extern "C" { typedef struct CUstream_st *CUstream; }
# 90 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 82 "/home/normal/cuda/bin/../include/cuda.h"
enum CUctx_flags_enum {
CU_CTX_SCHED_AUTO,
CU_CTX_SCHED_SPIN,
CU_CTX_SCHED_YIELD,
CU_CTX_SCHED_MASK,
CU_CTX_BLOCKING_SYNC,
CU_CTX_MAP_HOST = 8,
CU_CTX_FLAGS_MASK = 15
} CUctx_flags; }
# 98 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 95 "/home/normal/cuda/bin/../include/cuda.h"
enum CUevent_flags_enum {
CU_EVENT_DEFAULT,
CU_EVENT_BLOCKING_SYNC
} CUevent_flags; }
# 112 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 103 "/home/normal/cuda/bin/../include/cuda.h"
enum CUarray_format_enum {
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
CU_AD_FORMAT_UNSIGNED_INT16,
CU_AD_FORMAT_UNSIGNED_INT32,
CU_AD_FORMAT_SIGNED_INT8 = 8,
CU_AD_FORMAT_SIGNED_INT16,
CU_AD_FORMAT_SIGNED_INT32,
CU_AD_FORMAT_HALF = 16,
CU_AD_FORMAT_FLOAT = 32
} CUarray_format; }
# 121 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 117 "/home/normal/cuda/bin/../include/cuda.h"
enum CUaddress_mode_enum {
CU_TR_ADDRESS_MODE_WRAP,
CU_TR_ADDRESS_MODE_CLAMP,
CU_TR_ADDRESS_MODE_MIRROR
} CUaddress_mode; }
# 129 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 126 "/home/normal/cuda/bin/../include/cuda.h"
enum CUfilter_mode_enum {
CU_TR_FILTER_MODE_POINT,
CU_TR_FILTER_MODE_LINEAR
} CUfilter_mode; }
# 158 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 134 "/home/normal/cuda/bin/../include/cuda.h"
enum CUdevice_attribute_enum {
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,

CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
CU_DEVICE_ATTRIBUTE_INTEGRATED,
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE
} CUdevice_attribute; }
# 174 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 163 "/home/normal/cuda/bin/../include/cuda.h"
struct CUdevprop_st {
int maxThreadsPerBlock;
int maxThreadsDim[3];
int maxGridSize[3];
int sharedMemPerBlock;
int totalConstantMemory;
int SIMDWidth;
int memPitch;
int regsPerBlock;
int clockRate;
int textureAlign;
} CUdevprop; }
# 211 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 179 "/home/normal/cuda/bin/../include/cuda.h"
enum CUfunction_attribute_enum {
# 185 "/home/normal/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 192 "/home/normal/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 198 "/home/normal/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,




CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,




CU_FUNC_ATTRIBUTE_NUM_REGS,

CU_FUNC_ATTRIBUTE_MAX
} CUfunction_attribute; }
# 220 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 216 "/home/normal/cuda/bin/../include/cuda.h"
enum CUmemorytype_enum {
CU_MEMORYTYPE_HOST = 1,
CU_MEMORYTYPE_DEVICE,
CU_MEMORYTYPE_ARRAY
} CUmemorytype; }
# 229 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 225 "/home/normal/cuda/bin/../include/cuda.h"
enum CUcomputemode_enum {
CU_COMPUTEMODE_DEFAULT,
CU_COMPUTEMODE_EXCLUSIVE,
CU_COMPUTEMODE_PROHIBITED
} CUcomputemode; }
# 308 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 234 "/home/normal/cuda/bin/../include/cuda.h"
enum CUjit_option_enum {




CU_JIT_MAX_REGISTERS,
# 251 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 257 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_WALL_TIME,
# 263 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 270 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 276 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 283 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 289 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 295 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,




CU_JIT_TARGET,
# 306 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY

} CUjit_option; }
# 319 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 313 "/home/normal/cuda/bin/../include/cuda.h"
enum CUjit_target_enum {

CU_TARGET_COMPUTE_10,
CU_TARGET_COMPUTE_11,
CU_TARGET_COMPUTE_12,
CU_TARGET_COMPUTE_13
} CUjit_target; }
# 332 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 324 "/home/normal/cuda/bin/../include/cuda.h"
enum CUjit_fallback_enum {


CU_PREFER_PTX,


CU_PREFER_BINARY

} CUjit_fallback; }
# 380 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 343 "/home/normal/cuda/bin/../include/cuda.h"
enum cudaError_enum {

CUDA_SUCCESS,
CUDA_ERROR_INVALID_VALUE,
CUDA_ERROR_OUT_OF_MEMORY,
CUDA_ERROR_NOT_INITIALIZED,
CUDA_ERROR_DEINITIALIZED,

CUDA_ERROR_NO_DEVICE = 100,
CUDA_ERROR_INVALID_DEVICE,

CUDA_ERROR_INVALID_IMAGE = 200,
CUDA_ERROR_INVALID_CONTEXT,
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
CUDA_ERROR_MAP_FAILED = 205,
CUDA_ERROR_UNMAP_FAILED,
CUDA_ERROR_ARRAY_IS_MAPPED,
CUDA_ERROR_ALREADY_MAPPED,
CUDA_ERROR_NO_BINARY_FOR_GPU,
CUDA_ERROR_ALREADY_ACQUIRED,
CUDA_ERROR_NOT_MAPPED,

CUDA_ERROR_INVALID_SOURCE = 300,
CUDA_ERROR_FILE_NOT_FOUND,

CUDA_ERROR_INVALID_HANDLE = 400,

CUDA_ERROR_NOT_FOUND = 500,

CUDA_ERROR_NOT_READY = 600,

CUDA_ERROR_LAUNCH_FAILED = 700,
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
CUDA_ERROR_LAUNCH_TIMEOUT,
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,

CUDA_ERROR_UNKNOWN = 999
} CUresult; }
# 426 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 406 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY2D_st {

unsigned srcXInBytes;
unsigned srcY;
CUmemorytype srcMemoryType;
const void *srcHost;
CUdeviceptr srcDevice;
CUarray srcArray;
unsigned srcPitch;

unsigned dstXInBytes;
unsigned dstY;
CUmemorytype dstMemoryType;
void *dstHost;
CUdeviceptr dstDevice;
CUarray dstArray;
unsigned dstPitch;

unsigned WidthInBytes;
unsigned Height;
} CUDA_MEMCPY2D; }
# 460 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 431 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY3D_st {

unsigned srcXInBytes;
unsigned srcY;
unsigned srcZ;
unsigned srcLOD;
CUmemorytype srcMemoryType;
const void *srcHost;
CUdeviceptr srcDevice;
CUarray srcArray;
void *reserved0;
unsigned srcPitch;
unsigned srcHeight;

unsigned dstXInBytes;
unsigned dstY;
unsigned dstZ;
unsigned dstLOD;
CUmemorytype dstMemoryType;
void *dstHost;
CUdeviceptr dstDevice;
CUarray dstArray;
void *reserved1;
unsigned dstPitch;
unsigned dstHeight;

unsigned WidthInBytes;
unsigned Height;
unsigned Depth;
} CUDA_MEMCPY3D; }
# 473 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 466 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR {
unsigned Width;
unsigned Height;

CUarray_format Format;

unsigned NumChannels;
} CUDA_ARRAY_DESCRIPTOR; }
# 489 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 479 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR {
unsigned Width;
unsigned Height;
unsigned Depth;

CUarray_format Format;

unsigned NumChannels;

unsigned Flags;
} CUDA_ARRAY3D_DESCRIPTOR; }
# 528 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuInit(unsigned);




extern "C" CUresult cuDriverGetVersion(int *);
# 541 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice *, int);
extern "C" CUresult cuDeviceGetCount(int *);
extern "C" CUresult cuDeviceGetName(char *, int, CUdevice);
extern "C" CUresult cuDeviceComputeCapability(int *, int *, CUdevice);
extern "C" CUresult cuDeviceTotalMem(unsigned *, CUdevice);
extern "C" CUresult cuDeviceGetProperties(CUdevprop *, CUdevice);
extern "C" CUresult cuDeviceGetAttribute(int *, CUdevice_attribute, CUdevice);
# 555 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxCreate(CUcontext *, unsigned, CUdevice);
extern "C" CUresult cuCtxDestroy(CUcontext);
extern "C" CUresult cuCtxAttach(CUcontext *, unsigned);
extern "C" CUresult cuCtxDetach(CUcontext);
extern "C" CUresult cuCtxPushCurrent(CUcontext);
extern "C" CUresult cuCtxPopCurrent(CUcontext *);
extern "C" CUresult cuCtxGetDevice(CUdevice *);
extern "C" CUresult cuCtxSynchronize();
# 571 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule *, const char *);
extern "C" CUresult cuModuleLoadData(CUmodule *, const void *);
extern "C" CUresult cuModuleLoadDataEx(CUmodule *, const void *, unsigned, CUjit_option *, void **);
extern "C" CUresult cuModuleLoadFatBinary(CUmodule *, const void *);
extern "C" CUresult cuModuleUnload(CUmodule);
extern "C" CUresult cuModuleGetFunction(CUfunction *, CUmodule, const char *);
extern "C" CUresult cuModuleGetGlobal(CUdeviceptr *, unsigned *, CUmodule, const char *);
extern "C" CUresult cuModuleGetTexRef(CUtexref *, CUmodule, const char *);
# 586 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetInfo(unsigned *, unsigned *);

extern "C" CUresult cuMemAlloc(CUdeviceptr *, unsigned);
extern "C" CUresult cuMemAllocPitch(CUdeviceptr *, unsigned *, unsigned, unsigned, unsigned);
# 597 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFree(CUdeviceptr);
extern "C" CUresult cuMemGetAddressRange(CUdeviceptr *, unsigned *, CUdeviceptr);

extern "C" CUresult cuMemAllocHost(void **, unsigned);
extern "C" CUresult cuMemFreeHost(void *);

extern "C" CUresult cuMemHostAlloc(void **, size_t, unsigned);

extern "C" CUresult cuMemHostGetDevicePointer(CUdeviceptr *, void *, unsigned);
# 618 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD(CUdeviceptr, const void *, unsigned);
extern "C" CUresult cuMemcpyDtoH(void *, CUdeviceptr, unsigned);


extern "C" CUresult cuMemcpyDtoD(CUdeviceptr, CUdeviceptr, unsigned);


extern "C" CUresult cuMemcpyDtoA(CUarray, unsigned, CUdeviceptr, unsigned);
extern "C" CUresult cuMemcpyAtoD(CUdeviceptr, CUarray, unsigned, unsigned);


extern "C" CUresult cuMemcpyHtoA(CUarray, unsigned, const void *, unsigned);
extern "C" CUresult cuMemcpyAtoH(void *, CUarray, unsigned, unsigned);


extern "C" CUresult cuMemcpyAtoA(CUarray, unsigned, CUarray, unsigned, unsigned);



extern "C" CUresult cuMemcpy2D(const CUDA_MEMCPY2D *);
extern "C" CUresult cuMemcpy2DUnaligned(const CUDA_MEMCPY2D *);



extern "C" CUresult cuMemcpy3D(const CUDA_MEMCPY3D *);
# 657 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync(CUdeviceptr, const void *, unsigned, CUstream);

extern "C" CUresult cuMemcpyDtoHAsync(void *, CUdeviceptr, unsigned, CUstream);



extern "C" CUresult cuMemcpyHtoAAsync(CUarray, unsigned, const void *, unsigned, CUstream);

extern "C" CUresult cuMemcpyAtoHAsync(void *, CUarray, unsigned, unsigned, CUstream);



extern "C" CUresult cuMemcpy2DAsync(const CUDA_MEMCPY2D *, CUstream);


extern "C" CUresult cuMemcpy3DAsync(const CUDA_MEMCPY3D *, CUstream);
# 679 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8(CUdeviceptr, unsigned char, unsigned);
extern "C" CUresult cuMemsetD16(CUdeviceptr, unsigned short, unsigned);
extern "C" CUresult cuMemsetD32(CUdeviceptr, unsigned, unsigned);

extern "C" CUresult cuMemsetD2D8(CUdeviceptr, unsigned, unsigned char, unsigned, unsigned);
extern "C" CUresult cuMemsetD2D16(CUdeviceptr, unsigned, unsigned short, unsigned, unsigned);
extern "C" CUresult cuMemsetD2D32(CUdeviceptr, unsigned, unsigned, unsigned, unsigned);
# 694 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction, int, int, int);
extern "C" CUresult cuFuncSetSharedSize(CUfunction, unsigned);
extern "C" CUresult cuFuncGetAttribute(int *, CUfunction_attribute, CUfunction);
# 704 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayCreate(CUarray *, const CUDA_ARRAY_DESCRIPTOR *);
extern "C" CUresult cuArrayGetDescriptor(CUDA_ARRAY_DESCRIPTOR *, CUarray);
extern "C" CUresult cuArrayDestroy(CUarray);

extern "C" CUresult cuArray3DCreate(CUarray *, const CUDA_ARRAY3D_DESCRIPTOR *);
extern "C" CUresult cuArray3DGetDescriptor(CUDA_ARRAY3D_DESCRIPTOR *, CUarray);
# 717 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref *);
extern "C" CUresult cuTexRefDestroy(CUtexref);

extern "C" CUresult cuTexRefSetArray(CUtexref, CUarray, unsigned);
extern "C" CUresult cuTexRefSetAddress(unsigned *, CUtexref, CUdeviceptr, unsigned);
extern "C" CUresult cuTexRefSetAddress2D(CUtexref, const CUDA_ARRAY_DESCRIPTOR *, CUdeviceptr, unsigned);
extern "C" CUresult cuTexRefSetFormat(CUtexref, CUarray_format, int);
extern "C" CUresult cuTexRefSetAddressMode(CUtexref, int, CUaddress_mode);
extern "C" CUresult cuTexRefSetFilterMode(CUtexref, CUfilter_mode);
extern "C" CUresult cuTexRefSetFlags(CUtexref, unsigned);

extern "C" CUresult cuTexRefGetAddress(CUdeviceptr *, CUtexref);
extern "C" CUresult cuTexRefGetArray(CUarray *, CUtexref);
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode *, CUtexref, int);
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode *, CUtexref);
extern "C" CUresult cuTexRefGetFormat(CUarray_format *, int *, CUtexref);
extern "C" CUresult cuTexRefGetFlags(unsigned *, CUtexref);
# 741 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction, unsigned);
extern "C" CUresult cuParamSeti(CUfunction, int, unsigned);
extern "C" CUresult cuParamSetf(CUfunction, int, float);
extern "C" CUresult cuParamSetv(CUfunction, int, void *, unsigned);
extern "C" CUresult cuParamSetTexRef(CUfunction, int, CUtexref);
# 753 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction);
extern "C" CUresult cuLaunchGrid(CUfunction, int, int);
extern "C" CUresult cuLaunchGridAsync(CUfunction, int, int, CUstream);
# 762 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent *, unsigned);
extern "C" CUresult cuEventRecord(CUevent, CUstream);
extern "C" CUresult cuEventQuery(CUevent);
extern "C" CUresult cuEventSynchronize(CUevent);
extern "C" CUresult cuEventDestroy(CUevent);
extern "C" CUresult cuEventElapsedTime(float *, CUevent, CUevent);
# 774 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream *, unsigned);
extern "C" CUresult cuStreamQuery(CUstream);
extern "C" CUresult cuStreamSynchronize(CUstream);
extern "C" CUresult cuStreamDestroy(CUstream);
# 65 "../../sdk/cutil.h"
enum CUTBoolean {

CUTFalse,
CUTTrue
};
# 77 "../../sdk/cutil.h"
extern "C" void cutFree(void *);
# 95 "../../sdk/cutil.h"
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int);
# 108 "../../sdk/cutil.h"
extern "C" char *cutFindFilePath(const char *, const char *);
# 123 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false);
# 139 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false);
# 155 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false);
# 170 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false);
# 186 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false);
# 202 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false);
# 216 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false);
# 230 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false);
# 242 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false);
# 254 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false);
# 266 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false);
# 278 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false);
# 294 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *);
# 307 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *);
# 321 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *);
# 337 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *);
# 353 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *);
# 368 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *);
# 380 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned);
# 392 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned);
# 405 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned);
# 417 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned);
# 429 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned);
# 441 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned);
# 462 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *);
# 476 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *);
# 490 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *);
# 504 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **);
# 519 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *);
# 533 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int);
# 545 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned);
# 558 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned);
# 571 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned);
# 585 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const float);
# 599 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float);
# 614 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float);
# 627 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned *);
# 636 "../../sdk/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned);
# 644 "../../sdk/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned);
# 652 "../../sdk/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned);
# 660 "../../sdk/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned);
# 669 "../../sdk/cutil.h"
extern "C" float cutGetTimerValue(const unsigned);
# 680 "../../sdk/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned);
# 162 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { typedef float2 cuFloatComplex; }

extern "C" { static inline float cuCrealf(cuFloatComplex x)
{
return x.x;
} }

extern "C" { static inline float cuCimagf(cuFloatComplex x)
{
return x.y;
} }

extern "C" { static inline cuFloatComplex make_cuFloatComplex(float
r, float i)
{
auto cuFloatComplex res;
(res.x) = r;
(res.y) = i;
return res;
} }

extern "C" { static inline cuFloatComplex cuConjf(cuFloatComplex x)
{
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x));
} }
extern "C" { static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex
y)
{
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y));

} }

extern "C" { static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex
y)
{
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y));

} }
# 206 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex
y)
{
auto cuFloatComplex prod;
prod = make_cuFloatComplex(cuCrealf(x) * cuCrealf(y) - cuCimagf(x) * cuCimagf(y), cuCrealf(x) * cuCimagf(y) + cuCimagf(x) * cuCrealf(y));



return prod;
} }
# 222 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex
y)
{
auto cuFloatComplex quot;
auto float s = ((float)fabs((double)cuCrealf(y)) + (float)fabs((double)cuCimagf(y)));

auto float oos = ((1.0F) / s);
auto float ars = (cuCrealf(x) * oos);
auto float ais = (cuCimagf(x) * oos);
auto float brs = (cuCrealf(y) * oos);
auto float bis = (cuCimagf(y) * oos);
s = brs * brs + bis * bis;
oos = (1.0F) / s;
quot = make_cuFloatComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);

return quot;
} }
# 248 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCabsf(cuFloatComplex x)
{
auto float a = cuCrealf(x);
auto float b = cuCimagf(x);
auto float v; auto float w; auto float t;
a = (float)fabs(a);
b = (float)fabs(b);
if (a > b) {
v = a;
w = b;
} else {
v = b;
w = a;
}
t = w / v;
t = (1.0F) + t * t;
t = v * (float)sqrt(t);
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) {
t = v + w;
}
return t;
} }


extern "C" { typedef double2 cuDoubleComplex; }

extern "C" { static inline double cuCreal(cuDoubleComplex x)
{
return x.x;
} }

extern "C" { static inline double cuCimag(cuDoubleComplex x)
{
return x.y;
} }

extern "C" { static inline cuDoubleComplex make_cuDoubleComplex(double
r, double i)
{
auto cuDoubleComplex res;
(res.x) = r;
(res.y) = i;
return res;
} }

extern "C" { static inline cuDoubleComplex cuConj(cuDoubleComplex x)
{
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x));
} }

extern "C" { static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex
y)
{
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y));

} }

extern "C" { static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex
y)
{
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y));

} }
# 317 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex
y)
{
auto cuDoubleComplex prod;
prod = make_cuDoubleComplex(cuCreal(x) * cuCreal(y) - cuCimag(x) * cuCimag(y), cuCreal(x) * cuCimag(y) + cuCimag(x) * cuCreal(y));



return prod;
} }
# 333 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex
y)
{
auto cuDoubleComplex quot;
auto double s = (fabs(cuCreal(y)) + fabs(cuCimag(y)));
auto double oos = ((1.0) / s);
auto double ars = (cuCreal(x) * oos);
auto double ais = (cuCimag(x) * oos);
auto double brs = (cuCreal(y) * oos);
auto double bis = (cuCimag(y) * oos);
s = brs * brs + bis * bis;
oos = (1.0) / s;
quot = make_cuDoubleComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);

return quot;
} }
# 356 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCabs(cuDoubleComplex x)
{
auto double a = cuCreal(x);
auto double b = cuCimag(x);
auto double v; auto double w; auto double t;
a = fabs(a);
b = fabs(b);
if (a > b) {
v = a;
w = b;
} else {
v = b;
w = a;
}
t = w / v;
t = (1.0) + t * t;
t = v * sqrt(t);
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308)))
{
t = v + w;
}
return t;
} }
# 387 "/home/normal/cuda/bin/../include/cuComplex.h"
typedef cuFloatComplex cuComplex;
static inline cuComplex make_cuComplex(float x, float
y)
{
return make_cuFloatComplex(x, y);
}


static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex
c)
{
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c));
}

static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex
c)
{
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c));
}
# 69 "/home/normal/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 59 "/home/normal/cuda/bin/../include/cufft.h"
enum cufftResult_t {
CUFFT_SUCCESS,
CUFFT_INVALID_PLAN,
CUFFT_ALLOC_FAILED,
CUFFT_INVALID_TYPE,
CUFFT_INVALID_VALUE,
CUFFT_INTERNAL_ERROR,
CUFFT_EXEC_FAILED,
CUFFT_SETUP_FAILED,
CUFFT_INVALID_SIZE
} cufftResult; }




extern "C" { typedef unsigned cufftHandle; }


extern "C" { typedef float cufftReal; }




extern "C" { typedef cuComplex cufftComplex; }
# 93 "/home/normal/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 89 "/home/normal/cuda/bin/../include/cufft.h"
enum cufftType_t {
CUFFT_R2C = 42,
CUFFT_C2R = 44,
CUFFT_C2C = 41
} cufftType; }

extern "C" cufftResult cufftPlan1d(cufftHandle *, int, cufftType, int);




extern "C" cufftResult cufftPlan2d(cufftHandle *, int, int, cufftType);



extern "C" cufftResult cufftPlan3d(cufftHandle *, int, int, int, cufftType);



extern "C" cufftResult cufftDestroy(cufftHandle);

extern "C" cufftResult cufftExecC2C(cufftHandle, cufftComplex *, cufftComplex *, int);




extern "C" cufftResult cufftExecR2C(cufftHandle, cufftReal *, cufftComplex *);



extern "C" cufftResult cufftExecC2R(cufftHandle, cufftComplex *, cufftReal *);
# 44 "../../sdk/cutil_inline.h"
inline void __cutilBankChecker(unsigned tidx, unsigned tidy, unsigned tidz, unsigned
bdimx, unsigned bdimy, unsigned bdimz, char *
aname, int index, char *file, int line)
{
cutCheckBankAccess(tidx, tidy, tidz, bdimx, bdimy, bdimz, file, line, aname, index);
}

inline void __cutilCondition(int val, char *file, int line)
{
if ((CUTFalse) == (cutCheckCondition(val, file, line))) {
exit(1);
}
}

inline void __cutilExit(int argc, char **argv)
{
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) {
printf("\nPress ENTER to exit...\n");
fflush(stdout);
fflush(stderr);
getchar();
}
exit(0);
}




inline int cutGetMaxGflopsDeviceId()
{
auto int device_count = 0;
cudaGetDeviceCount(&device_count);

auto cudaDeviceProp device_properties;
auto int max_gflops_device = 0;
auto int max_gflops = 0;

auto int current_device = 0;
cudaGetDeviceProperties(&device_properties, current_device);
max_gflops = device_properties.multiProcessorCount * device_properties.clockRate;
++current_device;

while (current_device < device_count)
{
cudaGetDeviceProperties(&device_properties, current_device);
auto int gflops = (device_properties.multiProcessorCount * device_properties.clockRate);
if (gflops > max_gflops)
{
max_gflops = gflops;
max_gflops_device = current_device;
}
++current_device;
}

return max_gflops_device;
}


inline void __cuSafeCallNoSync(CUresult err, const char *file, const int line)
{
do {
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "cuSafeCallNoSync() Driver API error = %04d from file <%s>, line %i.\n", err, file, line);

exit(-1);
}
} while (0);
}
inline void __cuSafeCall(CUresult err, const char *file, const int line)
{
__cuSafeCallNoSync(err, file, line);
}

inline void __cuCtxSync(const char *file, const int line)
{
do {
auto CUresult err = cuCtxSynchronize();
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "cuCtxSynchronize() API error = %04d in file <%s>, line %i.\n", err, file, line);

exit(-1);
}
} while (0);
}

inline void __cudaSafeCallNoSync(cudaError err, const char *file, const int line)
{
do {
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaSafeCallNoSync() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
} while (0);
}

inline void __cudaSafeCall(cudaError err, const char *file, const int line)
{
do {
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaSafeCall() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
} while (0);
}

inline void __cudaSafeThreadSync(const char *file, const int line)
{
do {
auto cudaError err = cudaThreadSynchronize();
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaThreadSynchronize() Driver API error in file \'%s\' in line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
} while (0);
}

inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
{
do {
if ((CUFFT_SUCCESS) != err) {
fprintf(stderr, "cufftSafeCall() CUFFT error in file <%s>, line %i.\n", file, line);

exit(-1);
}
} while (0);
}

inline void __cutilCheckError(CUTBoolean err, const char *file, const int line)
{
if ((CUTTrue) != err) {
fprintf(stderr, "CUTIL CUDA error in file <%s>, line %i.\n", file, line);

exit(-1);
}
}
inline void __cutilCheckMsg(const char *errorMessage, const char *file, const int line)
{
do {
auto cudaError_t err = cudaGetLastError();
if ((cudaSuccess) != err) {
fprintf(stderr, "cutilCheckMsg() CUTIL CUDA error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
err = cudaThreadSynchronize();
if ((cudaSuccess) != err) {
fprintf(stderr, "cutilCheckMsg cudaThreadSynchronize error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
} while (0);
}
inline void __cutilSafeMalloc(void *pointer, const char *file, const int line)
{
do {
if (!(pointer)) {
fprintf(stderr, "cutilSafeMalloc host malloc failure in file <%s>, line %i\n", file, line);

exit(-1);
}
} while (0);
}
# 214 "../../sdk/cutil_inline.h"
inline void cutilDeviceInit(int ARGC, char **ARGV)
{
auto int deviceCount;
__cudaSafeCallNoSync(cudaGetDeviceCount(&deviceCount), "../../sdk/cutil_inline.h", 217);
if (deviceCount == 0) {
fprintf(stderr, "CUTIL CUDA error: no devices supporting CUDA.\n");
exit(-1);
}
auto int dev = 0;
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
if (dev < 0) { dev = 0; } if (dev > (deviceCount - 1)) { dev = deviceCount - 1; }

auto cudaDeviceProp deviceProp;
__cudaSafeCallNoSync(cudaGetDeviceProperties(&deviceProp, dev), "../../sdk/cutil_inline.h", 227);
if ((deviceProp.major) < 1) {
fprintf(stderr, "cutil error: device does not support CUDA.\n");
exit(-1); }

if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
fprintf(stderr, "Using device %d: %s\n", dev, deviceProp.name); }
__cudaSafeCall(cudaSetDevice(dev), "../../sdk/cutil_inline.h", 234);
}

inline void cutilDeviceInitDrv(int cuDevice, int ARGC, char **ARGV)
{
cuDevice = 0;
auto int deviceCount = 0;
auto CUresult err = cuInit(0);
if ((CUDA_SUCCESS) == err) {
__cuSafeCallNoSync(cuDeviceGetCount(&deviceCount), "../../sdk/cutil_inline.h", 243); }
if (deviceCount == 0) {
fprintf(stderr, "CUTIL DeviceInitDrv error: no devices supporting CUDA\n");
exit(-1);
}
auto int dev = 0;
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
if (dev < 0) { dev = 0; }
if (dev > (deviceCount - 1)) { dev = deviceCount - 1; }
__cuSafeCallNoSync(cuDeviceGet(&cuDevice, dev), "../../sdk/cutil_inline.h", 252);
auto char name[100];
cuDeviceGetName(name, 100, cuDevice);
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
fprintf(stderr, "Using device %d: %s\n", dev, name); }
}




inline void cutilCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
{
do {
auto cudaError_t err = cudaGetLastError();
if ((cudaSuccess) != err) {
fprintf(stderr, "CUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
err = cudaThreadSynchronize();
if ((cudaSuccess) != err) {
fprintf(stderr, "CCUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
} while (0);
}



inline void cutilDrvCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
{
do {
auto CUresult err = cuCtxSynchronize();
if ((CUDA_ERROR_INVALID_CONTEXT) != err) {
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);

exit(-1);
}
err = cuCtxSynchronize();
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);

exit(-1);
}
} while (0);
}
# 98 "/usr/include/c++/4.3/cstdio" 3
namespace std __attribute__((visibility("default"))) {

using ::FILE;
using ::fpos_t;

using ::clearerr;
using ::fclose;
using ::feof;
using ::ferror;
using ::fflush;
using ::fgetc;
using ::fgetpos;
using ::fgets;
using ::fopen;
using ::fprintf;
using ::fputc;
using ::fputs;
using ::fread;
using ::freopen;
using ::fscanf;
using ::fseek;
using ::fsetpos;
using ::ftell;
using ::fwrite;
using ::getc;
using ::getchar;
using ::gets;
using ::perror;
using ::printf;
using ::putc;
using ::putchar;
using ::puts;
using ::remove;
using ::rename;
using ::rewind;
using ::scanf;
using ::setbuf;
using ::setvbuf;
using ::sprintf;
using ::sscanf;
using ::tmpfile;
using ::tmpnam;
using ::ungetc;
using ::vfprintf;
using ::vprintf;
using ::vsprintf;

}
# 155 "/usr/include/c++/4.3/cstdio" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 170 "/usr/include/c++/4.3/cstdio" 3
using ::snprintf;
using ::vfscanf;
using ::vscanf;
using ::vsnprintf;
using ::vsscanf;


}

namespace std __attribute__((visibility("default"))) {

using __gnu_cxx::snprintf;
using __gnu_cxx::vfscanf;
using __gnu_cxx::vscanf;
using __gnu_cxx::vsnprintf;
using __gnu_cxx::vsscanf;

}
# 147 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned GLenum; }
extern "C" { typedef unsigned char GLboolean; }
extern "C" { typedef unsigned GLbitfield; }
extern "C" { typedef void GLvoid; }
extern "C" { typedef signed char GLbyte; }
extern "C" { typedef short GLshort; }
extern "C" { typedef int GLint; }
extern "C" { typedef unsigned char GLubyte; }
extern "C" { typedef unsigned short GLushort; }
extern "C" { typedef unsigned GLuint; }
extern "C" { typedef int GLsizei; }
extern "C" { typedef float GLfloat; }
extern "C" { typedef float GLclampf; }
extern "C" { typedef double GLdouble; }
extern "C" { typedef double GLclampd; }
# 774 "/usr/include/GL/gl.h" 3
extern "C" void glClearIndex(GLfloat) __attribute__((visibility("default")));

extern "C" void glClearColor(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((visibility("default")));

extern "C" void glClear(GLbitfield) __attribute__((visibility("default")));

extern "C" void glIndexMask(GLuint) __attribute__((visibility("default")));

extern "C" void glColorMask(GLboolean, GLboolean, GLboolean, GLboolean) __attribute__((visibility("default")));

extern "C" void glAlphaFunc(GLenum, GLclampf) __attribute__((visibility("default")));

extern "C" void glBlendFunc(GLenum, GLenum) __attribute__((visibility("default")));

extern "C" void glLogicOp(GLenum) __attribute__((visibility("default")));

extern "C" void glCullFace(GLenum) __attribute__((visibility("default")));

extern "C" void glFrontFace(GLenum) __attribute__((visibility("default")));

extern "C" void glPointSize(GLfloat) __attribute__((visibility("default")));

extern "C" void glLineWidth(GLfloat) __attribute__((visibility("default")));

extern "C" void glLineStipple(GLint, GLushort) __attribute__((visibility("default")));

extern "C" void glPolygonMode(GLenum, GLenum) __attribute__((visibility("default")));

extern "C" void glPolygonOffset(GLfloat, GLfloat) __attribute__((visibility("default")));

extern "C" void glPolygonStipple(const GLubyte *) __attribute__((visibility("default")));

extern "C" void glGetPolygonStipple(GLubyte *) __attribute__((visibility("default")));

extern "C" void glEdgeFlag(GLboolean) __attribute__((visibility("default")));

extern "C" void glEdgeFlagv(const GLboolean *) __attribute__((visibility("default")));

extern "C" void glScissor(GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));

extern "C" void glClipPlane(GLenum, const GLdouble *) __attribute__((visibility("default")));

extern "C" void glGetClipPlane(GLenum, GLdouble *) __attribute__((visibility("default")));

extern "C" void glDrawBuffer(GLenum) __attribute__((visibility("default")));

extern "C" void glReadBuffer(GLenum) __attribute__((visibility("default")));

extern "C" void glEnable(GLenum) __attribute__((visibility("default")));

extern "C" void glDisable(GLenum) __attribute__((visibility("default")));

extern "C" GLboolean glIsEnabled(GLenum) __attribute__((visibility("default")));


extern "C" void glEnableClientState(GLenum) __attribute__((visibility("default")));

extern "C" void glDisableClientState(GLenum) __attribute__((visibility("default")));


extern "C" void glGetBooleanv(GLenum, GLboolean *) __attribute__((visibility("default")));

extern "C" void glGetDoublev(GLenum, GLdouble *) __attribute__((visibility("default")));

extern "C" void glGetFloatv(GLenum, GLfloat *) __attribute__((visibility("default")));

extern "C" void glGetIntegerv(GLenum, GLint *) __attribute__((visibility("default")));


extern "C" void glPushAttrib(GLbitfield) __attribute__((visibility("default")));

extern "C" void glPopAttrib() __attribute__((visibility("default")));


extern "C" void glPushClientAttrib(GLbitfield) __attribute__((visibility("default")));

extern "C" void glPopClientAttrib() __attribute__((visibility("default")));


extern "C" GLint glRenderMode(GLenum) __attribute__((visibility("default")));

extern "C" GLenum glGetError() __attribute__((visibility("default")));

extern "C" const GLubyte *glGetString(GLenum) __attribute__((visibility("default")));

extern "C" void glFinish() __attribute__((visibility("default")));

extern "C" void glFlush() __attribute__((visibility("default")));

extern "C" void glHint(GLenum, GLenum) __attribute__((visibility("default")));
# 870 "/usr/include/GL/gl.h" 3
extern "C" void glClearDepth(GLclampd) __attribute__((visibility("default")));

extern "C" void glDepthFunc(GLenum) __attribute__((visibility("default")));

extern "C" void glDepthMask(GLboolean) __attribute__((visibility("default")));

extern "C" void glDepthRange(GLclampd, GLclampd) __attribute__((visibility("default")));
# 883 "/usr/include/GL/gl.h" 3
extern "C" void glClearAccum(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));

extern "C" void glAccum(GLenum, GLfloat) __attribute__((visibility("default")));
# 892 "/usr/include/GL/gl.h" 3
extern "C" void glMatrixMode(GLenum) __attribute__((visibility("default")));

extern "C" void glOrtho(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));



extern "C" void glFrustum(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));



extern "C" void glViewport(GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));


extern "C" void glPushMatrix() __attribute__((visibility("default")));

extern "C" void glPopMatrix() __attribute__((visibility("default")));

extern "C" void glLoadIdentity() __attribute__((visibility("default")));

extern "C" void glLoadMatrixd(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glLoadMatrixf(const GLfloat *) __attribute__((visibility("default")));

extern "C" void glMultMatrixd(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glMultMatrixf(const GLfloat *) __attribute__((visibility("default")));

extern "C" void glRotated(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));

extern "C" void glRotatef(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));


extern "C" void glScaled(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glScalef(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));

extern "C" void glTranslated(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glTranslatef(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 933 "/usr/include/GL/gl.h" 3
extern "C" GLboolean glIsList(GLuint) __attribute__((visibility("default")));

extern "C" void glDeleteLists(GLuint, GLsizei) __attribute__((visibility("default")));

extern "C" GLuint glGenLists(GLsizei) __attribute__((visibility("default")));

extern "C" void glNewList(GLuint, GLenum) __attribute__((visibility("default")));

extern "C" void glEndList() __attribute__((visibility("default")));

extern "C" void glCallList(GLuint) __attribute__((visibility("default")));

extern "C" void glCallLists(GLsizei, GLenum, const GLvoid *) __attribute__((visibility("default")));


extern "C" void glListBase(GLuint) __attribute__((visibility("default")));
# 955 "/usr/include/GL/gl.h" 3
extern "C" void glBegin(GLenum) __attribute__((visibility("default")));

extern "C" void glEnd() __attribute__((visibility("default")));


extern "C" void glVertex2d(GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glVertex2f(GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glVertex2i(GLint, GLint) __attribute__((visibility("default")));
extern "C" void glVertex2s(GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glVertex3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glVertex3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glVertex3i(GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glVertex3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glVertex4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glVertex4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glVertex4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glVertex4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glVertex2dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glVertex2fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glVertex2iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glVertex2sv(const GLshort *) __attribute__((visibility("default")));

extern "C" void glVertex3dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glVertex3fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glVertex3iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glVertex3sv(const GLshort *) __attribute__((visibility("default")));

extern "C" void glVertex4dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glVertex4fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glVertex4iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glVertex4sv(const GLshort *) __attribute__((visibility("default")));


extern "C" void glNormal3b(GLbyte, GLbyte, GLbyte) __attribute__((visibility("default")));
extern "C" void glNormal3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glNormal3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glNormal3i(GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glNormal3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glNormal3bv(const GLbyte *) __attribute__((visibility("default")));
extern "C" void glNormal3dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glNormal3fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glNormal3iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glNormal3sv(const GLshort *) __attribute__((visibility("default")));


extern "C" void glIndexd(GLdouble) __attribute__((visibility("default")));
extern "C" void glIndexf(GLfloat) __attribute__((visibility("default")));
extern "C" void glIndexi(GLint) __attribute__((visibility("default")));
extern "C" void glIndexs(GLshort) __attribute__((visibility("default")));
extern "C" void glIndexub(GLubyte) __attribute__((visibility("default")));

extern "C" void glIndexdv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glIndexfv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glIndexiv(const GLint *) __attribute__((visibility("default")));
extern "C" void glIndexsv(const GLshort *) __attribute__((visibility("default")));
extern "C" void glIndexubv(const GLubyte *) __attribute__((visibility("default")));

extern "C" void glColor3b(GLbyte, GLbyte, GLbyte) __attribute__((visibility("default")));
extern "C" void glColor3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glColor3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glColor3i(GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glColor3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
extern "C" void glColor3ub(GLubyte, GLubyte, GLubyte) __attribute__((visibility("default")));
extern "C" void glColor3ui(GLuint, GLuint, GLuint) __attribute__((visibility("default")));
extern "C" void glColor3us(GLushort, GLushort, GLushort) __attribute__((visibility("default")));

extern "C" void glColor4b(GLbyte, GLbyte, GLbyte, GLbyte) __attribute__((visibility("default")));

extern "C" void glColor4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));

extern "C" void glColor4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));

extern "C" void glColor4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));

extern "C" void glColor4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glColor4ub(GLubyte, GLubyte, GLubyte, GLubyte) __attribute__((visibility("default")));

extern "C" void glColor4ui(GLuint, GLuint, GLuint, GLuint) __attribute__((visibility("default")));

extern "C" void glColor4us(GLushort, GLushort, GLushort, GLushort) __attribute__((visibility("default")));



extern "C" void glColor3bv(const GLbyte *) __attribute__((visibility("default")));
extern "C" void glColor3dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glColor3fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glColor3iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glColor3sv(const GLshort *) __attribute__((visibility("default")));
extern "C" void glColor3ubv(const GLubyte *) __attribute__((visibility("default")));
extern "C" void glColor3uiv(const GLuint *) __attribute__((visibility("default")));
extern "C" void glColor3usv(const GLushort *) __attribute__((visibility("default")));

extern "C" void glColor4bv(const GLbyte *) __attribute__((visibility("default")));
extern "C" void glColor4dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glColor4fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glColor4iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glColor4sv(const GLshort *) __attribute__((visibility("default")));
extern "C" void glColor4ubv(const GLubyte *) __attribute__((visibility("default")));
extern "C" void glColor4uiv(const GLuint *) __attribute__((visibility("default")));
extern "C" void glColor4usv(const GLushort *) __attribute__((visibility("default")));


extern "C" void glTexCoord1d(GLdouble) __attribute__((visibility("default")));
extern "C" void glTexCoord1f(GLfloat) __attribute__((visibility("default")));
extern "C" void glTexCoord1i(GLint) __attribute__((visibility("default")));
extern "C" void glTexCoord1s(GLshort) __attribute__((visibility("default")));

extern "C" void glTexCoord2d(GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glTexCoord2f(GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glTexCoord2i(GLint, GLint) __attribute__((visibility("default")));
extern "C" void glTexCoord2s(GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glTexCoord3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glTexCoord3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glTexCoord3i(GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glTexCoord3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glTexCoord4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glTexCoord4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glTexCoord4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glTexCoord4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glTexCoord1dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glTexCoord1fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glTexCoord1iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glTexCoord1sv(const GLshort *) __attribute__((visibility("default")));

extern "C" void glTexCoord2dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glTexCoord2fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glTexCoord2iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glTexCoord2sv(const GLshort *) __attribute__((visibility("default")));

extern "C" void glTexCoord3dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glTexCoord3fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glTexCoord3iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glTexCoord3sv(const GLshort *) __attribute__((visibility("default")));

extern "C" void glTexCoord4dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glTexCoord4fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glTexCoord4iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glTexCoord4sv(const GLshort *) __attribute__((visibility("default")));


extern "C" void glRasterPos2d(GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glRasterPos2f(GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glRasterPos2i(GLint, GLint) __attribute__((visibility("default")));
extern "C" void glRasterPos2s(GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glRasterPos3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glRasterPos3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glRasterPos3i(GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glRasterPos3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glRasterPos4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glRasterPos4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glRasterPos4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glRasterPos4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glRasterPos2dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glRasterPos2fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glRasterPos2iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glRasterPos2sv(const GLshort *) __attribute__((visibility("default")));

extern "C" void glRasterPos3dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glRasterPos3fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glRasterPos3iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glRasterPos3sv(const GLshort *) __attribute__((visibility("default")));

extern "C" void glRasterPos4dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glRasterPos4fv(const GLfloat *) __attribute__((visibility("default")));
extern "C" void glRasterPos4iv(const GLint *) __attribute__((visibility("default")));
extern "C" void glRasterPos4sv(const GLshort *) __attribute__((visibility("default")));


extern "C" void glRectd(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glRectf(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glRecti(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glRects(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));


extern "C" void glRectdv(const GLdouble *, const GLdouble *) __attribute__((visibility("default")));
extern "C" void glRectfv(const GLfloat *, const GLfloat *) __attribute__((visibility("default")));
extern "C" void glRectiv(const GLint *, const GLint *) __attribute__((visibility("default")));
extern "C" void glRectsv(const GLshort *, const GLshort *) __attribute__((visibility("default")));
# 1150 "/usr/include/GL/gl.h" 3
extern "C" void glVertexPointer(GLint, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));


extern "C" void glNormalPointer(GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));


extern "C" void glColorPointer(GLint, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));


extern "C" void glIndexPointer(GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));


extern "C" void glTexCoordPointer(GLint, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));


extern "C" void glEdgeFlagPointer(GLsizei, const GLvoid *) __attribute__((visibility("default")));

extern "C" void glGetPointerv(GLenum, GLvoid **) __attribute__((visibility("default")));

extern "C" void glArrayElement(GLint) __attribute__((visibility("default")));

extern "C" void glDrawArrays(GLenum, GLint, GLsizei) __attribute__((visibility("default")));

extern "C" void glDrawElements(GLenum, GLsizei, GLenum, const GLvoid *) __attribute__((visibility("default")));


extern "C" void glInterleavedArrays(GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1183 "/usr/include/GL/gl.h" 3
extern "C" void glShadeModel(GLenum) __attribute__((visibility("default")));

extern "C" void glLightf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
extern "C" void glLighti(GLenum, GLenum, GLint) __attribute__((visibility("default")));
extern "C" void glLightfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));

extern "C" void glLightiv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));


extern "C" void glGetLightfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));

extern "C" void glGetLightiv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));


extern "C" void glLightModelf(GLenum, GLfloat) __attribute__((visibility("default")));
extern "C" void glLightModeli(GLenum, GLint) __attribute__((visibility("default")));
extern "C" void glLightModelfv(GLenum, const GLfloat *) __attribute__((visibility("default")));
extern "C" void glLightModeliv(GLenum, const GLint *) __attribute__((visibility("default")));

extern "C" void glMaterialf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
extern "C" void glMateriali(GLenum, GLenum, GLint) __attribute__((visibility("default")));
extern "C" void glMaterialfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
extern "C" void glMaterialiv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));

extern "C" void glGetMaterialfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
extern "C" void glGetMaterialiv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));

extern "C" void glColorMaterial(GLenum, GLenum) __attribute__((visibility("default")));
# 1217 "/usr/include/GL/gl.h" 3
extern "C" void glPixelZoom(GLfloat, GLfloat) __attribute__((visibility("default")));

extern "C" void glPixelStoref(GLenum, GLfloat) __attribute__((visibility("default")));
extern "C" void glPixelStorei(GLenum, GLint) __attribute__((visibility("default")));

extern "C" void glPixelTransferf(GLenum, GLfloat) __attribute__((visibility("default")));
extern "C" void glPixelTransferi(GLenum, GLint) __attribute__((visibility("default")));

extern "C" void glPixelMapfv(GLenum, GLsizei, const GLfloat *) __attribute__((visibility("default")));

extern "C" void glPixelMapuiv(GLenum, GLsizei, const GLuint *) __attribute__((visibility("default")));

extern "C" void glPixelMapusv(GLenum, GLsizei, const GLushort *) __attribute__((visibility("default")));


extern "C" void glGetPixelMapfv(GLenum, GLfloat *) __attribute__((visibility("default")));
extern "C" void glGetPixelMapuiv(GLenum, GLuint *) __attribute__((visibility("default")));
extern "C" void glGetPixelMapusv(GLenum, GLushort *) __attribute__((visibility("default")));

extern "C" void glBitmap(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((visibility("default")));




extern "C" void glReadPixels(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));




extern "C" void glDrawPixels(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));



extern "C" void glCopyPixels(GLint, GLint, GLsizei, GLsizei, GLenum) __attribute__((visibility("default")));
# 1258 "/usr/include/GL/gl.h" 3
extern "C" void glStencilFunc(GLenum, GLint, GLuint) __attribute__((visibility("default")));

extern "C" void glStencilMask(GLuint) __attribute__((visibility("default")));

extern "C" void glStencilOp(GLenum, GLenum, GLenum) __attribute__((visibility("default")));

extern "C" void glClearStencil(GLint) __attribute__((visibility("default")));
# 1272 "/usr/include/GL/gl.h" 3
extern "C" void glTexGend(GLenum, GLenum, GLdouble) __attribute__((visibility("default")));
extern "C" void glTexGenf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
extern "C" void glTexGeni(GLenum, GLenum, GLint) __attribute__((visibility("default")));

extern "C" void glTexGendv(GLenum, GLenum, const GLdouble *) __attribute__((visibility("default")));
extern "C" void glTexGenfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
extern "C" void glTexGeniv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));

extern "C" void glGetTexGendv(GLenum, GLenum, GLdouble *) __attribute__((visibility("default")));
extern "C" void glGetTexGenfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
extern "C" void glGetTexGeniv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));


extern "C" void glTexEnvf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
extern "C" void glTexEnvi(GLenum, GLenum, GLint) __attribute__((visibility("default")));

extern "C" void glTexEnvfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
extern "C" void glTexEnviv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));

extern "C" void glGetTexEnvfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
extern "C" void glGetTexEnviv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));


extern "C" void glTexParameterf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
extern "C" void glTexParameteri(GLenum, GLenum, GLint) __attribute__((visibility("default")));

extern "C" void glTexParameterfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));

extern "C" void glTexParameteriv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));


extern "C" void glGetTexParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));

extern "C" void glGetTexParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));


extern "C" void glGetTexLevelParameterfv(GLenum, GLint, GLenum, GLfloat *) __attribute__((visibility("default")));

extern "C" void glGetTexLevelParameteriv(GLenum, GLint, GLenum, GLint *) __attribute__((visibility("default")));



extern "C" void glTexImage1D(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1320 "/usr/include/GL/gl.h" 3
extern "C" void glTexImage2D(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1326 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexImage(GLenum, GLint, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1333 "/usr/include/GL/gl.h" 3
extern "C" void glGenTextures(GLsizei, GLuint *) __attribute__((visibility("default")));

extern "C" void glDeleteTextures(GLsizei, const GLuint *) __attribute__((visibility("default")));

extern "C" void glBindTexture(GLenum, GLuint) __attribute__((visibility("default")));

extern "C" void glPrioritizeTextures(GLsizei, const GLuint *, const GLclampf *) __attribute__((visibility("default")));



extern "C" GLboolean glAreTexturesResident(GLsizei, const GLuint *, GLboolean *) __attribute__((visibility("default")));



extern "C" GLboolean glIsTexture(GLuint) __attribute__((visibility("default")));


extern "C" void glTexSubImage1D(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1356 "/usr/include/GL/gl.h" 3
extern "C" void glTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1363 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexImage1D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) __attribute__((visibility("default")));
# 1369 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexImage2D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) __attribute__((visibility("default")));
# 1376 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexSubImage1D(GLenum, GLint, GLint, GLint, GLint, GLsizei) __attribute__((visibility("default")));




extern "C" void glCopyTexSubImage2D(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 1391 "/usr/include/GL/gl.h" 3
extern "C" void glMap1d(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *) __attribute__((visibility("default")));


extern "C" void glMap1f(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *) __attribute__((visibility("default")));



extern "C" void glMap2d(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *) __attribute__((visibility("default")));



extern "C" void glMap2f(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *) __attribute__((visibility("default")));




extern "C" void glGetMapdv(GLenum, GLenum, GLdouble *) __attribute__((visibility("default")));
extern "C" void glGetMapfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
extern "C" void glGetMapiv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));

extern "C" void glEvalCoord1d(GLdouble) __attribute__((visibility("default")));
extern "C" void glEvalCoord1f(GLfloat) __attribute__((visibility("default")));

extern "C" void glEvalCoord1dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glEvalCoord1fv(const GLfloat *) __attribute__((visibility("default")));

extern "C" void glEvalCoord2d(GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glEvalCoord2f(GLfloat, GLfloat) __attribute__((visibility("default")));

extern "C" void glEvalCoord2dv(const GLdouble *) __attribute__((visibility("default")));
extern "C" void glEvalCoord2fv(const GLfloat *) __attribute__((visibility("default")));

extern "C" void glMapGrid1d(GLint, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glMapGrid1f(GLint, GLfloat, GLfloat) __attribute__((visibility("default")));

extern "C" void glMapGrid2d(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble) __attribute__((visibility("default")));

extern "C" void glMapGrid2f(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat) __attribute__((visibility("default")));


extern "C" void glEvalPoint1(GLint) __attribute__((visibility("default")));

extern "C" void glEvalPoint2(GLint, GLint) __attribute__((visibility("default")));

extern "C" void glEvalMesh1(GLenum, GLint, GLint) __attribute__((visibility("default")));

extern "C" void glEvalMesh2(GLenum, GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1444 "/usr/include/GL/gl.h" 3
extern "C" void glFogf(GLenum, GLfloat) __attribute__((visibility("default")));

extern "C" void glFogi(GLenum, GLint) __attribute__((visibility("default")));

extern "C" void glFogfv(GLenum, const GLfloat *) __attribute__((visibility("default")));

extern "C" void glFogiv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1457 "/usr/include/GL/gl.h" 3
extern "C" void glFeedbackBuffer(GLsizei, GLenum, GLfloat *) __attribute__((visibility("default")));

extern "C" void glPassThrough(GLfloat) __attribute__((visibility("default")));

extern "C" void glSelectBuffer(GLsizei, GLuint *) __attribute__((visibility("default")));

extern "C" void glInitNames() __attribute__((visibility("default")));

extern "C" void glLoadName(GLuint) __attribute__((visibility("default")));

extern "C" void glPushName(GLuint) __attribute__((visibility("default")));

extern "C" void glPopName() __attribute__((visibility("default")));
# 1519 "/usr/include/GL/gl.h" 3
extern "C" void glDrawRangeElements(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) __attribute__((visibility("default")));


extern "C" void glTexImage3D(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1529 "/usr/include/GL/gl.h" 3
extern "C" void glTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1536 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 1542 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTSPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLTEXIMAGE3DPROC)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 1629 "/usr/include/GL/gl.h" 3
extern "C" void glColorTable(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));



extern "C" void glColorSubTable(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));




extern "C" void glColorTableParameteriv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));


extern "C" void glColorTableParameterfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));


extern "C" void glCopyColorSubTable(GLenum, GLsizei, GLint, GLint, GLsizei) __attribute__((visibility("default")));


extern "C" void glCopyColorTable(GLenum, GLenum, GLint, GLint, GLsizei) __attribute__((visibility("default")));


extern "C" void glGetColorTable(GLenum, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));


extern "C" void glGetColorTableParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));


extern "C" void glGetColorTableParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));


extern "C" void glBlendEquation(GLenum) __attribute__((visibility("default")));

extern "C" void glBlendColor(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((visibility("default")));


extern "C" void glHistogram(GLenum, GLsizei, GLenum, GLboolean) __attribute__((visibility("default")));


extern "C" void glResetHistogram(GLenum) __attribute__((visibility("default")));

extern "C" void glGetHistogram(GLenum, GLboolean, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));



extern "C" void glGetHistogramParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));


extern "C" void glGetHistogramParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));


extern "C" void glMinmax(GLenum, GLenum, GLboolean) __attribute__((visibility("default")));


extern "C" void glResetMinmax(GLenum) __attribute__((visibility("default")));

extern "C" void glGetMinmax(GLenum, GLboolean, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));



extern "C" void glGetMinmaxParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));


extern "C" void glGetMinmaxParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));


extern "C" void glConvolutionFilter1D(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));



extern "C" void glConvolutionFilter2D(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));



extern "C" void glConvolutionParameterf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));


extern "C" void glConvolutionParameterfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));


extern "C" void glConvolutionParameteri(GLenum, GLenum, GLint) __attribute__((visibility("default")));


extern "C" void glConvolutionParameteriv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));


extern "C" void glCopyConvolutionFilter1D(GLenum, GLenum, GLint, GLint, GLsizei) __attribute__((visibility("default")));


extern "C" void glCopyConvolutionFilter2D(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));



extern "C" void glGetConvolutionFilter(GLenum, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));


extern "C" void glGetConvolutionParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));


extern "C" void glGetConvolutionParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));


extern "C" void glSeparableFilter2D(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) __attribute__((visibility("default")));



extern "C" void glGetSeparableFilter(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) __attribute__((visibility("default")));


extern "C" { typedef void (*PFNGLBLENDCOLORPROC)(GLclampf, GLclampf, GLclampf, GLclampf); }
extern "C" { typedef void (*PFNGLBLENDEQUATIONPROC)(GLenum); }
extern "C" { typedef void (*PFNGLCOLORTABLEPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERFVPROC)(GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERIVPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLCOPYCOLORTABLEPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLGETCOLORTABLEPROC)(GLenum, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLCOLORSUBTABLEPROC)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOPYCOLORSUBTABLEPROC)(GLenum, GLsizei, GLint, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER1DPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER2DPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFPROC)(GLenum, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFVPROC)(GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIPROC)(GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIVPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER1DPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER2DPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLGETCONVOLUTIONFILTERPROC)(GLenum, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETSEPARABLEFILTERPROC)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *); }
extern "C" { typedef void (*PFNGLSEPARABLEFILTER2DPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *); }
extern "C" { typedef void (*PFNGLGETHISTOGRAMPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETMINMAXPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLHISTOGRAMPROC)(GLenum, GLsizei, GLenum, GLboolean); }
extern "C" { typedef void (*PFNGLMINMAXPROC)(GLenum, GLenum, GLboolean); }
extern "C" { typedef void (*PFNGLRESETHISTOGRAMPROC)(GLenum); }
extern "C" { typedef void (*PFNGLRESETMINMAXPROC)(GLenum); }
# 1883 "/usr/include/GL/gl.h" 3
extern "C" void glActiveTexture(GLenum) __attribute__((visibility("default")));

extern "C" void glClientActiveTexture(GLenum) __attribute__((visibility("default")));

extern "C" void glCompressedTexImage1D(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *) __attribute__((visibility("default")));

extern "C" void glCompressedTexImage2D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) __attribute__((visibility("default")));

extern "C" void glCompressedTexImage3D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) __attribute__((visibility("default")));

extern "C" void glCompressedTexSubImage1D(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));

extern "C" void glCompressedTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));

extern "C" void glCompressedTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));

extern "C" void glGetCompressedTexImage(GLenum, GLint, GLvoid *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord1d(GLenum, GLdouble) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord1dv(GLenum, const GLdouble *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord1f(GLenum, GLfloat) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord1fv(GLenum, const GLfloat *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord1i(GLenum, GLint) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord1iv(GLenum, const GLint *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord1s(GLenum, GLshort) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord1sv(GLenum, const GLshort *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord2d(GLenum, GLdouble, GLdouble) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord2dv(GLenum, const GLdouble *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord2f(GLenum, GLfloat, GLfloat) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord2fv(GLenum, const GLfloat *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord2i(GLenum, GLint, GLint) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord2iv(GLenum, const GLint *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord2s(GLenum, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord2sv(GLenum, const GLshort *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord3d(GLenum, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord3dv(GLenum, const GLdouble *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord3f(GLenum, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord3fv(GLenum, const GLfloat *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord3i(GLenum, GLint, GLint, GLint) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord3iv(GLenum, const GLint *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord3s(GLenum, GLshort, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord3sv(GLenum, const GLshort *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord4d(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord4dv(GLenum, const GLdouble *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord4f(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord4fv(GLenum, const GLfloat *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord4i(GLenum, GLint, GLint, GLint, GLint) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord4iv(GLenum, const GLint *) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord4s(GLenum, GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));

extern "C" void glMultiTexCoord4sv(GLenum, const GLshort *) __attribute__((visibility("default")));


extern "C" void glLoadTransposeMatrixd(const GLdouble [16]) __attribute__((visibility("default")));

extern "C" void glLoadTransposeMatrixf(const GLfloat [16]) __attribute__((visibility("default")));

extern "C" void glMultTransposeMatrixd(const GLdouble [16]) __attribute__((visibility("default")));

extern "C" void glMultTransposeMatrixf(const GLfloat [16]) __attribute__((visibility("default")));

extern "C" void glSampleCoverage(GLclampf, GLboolean) __attribute__((visibility("default")));

extern "C" { typedef void (*PFNGLACTIVETEXTUREPROC)(GLenum); }
extern "C" { typedef void (*PFNGLCLIENTACTIVETEXTUREPROC)(GLenum); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DPROC)(GLenum, GLdouble); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DVPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FVPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IVPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SPROC)(GLenum, GLshort); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SVPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DPROC)(GLenum, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DVPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FPROC)(GLenum, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FVPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IPROC)(GLenum, GLint, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IVPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SPROC)(GLenum, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SVPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DVPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FVPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IPROC)(GLenum, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IVPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SPROC)(GLenum, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SVPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DVPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FVPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IPROC)(GLenum, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IVPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SVPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXFPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXDPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXFPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXDPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLSAMPLECOVERAGEPROC)(GLclampf, GLboolean); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DPROC)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEPROC)(GLenum, GLint, void *); }
# 2066 "/usr/include/GL/gl.h" 3
extern "C" void glActiveTextureARB(GLenum) __attribute__((visibility("default")));
extern "C" void glClientActiveTextureARB(GLenum) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord1dARB(GLenum, GLdouble) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord1dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord1fARB(GLenum, GLfloat) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord1fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord1iARB(GLenum, GLint) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord1ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord1sARB(GLenum, GLshort) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord1svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord2dARB(GLenum, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord2dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord2fARB(GLenum, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord2fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord2iARB(GLenum, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord2ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord2sARB(GLenum, GLshort, GLshort) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord2svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord3dARB(GLenum, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord3dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord3fARB(GLenum, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord3fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord3iARB(GLenum, GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord3ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord3sARB(GLenum, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord3svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord4dARB(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord4dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord4fARB(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord4fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord4iARB(GLenum, GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord4ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord4sARB(GLenum, GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
extern "C" void glMultiTexCoord4svARB(GLenum, const GLshort *) __attribute__((visibility("default")));

extern "C" { typedef void (*PFNGLACTIVETEXTUREARBPROC)(GLenum); }
extern "C" { typedef void (*PFNGLCLIENTACTIVETEXTUREARBPROC)(GLenum); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DARBPROC)(GLenum, GLdouble); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DVARBPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FARBPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FVARBPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IARBPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IVARBPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SARBPROC)(GLenum, GLshort); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SVARBPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DARBPROC)(GLenum, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DVARBPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FARBPROC)(GLenum, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FVARBPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IARBPROC)(GLenum, GLint, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IVARBPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SARBPROC)(GLenum, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SVARBPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DARBPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DVARBPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FARBPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FVARBPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IARBPROC)(GLenum, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IVARBPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SARBPROC)(GLenum, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SVARBPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DARBPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DVARBPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FARBPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FVARBPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IARBPROC)(GLenum, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IVARBPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SARBPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SVARBPROC)(GLenum, const GLshort *); }
# 3907 "/usr/include/GL/glext.h" 3
extern "C" { typedef char GLchar; }




extern "C" { typedef ptrdiff_t GLintptr; }
extern "C" { typedef ptrdiff_t GLsizeiptr; }




extern "C" { typedef ptrdiff_t GLintptrARB; }
extern "C" { typedef ptrdiff_t GLsizeiptrARB; }




extern "C" { typedef char GLcharARB; }
extern "C" { typedef unsigned GLhandleARB; }




extern "C" { typedef unsigned short GLhalfARB; }



extern "C" { typedef unsigned short GLhalfNV; }
# 49 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned char uint8_t; }
extern "C" { typedef unsigned short uint16_t; }

extern "C" { typedef unsigned uint32_t; }



extern "C" { typedef unsigned long uint64_t; }
# 66 "/usr/include/stdint.h" 3
extern "C" { typedef signed char int_least8_t; }
extern "C" { typedef short int_least16_t; }
extern "C" { typedef int int_least32_t; }

extern "C" { typedef long int_least64_t; }
# 77 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned char uint_least8_t; }
extern "C" { typedef unsigned short uint_least16_t; }
extern "C" { typedef unsigned uint_least32_t; }

extern "C" { typedef unsigned long uint_least64_t; }
# 91 "/usr/include/stdint.h" 3
extern "C" { typedef signed char int_fast8_t; }

extern "C" { typedef long int_fast16_t; }
extern "C" { typedef long int_fast32_t; }
extern "C" { typedef long int_fast64_t; }
# 104 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned char uint_fast8_t; }

extern "C" { typedef unsigned long uint_fast16_t; }
extern "C" { typedef unsigned long uint_fast32_t; }
extern "C" { typedef unsigned long uint_fast64_t; }
# 120 "/usr/include/stdint.h" 3
extern "C" { typedef long intptr_t; }


extern "C" { typedef unsigned long uintptr_t; }
# 135 "/usr/include/stdint.h" 3
extern "C" { typedef long intmax_t; }
extern "C" { typedef unsigned long uintmax_t; }
# 283 "/usr/include/inttypes.h" 3
extern "C" { typedef
# 280 "/usr/include/inttypes.h" 3
struct imaxdiv_t {
long quot;
long rem;
} imaxdiv_t; }
# 298 "/usr/include/inttypes.h" 3
extern "C" intmax_t imaxabs(intmax_t) throw() __attribute__((__const__));


extern "C" imaxdiv_t imaxdiv(intmax_t, intmax_t) throw() __attribute__((__const__));



extern "C" intmax_t strtoimax(const char *__restrict__, char **__restrict__, int) throw();



extern "C" uintmax_t strtoumax(const char *__restrict__, char **__restrict__, int) throw();



extern "C" intmax_t wcstoimax(const wchar_t *__restrict__, wchar_t **__restrict__, int) throw();




extern "C" uintmax_t wcstoumax(const wchar_t *__restrict__, wchar_t **__restrict__, int) throw();
# 3975 "/usr/include/GL/glext.h" 3
extern "C" { typedef int64_t GLint64EXT; }
extern "C" { typedef uint64_t GLuint64EXT; }
# 4208 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEPROC)(GLenum, GLenum, GLenum, GLenum); }
extern "C" { typedef void (*PFNGLFOGCOORDFPROC)(GLfloat); }
extern "C" { typedef void (*PFNGLFOGCOORDFVPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLFOGCOORDDPROC)(GLdouble); }
extern "C" { typedef void (*PFNGLFOGCOORDDVPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLFOGCOORDPOINTERPROC)(GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLMULTIDRAWARRAYSPROC)(GLenum, GLint *, GLsizei *, GLsizei); }
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTSPROC)(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei); }
extern "C" { typedef void (*PFNGLPOINTPARAMETERFPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLPOINTPARAMETERIPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLPOINTPARAMETERIVPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BPROC)(GLbyte, GLbyte, GLbyte); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BVPROC)(const GLbyte *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DPROC)(GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DVPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FPROC)(GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FVPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IPROC)(GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IVPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SPROC)(GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SVPROC)(const GLshort *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBPROC)(GLubyte, GLubyte, GLubyte); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBVPROC)(const GLubyte *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIPROC)(GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIVPROC)(const GLuint *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USPROC)(GLushort, GLushort, GLushort); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USVPROC)(const GLushort *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTERPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLWINDOWPOS2DPROC)(GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLWINDOWPOS2DVPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLWINDOWPOS2FPROC)(GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLWINDOWPOS2FVPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLWINDOWPOS2IPROC)(GLint, GLint); }
extern "C" { typedef void (*PFNGLWINDOWPOS2IVPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLWINDOWPOS2SPROC)(GLshort, GLshort); }
extern "C" { typedef void (*PFNGLWINDOWPOS2SVPROC)(const GLshort *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3DPROC)(GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLWINDOWPOS3DVPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3FPROC)(GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLWINDOWPOS3FVPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3IPROC)(GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLWINDOWPOS3IVPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3SPROC)(GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLWINDOWPOS3SVPROC)(const GLshort *); }
# 4278 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENQUERIESPROC)(GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLDELETEQUERIESPROC)(GLsizei, const GLuint *); }
extern "C" { typedef GLboolean (*PFNGLISQUERYPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBEGINQUERYPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLENDQUERYPROC)(GLenum); }
extern "C" { typedef void (*PFNGLGETQUERYIVPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETQUERYOBJECTIVPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUIVPROC)(GLuint, GLenum, GLuint *); }
extern "C" { typedef void (*PFNGLBINDBUFFERPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDELETEBUFFERSPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENBUFFERSPROC)(GLsizei, GLuint *); }
extern "C" { typedef GLboolean (*PFNGLISBUFFERPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBUFFERDATAPROC)(GLenum, GLsizeiptr, const GLvoid *, GLenum); }
extern "C" { typedef void (*PFNGLBUFFERSUBDATAPROC)(GLenum, GLintptr, GLsizeiptr, const GLvoid *); }
extern "C" { typedef void (*PFNGLGETBUFFERSUBDATAPROC)(GLenum, GLintptr, GLsizeiptr, GLvoid *); }
extern "C" { typedef GLvoid *(*PFNGLMAPBUFFERPROC)(GLenum, GLenum); }
extern "C" { typedef GLboolean (*PFNGLUNMAPBUFFERPROC)(GLenum); }
extern "C" { typedef void (*PFNGLGETBUFFERPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETBUFFERPOINTERVPROC)(GLenum, GLenum, GLvoid **); }
# 4396 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEPROC)(GLenum, GLenum); }
extern "C" { typedef void (*PFNGLDRAWBUFFERSPROC)(GLsizei, const GLenum *); }
extern "C" { typedef void (*PFNGLSTENCILOPSEPARATEPROC)(GLenum, GLenum, GLenum, GLenum); }
extern "C" { typedef void (*PFNGLSTENCILFUNCSEPARATEPROC)(GLenum, GLenum, GLint, GLuint); }
extern "C" { typedef void (*PFNGLSTENCILMASKSEPARATEPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLATTACHSHADERPROC)(GLuint, GLuint); }
extern "C" { typedef void (*PFNGLBINDATTRIBLOCATIONPROC)(GLuint, GLuint, const GLchar *); }
extern "C" { typedef void (*PFNGLCOMPILESHADERPROC)(GLuint); }
extern "C" { typedef GLuint (*PFNGLCREATEPROGRAMPROC)(void); }
extern "C" { typedef GLuint (*PFNGLCREATESHADERPROC)(GLenum); }
extern "C" { typedef void (*PFNGLDELETEPROGRAMPROC)(GLuint); }
extern "C" { typedef void (*PFNGLDELETESHADERPROC)(GLuint); }
extern "C" { typedef void (*PFNGLDETACHSHADERPROC)(GLuint, GLuint); }
extern "C" { typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYPROC)(GLuint); }
extern "C" { typedef void (*PFNGLENABLEVERTEXATTRIBARRAYPROC)(GLuint); }
extern "C" { typedef void (*PFNGLGETACTIVEATTRIBPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *); }
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *); }
extern "C" { typedef void (*PFNGLGETATTACHEDSHADERSPROC)(GLuint, GLsizei, GLsizei *, GLuint *); }
extern "C" { typedef GLint (*PFNGLGETATTRIBLOCATIONPROC)(GLuint, const GLchar *); }
extern "C" { typedef void (*PFNGLGETPROGRAMIVPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETPROGRAMINFOLOGPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
extern "C" { typedef void (*PFNGLGETSHADERIVPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETSHADERINFOLOGPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
extern "C" { typedef void (*PFNGLGETSHADERSOURCEPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
extern "C" { typedef GLint (*PFNGLGETUNIFORMLOCATIONPROC)(GLuint, const GLchar *); }
extern "C" { typedef void (*PFNGLGETUNIFORMFVPROC)(GLuint, GLint, GLfloat *); }
extern "C" { typedef void (*PFNGLGETUNIFORMIVPROC)(GLuint, GLint, GLint *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVPROC)(GLuint, GLenum, GLdouble *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVPROC)(GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVPROC)(GLuint, GLenum, GLvoid **); }
extern "C" { typedef GLboolean (*PFNGLISPROGRAMPROC)(GLuint); }
extern "C" { typedef GLboolean (*PFNGLISSHADERPROC)(GLuint); }
extern "C" { typedef void (*PFNGLLINKPROGRAMPROC)(GLuint); }
extern "C" { typedef void (*PFNGLSHADERSOURCEPROC)(GLuint, GLsizei, const GLchar **, const GLint *); }
extern "C" { typedef void (*PFNGLUSEPROGRAMPROC)(GLuint); }
extern "C" { typedef void (*PFNGLUNIFORM1FPROC)(GLint, GLfloat); }
extern "C" { typedef void (*PFNGLUNIFORM2FPROC)(GLint, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLUNIFORM3FPROC)(GLint, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLUNIFORM4FPROC)(GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLUNIFORM1IPROC)(GLint, GLint); }
extern "C" { typedef void (*PFNGLUNIFORM2IPROC)(GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLUNIFORM3IPROC)(GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLUNIFORM4IPROC)(GLint, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLUNIFORM1FVPROC)(GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORM2FVPROC)(GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORM3FVPROC)(GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORM4FVPROC)(GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORM1IVPROC)(GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLUNIFORM2IVPROC)(GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLUNIFORM3IVPROC)(GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLUNIFORM4IVPROC)(GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLVALIDATEPROGRAMPROC)(GLuint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DPROC)(GLuint, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FPROC)(GLuint, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SPROC)(GLuint, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DPROC)(GLuint, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FPROC)(GLuint, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SPROC)(GLuint, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SPROC)(GLuint, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NBVPROC)(GLuint, const GLbyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NIVPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NSVPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBVPROC)(GLuint, const GLubyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUIVPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUSVPROC)(GLuint, const GLushort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4BVPROC)(GLuint, const GLbyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4IVPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVPROC)(GLuint, const GLubyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UIVPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4USVPROC)(GLuint, const GLushort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *); }
# 4501 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2X3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3X2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2X4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4X2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3X4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4X3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 4575 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORMASKIPROC)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean); }
extern "C" { typedef void (*PFNGLGETBOOLEANI_VPROC)(GLenum, GLuint, GLboolean *); }
extern "C" { typedef void (*PFNGLGETINTEGERI_VPROC)(GLenum, GLuint, GLint *); }
extern "C" { typedef void (*PFNGLENABLEIPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDISABLEIPROC)(GLenum, GLuint); }
extern "C" { typedef GLboolean (*PFNGLISENABLEDIPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLBEGINTRANSFORMFEEDBACKPROC)(GLenum); }
extern "C" { typedef void (*PFNGLENDTRANSFORMFEEDBACKPROC)(void); }
extern "C" { typedef void (*PFNGLBINDBUFFERRANGEPROC)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr); }
extern "C" { typedef void (*PFNGLBINDBUFFERBASEPROC)(GLenum, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSPROC)(GLuint, GLsizei, const GLchar **, GLenum); }
extern "C" { typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *); }
extern "C" { typedef void (*PFNGLCLAMPCOLORPROC)(GLenum, GLenum); }
extern "C" { typedef void (*PFNGLBEGINCONDITIONALRENDERPROC)(GLuint, GLenum); }
extern "C" { typedef void (*PFNGLENDCONDITIONALRENDERPROC)(void); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IPROC)(GLuint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IPROC)(GLuint, GLint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IPROC)(GLuint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IPROC)(GLuint, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIPROC)(GLuint, GLuint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIPROC)(GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIPROC)(GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIPROC)(GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IVPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IVPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IVPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IVPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIVPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIVPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIVPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIVPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4BVPROC)(GLuint, const GLbyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4SVPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UBVPROC)(GLuint, const GLubyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4USVPROC)(GLuint, const GLushort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBIPOINTERPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIIVPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIUIVPROC)(GLuint, GLenum, GLuint *); }
extern "C" { typedef void (*PFNGLGETUNIFORMUIVPROC)(GLuint, GLint, GLuint *); }
extern "C" { typedef void (*PFNGLBINDFRAGDATALOCATIONPROC)(GLuint, GLuint, const GLchar *); }
extern "C" { typedef GLint (*PFNGLGETFRAGDATALOCATIONPROC)(GLuint, const GLchar *); }
extern "C" { typedef void (*PFNGLUNIFORM1UIPROC)(GLint, GLuint); }
extern "C" { typedef void (*PFNGLUNIFORM2UIPROC)(GLint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLUNIFORM3UIPROC)(GLint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLUNIFORM4UIPROC)(GLint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLUNIFORM1UIVPROC)(GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLUNIFORM2UIVPROC)(GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLUNIFORM3UIVPROC)(GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLUNIFORM4UIVPROC)(GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLTEXPARAMETERIIVPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLTEXPARAMETERIUIVPROC)(GLenum, GLenum, const GLuint *); }
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIIVPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIUIVPROC)(GLenum, GLenum, GLuint *); }
extern "C" { typedef void (*PFNGLCLEARBUFFERIVPROC)(GLenum, GLint, const GLint *); }
extern "C" { typedef void (*PFNGLCLEARBUFFERUIVPROC)(GLenum, GLint, const GLuint *); }
extern "C" { typedef void (*PFNGLCLEARBUFFERFVPROC)(GLenum, GLint, const GLfloat *); }
extern "C" { typedef void (*PFNGLCLEARBUFFERFIPROC)(GLenum, GLint, GLfloat, GLint); }
extern "C" { typedef const GLubyte *(*PFNGLGETSTRINGIPROC)(GLenum, GLuint); }
# 4717 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXFARBPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXDARBPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXFARBPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXDARBPROC)(const GLdouble *); }
# 4728 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLECOVERAGEARBPROC)(GLclampf, GLboolean); }
# 4750 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)(GLenum, GLint, GLvoid *); }
# 4769 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFARBPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVARBPROC)(GLenum, const GLfloat *); }
# 4787 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTBVARBPROC)(GLint, const GLbyte *); }
extern "C" { typedef void (*PFNGLWEIGHTSVARBPROC)(GLint, const GLshort *); }
extern "C" { typedef void (*PFNGLWEIGHTIVARBPROC)(GLint, const GLint *); }
extern "C" { typedef void (*PFNGLWEIGHTFVARBPROC)(GLint, const GLfloat *); }
extern "C" { typedef void (*PFNGLWEIGHTDVARBPROC)(GLint, const GLdouble *); }
extern "C" { typedef void (*PFNGLWEIGHTUBVARBPROC)(GLint, const GLubyte *); }
extern "C" { typedef void (*PFNGLWEIGHTUSVARBPROC)(GLint, const GLushort *); }
extern "C" { typedef void (*PFNGLWEIGHTUIVARBPROC)(GLint, const GLuint *); }
extern "C" { typedef void (*PFNGLWEIGHTPOINTERARBPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLVERTEXBLENDARBPROC)(GLint); }
# 4808 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCURRENTPALETTEMATRIXARBPROC)(GLint); }
extern "C" { typedef void (*PFNGLMATRIXINDEXUBVARBPROC)(GLint, const GLubyte *); }
extern "C" { typedef void (*PFNGLMATRIXINDEXUSVARBPROC)(GLint, const GLushort *); }
extern "C" { typedef void (*PFNGLMATRIXINDEXUIVARBPROC)(GLint, const GLuint *); }
extern "C" { typedef void (*PFNGLMATRIXINDEXPOINTERARBPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
# 4863 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DARBPROC)(GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLWINDOWPOS2DVARBPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLWINDOWPOS2FARBPROC)(GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLWINDOWPOS2FVARBPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLWINDOWPOS2IARBPROC)(GLint, GLint); }
extern "C" { typedef void (*PFNGLWINDOWPOS2IVARBPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLWINDOWPOS2SARBPROC)(GLshort, GLshort); }
extern "C" { typedef void (*PFNGLWINDOWPOS2SVARBPROC)(const GLshort *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3DARBPROC)(GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLWINDOWPOS3DVARBPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3FARBPROC)(GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLWINDOWPOS3FVARBPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3IARBPROC)(GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLWINDOWPOS3IVARBPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3SARBPROC)(GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLWINDOWPOS3SVARBPROC)(const GLshort *); }
# 4947 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DARBPROC)(GLuint, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVARBPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FARBPROC)(GLuint, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVARBPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SARBPROC)(GLuint, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVARBPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DARBPROC)(GLuint, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVARBPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FARBPROC)(GLuint, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVARBPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SARBPROC)(GLuint, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVARBPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DARBPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVARBPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FARBPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVARBPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SARBPROC)(GLuint, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVARBPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NBVARBPROC)(GLuint, const GLbyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NIVARBPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NSVARBPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBARBPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBVARBPROC)(GLuint, const GLubyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUIVARBPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUSVARBPROC)(GLuint, const GLushort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4BVARBPROC)(GLuint, const GLbyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DARBPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVARBPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FARBPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVARBPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4IVARBPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SARBPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVARBPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVARBPROC)(GLuint, const GLubyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UIVARBPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4USVARBPROC)(GLuint, const GLushort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERARBPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLENABLEVERTEXATTRIBARRAYARBPROC)(GLuint); }
extern "C" { typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)(GLuint); }
extern "C" { typedef void (*PFNGLPROGRAMSTRINGARBPROC)(GLenum, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLBINDPROGRAMARBPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDELETEPROGRAMSARBPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENPROGRAMSARBPROC)(GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4DARBPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4DVARBPROC)(GLenum, GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4FARBPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4FVARBPROC)(GLenum, GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4DARBPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)(GLenum, GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4FARBPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)(GLenum, GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERDVARBPROC)(GLenum, GLuint, GLdouble *); }
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERFVARBPROC)(GLenum, GLuint, GLfloat *); }
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)(GLenum, GLuint, GLdouble *); }
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)(GLenum, GLuint, GLfloat *); }
extern "C" { typedef void (*PFNGLGETPROGRAMIVARBPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETPROGRAMSTRINGARBPROC)(GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVARBPROC)(GLuint, GLenum, GLdouble *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVARBPROC)(GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVARBPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVARBPROC)(GLuint, GLenum, GLvoid **); }
extern "C" { typedef GLboolean (*PFNGLISPROGRAMARBPROC)(GLuint); }
# 5031 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERARBPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDELETEBUFFERSARBPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENBUFFERSARBPROC)(GLsizei, GLuint *); }
extern "C" { typedef GLboolean (*PFNGLISBUFFERARBPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBUFFERDATAARBPROC)(GLenum, GLsizeiptrARB, const GLvoid *, GLenum); }
extern "C" { typedef void (*PFNGLBUFFERSUBDATAARBPROC)(GLenum, GLintptrARB, GLsizeiptrARB, const GLvoid *); }
extern "C" { typedef void (*PFNGLGETBUFFERSUBDATAARBPROC)(GLenum, GLintptrARB, GLsizeiptrARB, GLvoid *); }
extern "C" { typedef GLvoid *(*PFNGLMAPBUFFERARBPROC)(GLenum, GLenum); }
extern "C" { typedef GLboolean (*PFNGLUNMAPBUFFERARBPROC)(GLenum); }
extern "C" { typedef void (*PFNGLGETBUFFERPARAMETERIVARBPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETBUFFERPOINTERVARBPROC)(GLenum, GLenum, GLvoid **); }
# 5056 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENQUERIESARBPROC)(GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLDELETEQUERIESARBPROC)(GLsizei, const GLuint *); }
extern "C" { typedef GLboolean (*PFNGLISQUERYARBPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBEGINQUERYARBPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLENDQUERYARBPROC)(GLenum); }
extern "C" { typedef void (*PFNGLGETQUERYIVARBPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETQUERYOBJECTIVARBPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUIVARBPROC)(GLuint, GLenum, GLuint *); }
# 5109 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEOBJECTARBPROC)(GLhandleARB); }
extern "C" { typedef GLhandleARB (*PFNGLGETHANDLEARBPROC)(GLenum); }
extern "C" { typedef void (*PFNGLDETACHOBJECTARBPROC)(GLhandleARB, GLhandleARB); }
extern "C" { typedef GLhandleARB (*PFNGLCREATESHADEROBJECTARBPROC)(GLenum); }
extern "C" { typedef void (*PFNGLSHADERSOURCEARBPROC)(GLhandleARB, GLsizei, const GLcharARB **, const GLint *); }
extern "C" { typedef void (*PFNGLCOMPILESHADERARBPROC)(GLhandleARB); }
extern "C" { typedef GLhandleARB (*PFNGLCREATEPROGRAMOBJECTARBPROC)(void); }
extern "C" { typedef void (*PFNGLATTACHOBJECTARBPROC)(GLhandleARB, GLhandleARB); }
extern "C" { typedef void (*PFNGLLINKPROGRAMARBPROC)(GLhandleARB); }
extern "C" { typedef void (*PFNGLUSEPROGRAMOBJECTARBPROC)(GLhandleARB); }
extern "C" { typedef void (*PFNGLVALIDATEPROGRAMARBPROC)(GLhandleARB); }
extern "C" { typedef void (*PFNGLUNIFORM1FARBPROC)(GLint, GLfloat); }
extern "C" { typedef void (*PFNGLUNIFORM2FARBPROC)(GLint, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLUNIFORM3FARBPROC)(GLint, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLUNIFORM4FARBPROC)(GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLUNIFORM1IARBPROC)(GLint, GLint); }
extern "C" { typedef void (*PFNGLUNIFORM2IARBPROC)(GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLUNIFORM3IARBPROC)(GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLUNIFORM4IARBPROC)(GLint, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLUNIFORM1FVARBPROC)(GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORM2FVARBPROC)(GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORM3FVARBPROC)(GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORM4FVARBPROC)(GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORM1IVARBPROC)(GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLUNIFORM2IVARBPROC)(GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLUNIFORM3IVARBPROC)(GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLUNIFORM4IVARBPROC)(GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETOBJECTPARAMETERFVARBPROC)(GLhandleARB, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETOBJECTPARAMETERIVARBPROC)(GLhandleARB, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETINFOLOGARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLcharARB *); }
extern "C" { typedef void (*PFNGLGETATTACHEDOBJECTSARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLhandleARB *); }
extern "C" { typedef GLint (*PFNGLGETUNIFORMLOCATIONARBPROC)(GLhandleARB, const GLcharARB *); }
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMARBPROC)(GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *); }
extern "C" { typedef void (*PFNGLGETUNIFORMFVARBPROC)(GLhandleARB, GLint, GLfloat *); }
extern "C" { typedef void (*PFNGLGETUNIFORMIVARBPROC)(GLhandleARB, GLint, GLint *); }
extern "C" { typedef void (*PFNGLGETSHADERSOURCEARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLcharARB *); }
# 5157 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDATTRIBLOCATIONARBPROC)(GLhandleARB, GLuint, const GLcharARB *); }
extern "C" { typedef void (*PFNGLGETACTIVEATTRIBARBPROC)(GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *); }
extern "C" { typedef GLint (*PFNGLGETATTRIBLOCATIONARBPROC)(GLhandleARB, const GLcharARB *); }
# 5187 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWBUFFERSARBPROC)(GLsizei, const GLenum *); }
# 5199 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLAMPCOLORARBPROC)(GLenum, GLenum); }
# 5224 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWARRAYSINSTANCEDARBPROC)(GLenum, GLint, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLDRAWELEMENTSINSTANCEDARBPROC)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei); }
# 5252 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISRENDERBUFFERPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBINDRENDERBUFFERPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDELETERENDERBUFFERSPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENRENDERBUFFERSPROC)(GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEPROC)(GLenum, GLenum, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef GLboolean (*PFNGLISFRAMEBUFFERPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBINDFRAMEBUFFERPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDELETEFRAMEBUFFERSPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENFRAMEBUFFERSPROC)(GLsizei, GLuint *); }
extern "C" { typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSPROC)(GLenum); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE1DPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE2DPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE3DPROC)(GLenum, GLenum, GLenum, GLuint, GLint, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERRENDERBUFFERPROC)(GLenum, GLenum, GLenum, GLuint); }
extern "C" { typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLenum, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGENERATEMIPMAPPROC)(GLenum); }
extern "C" { typedef void (*PFNGLBLITFRAMEBUFFERPROC)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum); }
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURELAYERPROC)(GLenum, GLenum, GLuint, GLint, GLint); }
# 5286 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERIARBPROC)(GLuint, GLenum, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREARBPROC)(GLenum, GLenum, GLuint, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURELAYERARBPROC)(GLenum, GLenum, GLuint, GLint, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREFACEARBPROC)(GLenum, GLenum, GLuint, GLint, GLenum); }
# 5301 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBDIVISORPROC)(GLuint, GLuint); }
# 5310 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPBUFFERRANGEPROC)(GLenum, GLintptr, GLsizeiptr, GLbitfield); }
extern "C" { typedef void (*PFNGLFLUSHMAPPEDBUFFERRANGEPROC)(GLenum, GLintptr, GLsizeiptr); }
# 5319 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUFFERARBPROC)(GLenum, GLenum, GLuint); }
# 5338 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDVERTEXARRAYPROC)(GLuint); }
extern "C" { typedef void (*PFNGLDELETEVERTEXARRAYSPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENVERTEXARRAYSPROC)(GLsizei, GLuint *); }
extern "C" { typedef GLboolean (*PFNGLISVERTEXARRAYPROC)(GLuint); }
# 5353 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDCOLOREXTPROC)(GLclampf, GLclampf, GLclampf, GLclampf); }
# 5361 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOLYGONOFFSETEXTPROC)(GLfloat, GLfloat); }
# 5374 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXIMAGE3DEXTPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLTEXSUBIMAGE3DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 5384 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXFILTERFUNCSGISPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLTEXFILTERFUNCSGISPROC)(GLenum, GLenum, GLsizei, const GLfloat *); }
# 5394 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE1DEXTPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLTEXSUBIMAGE2DEXTPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 5407 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXIMAGE1DEXTPROC)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint); }
extern "C" { typedef void (*PFNGLCOPYTEXIMAGE2DEXTPROC)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint); }
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE1DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE2DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE3DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 5428 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMEXTPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETMINMAXEXTPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLHISTOGRAMEXTPROC)(GLenum, GLsizei, GLenum, GLboolean); }
extern "C" { typedef void (*PFNGLMINMAXEXTPROC)(GLenum, GLenum, GLboolean); }
extern "C" { typedef void (*PFNGLRESETHISTOGRAMEXTPROC)(GLenum); }
extern "C" { typedef void (*PFNGLRESETMINMAXEXTPROC)(GLenum); }
# 5457 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER1DEXTPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER2DEXTPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFEXTPROC)(GLenum, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIEXTPROC)(GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIVEXTPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLGETCONVOLUTIONFILTEREXTPROC)(GLenum, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETSEPARABLEFILTEREXTPROC)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *); }
extern "C" { typedef void (*PFNGLSEPARABLEFILTER2DEXTPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *); }
# 5487 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLESGIPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERFVSGIPROC)(GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERIVSGIPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLCOPYCOLORTABLESGIPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLGETCOLORTABLESGIPROC)(GLenum, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)(GLenum, GLenum, GLint *); }
# 5501 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENSGIXPROC)(GLenum); }
# 5514 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERISGISPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERIVSGISPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERFSGISPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERFVSGISPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)(GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)(GLenum, GLfloat *); }
# 5528 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXIMAGE4DSGISPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLTEXSUBIMAGE4DSGISPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 5550 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLARETEXTURESRESIDENTEXTPROC)(GLsizei, const GLuint *, GLboolean *); }
extern "C" { typedef void (*PFNGLBINDTEXTUREEXTPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDELETETEXTURESEXTPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENTEXTURESEXTPROC)(GLsizei, GLuint *); }
extern "C" { typedef GLboolean (*PFNGLISTEXTUREEXTPROC)(GLuint); }
extern "C" { typedef void (*PFNGLPRIORITIZETEXTURESEXTPROC)(GLsizei, const GLuint *, const GLclampf *); }
# 5564 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDETAILTEXFUNCSGISPROC)(GLenum, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETDETAILTEXFUNCSGISPROC)(GLenum, GLfloat *); }
# 5574 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHARPENTEXFUNCSGISPROC)(GLenum, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETSHARPENTEXFUNCSGISPROC)(GLenum, GLfloat *); }
# 5592 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEMASKSGISPROC)(GLclampf, GLboolean); }
extern "C" { typedef void (*PFNGLSAMPLEPATTERNSGISPROC)(GLenum); }
# 5613 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLARRAYELEMENTEXTPROC)(GLint); }
extern "C" { typedef void (*PFNGLCOLORPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLDRAWARRAYSEXTPROC)(GLenum, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLEDGEFLAGPOINTEREXTPROC)(GLsizei, GLsizei, const GLboolean *); }
extern "C" { typedef void (*PFNGLGETPOINTERVEXTPROC)(GLenum, GLvoid **); }
extern "C" { typedef void (*PFNGLINDEXPOINTEREXTPROC)(GLenum, GLsizei, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLNORMALPOINTEREXTPROC)(GLenum, GLsizei, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLTEXCOORDPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLVERTEXPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *); }
# 5653 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONEXTPROC)(GLenum); }
# 5684 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSPRITEPARAMETERFSGIXPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLSPRITEPARAMETERFVSGIXPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLSPRITEPARAMETERISGIXPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLSPRITEPARAMETERIVSGIXPROC)(GLenum, const GLint *); }
# 5700 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFEXTPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVEXTPROC)(GLenum, const GLfloat *); }
# 5710 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFSGISPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVSGISPROC)(GLenum, const GLfloat *); }
# 5724 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETINSTRUMENTSSGIXPROC)(void); }
extern "C" { typedef void (*PFNGLINSTRUMENTSBUFFERSGIXPROC)(GLsizei, GLint *); }
extern "C" { typedef GLint (*PFNGLPOLLINSTRUMENTSSGIXPROC)(GLint *); }
extern "C" { typedef void (*PFNGLREADINSTRUMENTSSGIXPROC)(GLint); }
extern "C" { typedef void (*PFNGLSTARTINSTRUMENTSSGIXPROC)(void); }
extern "C" { typedef void (*PFNGLSTOPINSTRUMENTSSGIXPROC)(GLint); }
# 5741 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEZOOMSGIXPROC)(GLint); }
# 5749 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTAGSAMPLEBUFFERSGIXPROC)(void); }
# 5760 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEFORMATIONMAP3DSGIXPROC)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *); }
extern "C" { typedef void (*PFNGLDEFORMATIONMAP3FSGIXPROC)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *); }
extern "C" { typedef void (*PFNGLDEFORMSGIXPROC)(GLbitfield); }
extern "C" { typedef void (*PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)(GLbitfield); }
# 5771 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREFERENCEPLANESGIXPROC)(const GLdouble *); }
# 5779 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHRASTERSGIXPROC)(void); }
# 5792 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGFUNCSGISPROC)(GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETFOGFUNCSGISPROC)(GLfloat *); }
# 5810 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERIHPPROC)(GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERFHPPROC)(GLenum, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)(GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)(GLenum, GLenum, GLfloat *); }
# 5832 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORSUBTABLEEXTPROC)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOPYCOLORSUBTABLEEXTPROC)(GLenum, GLsizei, GLint, GLint, GLsizei); }
# 5845 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLHINTPGIPROC)(GLenum, GLint); }
# 5856 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEEXTPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLGETCOLORTABLEEXTPROC)(GLenum, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 5876 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLISTPARAMETERFVSGIXPROC)(GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETLISTPARAMETERIVSGIXPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLLISTPARAMETERFSGIXPROC)(GLuint, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLLISTPARAMETERFVSGIXPROC)(GLuint, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLLISTPARAMETERISGIXPROC)(GLuint, GLenum, GLint); }
extern "C" { typedef void (*PFNGLLISTPARAMETERIVSGIXPROC)(GLuint, GLenum, const GLint *); }
# 5909 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXMATERIALEXTPROC)(GLenum, GLenum); }
# 5917 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXFUNCEXTPROC)(GLenum, GLclampf); }
# 5930 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOCKARRAYSEXTPROC)(GLint, GLsizei); }
extern "C" { typedef void (*PFNGLUNLOCKARRAYSEXTPROC)(void); }
# 5940 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCULLPARAMETERDVEXTPROC)(GLenum, GLdouble *); }
extern "C" { typedef void (*PFNGLCULLPARAMETERFVEXTPROC)(GLenum, GLfloat *); }
# 5970 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTCOLORMATERIALSGIXPROC)(GLenum, GLenum); }
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTFSGIXPROC)(GLenum, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTFVSGIXPROC)(GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTISGIXPROC)(GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTIVSGIXPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELFSGIXPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELISGIXPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALFSGIXPROC)(GLenum, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALFVSGIXPROC)(GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALISGIXPROC)(GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALIVSGIXPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLGETFRAGMENTLIGHTFVSGIXPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETFRAGMENTLIGHTIVSGIXPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETFRAGMENTMATERIALFVSGIXPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETFRAGMENTMATERIALIVSGIXPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLLIGHTENVISGIXPROC)(GLenum, GLint); }
# 6003 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTSEXTPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *); }
# 6021 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLAPPLYTEXTUREEXTPROC)(GLenum); }
extern "C" { typedef void (*PFNGLTEXTURELIGHTEXTPROC)(GLenum); }
extern "C" { typedef void (*PFNGLTEXTUREMATERIALEXTPROC)(GLenum, GLenum); }
# 6044 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLASYNCMARKERSGIXPROC)(GLuint); }
extern "C" { typedef GLint (*PFNGLFINISHASYNCSGIXPROC)(GLuint *); }
extern "C" { typedef GLint (*PFNGLPOLLASYNCSGIXPROC)(GLuint *); }
extern "C" { typedef GLuint (*PFNGLGENASYNCMARKERSSGIXPROC)(GLsizei); }
extern "C" { typedef void (*PFNGLDELETEASYNCMARKERSSGIXPROC)(GLuint, GLsizei); }
extern "C" { typedef GLboolean (*PFNGLISASYNCMARKERSGIXPROC)(GLuint); }
# 6068 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXPOINTERVINTELPROC)(GLint, GLenum, const GLvoid **); }
extern "C" { typedef void (*PFNGLNORMALPOINTERVINTELPROC)(GLenum, const GLvoid **); }
extern "C" { typedef void (*PFNGLCOLORPOINTERVINTELPROC)(GLint, GLenum, const GLvoid **); }
extern "C" { typedef void (*PFNGLTEXCOORDPOINTERVINTELPROC)(GLint, GLenum, const GLvoid **); }
# 6086 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)(GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)(GLenum, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
# 6125 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BEXTPROC)(GLbyte, GLbyte, GLbyte); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BVEXTPROC)(const GLbyte *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DEXTPROC)(GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DVEXTPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FEXTPROC)(GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FVEXTPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IEXTPROC)(GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IVEXTPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SEXTPROC)(GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SVEXTPROC)(const GLshort *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBEXTPROC)(GLubyte, GLubyte, GLubyte); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBVEXTPROC)(const GLubyte *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIEXTPROC)(GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIVEXTPROC)(const GLuint *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USEXTPROC)(GLushort, GLushort, GLushort); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USVEXTPROC)(const GLushort *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTEREXTPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
# 6149 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURENORMALEXTPROC)(GLenum); }
# 6158 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWARRAYSEXTPROC)(GLenum, GLint *, GLsizei *, GLsizei); }
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTSEXTPROC)(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei); }
# 6171 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDFEXTPROC)(GLfloat); }
extern "C" { typedef void (*PFNGLFOGCOORDFVEXTPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLFOGCOORDDEXTPROC)(GLdouble); }
extern "C" { typedef void (*PFNGLFOGCOORDDVEXTPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLFOGCOORDPOINTEREXTPROC)(GLenum, GLsizei, const GLvoid *); }
# 6208 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3BEXTPROC)(GLbyte, GLbyte, GLbyte); }
extern "C" { typedef void (*PFNGLTANGENT3BVEXTPROC)(const GLbyte *); }
extern "C" { typedef void (*PFNGLTANGENT3DEXTPROC)(GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLTANGENT3DVEXTPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLTANGENT3FEXTPROC)(GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLTANGENT3FVEXTPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLTANGENT3IEXTPROC)(GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLTANGENT3IVEXTPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLTANGENT3SEXTPROC)(GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLTANGENT3SVEXTPROC)(const GLshort *); }
extern "C" { typedef void (*PFNGLBINORMAL3BEXTPROC)(GLbyte, GLbyte, GLbyte); }
extern "C" { typedef void (*PFNGLBINORMAL3BVEXTPROC)(const GLbyte *); }
extern "C" { typedef void (*PFNGLBINORMAL3DEXTPROC)(GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLBINORMAL3DVEXTPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLBINORMAL3FEXTPROC)(GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLBINORMAL3FVEXTPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLBINORMAL3IEXTPROC)(GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLBINORMAL3IVEXTPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLBINORMAL3SEXTPROC)(GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLBINORMAL3SVEXTPROC)(const GLshort *); }
extern "C" { typedef void (*PFNGLTANGENTPOINTEREXTPROC)(GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLBINORMALPOINTEREXTPROC)(GLenum, GLsizei, const GLvoid *); }
# 6253 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINISHTEXTURESUNXPROC)(void); }
# 6268 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORBSUNPROC)(GLbyte); }
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORSSUNPROC)(GLshort); }
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORISUNPROC)(GLint); }
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORFSUNPROC)(GLfloat); }
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORDSUNPROC)(GLdouble); }
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUBSUNPROC)(GLubyte); }
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUSSUNPROC)(GLushort); }
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUISUNPROC)(GLuint); }
# 6289 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUISUNPROC)(GLuint); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUSSUNPROC)(GLushort); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUBSUNPROC)(GLubyte); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVSUNPROC)(const GLuint *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUSVSUNPROC)(const GLushort *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUBVSUNPROC)(const GLubyte *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEPOINTERSUNPROC)(GLenum, GLsizei, const GLvoid **); }
# 6342 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX2FSUNPROC)(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX2FVSUNPROC)(const GLubyte *, const GLfloat *); }
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX3FSUNPROC)(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX3FVSUNPROC)(const GLubyte *, const GLfloat *); }
extern "C" { typedef void (*PFNGLCOLOR3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLCOLOR3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLTEXCOORD2FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLTEXCOORD2FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLTEXCOORD4FVERTEX4FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLTEXCOORD4FVERTEX4FVSUNPROC)(const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)(GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)(const GLfloat *, const GLubyte *, const GLfloat *); }
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)(const GLuint *, const GLubyte *, const GLfloat *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 6389 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEEXTPROC)(GLenum, GLenum, GLenum, GLenum); }
# 6397 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEINGRPROC)(GLenum, GLenum, GLenum, GLenum); }
# 6443 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTFEXTPROC)(GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXWEIGHTFVEXTPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXWEIGHTPOINTEREXTPROC)(GLsizei, GLenum, GLsizei, const GLvoid *); }
# 6458 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHVERTEXARRAYRANGENVPROC)(void); }
extern "C" { typedef void (*PFNGLVERTEXARRAYRANGENVPROC)(GLsizei, const GLvoid *); }
# 6479 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERFVNVPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERFNVPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERIVNVPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERINVPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLCOMBINERINPUTNVPROC)(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum); }
extern "C" { typedef void (*PFNGLCOMBINEROUTPUTNVPROC)(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean); }
extern "C" { typedef void (*PFNGLFINALCOMBINERINPUTNVPROC)(GLenum, GLenum, GLenum, GLenum); }
extern "C" { typedef void (*PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLint *); }
# 6515 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESIZEBUFFERSMESAPROC)(void); }
# 6546 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DMESAPROC)(GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLWINDOWPOS2DVMESAPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLWINDOWPOS2FMESAPROC)(GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLWINDOWPOS2FVMESAPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLWINDOWPOS2IMESAPROC)(GLint, GLint); }
extern "C" { typedef void (*PFNGLWINDOWPOS2IVMESAPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLWINDOWPOS2SMESAPROC)(GLshort, GLshort); }
extern "C" { typedef void (*PFNGLWINDOWPOS2SVMESAPROC)(const GLshort *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3DMESAPROC)(GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLWINDOWPOS3DVMESAPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3FMESAPROC)(GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLWINDOWPOS3FVMESAPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3IMESAPROC)(GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLWINDOWPOS3IVMESAPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLWINDOWPOS3SMESAPROC)(GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLWINDOWPOS3SVMESAPROC)(const GLshort *); }
extern "C" { typedef void (*PFNGLWINDOWPOS4DMESAPROC)(GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLWINDOWPOS4DVMESAPROC)(const GLdouble *); }
extern "C" { typedef void (*PFNGLWINDOWPOS4FMESAPROC)(GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLWINDOWPOS4FVMESAPROC)(const GLfloat *); }
extern "C" { typedef void (*PFNGLWINDOWPOS4IMESAPROC)(GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLWINDOWPOS4IVMESAPROC)(const GLint *); }
extern "C" { typedef void (*PFNGLWINDOWPOS4SMESAPROC)(GLshort, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLWINDOWPOS4SVMESAPROC)(const GLshort *); }
# 6582 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIMODEDRAWARRAYSIBMPROC)(const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint); }
extern "C" { typedef void (*PFNGLMULTIMODEDRAWELEMENTSIBMPROC)(const GLenum *, const GLsizei *, GLenum, const GLvoid *const *, GLsizei, GLint); }
# 6598 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
extern "C" { typedef void (*PFNGLEDGEFLAGPOINTERLISTIBMPROC)(GLint, const GLboolean **, GLint); }
extern "C" { typedef void (*PFNGLFOGCOORDPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
extern "C" { typedef void (*PFNGLINDEXPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
extern "C" { typedef void (*PFNGLNORMALPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
extern "C" { typedef void (*PFNGLTEXCOORDPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
extern "C" { typedef void (*PFNGLVERTEXPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 6637 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTBUFFERMASK3DFXPROC)(GLuint); }
# 6646 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEMASKEXTPROC)(GLclampf, GLboolean); }
extern "C" { typedef void (*PFNGLSAMPLEPATTERNEXTPROC)(GLenum); }
# 6671 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURECOLORMASKSGISPROC)(GLboolean, GLboolean, GLboolean, GLboolean); }
# 6679 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIGLOOINTERFACESGIXPROC)(GLenum, const GLvoid *); }
# 6701 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEFENCESNVPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENFENCESNVPROC)(GLsizei, GLuint *); }
extern "C" { typedef GLboolean (*PFNGLISFENCENVPROC)(GLuint); }
extern "C" { typedef GLboolean (*PFNGLTESTFENCENVPROC)(GLuint); }
extern "C" { typedef void (*PFNGLGETFENCEIVNVPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLFINISHFENCENVPROC)(GLuint); }
extern "C" { typedef void (*PFNGLSETFENCENVPROC)(GLuint, GLenum); }
# 6723 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPCONTROLPOINTSNVPROC)(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid *); }
extern "C" { typedef void (*PFNGLMAPPARAMETERIVNVPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMAPPARAMETERFVNVPROC)(GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETMAPCONTROLPOINTSNVPROC)(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid *); }
extern "C" { typedef void (*PFNGLGETMAPPARAMETERIVNVPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETMAPPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETMAPATTRIBPARAMETERIVNVPROC)(GLenum, GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETMAPATTRIBPARAMETERFVNVPROC)(GLenum, GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLEVALMAPSNVPROC)(GLenum, GLenum); }
# 6744 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
# 6836 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLAREPROGRAMSRESIDENTNVPROC)(GLsizei, const GLuint *, GLboolean *); }
extern "C" { typedef void (*PFNGLBINDPROGRAMNVPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDELETEPROGRAMSNVPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLEXECUTEPROGRAMNVPROC)(GLenum, GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLGENPROGRAMSNVPROC)(GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLGETPROGRAMPARAMETERDVNVPROC)(GLenum, GLuint, GLenum, GLdouble *); }
extern "C" { typedef void (*PFNGLGETPROGRAMPARAMETERFVNVPROC)(GLenum, GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETPROGRAMIVNVPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETPROGRAMSTRINGNVPROC)(GLuint, GLenum, GLubyte *); }
extern "C" { typedef void (*PFNGLGETTRACKMATRIXIVNVPROC)(GLenum, GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVNVPROC)(GLuint, GLenum, GLdouble *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVNVPROC)(GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVNVPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVNVPROC)(GLuint, GLenum, GLvoid **); }
extern "C" { typedef GLboolean (*PFNGLISPROGRAMNVPROC)(GLuint); }
extern "C" { typedef void (*PFNGLLOADPROGRAMNVPROC)(GLenum, GLuint, GLsizei, const GLubyte *); }
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4DNVPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4DVNVPROC)(GLenum, GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4FNVPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4FVNVPROC)(GLenum, GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERS4DVNVPROC)(GLenum, GLuint, GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERS4FVNVPROC)(GLenum, GLuint, GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLREQUESTRESIDENTPROGRAMSNVPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLTRACKMATRIXNVPROC)(GLenum, GLuint, GLenum, GLenum); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERNVPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DNVPROC)(GLuint, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVNVPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FNVPROC)(GLuint, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVNVPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SNVPROC)(GLuint, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVNVPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DNVPROC)(GLuint, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVNVPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FNVPROC)(GLuint, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVNVPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SNVPROC)(GLuint, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVNVPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DNVPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVNVPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FNVPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVNVPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SNVPROC)(GLuint, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVNVPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DNVPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVNVPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FNVPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVNVPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SNVPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVNVPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBNVPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVNVPROC)(GLuint, const GLubyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1SVNVPROC)(GLuint, GLsizei, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2SVNVPROC)(GLuint, GLsizei, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3SVNVPROC)(GLuint, GLsizei, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4SVNVPROC)(GLuint, GLsizei, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4UBVNVPROC)(GLuint, GLsizei, const GLubyte *); }
# 6934 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUMPPARAMETERIVATIPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLTEXBUMPPARAMETERFVATIPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETTEXBUMPPARAMETERIVATIPROC)(GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETTEXBUMPPARAMETERFVATIPROC)(GLenum, GLfloat *); }
# 6958 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGENFRAGMENTSHADERSATIPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBINDFRAGMENTSHADERATIPROC)(GLuint); }
extern "C" { typedef void (*PFNGLDELETEFRAGMENTSHADERATIPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBEGINFRAGMENTSHADERATIPROC)(void); }
extern "C" { typedef void (*PFNGLENDFRAGMENTSHADERATIPROC)(void); }
extern "C" { typedef void (*PFNGLPASSTEXCOORDATIPROC)(GLuint, GLuint, GLenum); }
extern "C" { typedef void (*PFNGLSAMPLEMAPATIPROC)(GLuint, GLuint, GLenum); }
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP1ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP2ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP3ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP1ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP2ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP3ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)(GLuint, const GLfloat *); }
# 6980 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPNTRIANGLESIATIPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLPNTRIANGLESFATIPROC)(GLenum, GLfloat); }
# 7000 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLNEWOBJECTBUFFERATIPROC)(GLsizei, const GLvoid *, GLenum); }
extern "C" { typedef GLboolean (*PFNGLISOBJECTBUFFERATIPROC)(GLuint); }
extern "C" { typedef void (*PFNGLUPDATEOBJECTBUFFERATIPROC)(GLuint, GLuint, GLsizei, const GLvoid *, GLenum); }
extern "C" { typedef void (*PFNGLGETOBJECTBUFFERFVATIPROC)(GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETOBJECTBUFFERIVATIPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLFREEOBJECTBUFFERATIPROC)(GLuint); }
extern "C" { typedef void (*PFNGLARRAYOBJECTATIPROC)(GLenum, GLint, GLenum, GLsizei, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLGETARRAYOBJECTFVATIPROC)(GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETARRAYOBJECTIVATIPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLVARIANTARRAYOBJECTATIPROC)(GLuint, GLenum, GLsizei, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLGETVARIANTARRAYOBJECTFVATIPROC)(GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETVARIANTARRAYOBJECTIVATIPROC)(GLuint, GLenum, GLint *); }
# 7060 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINVERTEXSHADEREXTPROC)(void); }
extern "C" { typedef void (*PFNGLENDVERTEXSHADEREXTPROC)(void); }
extern "C" { typedef void (*PFNGLBINDVERTEXSHADEREXTPROC)(GLuint); }
extern "C" { typedef GLuint (*PFNGLGENVERTEXSHADERSEXTPROC)(GLuint); }
extern "C" { typedef void (*PFNGLDELETEVERTEXSHADEREXTPROC)(GLuint); }
extern "C" { typedef void (*PFNGLSHADEROP1EXTPROC)(GLenum, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLSHADEROP2EXTPROC)(GLenum, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLSHADEROP3EXTPROC)(GLenum, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLSWIZZLEEXTPROC)(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum); }
extern "C" { typedef void (*PFNGLWRITEMASKEXTPROC)(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum); }
extern "C" { typedef void (*PFNGLINSERTCOMPONENTEXTPROC)(GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLEXTRACTCOMPONENTEXTPROC)(GLuint, GLuint, GLuint); }
extern "C" { typedef GLuint (*PFNGLGENSYMBOLSEXTPROC)(GLenum, GLenum, GLenum, GLuint); }
extern "C" { typedef void (*PFNGLSETINVARIANTEXTPROC)(GLuint, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLSETLOCALCONSTANTEXTPROC)(GLuint, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLVARIANTBVEXTPROC)(GLuint, const GLbyte *); }
extern "C" { typedef void (*PFNGLVARIANTSVEXTPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVARIANTIVEXTPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVARIANTFVEXTPROC)(GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLVARIANTDVEXTPROC)(GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLVARIANTUBVEXTPROC)(GLuint, const GLubyte *); }
extern "C" { typedef void (*PFNGLVARIANTUSVEXTPROC)(GLuint, const GLushort *); }
extern "C" { typedef void (*PFNGLVARIANTUIVEXTPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVARIANTPOINTEREXTPROC)(GLuint, GLenum, GLuint, const GLvoid *); }
extern "C" { typedef void (*PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)(GLuint); }
extern "C" { typedef void (*PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)(GLuint); }
extern "C" { typedef GLuint (*PFNGLBINDLIGHTPARAMETEREXTPROC)(GLenum, GLenum); }
extern "C" { typedef GLuint (*PFNGLBINDMATERIALPARAMETEREXTPROC)(GLenum, GLenum); }
extern "C" { typedef GLuint (*PFNGLBINDTEXGENPARAMETEREXTPROC)(GLenum, GLenum, GLenum); }
extern "C" { typedef GLuint (*PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)(GLenum, GLenum); }
extern "C" { typedef GLuint (*PFNGLBINDPARAMETEREXTPROC)(GLenum); }
extern "C" { typedef GLboolean (*PFNGLISVARIANTENABLEDEXTPROC)(GLuint, GLenum); }
extern "C" { typedef void (*PFNGLGETVARIANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
extern "C" { typedef void (*PFNGLGETVARIANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETVARIANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETVARIANTPOINTERVEXTPROC)(GLuint, GLenum, GLvoid **); }
extern "C" { typedef void (*PFNGLGETINVARIANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
extern "C" { typedef void (*PFNGLGETINVARIANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETINVARIANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
# 7153 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1SATIPROC)(GLenum, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM1SVATIPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM1IATIPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM1IVATIPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM1FATIPROC)(GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM1FVATIPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM1DATIPROC)(GLenum, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM1DVATIPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM2SATIPROC)(GLenum, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM2SVATIPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM2IATIPROC)(GLenum, GLint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM2IVATIPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM2FATIPROC)(GLenum, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM2FVATIPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM2DATIPROC)(GLenum, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM2DVATIPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM3SATIPROC)(GLenum, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM3SVATIPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM3IATIPROC)(GLenum, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM3IVATIPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM3FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM3FVATIPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM3DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM3DVATIPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM4SATIPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM4SVATIPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM4IATIPROC)(GLenum, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM4IVATIPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM4FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM4FVATIPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM4DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLVERTEXSTREAM4DVATIPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLNORMALSTREAM3BATIPROC)(GLenum, GLbyte, GLbyte, GLbyte); }
extern "C" { typedef void (*PFNGLNORMALSTREAM3BVATIPROC)(GLenum, const GLbyte *); }
extern "C" { typedef void (*PFNGLNORMALSTREAM3SATIPROC)(GLenum, GLshort, GLshort, GLshort); }
extern "C" { typedef void (*PFNGLNORMALSTREAM3SVATIPROC)(GLenum, const GLshort *); }
extern "C" { typedef void (*PFNGLNORMALSTREAM3IATIPROC)(GLenum, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLNORMALSTREAM3IVATIPROC)(GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLNORMALSTREAM3FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLNORMALSTREAM3FVATIPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLNORMALSTREAM3DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLNORMALSTREAM3DVATIPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)(GLenum); }
extern "C" { typedef void (*PFNGLVERTEXBLENDENVIATIPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLVERTEXBLENDENVFATIPROC)(GLenum, GLfloat); }
# 7207 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLELEMENTPOINTERATIPROC)(GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLDRAWELEMENTARRAYATIPROC)(GLenum, GLsizei); }
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTARRAYATIPROC)(GLenum, GLuint, GLuint, GLsizei); }
# 7217 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWMESHARRAYSSUNPROC)(GLenum, GLint, GLsizei, GLsizei); }
# 7243 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENOCCLUSIONQUERIESNVPROC)(GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLDELETEOCCLUSIONQUERIESNVPROC)(GLsizei, const GLuint *); }
extern "C" { typedef GLboolean (*PFNGLISOCCLUSIONQUERYNVPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBEGINOCCLUSIONQUERYNVPROC)(GLuint); }
extern "C" { typedef void (*PFNGLENDOCCLUSIONQUERYNVPROC)(void); }
extern "C" { typedef void (*PFNGLGETOCCLUSIONQUERYIVNVPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETOCCLUSIONQUERYUIVNVPROC)(GLuint, GLenum, GLuint *); }
# 7258 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERINVPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLPOINTPARAMETERIVNVPROC)(GLenum, const GLint *); }
# 7279 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLACTIVESTENCILFACEEXTPROC)(GLenum); }
# 7299 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLELEMENTPOINTERAPPLEPROC)(GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLDRAWELEMENTARRAYAPPLEPROC)(GLenum, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum, GLuint, GLuint, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)(GLenum, const GLint *, const GLsizei *, GLsizei); }
extern "C" { typedef void (*PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei); }
# 7318 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENFENCESAPPLEPROC)(GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLDELETEFENCESAPPLEPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLSETFENCEAPPLEPROC)(GLuint); }
extern "C" { typedef GLboolean (*PFNGLISFENCEAPPLEPROC)(GLuint); }
extern "C" { typedef GLboolean (*PFNGLTESTFENCEAPPLEPROC)(GLuint); }
extern "C" { typedef void (*PFNGLFINISHFENCEAPPLEPROC)(GLuint); }
extern "C" { typedef GLboolean (*PFNGLTESTOBJECTAPPLEPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLFINISHOBJECTAPPLEPROC)(GLenum, GLint); }
# 7336 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDVERTEXARRAYAPPLEPROC)(GLuint); }
extern "C" { typedef void (*PFNGLDELETEVERTEXARRAYSAPPLEPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENVERTEXARRAYSAPPLEPROC)(GLsizei, GLuint *); }
extern "C" { typedef GLboolean (*PFNGLISVERTEXARRAYAPPLEPROC)(GLuint); }
# 7349 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXARRAYRANGEAPPLEPROC)(GLsizei, GLvoid *); }
extern "C" { typedef void (*PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)(GLsizei, GLvoid *); }
extern "C" { typedef void (*PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)(GLenum, GLint); }
# 7367 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWBUFFERSATIPROC)(GLsizei, const GLenum *); }
# 7400 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)(GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)(GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)(GLuint, GLsizei, const GLubyte *, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)(GLuint, GLsizei, const GLubyte *, const GLdouble *); }
extern "C" { typedef void (*PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)(GLuint, GLsizei, const GLubyte *, GLfloat *); }
extern "C" { typedef void (*PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)(GLuint, GLsizei, const GLubyte *, GLdouble *); }
# 7458 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX2HNVPROC)(GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLVERTEX2HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEX3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLVERTEX3HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEX4HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLVERTEX4HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLNORMAL3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLNORMAL3HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLCOLOR3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLCOLOR3HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLCOLOR4HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLCOLOR4HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLTEXCOORD1HNVPROC)(GLhalfNV); }
extern "C" { typedef void (*PFNGLTEXCOORD1HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLTEXCOORD2HNVPROC)(GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLTEXCOORD2HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLTEXCOORD3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLTEXCOORD3HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLTEXCOORD4HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLTEXCOORD4HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1HNVPROC)(GLenum, GLhalfNV); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD1HVNVPROC)(GLenum, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2HNVPROC)(GLenum, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD2HVNVPROC)(GLenum, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3HNVPROC)(GLenum, GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD3HVNVPROC)(GLenum, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4HNVPROC)(GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLMULTITEXCOORD4HVNVPROC)(GLenum, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLFOGCOORDHNVPROC)(GLhalfNV); }
extern "C" { typedef void (*PFNGLFOGCOORDHVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3HVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEXWEIGHTHNVPROC)(GLhalfNV); }
extern "C" { typedef void (*PFNGLVERTEXWEIGHTHVNVPROC)(const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1HNVPROC)(GLuint, GLhalfNV); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB1HVNVPROC)(GLuint, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2HNVPROC)(GLuint, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB2HVNVPROC)(GLuint, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3HNVPROC)(GLuint, GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB3HVNVPROC)(GLuint, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4HNVPROC)(GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
extern "C" { typedef void (*PFNGLVERTEXATTRIB4HVNVPROC)(GLuint, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
# 7512 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELDATARANGENVPROC)(GLenum, GLsizei, GLvoid *); }
extern "C" { typedef void (*PFNGLFLUSHPIXELDATARANGENVPROC)(GLenum); }
# 7522 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRIMITIVERESTARTNVPROC)(void); }
extern "C" { typedef void (*PFNGLPRIMITIVERESTARTINDEXNVPROC)(GLuint); }
# 7540 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPOBJECTBUFFERATIPROC)(GLuint); }
extern "C" { typedef void (*PFNGLUNMAPOBJECTBUFFERATIPROC)(GLuint); }
# 7550 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILOPSEPARATEATIPROC)(GLenum, GLenum, GLenum, GLenum); }
extern "C" { typedef void (*PFNGLSTENCILFUNCSEPARATEATIPROC)(GLenum, GLenum, GLint, GLuint); }
# 7561 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)(GLuint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)(GLuint, GLenum, GLint *); }
# 7575 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHBOUNDSEXTPROC)(GLclampd, GLclampd); }
# 7587 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEEXTPROC)(GLenum, GLenum); }
# 7639 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISRENDERBUFFEREXTPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBINDRENDERBUFFEREXTPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDELETERENDERBUFFERSEXTPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENRENDERBUFFERSEXTPROC)(GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEEXTPROC)(GLenum, GLenum, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef GLboolean (*PFNGLISFRAMEBUFFEREXTPROC)(GLuint); }
extern "C" { typedef void (*PFNGLBINDFRAMEBUFFEREXTPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDELETEFRAMEBUFFERSEXTPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENFRAMEBUFFERSEXTPROC)(GLsizei, GLuint *); }
extern "C" { typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)(GLenum); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)(GLenum, GLenum, GLenum, GLuint); }
extern "C" { typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGENERATEMIPMAPEXTPROC)(GLenum); }
# 7663 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTRINGMARKERGREMEDYPROC)(GLsizei, const GLvoid *); }
# 7675 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILCLEARTAGEXTPROC)(GLsizei, GLuint); }
# 7687 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLITFRAMEBUFFEREXTPROC)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum); }
# 7695 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei); }
# 7708 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTI64VEXTPROC)(GLuint, GLenum, GLint64EXT *); }
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUI64VEXTPROC)(GLuint, GLenum, GLuint64EXT *); }
# 7718 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERS4FVEXTPROC)(GLenum, GLuint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC)(GLenum, GLuint, GLsizei, const GLfloat *); }
# 7728 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERPARAMETERIAPPLEPROC)(GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC)(GLenum, GLintptr, GLsizeiptr); }
# 7752 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4INVPROC)(GLenum, GLuint, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC)(GLenum, GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC)(GLenum, GLuint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4UINVPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC)(GLenum, GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC)(GLenum, GLuint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4INVPROC)(GLenum, GLuint, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4IVNVPROC)(GLenum, GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERSI4IVNVPROC)(GLenum, GLuint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4UINVPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4UIVNVPROC)(GLenum, GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC)(GLenum, GLuint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC)(GLenum, GLuint, GLint *); }
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC)(GLenum, GLuint, GLuint *); }
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERIIVNVPROC)(GLenum, GLuint, GLint *); }
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC)(GLenum, GLuint, GLuint *); }
# 7778 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMVERTEXLIMITNVPROC)(GLenum, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREEXTPROC)(GLenum, GLenum, GLuint, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)(GLenum, GLenum, GLuint, GLint, GLint); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)(GLenum, GLenum, GLuint, GLint, GLenum); }
# 7789 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERIEXTPROC)(GLuint, GLenum, GLint); }
# 7819 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IEXTPROC)(GLuint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IEXTPROC)(GLuint, GLint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IEXTPROC)(GLuint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IEXTPROC)(GLuint, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIEXTPROC)(GLuint, GLuint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIEXTPROC)(GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIEXTPROC)(GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIEXTPROC)(GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IVEXTPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IVEXTPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IVEXTPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IVEXTPROC)(GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIVEXTPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIVEXTPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIVEXTPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIVEXTPROC)(GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4BVEXTPROC)(GLuint, const GLbyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4SVEXTPROC)(GLuint, const GLshort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UBVEXTPROC)(GLuint, const GLubyte *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4USVEXTPROC)(GLuint, const GLushort *); }
extern "C" { typedef void (*PFNGLVERTEXATTRIBIPOINTEREXTPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIIVEXTPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIUIVEXTPROC)(GLuint, GLenum, GLuint *); }
# 7859 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMUIVEXTPROC)(GLuint, GLint, GLuint *); }
extern "C" { typedef void (*PFNGLBINDFRAGDATALOCATIONEXTPROC)(GLuint, GLuint, const GLchar *); }
extern "C" { typedef GLint (*PFNGLGETFRAGDATALOCATIONEXTPROC)(GLuint, const GLchar *); }
extern "C" { typedef void (*PFNGLUNIFORM1UIEXTPROC)(GLint, GLuint); }
extern "C" { typedef void (*PFNGLUNIFORM2UIEXTPROC)(GLint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLUNIFORM3UIEXTPROC)(GLint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLUNIFORM4UIEXTPROC)(GLint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLUNIFORM1UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLUNIFORM2UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLUNIFORM3UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLUNIFORM4UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 7878 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWARRAYSINSTANCEDEXTPROC)(GLenum, GLint, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLDRAWELEMENTSINSTANCEDEXTPROC)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei); }
# 7895 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUFFEREXTPROC)(GLenum, GLenum, GLuint); }
# 7917 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHRANGEDNVPROC)(GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLCLEARDEPTHDNVPROC)(GLdouble); }
extern "C" { typedef void (*PFNGLDEPTHBOUNDSDNVPROC)(GLdouble, GLdouble); }
# 7931 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC)(GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei); }
# 7949 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLuint *); }
# 7964 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORMASKINDEXEDEXTPROC)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean); }
extern "C" { typedef void (*PFNGLGETBOOLEANINDEXEDVEXTPROC)(GLenum, GLuint, GLboolean *); }
extern "C" { typedef void (*PFNGLGETINTEGERINDEXEDVEXTPROC)(GLenum, GLuint, GLint *); }
extern "C" { typedef void (*PFNGLENABLEINDEXEDEXTPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDISABLEINDEXEDEXTPROC)(GLenum, GLuint); }
extern "C" { typedef GLboolean (*PFNGLISENABLEDINDEXEDEXTPROC)(GLenum, GLuint); }
# 7987 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINTRANSFORMFEEDBACKNVPROC)(GLenum); }
extern "C" { typedef void (*PFNGLENDTRANSFORMFEEDBACKNVPROC)(void); }
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)(GLuint, const GLint *, GLenum); }
extern "C" { typedef void (*PFNGLBINDBUFFERRANGENVPROC)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr); }
extern "C" { typedef void (*PFNGLBINDBUFFEROFFSETNVPROC)(GLenum, GLuint, GLuint, GLintptr); }
extern "C" { typedef void (*PFNGLBINDBUFFERBASENVPROC)(GLenum, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)(GLuint, GLsizei, const GLint *, GLenum); }
extern "C" { typedef void (*PFNGLACTIVEVARYINGNVPROC)(GLuint, const GLchar *); }
extern "C" { typedef GLint (*PFNGLGETVARYINGLOCATIONNVPROC)(GLuint, const GLchar *); }
extern "C" { typedef void (*PFNGLGETACTIVEVARYINGNVPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *); }
extern "C" { typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)(GLuint, GLuint, GLint *); }
# 8007 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMBUFFEREXTPROC)(GLuint, GLint, GLuint); }
extern "C" { typedef GLint (*PFNGLGETUNIFORMBUFFERSIZEEXTPROC)(GLuint, GLint); }
extern "C" { typedef GLintptr (*PFNGLGETUNIFORMOFFSETEXTPROC)(GLuint, GLint); }
# 8022 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXPARAMETERIIVEXTPROC)(GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLTEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, const GLuint *); }
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIIVEXTPROC)(GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, GLuint *); }
extern "C" { typedef void (*PFNGLCLEARCOLORIIEXTPROC)(GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLCLEARCOLORIUIEXTPROC)(GLuint, GLuint, GLuint, GLuint); }
# 8035 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMETERMINATORGREMEDYPROC)(void); }
# 8044 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINCONDITIONALRENDERNVPROC)(GLuint, GLenum); }
extern "C" { typedef void (*PFNGLENDCONDITIONALRENDERNVPROC)(void); }
# 8059 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRESENTFRAMEKEYEDNVPROC)(GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLuint, GLenum, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLPRESENTFRAMEDUALFILLNVPROC)(GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint); }
extern "C" { typedef void (*PFNGLGETVIDEOIVNVPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETVIDEOUIVNVPROC)(GLuint, GLenum, GLuint *); }
extern "C" { typedef void (*PFNGLGETVIDEOI64VNVPROC)(GLuint, GLenum, GLint64EXT *); }
extern "C" { typedef void (*PFNGLGETVIDEOUI64VNVPROC)(GLuint, GLenum, GLuint64EXT *); }
extern "C" { typedef void (*PFNGLVIDEOPARAMETERIVNVPROC)(GLuint, GLenum, const GLint *); }
# 8079 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINTRANSFORMFEEDBACKEXTPROC)(GLenum); }
extern "C" { typedef void (*PFNGLENDTRANSFORMFEEDBACKEXTPROC)(void); }
extern "C" { typedef void (*PFNGLBINDBUFFERRANGEEXTPROC)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr); }
extern "C" { typedef void (*PFNGLBINDBUFFEROFFSETEXTPROC)(GLenum, GLuint, GLuint, GLintptr); }
extern "C" { typedef void (*PFNGLBINDBUFFERBASEEXTPROC)(GLenum, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC)(GLuint, GLsizei, const GLchar **, GLenum); }
extern "C" { typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *); }
# 8278 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLIENTATTRIBDEFAULTEXTPROC)(GLbitfield); }
extern "C" { typedef void (*PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC)(GLbitfield); }
extern "C" { typedef void (*PFNGLMATRIXLOADFEXTPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMATRIXLOADDEXTPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMATRIXMULTFEXTPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMATRIXMULTDEXTPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMATRIXLOADIDENTITYEXTPROC)(GLenum); }
extern "C" { typedef void (*PFNGLMATRIXROTATEFEXTPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLMATRIXROTATEDEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMATRIXSCALEFEXTPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLMATRIXSCALEDEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMATRIXTRANSLATEFEXTPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLMATRIXTRANSLATEDEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMATRIXFRUSTUMEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMATRIXORTHOEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLMATRIXPOPEXTPROC)(GLenum); }
extern "C" { typedef void (*PFNGLMATRIXPUSHEXTPROC)(GLenum); }
extern "C" { typedef void (*PFNGLMATRIXLOADTRANSPOSEFEXTPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMATRIXLOADTRANSPOSEDEXTPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMATRIXMULTTRANSPOSEFEXTPROC)(GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMATRIXMULTTRANSPOSEDEXTPROC)(GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERFEXTPROC)(GLuint, GLenum, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERFVEXTPROC)(GLuint, GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERIEXTPROC)(GLuint, GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERIVEXTPROC)(GLuint, GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLTEXTUREIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLTEXTUREIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLTEXTURESUBIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLTEXTURESUBIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOPYTEXTUREIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint); }
extern "C" { typedef void (*PFNGLCOPYTEXTUREIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint); }
extern "C" { typedef void (*PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLGETTEXTUREIMAGEEXTPROC)(GLuint, GLenum, GLint, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETTEXTUREPARAMETERFVEXTPROC)(GLuint, GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETTEXTUREPARAMETERIVEXTPROC)(GLuint, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC)(GLuint, GLenum, GLint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC)(GLuint, GLenum, GLint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLTEXTUREIMAGE3DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLTEXTURESUBIMAGE3DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERFEXTPROC)(GLenum, GLenum, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERFVEXTPROC)(GLenum, GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERIEXTPROC)(GLenum, GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERIVEXTPROC)(GLenum, GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLMULTITEXIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLMULTITEXSUBIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLMULTITEXSUBIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOPYMULTITEXIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint); }
extern "C" { typedef void (*PFNGLCOPYMULTITEXIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint); }
extern "C" { typedef void (*PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei); }
extern "C" { typedef void (*PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLGETMULTITEXIMAGEEXTPROC)(GLenum, GLenum, GLint, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLGETMULTITEXPARAMETERFVEXTPROC)(GLenum, GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETMULTITEXPARAMETERIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC)(GLenum, GLenum, GLint, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC)(GLenum, GLenum, GLint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXIMAGE3DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLMULTITEXSUBIMAGE3DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLBINDMULTITEXTUREEXTPROC)(GLenum, GLenum, GLuint); }
extern "C" { typedef void (*PFNGLENABLECLIENTSTATEINDEXEDEXTPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLMULTITEXCOORDPOINTEREXTPROC)(GLenum, GLint, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLMULTITEXENVFEXTPROC)(GLenum, GLenum, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXENVFVEXTPROC)(GLenum, GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXENVIEXTPROC)(GLenum, GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXENVIVEXTPROC)(GLenum, GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXGENDEXTPROC)(GLenum, GLenum, GLenum, GLdouble); }
extern "C" { typedef void (*PFNGLMULTITEXGENDVEXTPROC)(GLenum, GLenum, GLenum, const GLdouble *); }
extern "C" { typedef void (*PFNGLMULTITEXGENFEXTPROC)(GLenum, GLenum, GLenum, GLfloat); }
extern "C" { typedef void (*PFNGLMULTITEXGENFVEXTPROC)(GLenum, GLenum, GLenum, const GLfloat *); }
extern "C" { typedef void (*PFNGLMULTITEXGENIEXTPROC)(GLenum, GLenum, GLenum, GLint); }
extern "C" { typedef void (*PFNGLMULTITEXGENIVEXTPROC)(GLenum, GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLGETMULTITEXENVFVEXTPROC)(GLenum, GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETMULTITEXENVIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETMULTITEXGENDVEXTPROC)(GLenum, GLenum, GLenum, GLdouble *); }
extern "C" { typedef void (*PFNGLGETMULTITEXGENFVEXTPROC)(GLenum, GLenum, GLenum, GLfloat *); }
extern "C" { typedef void (*PFNGLGETMULTITEXGENIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETFLOATINDEXEDVEXTPROC)(GLenum, GLuint, GLfloat *); }
extern "C" { typedef void (*PFNGLGETDOUBLEINDEXEDVEXTPROC)(GLenum, GLuint, GLdouble *); }
extern "C" { typedef void (*PFNGLGETPOINTERINDEXEDVEXTPROC)(GLenum, GLuint, GLvoid **); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC)(GLuint, GLenum, GLint, GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC)(GLenum, GLenum, GLint, GLvoid *); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMSTRINGEXTPROC)(GLuint, GLenum, GLenum, GLsizei, const GLvoid *); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC)(GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC)(GLuint, GLenum, GLuint, const GLdouble *); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC)(GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC)(GLuint, GLenum, GLuint, const GLfloat *); }
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC)(GLuint, GLenum, GLuint, GLdouble *); }
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC)(GLuint, GLenum, GLuint, GLfloat *); }
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMIVEXTPROC)(GLuint, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMSTRINGEXTPROC)(GLuint, GLenum, GLenum, GLvoid *); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC)(GLuint, GLenum, GLuint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC)(GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC)(GLuint, GLenum, GLuint, const GLint *); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC)(GLuint, GLenum, GLuint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC)(GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC)(GLuint, GLenum, GLuint, const GLuint *); }
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC)(GLuint, GLenum, GLuint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC)(GLuint, GLenum, GLuint, GLint *); }
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC)(GLuint, GLenum, GLuint, GLuint *); }
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERIIVEXTPROC)(GLuint, GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERIUIVEXTPROC)(GLuint, GLenum, GLenum, const GLuint *); }
extern "C" { typedef void (*PFNGLGETTEXTUREPARAMETERIIVEXTPROC)(GLuint, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETTEXTUREPARAMETERIUIVEXTPROC)(GLuint, GLenum, GLenum, GLuint *); }
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERIIVEXTPROC)(GLenum, GLenum, GLenum, const GLint *); }
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, GLenum, const GLuint *); }
extern "C" { typedef void (*PFNGLGETMULTITEXPARAMETERIIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETMULTITEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, GLenum, GLuint *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1FEXTPROC)(GLuint, GLint, GLfloat); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2FEXTPROC)(GLuint, GLint, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3FEXTPROC)(GLuint, GLint, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4FEXTPROC)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1IEXTPROC)(GLuint, GLint, GLint); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2IEXTPROC)(GLuint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3IEXTPROC)(GLuint, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4IEXTPROC)(GLuint, GLint, GLint, GLint, GLint, GLint); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1FVEXTPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2FVEXTPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3FVEXTPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4FVEXTPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1IVEXTPROC)(GLuint, GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2IVEXTPROC)(GLuint, GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3IVEXTPROC)(GLuint, GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4IVEXTPROC)(GLuint, GLint, GLsizei, const GLint *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1UIEXTPROC)(GLuint, GLint, GLuint); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2UIEXTPROC)(GLuint, GLint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3UIEXTPROC)(GLuint, GLint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4UIEXTPROC)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1UIVEXTPROC)(GLuint, GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2UIVEXTPROC)(GLuint, GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3UIVEXTPROC)(GLuint, GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4UIVEXTPROC)(GLuint, GLint, GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLNAMEDBUFFERDATAEXTPROC)(GLuint, GLsizeiptr, const GLvoid *, GLenum); }
extern "C" { typedef void (*PFNGLNAMEDBUFFERSUBDATAEXTPROC)(GLuint, GLintptr, GLsizeiptr, const GLvoid *); }
extern "C" { typedef GLvoid *(*PFNGLMAPNAMEDBUFFEREXTPROC)(GLuint, GLenum); }
extern "C" { typedef GLboolean (*PFNGLUNMAPNAMEDBUFFEREXTPROC)(GLuint); }
extern "C" { typedef void (*PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGETNAMEDBUFFERPOINTERVEXTPROC)(GLuint, GLenum, GLvoid **); }
extern "C" { typedef void (*PFNGLGETNAMEDBUFFERSUBDATAEXTPROC)(GLuint, GLintptr, GLsizeiptr, GLvoid *); }
extern "C" { typedef void (*PFNGLTEXTUREBUFFEREXTPROC)(GLuint, GLenum, GLenum, GLuint); }
extern "C" { typedef void (*PFNGLMULTITEXBUFFEREXTPROC)(GLenum, GLenum, GLenum, GLuint); }
extern "C" { typedef void (*PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC)(GLuint, GLenum, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef GLenum (*PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC)(GLuint, GLenum); }
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC)(GLuint, GLenum, GLenum, GLuint, GLint); }
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC)(GLuint, GLenum, GLenum, GLuint, GLint); }
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC)(GLuint, GLenum, GLenum, GLuint, GLint, GLint); }
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC)(GLuint, GLenum, GLenum, GLuint); }
extern "C" { typedef void (*PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)(GLuint, GLenum, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLGENERATETEXTUREMIPMAPEXTPROC)(GLuint, GLenum); }
extern "C" { typedef void (*PFNGLGENERATEMULTITEXMIPMAPEXTPROC)(GLenum, GLenum); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC)(GLuint, GLenum); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC)(GLuint, GLsizei, const GLenum *); }
extern "C" { typedef void (*PFNGLFRAMEBUFFERREADBUFFEREXTPROC)(GLuint, GLenum); }
extern "C" { typedef void (*PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC)(GLuint, GLenum, GLint *); }
extern "C" { typedef void (*PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)(GLuint, GLsizei, GLenum, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC)(GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei); }
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC)(GLuint, GLenum, GLuint, GLint); }
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC)(GLuint, GLenum, GLuint, GLint, GLint); }
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC)(GLuint, GLenum, GLuint, GLint, GLenum); }
extern "C" { typedef void (*PFNGLTEXTURERENDERBUFFEREXTPROC)(GLuint, GLenum, GLuint); }
extern "C" { typedef void (*PFNGLMULTITEXRENDERBUFFEREXTPROC)(GLenum, GLenum, GLuint); }
# 8481 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTISAMPLEFVNVPROC)(GLenum, GLuint, GLfloat *); }
extern "C" { typedef void (*PFNGLSAMPLEMASKINDEXEDNVPROC)(GLuint, GLbitfield); }
extern "C" { typedef void (*PFNGLTEXRENDERBUFFERNVPROC)(GLenum, GLuint); }
# 8497 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDTRANSFORMFEEDBACKNVPROC)(GLenum, GLuint); }
extern "C" { typedef void (*PFNGLDELETETRANSFORMFEEDBACKSNVPROC)(GLsizei, const GLuint *); }
extern "C" { typedef void (*PFNGLGENTRANSFORMFEEDBACKSNVPROC)(GLsizei, GLuint *); }
extern "C" { typedef GLboolean (*PFNGLISTRANSFORMFEEDBACKNVPROC)(GLuint); }
extern "C" { typedef void (*PFNGLPAUSETRANSFORMFEEDBACKNVPROC)(void); }
extern "C" { typedef void (*PFNGLRESUMETRANSFORMFEEDBACKNVPROC)(void); }
extern "C" { typedef void (*PFNGLDRAWTRANSFORMFEEDBACKNVPROC)(GLenum, GLuint); }
# 8525 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPERFMONITORGROUPSAMDPROC)(GLint *, GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLGETPERFMONITORCOUNTERSAMDPROC)(GLuint, GLint *, GLint *, GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
extern "C" { typedef void (*PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *); }
extern "C" { typedef void (*PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)(GLuint, GLuint, GLenum, void *); }
extern "C" { typedef void (*PFNGLGENPERFMONITORSAMDPROC)(GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLDELETEPERFMONITORSAMDPROC)(GLsizei, GLuint *); }
extern "C" { typedef void (*PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)(GLuint, GLboolean, GLuint, GLint, GLuint *); }
extern "C" { typedef void (*PFNGLBEGINPERFMONITORAMDPROC)(GLuint); }
extern "C" { typedef void (*PFNGLENDPERFMONITORAMDPROC)(GLuint); }
extern "C" { typedef void (*PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)(GLuint, GLenum, GLsizei, GLuint *, GLint *); }
# 8548 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTESSELLATIONFACTORAMDPROC)(GLfloat); }
extern "C" { typedef void (*PFNGLTESSELLATIONMODEAMDPROC)(GLenum); }
# 8557 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROVOKINGVERTEXEXTPROC)(GLenum); }
# 2165 "/usr/include/GL/gl.h" 3
extern "C" GLhandleARB glCreateDebugObjectMESA() __attribute__((visibility("default")));
extern "C" void glClearDebugLogMESA(GLhandleARB, GLenum, GLenum) __attribute__((visibility("default")));
extern "C" void glGetDebugLogMESA(GLhandleARB, GLenum, GLenum, GLsizei, GLsizei *, GLcharARB *) __attribute__((visibility("default")));

extern "C" GLsizei glGetDebugLogLengthMESA(GLhandleARB, GLenum, GLenum) __attribute__((visibility("default")));
# 2204 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*GLprogramcallbackMESA)(GLenum, GLvoid *); }

extern "C" void glProgramCallbackMESA(GLenum, GLprogramcallbackMESA, GLvoid *) __attribute__((visibility("default")));

extern "C" void glGetProgramRegisterfvMESA(GLenum, GLsizei, const GLubyte *, GLfloat *) __attribute__((visibility("default")));
# 2251 "/usr/include/GL/gl.h" 3
extern "C" void glBlendEquationSeparateATI(GLenum, GLenum) __attribute__((visibility("default")));
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEATIPROC)(GLenum, GLenum); }
# 270 "/usr/include/GL/glu.h" 3
class GLUnurbs;
class GLUquadric;
class GLUtesselator;
# 279 "/usr/include/GL/glu.h" 3
extern "C" { typedef GLUnurbs GLUnurbsObj; }
extern "C" { typedef GLUquadric GLUquadricObj; }
extern "C" { typedef GLUtesselator GLUtesselatorObj; }
extern "C" { typedef GLUtesselator GLUtriangulatorObj; }




extern "C" { typedef void (*_GLUfuncptr)(void); }

extern "C" void gluBeginCurve(GLUnurbs *) __attribute__((visibility("default")));
extern "C" void gluBeginPolygon(GLUtesselator *) __attribute__((visibility("default")));
extern "C" void gluBeginSurface(GLUnurbs *) __attribute__((visibility("default")));
extern "C" void gluBeginTrim(GLUnurbs *) __attribute__((visibility("default")));
extern "C" GLint gluBuild1DMipmapLevels(GLenum, GLint, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) __attribute__((visibility("default")));
extern "C" GLint gluBuild1DMipmaps(GLenum, GLint, GLsizei, GLenum, GLenum, const void *) __attribute__((visibility("default")));
extern "C" GLint gluBuild2DMipmapLevels(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) __attribute__((visibility("default")));
extern "C" GLint gluBuild2DMipmaps(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *) __attribute__((visibility("default")));
extern "C" GLint gluBuild3DMipmapLevels(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) __attribute__((visibility("default")));
extern "C" GLint gluBuild3DMipmaps(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) __attribute__((visibility("default")));
extern "C" GLboolean gluCheckExtension(const GLubyte *, const GLubyte *) __attribute__((visibility("default")));
extern "C" void gluCylinder(GLUquadric *, GLdouble, GLdouble, GLdouble, GLint, GLint) __attribute__((visibility("default")));
extern "C" void gluDeleteNurbsRenderer(GLUnurbs *) __attribute__((visibility("default")));
extern "C" void gluDeleteQuadric(GLUquadric *) __attribute__((visibility("default")));
extern "C" void gluDeleteTess(GLUtesselator *) __attribute__((visibility("default")));
extern "C" void gluDisk(GLUquadric *, GLdouble, GLdouble, GLint, GLint) __attribute__((visibility("default")));
extern "C" void gluEndCurve(GLUnurbs *) __attribute__((visibility("default")));
extern "C" void gluEndPolygon(GLUtesselator *) __attribute__((visibility("default")));
extern "C" void gluEndSurface(GLUnurbs *) __attribute__((visibility("default")));
extern "C" void gluEndTrim(GLUnurbs *) __attribute__((visibility("default")));
extern "C" const GLubyte *gluErrorString(GLenum) __attribute__((visibility("default")));
extern "C" void gluGetNurbsProperty(GLUnurbs *, GLenum, GLfloat *) __attribute__((visibility("default")));
extern "C" const GLubyte *gluGetString(GLenum) __attribute__((visibility("default")));
extern "C" void gluGetTessProperty(GLUtesselator *, GLenum, GLdouble *) __attribute__((visibility("default")));
extern "C" void gluLoadSamplingMatrices(GLUnurbs *, const GLfloat *, const GLfloat *, const GLint *) __attribute__((visibility("default")));
extern "C" void gluLookAt(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" GLUnurbs *gluNewNurbsRenderer() __attribute__((visibility("default")));
extern "C" GLUquadric *gluNewQuadric() __attribute__((visibility("default")));
extern "C" GLUtesselator *gluNewTess() __attribute__((visibility("default")));
extern "C" void gluNextContour(GLUtesselator *, GLenum) __attribute__((visibility("default")));
extern "C" void gluNurbsCallback(GLUnurbs *, GLenum, _GLUfuncptr) __attribute__((visibility("default")));
extern "C" void gluNurbsCallbackData(GLUnurbs *, GLvoid *) __attribute__((visibility("default")));
extern "C" void gluNurbsCallbackDataEXT(GLUnurbs *, GLvoid *) __attribute__((visibility("default")));
extern "C" void gluNurbsCurve(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum) __attribute__((visibility("default")));
extern "C" void gluNurbsProperty(GLUnurbs *, GLenum, GLfloat) __attribute__((visibility("default")));
extern "C" void gluNurbsSurface(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum) __attribute__((visibility("default")));
extern "C" void gluOrtho2D(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void gluPartialDisk(GLUquadric *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void gluPerspective(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void gluPickMatrix(GLdouble, GLdouble, GLdouble, GLdouble, GLint *) __attribute__((visibility("default")));
extern "C" GLint gluProject(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *) __attribute__((visibility("default")));
extern "C" void gluPwlCurve(GLUnurbs *, GLint, GLfloat *, GLint, GLenum) __attribute__((visibility("default")));
extern "C" void gluQuadricCallback(GLUquadric *, GLenum, _GLUfuncptr) __attribute__((visibility("default")));
extern "C" void gluQuadricDrawStyle(GLUquadric *, GLenum) __attribute__((visibility("default")));
extern "C" void gluQuadricNormals(GLUquadric *, GLenum) __attribute__((visibility("default")));
extern "C" void gluQuadricOrientation(GLUquadric *, GLenum) __attribute__((visibility("default")));
extern "C" void gluQuadricTexture(GLUquadric *, GLboolean) __attribute__((visibility("default")));
extern "C" GLint gluScaleImage(GLenum, GLsizei, GLsizei, GLenum, const void *, GLsizei, GLsizei, GLenum, GLvoid *) __attribute__((visibility("default")));
extern "C" void gluSphere(GLUquadric *, GLdouble, GLint, GLint) __attribute__((visibility("default")));
extern "C" void gluTessBeginContour(GLUtesselator *) __attribute__((visibility("default")));
extern "C" void gluTessBeginPolygon(GLUtesselator *, GLvoid *) __attribute__((visibility("default")));
extern "C" void gluTessCallback(GLUtesselator *, GLenum, _GLUfuncptr) __attribute__((visibility("default")));
extern "C" void gluTessEndContour(GLUtesselator *) __attribute__((visibility("default")));
extern "C" void gluTessEndPolygon(GLUtesselator *) __attribute__((visibility("default")));
extern "C" void gluTessNormal(GLUtesselator *, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
extern "C" void gluTessProperty(GLUtesselator *, GLenum, GLdouble) __attribute__((visibility("default")));
extern "C" void gluTessVertex(GLUtesselator *, GLdouble *, GLvoid *) __attribute__((visibility("default")));
extern "C" GLint gluUnProject(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *) __attribute__((visibility("default")));
extern "C" GLint gluUnProject4(GLdouble, GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble, GLdouble, GLdouble *, GLdouble *, GLdouble *, GLdouble *) __attribute__((visibility("default")));
# 200 "/usr/include/GL/freeglut_std.h" 3
extern "C" { extern void *glutStrokeRoman; }
extern "C" { extern void *glutStrokeMonoRoman; }
extern "C" { extern void *glutBitmap9By15; }
extern "C" { extern void *glutBitmap8By13; }
extern "C" { extern void *glutBitmapTimesRoman10; }
extern "C" { extern void *glutBitmapTimesRoman24; }
extern "C" { extern void *glutBitmapHelvetica10; }
extern "C" { extern void *glutBitmapHelvetica12; }
extern "C" { extern void *glutBitmapHelvetica18; }
# 384 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutInit(int *, char **);
extern "C" void glutInitWindowPosition(int, int);
extern "C" void glutInitWindowSize(int, int);
extern "C" void glutInitDisplayMode(unsigned);
extern "C" void glutInitDisplayString(const char *);




extern "C" void glutMainLoop();




extern "C" int glutCreateWindow(const char *);
extern "C" int glutCreateSubWindow(int, int, int, int, int);
extern "C" void glutDestroyWindow(int);
extern "C" void glutSetWindow(int);
extern "C" int glutGetWindow();
extern "C" void glutSetWindowTitle(const char *);
extern "C" void glutSetIconTitle(const char *);
extern "C" void glutReshapeWindow(int, int);
extern "C" void glutPositionWindow(int, int);
extern "C" void glutShowWindow();
extern "C" void glutHideWindow();
extern "C" void glutIconifyWindow();
extern "C" void glutPushWindow();
extern "C" void glutPopWindow();
extern "C" void glutFullScreen();




extern "C" void glutPostWindowRedisplay(int);
extern "C" void glutPostRedisplay();
extern "C" void glutSwapBuffers();




extern "C" void glutWarpPointer(int, int);
extern "C" void glutSetCursor(int);




extern "C" void glutEstablishOverlay();
extern "C" void glutRemoveOverlay();
extern "C" void glutUseLayer(GLenum);
extern "C" void glutPostOverlayRedisplay();
extern "C" void glutPostWindowOverlayRedisplay(int);
extern "C" void glutShowOverlay();
extern "C" void glutHideOverlay();




extern "C" int glutCreateMenu(void (*)(int));
extern "C" void glutDestroyMenu(int);
extern "C" int glutGetMenu();
extern "C" void glutSetMenu(int);
extern "C" void glutAddMenuEntry(const char *, int);
extern "C" void glutAddSubMenu(const char *, int);
extern "C" void glutChangeToMenuEntry(int, const char *, int);
extern "C" void glutChangeToSubMenu(int, const char *, int);
extern "C" void glutRemoveMenuItem(int);
extern "C" void glutAttachMenu(int);
extern "C" void glutDetachMenu(int);




extern "C" void glutTimerFunc(unsigned, void (*)(int), int);
extern "C" void glutIdleFunc(void (*)(void));




extern "C" void glutKeyboardFunc(void (*)(unsigned char, int, int));
extern "C" void glutSpecialFunc(void (*)(int, int, int));
extern "C" void glutReshapeFunc(void (*)(int, int));
extern "C" void glutVisibilityFunc(void (*)(int));
extern "C" void glutDisplayFunc(void (*)(void));
extern "C" void glutMouseFunc(void (*)(int, int, int, int));
extern "C" void glutMotionFunc(void (*)(int, int));
extern "C" void glutPassiveMotionFunc(void (*)(int, int));
extern "C" void glutEntryFunc(void (*)(int));

extern "C" void glutKeyboardUpFunc(void (*)(unsigned char, int, int));
extern "C" void glutSpecialUpFunc(void (*)(int, int, int));
extern "C" void glutJoystickFunc(void (*)(unsigned, int, int, int), int);
extern "C" void glutMenuStateFunc(void (*)(int));
extern "C" void glutMenuStatusFunc(void (*)(int, int, int));
extern "C" void glutOverlayDisplayFunc(void (*)(void));
extern "C" void glutWindowStatusFunc(void (*)(int));

extern "C" void glutSpaceballMotionFunc(void (*)(int, int, int));
extern "C" void glutSpaceballRotateFunc(void (*)(int, int, int));
extern "C" void glutSpaceballButtonFunc(void (*)(int, int));
extern "C" void glutButtonBoxFunc(void (*)(int, int));
extern "C" void glutDialsFunc(void (*)(int, int));
extern "C" void glutTabletMotionFunc(void (*)(int, int));
extern "C" void glutTabletButtonFunc(void (*)(int, int, int, int));




extern "C" int glutGet(GLenum);
extern "C" int glutDeviceGet(GLenum);
extern "C" int glutGetModifiers();
extern "C" int glutLayerGet(GLenum);




extern "C" void glutBitmapCharacter(void *, int);
extern "C" int glutBitmapWidth(void *, int);
extern "C" void glutStrokeCharacter(void *, int);
extern "C" int glutStrokeWidth(void *, int);
extern "C" int glutBitmapLength(void *, const unsigned char *);
extern "C" int glutStrokeLength(void *, const unsigned char *);




extern "C" void glutWireCube(GLdouble);
extern "C" void glutSolidCube(GLdouble);
extern "C" void glutWireSphere(GLdouble, GLint, GLint);
extern "C" void glutSolidSphere(GLdouble, GLint, GLint);
extern "C" void glutWireCone(GLdouble, GLdouble, GLint, GLint);
extern "C" void glutSolidCone(GLdouble, GLdouble, GLint, GLint);

extern "C" void glutWireTorus(GLdouble, GLdouble, GLint, GLint);
extern "C" void glutSolidTorus(GLdouble, GLdouble, GLint, GLint);
extern "C" void glutWireDodecahedron();
extern "C" void glutSolidDodecahedron();
extern "C" void glutWireOctahedron();
extern "C" void glutSolidOctahedron();
extern "C" void glutWireTetrahedron();
extern "C" void glutSolidTetrahedron();
extern "C" void glutWireIcosahedron();
extern "C" void glutSolidIcosahedron();




extern "C" void glutWireTeapot(GLdouble);
extern "C" void glutSolidTeapot(GLdouble);




extern "C" void glutGameModeString(const char *);
extern "C" int glutEnterGameMode();
extern "C" void glutLeaveGameMode();
extern "C" int glutGameModeGet(GLenum);




extern "C" int glutVideoResizeGet(GLenum);
extern "C" void glutSetupVideoResizing();
extern "C" void glutStopVideoResizing();
extern "C" void glutVideoResize(int, int, int, int);
extern "C" void glutVideoPan(int, int, int, int);




extern "C" void glutSetColor(int, GLfloat, GLfloat, GLfloat);
extern "C" GLfloat glutGetColor(int, int);
extern "C" void glutCopyColormap(int);




extern "C" void glutIgnoreKeyRepeat(int);
extern "C" void glutSetKeyRepeat(int);
extern "C" void glutForceJoystickFunc();




extern "C" int glutExtensionSupported(const char *);
extern "C" void glutReportErrors();
# 67 "/home/normal/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLSetGLDevice(int);
extern "C" cudaError_t cudaGLRegisterBufferObject(GLuint);
extern "C" cudaError_t cudaGLMapBufferObject(void **, GLuint);
extern "C" cudaError_t cudaGLUnmapBufferObject(GLuint);
extern "C" cudaError_t cudaGLUnregisterBufferObject(GLuint);
# 49 "../../sdk/cutil_math.h"
extern "C" { typedef unsigned uint; }
extern "C" { typedef unsigned short ushort; }
# 85 "../../sdk/cutil_math.h"
inline float lerp(float a, float b, float t)
{
return a + t * (b - a);
}


inline float clamp(float f, float a, float b)
{
return fmaxf(a, fminf(f, b));
}
# 100 "../../sdk/cutil_math.h"
inline int2 operator-(int2 &a)
{
return make_int2(-(a.x), -(a.y));
}


inline int2 operator+(int2 a, int2 b)
{
return make_int2(a.x + b.x, a.y + b.y);
}
inline void operator+=(int2 &a, int2 b)
{
(a.x) += b.x; (a.y) += b.y;
}


inline int2 operator-(int2 a, int2 b)
{
return make_int2(a.x - b.x, a.y - b.y);
}
inline void operator-=(int2 &a, int2 b)
{
(a.x) -= b.x; (a.y) -= b.y;
}


inline int2 operator*(int2 a, int2 b)
{
return make_int2(a.x * b.x, a.y * b.y);
}
inline int2 operator*(int2 a, int s)
{
return make_int2(a.x * s, a.y * s);
}
inline int2 operator*(int s, int2 a)
{
return make_int2(a.x * s, a.y * s);
}
inline void operator*=(int2 &a, int s)
{
(a.x) *= s; (a.y) *= s;
}
# 147 "../../sdk/cutil_math.h"
inline float2 make_float2(float s)
{
return make_float2(s, s);
}
inline float2 make_float2(int2 a)
{
return make_float2((float)(a.x), (float)(a.y));
}


inline float2 operator-(float2 &a)
{
return make_float2(-(a.x), -(a.y));
}


inline float2 operator+(float2 a, float2 b)
{
return make_float2(a.x + b.x, a.y + b.y);
}
inline void operator+=(float2 &a, float2 b)
{
(a.x) += b.x; (a.y) += b.y;
}


inline float2 operator-(float2 a, float2 b)
{
return make_float2(a.x - b.x, a.y - b.y);
}
inline void operator-=(float2 &a, float2 b)
{
(a.x) -= b.x; (a.y) -= b.y;
}


inline float2 operator*(float2 a, float2 b)
{
return make_float2(a.x * b.x, a.y * b.y);
}
inline float2 operator*(float2 a, float s)
{
return make_float2(a.x * s, a.y * s);
}
inline float2 operator*(float s, float2 a)
{
return make_float2(a.x * s, a.y * s);
}
inline void operator*=(float2 &a, float s)
{
(a.x) *= s; (a.y) *= s;
}


inline float2 operator/(float2 a, float2 b)
{
return make_float2(a.x / b.x, a.y / b.y);
}
inline float2 operator/(float2 a, float s)
{
auto float inv = ((1.0F) / s);
return (a * inv);
}
inline float2 operator/(float s, float2 a)
{
auto float inv = ((1.0F) / s);
return (a * inv);
}
inline void operator/=(float2 &a, float s)
{
auto float inv = ((1.0F) / s);
(a *= inv);
}


inline float2 lerp(float2 a, float2 b, float t)
{
return (a + (t * (b - a)));
}


inline float2 clamp(float2 v, float a, float b)
{
return make_float2(clamp(v.x, a, b), clamp(v.y, a, b));
}

inline float2 clamp(float2 v, float2 a, float2 b)
{
return make_float2(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y));
}


inline float dot(float2 a, float2 b)
{
return a.x * b.x + a.y * b.y;
}


inline float length(float2 v)
{
return sqrtf(dot(v, v));
}


inline float2 normalize(float2 v)
{
auto float invLen = rsqrtf(dot(v, v));
return (v * invLen);
}


inline float2 floor(const float2 v)
{
return make_float2(floor(v.x), floor(v.y));
}


inline float2 reflect(float2 i, float2 n)
{
return (i - (((2.0F) * n) * dot(n, i)));
}


inline float2 fabs(float2 v)
{
return make_float2(fabs(v.x), fabs(v.y));
}
# 279 "../../sdk/cutil_math.h"
inline float3 make_float3(float s)
{
return make_float3(s, s, s);
}
inline float3 make_float3(float2 a)
{
return make_float3(a.x, a.y, (0.0F));
}
inline float3 make_float3(float2 a, float s)
{
return make_float3(a.x, a.y, s);
}
inline float3 make_float3(float4 a)
{
return make_float3(a.x, a.y, a.z);
}
inline float3 make_float3(int3 a)
{
return make_float3((float)(a.x), (float)(a.y), (float)(a.z));
}


inline float3 operator-(float3 &a)
{
return make_float3(-(a.x), -(a.y), -(a.z));
}


static inline float3 fminf(float3 a, float3 b)
{
return make_float3(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z));
}


static inline float3 fmaxf(float3 a, float3 b)
{
return make_float3(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z));
}


inline float3 operator+(float3 a, float3 b)
{
return make_float3(a.x + b.x, a.y + b.y, a.z + b.z);
}
inline float3 operator+(float3 a, float b)
{
return make_float3(a.x + b, a.y + b, a.z + b);
}
inline void operator+=(float3 &a, float3 b)
{
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z;
}


inline float3 operator-(float3 a, float3 b)
{
return make_float3(a.x - b.x, a.y - b.y, a.z - b.z);
}
inline float3 operator-(float3 a, float b)
{
return make_float3(a.x - b, a.y - b, a.z - b);
}
inline void operator-=(float3 &a, float3 b)
{
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z;
}


inline float3 operator*(float3 a, float3 b)
{
return make_float3(a.x * b.x, a.y * b.y, a.z * b.z);
}
inline float3 operator*(float3 a, float s)
{
return make_float3(a.x * s, a.y * s, a.z * s);
}
inline float3 operator*(float s, float3 a)
{
return make_float3(a.x * s, a.y * s, a.z * s);
}
inline void operator*=(float3 &a, float s)
{
(a.x) *= s; (a.y) *= s; (a.z) *= s;
}


inline float3 operator/(float3 a, float3 b)
{
return make_float3(a.x / b.x, a.y / b.y, a.z / b.z);
}
inline float3 operator/(float3 a, float s)
{
auto float inv = ((1.0F) / s);
return (a * inv);
}
inline float3 operator/(float s, float3 a)
{
auto float inv = ((1.0F) / s);
return (a * inv);
}
inline void operator/=(float3 &a, float s)
{
auto float inv = ((1.0F) / s);
(a *= inv);
}


inline float3 lerp(float3 a, float3 b, float t)
{
return (a + (t * (b - a)));
}


inline float3 clamp(float3 v, float a, float b)
{
return make_float3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
}

inline float3 clamp(float3 v, float3 a, float3 b)
{
return make_float3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
}


inline float dot(float3 a, float3 b)
{
return (a.x * b.x + a.y * b.y) + a.z * b.z;
}


inline float3 cross(float3 a, float3 b)
{
return make_float3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
}


inline float length(float3 v)
{
return sqrtf(dot(v, v));
}


inline float3 normalize(float3 v)
{
auto float invLen = rsqrtf(dot(v, v));
return (v * invLen);
}


inline float3 floor(const float3 v)
{
return make_float3(floor(v.x), floor(v.y), floor(v.z));
}


inline float3 reflect(float3 i, float3 n)
{
return (i - (((2.0F) * n) * dot(n, i)));
}


inline float3 fabs(float3 v)
{
return make_float3(fabs(v.x), fabs(v.y), fabs(v.z));
}
# 449 "../../sdk/cutil_math.h"
inline float4 make_float4(float s)
{
return make_float4(s, s, s, s);
}
inline float4 make_float4(float3 a)
{
return make_float4(a.x, a.y, a.z, (0.0F));
}
inline float4 make_float4(float3 a, float w)
{
return make_float4(a.x, a.y, a.z, w);
}
inline float4 make_float4(int4 a)
{
return make_float4((float)(a.x), (float)(a.y), (float)(a.z), (float)(a.w));
}


inline float4 operator-(float4 &a)
{
return make_float4(-(a.x), -(a.y), -(a.z), -(a.w));
}


static inline float4 fminf(float4 a, float4 b)
{
return make_float4(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z), fminf(a.w, b.w));
}


static inline float4 fmaxf(float4 a, float4 b)
{
return make_float4(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z), fmaxf(a.w, b.w));
}


inline float4 operator+(float4 a, float4 b)
{
return make_float4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}
inline void operator+=(float4 &a, float4 b)
{
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z; (a.w) += b.w;
}


inline float4 operator-(float4 a, float4 b)
{
return make_float4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}
inline void operator-=(float4 &a, float4 b)
{
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z; (a.w) -= b.w;
}


inline float4 operator*(float4 a, float s)
{
return make_float4(a.x * s, a.y * s, a.z * s, a.w * s);
}
inline float4 operator*(float s, float4 a)
{
return make_float4(a.x * s, a.y * s, a.z * s, a.w * s);
}
inline void operator*=(float4 &a, float s)
{
(a.x) *= s; (a.y) *= s; (a.z) *= s; (a.w) *= s;
}


inline float4 operator/(float4 a, float4 b)
{
return make_float4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}
inline float4 operator/(float4 a, float s)
{
auto float inv = ((1.0F) / s);
return (a * inv);
}
inline float4 operator/(float s, float4 a)
{
auto float inv = ((1.0F) / s);
return (a * inv);
}
inline void operator/=(float4 &a, float s)
{
auto float inv = ((1.0F) / s);
(a *= inv);
}


inline float4 lerp(float4 a, float4 b, float t)
{
return (a + (t * (b - a)));
}


inline float4 clamp(float4 v, float a, float b)
{
return make_float4(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b), clamp(v.w, a, b));
}

inline float4 clamp(float4 v, float4 a, float4 b)
{
return make_float4(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z), clamp(v.w, a.w, b.w));
}


inline float dot(float4 a, float4 b)
{
return ((a.x * b.x + a.y * b.y) + a.z * b.z) + a.w * b.w;
}


inline float length(float4 r)
{
return sqrtf(dot(r, r));
}


inline float4 normalize(float4 v)
{
auto float invLen = rsqrtf(dot(v, v));
return (v * invLen);
}


inline float4 floor(const float4 v)
{
return make_float4(floor(v.x), floor(v.y), floor(v.z), floor(v.w));
}


inline float4 fabs(float4 v)
{
return make_float4(fabs(v.x), fabs(v.y), fabs(v.z), fabs(v.w));
}
# 591 "../../sdk/cutil_math.h"
inline int3 make_int3(int s)
{
return make_int3(s, s, s);
}
inline int3 make_int3(float3 a)
{
return make_int3((int)(a.x), (int)(a.y), (int)(a.z));
}


inline int3 operator-(int3 &a)
{
return make_int3(-(a.x), -(a.y), -(a.z));
}


inline int3 min(int3 a, int3 b)
{
return make_int3(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z));
}


inline int3 max(int3 a, int3 b)
{
return make_int3(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z));
}


inline int3 operator+(int3 a, int3 b)
{
return make_int3(a.x + b.x, a.y + b.y, a.z + b.z);
}
inline void operator+=(int3 &a, int3 b)
{
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z;
}


inline int3 operator-(int3 a, int3 b)
{
return make_int3(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline void operator-=(int3 &a, int3 b)
{
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z;
}


inline int3 operator*(int3 a, int3 b)
{
return make_int3(a.x * b.x, a.y * b.y, a.z * b.z);
}
inline int3 operator*(int3 a, int s)
{
return make_int3(a.x * s, a.y * s, a.z * s);
}
inline int3 operator*(int s, int3 a)
{
return make_int3(a.x * s, a.y * s, a.z * s);
}
inline void operator*=(int3 &a, int s)
{
(a.x) *= s; (a.y) *= s; (a.z) *= s;
}


inline int3 operator/(int3 a, int3 b)
{
return make_int3(a.x / b.x, a.y / b.y, a.z / b.z);
}
inline int3 operator/(int3 a, int s)
{
return make_int3(a.x / s, a.y / s, a.z / s);
}
inline int3 operator/(int s, int3 a)
{
return make_int3(a.x / s, a.y / s, a.z / s);
}
inline void operator/=(int3 &a, int s)
{
(a.x) /= s; (a.y) /= s; (a.z) /= s;
}


inline int clamp(int f, int a, int b)
{
return max(a, min(f, b));
}

inline int3 clamp(int3 v, int a, int b)
{
return make_int3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
}

inline int3 clamp(int3 v, int3 a, int3 b)
{
return make_int3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
}
# 696 "../../sdk/cutil_math.h"
inline uint3 make_uint3(uint s)
{
return make_uint3(s, s, s);
}
inline uint3 make_uint3(float3 a)
{
return make_uint3((unsigned)(a.x), (unsigned)(a.y), (unsigned)(a.z));
}


inline uint3 min(uint3 a, uint3 b)
{
return make_uint3(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z));
}


inline uint3 max(uint3 a, uint3 b)
{
return make_uint3(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z));
}


inline uint3 operator+(uint3 a, uint3 b)
{
return make_uint3(a.x + b.x, a.y + b.y, a.z + b.z);
}
inline void operator+=(uint3 &a, uint3 b)
{
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z;
}


inline uint3 operator-(uint3 a, uint3 b)
{
return make_uint3(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline void operator-=(uint3 &a, uint3 b)
{
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z;
}


inline uint3 operator*(uint3 a, uint3 b)
{
return make_uint3(a.x * b.x, a.y * b.y, a.z * b.z);
}
inline uint3 operator*(uint3 a, uint s)
{
return make_uint3(a.x * s, a.y * s, a.z * s);
}
inline uint3 operator*(uint s, uint3 a)
{
return make_uint3(a.x * s, a.y * s, a.z * s);
}
inline void operator*=(uint3 &a, uint s)
{
(a.x) *= s; (a.y) *= s; (a.z) *= s;
}


inline uint3 operator/(uint3 a, uint3 b)
{
return make_uint3(a.x / b.x, a.y / b.y, a.z / b.z);
}
inline uint3 operator/(uint3 a, uint s)
{
return make_uint3(a.x / s, a.y / s, a.z / s);
}
inline uint3 operator/(uint s, uint3 a)
{
return make_uint3(a.x / s, a.y / s, a.z / s);
}
inline void operator/=(uint3 &a, uint s)
{
(a.x) /= s; (a.y) /= s; (a.z) /= s;
}


inline uint clamp(uint f, uint a, uint b)
{
return max(a, min(f, b));
}

inline uint3 clamp(uint3 v, uint a, uint b)
{
return make_uint3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
}

inline uint3 clamp(uint3 v, uint3 a, uint3 b)
{
return make_uint3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
}
# 18 "particles_kernel.cuh"
extern "C" { typedef unsigned uint; }

struct SimParams {
float4 colliderPos;
float colliderRadius;

float3 gravity;
float globalDamping;
float particleRadius;

uint3 gridSize;
uint numCells;
float3 worldOrigin;
float3 cellSize;

uint numBodies;
uint maxParticlesPerCell;

float spring;
float damping;
float shear;
float attraction;
float boundaryDamping;
};
# 45 "particles_kernel.cu"
static texture< float4, 1, cudaReadModeElementType> oldPosTex;
static texture< float4, 1, cudaReadModeElementType> oldVelTex;

static texture< uint2, 1, cudaReadModeElementType> particleHashTex;
static texture< unsigned, 1, cudaReadModeElementType> cellStartTex;

static texture< unsigned, 1, cudaReadModeElementType> gridCountersTex;
static texture< unsigned, 1, cudaReadModeElementType> gridCellsTex;


static SimParams __shadow_params;



void integrate__entry(float4 *newPos, float4 *newVel, float4 *
oldPos, float4 *oldVel, float
deltaTime);
# 132 "particles_kernel.cu"
void updateGridD__entry(float4 *pos, uint *
gridCounters, uint *
gridCells);
# 147 "particles_kernel.cu"
void calcHashD__entry(float4 *pos, uint2 *
particleHash);
# 164 "particles_kernel.cu"
void reorderDataAndFindCellStartD__entry(uint2 *particleHash, float4 *
oldPos, float4 *
oldVel, float4 *
sortedPos, float4 *
sortedVel, uint *
cellStart);
# 334 "particles_kernel.cu"
void collideD__entry(float4 *newPos, float4 *newVel, float4 *
oldPos, float4 *oldVel, uint2 *

particleHash, uint *
cellStart);
# 45 "radixsort.cuh"
extern "C" { typedef unsigned uint; }
extern "C" { typedef unsigned short ushort; }
# 57 "radixsort.cuh"
typedef
# 53 "radixsort.cuh"
struct __attribute__((__aligned__(8))) KeyValuePair {
uint key;
uint value;

} KeyValuePair;


extern "C" void RadixSort(KeyValuePair *, KeyValuePair *, uint, uint);
# 44 "radixsort_kernel.cu"
static const int NUM_SMS = 16;
static const int NUM_THREADS_PER_SM = 192;
static const int NUM_THREADS_PER_BLOCK = 64;

static const int NUM_BLOCKS = ((NUM_THREADS_PER_SM / NUM_THREADS_PER_BLOCK) * NUM_SMS);
static const int RADIX = 8;
static const int RADICES = (1 << RADIX);
static const int RADIXMASK = (RADICES - 1);



static const int RADIXBITS = 32;

static const int RADIXTHREADS = 16;
static const int RADIXGROUPS = (NUM_THREADS_PER_BLOCK / RADIXTHREADS);
static const int TOTALRADIXGROUPS = (NUM_BLOCKS * RADIXGROUPS);
static const int SORTRADIXGROUPS = (TOTALRADIXGROUPS * RADICES);
static const int GRFELEMENTS = ((NUM_THREADS_PER_BLOCK / RADIXTHREADS) * RADICES);
static const int GRFSIZE = ((GRFELEMENTS) * sizeof(uint));


static const int PREFIX_NUM_THREADS_PER_SM = NUM_THREADS_PER_SM;
static const int PREFIX_NUM_THREADS_PER_BLOCK = PREFIX_NUM_THREADS_PER_SM;
static const int PREFIX_NUM_BLOCKS = ((PREFIX_NUM_THREADS_PER_SM / PREFIX_NUM_THREADS_PER_BLOCK) * NUM_SMS);
static const int PREFIX_BLOCKSIZE = (SORTRADIXGROUPS / PREFIX_NUM_BLOCKS);
static const int PREFIX_GRFELEMENTS = (PREFIX_BLOCKSIZE + (2 * PREFIX_NUM_THREADS_PER_BLOCK));
static const int PREFIX_GRFSIZE = ((PREFIX_GRFELEMENTS) * sizeof(uint));


static const int SHUFFLE_GRFOFFSET = (RADIXGROUPS * RADICES);
static const int SHUFFLE_GRFELEMENTS = (SHUFFLE_GRFOFFSET + PREFIX_NUM_BLOCKS);
static const int SHUFFLE_GRFSIZE = ((SHUFFLE_GRFELEMENTS) * sizeof(uint));
# 81 "radixsort_kernel.cu"
uint gRadixSum[(TOTALRADIXGROUPS * RADICES)];
static uint __shadow_dRadixSum[(TOTALRADIXGROUPS * RADICES)];
uint gRadixBlockSum[PREFIX_NUM_BLOCKS];
static uint __shadow_dRadixBlockSum[PREFIX_NUM_BLOCKS];
# 101 "radixsort_kernel.cu"
void RadixSum__entry(KeyValuePair *pData, uint elements, uint elements_rounded_to_3072, uint shift);
# 251 "radixsort_kernel.cu"
void RadixPrefixSum__entry();
# 374 "radixsort_kernel.cu"
void RadixAddOffsetsAndShuffle__entry(KeyValuePair *pSrc, KeyValuePair *pDst, uint elements, uint elements_rounded_to_3072, int shift);
# 50 "radixsort.cu"
extern "C" { void RadixSort(KeyValuePair *pData0, KeyValuePair *pData1, uint elements, uint bits)
{

auto uint elements_rounded_to_3072;
auto int modval = (elements % (3072));
if (modval == 0) {
elements_rounded_to_3072 = elements; } else {

elements_rounded_to_3072 = elements + (3072 - modval); }


for (uint shift = (0); shift < bits; shift += (RADIX))
{



cudaConfigureCall(NUM_BLOCKS, NUM_THREADS_PER_BLOCK, GRFSIZE) ? ((void)0) : RadixSum__entry(pData0, elements, elements_rounded_to_3072, shift);

cudaConfigureCall(PREFIX_NUM_BLOCKS, PREFIX_NUM_THREADS_PER_BLOCK, PREFIX_GRFSIZE) ? ((void)0) : RadixPrefixSum__entry();

cudaConfigureCall(NUM_BLOCKS, NUM_THREADS_PER_BLOCK, SHUFFLE_GRFSIZE) ? ((void)0) : RadixAddOffsetsAndShuffle__entry(pData0, pData1, elements, elements_rounded_to_3072, shift);


auto KeyValuePair *pTemp = pData0;
pData0 = pData1;
pData1 = pTemp;
}
} }
# 52 "particleSystem.cu"
extern "C" { void cudaInit(int argc, char **argv)
{

if (cutCheckCmdLineFlag(argc, (const char **)argv, "device")) {
cutilDeviceInit(argc, argv); } else {

cudaSetDevice(cutGetMaxGflopsDeviceId()); }
} }

extern "C" { void allocateArray(void **devPtr, size_t size)
{
__cudaSafeCall(cudaMalloc(devPtr, size), "particleSystem.cu", 63);
} }

extern "C" { void freeArray(void *devPtr)
{
__cudaSafeCall(cudaFree(devPtr), "particleSystem.cu", 68);
} }

extern "C" { void threadSync()
{
__cudaSafeCall(cudaThreadSynchronize(), "particleSystem.cu", 73);
} }

extern "C" { void copyArrayFromDevice(void *host, const void *device, unsigned vbo, int size)
{
if (vbo) {
__cudaSafeCall(cudaGLMapBufferObject((void **)(&device), vbo), "particleSystem.cu", 79); }

__cudaSafeCall(cudaMemcpy(host, device, size, cudaMemcpyDeviceToHost), "particleSystem.cu", 81);

if (vbo) {
__cudaSafeCall(cudaGLUnmapBufferObject(vbo), "particleSystem.cu", 84); }
} }

extern "C" { void copyArrayToDevice(void *device, const void *host, int offset, int size)
{
__cudaSafeCall(cudaMemcpy((char *)device + offset, host, size, cudaMemcpyHostToDevice), "particleSystem.cu", 89);
} }

extern "C" { void registerGLBufferObject(uint vbo)
{
__cudaSafeCall(cudaGLRegisterBufferObject(vbo), "particleSystem.cu", 94);
} }

extern "C" { void unregisterGLBufferObject(uint vbo)
{
__cudaSafeCall(cudaGLUnregisterBufferObject(vbo), "particleSystem.cu", 99);
} }

extern "C" { void setParameters(SimParams *hostParams)
{

__cudaSafeCall(cudaMemcpyToSymbol(__shadow_params, hostParams, sizeof(SimParams)), "particleSystem.cu", 105);
} }


extern "C" { int iDivUp(int a, int b) {
return ((a % b) != 0) ? (a / b + 1) : (a / b);
} }


extern "C" { void computeGridSize(int n, int blockSize, int &numBlocks, int &numThreads)
{
numThreads = min(blockSize, n);
numBlocks = iDivUp(n, numThreads);
} }


extern "C" { void integrateSystem(uint vboOldPos, uint vboNewPos, float *
oldVel, float *newVel, float
deltaTime, int
numParticles)
{
auto int numThreads; auto int numBlocks;
computeGridSize(numParticles, 256, numBlocks, numThreads);

auto float *oldPos; auto float *newPos;
__cudaSafeCall(cudaGLMapBufferObject((void **)(&oldPos), vboOldPos), "particleSystem.cu", 130);
__cudaSafeCall(cudaGLMapBufferObject((void **)(&newPos), vboNewPos), "particleSystem.cu", 131);


cudaConfigureCall(numBlocks, numThreads) ? ((void)0) : integrate__entry((float4 *)newPos, (float4 *)newVel, (float4 *)oldPos, (float4 *)oldVel, deltaTime);




__cutilCheckMsg("integrate kernel execution failed", "particleSystem.cu", 139);

__cudaSafeCall(cudaGLUnmapBufferObject(vboOldPos), "particleSystem.cu", 141);
__cudaSafeCall(cudaGLUnmapBufferObject(vboNewPos), "particleSystem.cu", 142);
} }


extern "C" { void updateGrid(uint vboPos, uint *
gridCounters, uint *
gridCells, uint
numParticles, uint
numCells)
{
auto int numThreads; auto int numBlocks;
computeGridSize(numParticles, 256, numBlocks, numThreads);

auto float *pos;
__cudaSafeCall(cudaGLMapBufferObject((void **)(&pos), vboPos), "particleSystem.cu", 156);

__cudaSafeCall(cudaMemset(gridCounters, 0, numCells * sizeof(uint)), "particleSystem.cu", 158);


cudaConfigureCall(numBlocks, numThreads) ? ((void)0) : updateGridD__entry((float4 *)pos, gridCounters, gridCells);




__cutilCheckMsg("Kernel execution failed", "particleSystem.cu", 166);

__cudaSafeCall(cudaGLUnmapBufferObject(vboPos), "particleSystem.cu", 168);
} }



extern "C" { void calcHash(uint vboPos, uint *
particleHash, int
numParticles)
{
auto int numThreads; auto int numBlocks;
computeGridSize(numParticles, 256, numBlocks, numThreads);

auto float *pos;
__cudaSafeCall(cudaGLMapBufferObject((void **)(&pos), vboPos), "particleSystem.cu", 181);


cudaConfigureCall(numBlocks, numThreads) ? ((void)0) : calcHashD__entry((float4 *)pos, (uint2 *)particleHash);



__cutilCheckMsg("Kernel execution failed", "particleSystem.cu", 188);

__cudaSafeCall(cudaGLUnmapBufferObject(vboPos), "particleSystem.cu", 190);
} }


extern "C" { void reorderDataAndFindCellStart(uint *particleHash, uint
vboOldPos, float *
oldVel, float *
sortedPos, float *
sortedVel, uint *
cellStart, uint
numParticles, uint
numCells)
{
auto int numThreads; auto int numBlocks;
computeGridSize(numParticles, 256, numBlocks, numThreads);

__cudaSafeCall(cudaMemset(cellStart, 4294967295U, numCells * sizeof(uint)), "particleSystem.cu", 206);

auto float *oldPos;
__cudaSafeCall(cudaGLMapBufferObject((void **)(&oldPos), vboOldPos), "particleSystem.cu", 209);


__cudaSafeCall(cudaBindTexture(0, oldPosTex, oldPos, numParticles * sizeof(float4)), "particleSystem.cu", 212);
__cudaSafeCall(cudaBindTexture(0, oldVelTex, oldVel, numParticles * sizeof(float4)), "particleSystem.cu", 213);


cudaConfigureCall(numBlocks, numThreads) ? ((void)0) : reorderDataAndFindCellStartD__entry((uint2 *)particleHash, (float4 *)oldPos, (float4 *)oldVel, (float4 *)sortedPos, (float4 *)sortedVel, (uint *)cellStart);
# 223 "particleSystem.cu"
__cutilCheckMsg("Kernel execution failed: reorderDataAndFindCellStartD", "particleSystem.cu", 223);


__cudaSafeCall(cudaUnbindTexture(oldPosTex), "particleSystem.cu", 226);
__cudaSafeCall(cudaUnbindTexture(oldVelTex), "particleSystem.cu", 227);


__cudaSafeCall(cudaGLUnmapBufferObject(vboOldPos), "particleSystem.cu", 230);
} }


extern "C" { void collide(uint vboOldPos, uint vboNewPos, float *
sortedPos, float *sortedVel, float *
oldVel, float *newVel, uint *
gridCounters, uint *
gridCells, uint *
particleHash, uint *
cellStart, uint
numParticles, uint
numCells, uint
maxParticlesPerCell)
{
auto float4 *oldPos; auto float4 *newPos;
__cudaSafeCall(cudaGLMapBufferObject((void **)(&oldPos), vboOldPos), "particleSystem.cu", 246);
__cudaSafeCall(cudaGLMapBufferObject((void **)(&newPos), vboNewPos), "particleSystem.cu", 247);
# 253 "particleSystem.cu"
__cudaSafeCall(cudaBindTexture(0, oldPosTex, sortedPos, numParticles * sizeof(float4)), "particleSystem.cu", 253);
__cudaSafeCall(cudaBindTexture(0, oldVelTex, sortedVel, numParticles * sizeof(float4)), "particleSystem.cu", 254);

__cudaSafeCall(cudaBindTexture(0, particleHashTex, particleHash, numParticles * sizeof(uint2)), "particleSystem.cu", 256);
__cudaSafeCall(cudaBindTexture(0, cellStartTex, cellStart, numCells * sizeof(uint)), "particleSystem.cu", 257);
# 270 "particleSystem.cu"
auto int numThreads; auto int numBlocks;
computeGridSize(numParticles, 64, numBlocks, numThreads);


cudaConfigureCall(numBlocks, numThreads) ? ((void)0) : collideD__entry((float4 *)newPos, (float4 *)newVel, (float4 *)sortedPos, (float4 *)sortedVel, (uint2 *)particleHash, cellStart);
# 287 "particleSystem.cu"
__cutilCheckMsg("Kernel execution failed", "particleSystem.cu", 287);

__cudaSafeCall(cudaGLUnmapBufferObject(vboNewPos), "particleSystem.cu", 289);
__cudaSafeCall(cudaGLUnmapBufferObject(vboOldPos), "particleSystem.cu", 290);


__cudaSafeCall(cudaUnbindTexture(oldPosTex), "particleSystem.cu", 293);
__cudaSafeCall(cudaUnbindTexture(oldVelTex), "particleSystem.cu", 294);


__cudaSafeCall(cudaUnbindTexture(particleHashTex), "particleSystem.cu", 297);
__cudaSafeCall(cudaUnbindTexture(cellStartTex), "particleSystem.cu", 298);
# 304 "particleSystem.cu"
} }

# 1 "/tmp/tmpxft_000062f6_00000000-1_particleSystem.cudafe1.stub.c" 1

extern "C" {

# 1 "/tmp/tmpxft_000062f6_00000000-3_particleSystem.fatbin.c" 1
# 1 "/home/normal/cuda/bin/../include/__cudaFatFormat.h" 1
# 83 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* debug;
} __cudaFatDebugEntry;


typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 144 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 158 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
    unsigned int characteristic;
} __cudaFatCudaBinary;
# 194 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode
    } __cudaFatCompilationPolicy;
# 217 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 228 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );


}
# 2 "/tmp/tmpxft_000062f6_00000000-3_particleSystem.fatbin.c" 2




extern "C" {


static const unsigned long long __deviceText_$sm_13$[] = {
0x6365746968637261ull,0x6d737b2065727574ull,0x6962610a7d33315full,0x206e6f6973726576ull,
0x6f6d0a7d317b2020ull,0x202020656d616e64ull,0x696275637b202020ull,0x6c706d61730a7d6eull,
0x616e090a7b207265ull,0x203d20202020656dull,0x6c6c654364697267ull,0x6574090a78655473ull,
0x203d2074696e7578ull,0x706d61730a7d0a35ull,0x6e090a7b2072656cull,0x3d20202020656d61ull,
0x756f436469726720ull,0x786554737265746eull,0x696e75786574090aull,0x0a7d0a34203d2074ull,
0x2072656c706d6173ull,0x20656d616e090a7bull,0x6c6563203d202020ull,0x655474726174536cull,
0x6e75786574090a78ull,0x7d0a33203d207469ull,0x72656c706d61730aull,0x656d616e090a7b20ull,
0x6170203d20202020ull,0x6148656c63697472ull,0x74090a7865546873ull,0x3d2074696e757865ull,
0x6d61730a7d0a3220ull,0x090a7b2072656c70ull,0x20202020656d616eull,0x6c6556646c6f203dull,
0x786574090a786554ull,0x31203d2074696e75ull,0x6c706d61730a7d0aull,0x616e090a7b207265ull,
0x203d20202020656dull,0x6554736f50646c6full,0x6e75786574090a78ull,0x7d0a30203d207469ull,
0x7b20636f6c65720aull,0x20656d616e09090aull,0x615264203d202020ull,0x6b636f6c42786964ull,
0x657309090a6d7553ull,0x203d20656d616e67ull,0x09090a636f6c6572ull,0x20206d756e676573ull,
0x6f09090a3431203dull,0x3d20207465736666ull,0x74796209090a3420ull,0x36203d2020207365ull,
0x6f6c65720a7d0a34ull,0x616e09090a7b2063ull,0x203d20202020656dull,0x7553786964615264ull,
0x6e67657309090a6dull,0x6572203d20656d61ull,0x657309090a636f6cull,0x203d20206d756e67ull,
0x66666f09090a3431ull,0x30203d2020746573ull,0x736574796209090aull,0x363931203d202020ull,
0x6f630a7d0a383036ull,0x090a7b207374736eull,0x202020656d616e09ull,0x6d61726170203d20ull,
0x6e67657309090a73ull,0x6f63203d20656d61ull,0x657309090a74736eull,0x203d20206d756e67ull,
0x7366666f09090a30ull,0x0a30203d20207465ull,0x2073657479620909ull,0x0a323131203d2020ull,
0x7b2065646f630a7dull,0x3d20656d616e090aull,0x64707531315a5f20ull,0x4464697247657461ull,
0x3474616f6c663650ull,0x6c090a5f31536a50ull,0x0a30203d206d656dull,0x203d206d656d7309ull,
0x20676572090a3834ull,0x6162090a37203d20ull,0x090a30203d202072ull,0x0a7b2074736e6f63ull,
0x616e676573090909ull,0x6e6f63203d20656dull,0x65730909090a7473ull,0x203d20206d756e67ull,
0x66666f0909090a31ull,0x30203d2020746573ull,0x657479620909090aull,0x0a34203d20202073ull,
0x0a7b206d656d0909ull,0x3865337830090909ull,0x090a203030303030ull,0x62090a7d090a7d09ull,
0x7b2065646f636e69ull,0x303061783009090aull,0x7830203530633430ull,0x3038373030323430ull,
0x3430303061783020ull,0x3430783020393032ull,0x0a20303837303032ull,0x3230303478300909ull,
0x3078302035303230ull,0x2030383738313030ull,0x3030303030617830ull,0x3034307830203130ull,
0x090a203038373030ull,0x3030303032783009ull,0x3430783020313032ull,0x3020303837303030ull,
0x3030303430303378ull,0x3031346378302035ull,0x09090a2030383730ull,0x3038303030317830ull,
0x6537307830203930ull,0x7830203330303038ull,0x3530386330303032ull,0x3430323430783020ull,
0x3009090a20303837ull,0x6635303139306278ull,0x3830303678302064ull,0x6478302038633734ull,
0x2039303230653030ull,0x3730306330387830ull,0x783009090a203038ull,0x6430323230303031ull,
0x6330303432783020ull,0x3162783020303837ull,0x3020393034303030ull,0x3837383330383078ull,
0x31783009090a2030ull,0x2064303030303030ull,0x3663303434327830ull,0x3830637830203038ull,
0x7830203930343030ull,0x3038363030343030ull,0x3063783009090a20ull,0x3020643036303139ull,
0x3836303030303078ull,0x3030303978302030ull,0x6378302063303630ull,0x2063303430333030ull,
0x303031783009090aull,0x7830203930303830ull,0x3330303038653730ull,0x3030303061783020ull,
0x6363783020643036ull,0x0a20303837343230ull,0x3430303278300909ull,0x3078302031313238ull,
0x2033303030303030ull,0x3530323930627830ull,0x3030367830206466ull,0x090a203863373438ull,
0x3030303061783009ull,0x6338783020393036ull,0x3020303837343630ull,0x3038306530306478ull,
0x3063303878302064ull,0x09090a2030383730ull,0x3432303030317830ull,0x3034327830203131ull,
0x7830203038376330ull,0x6430363030303162ull,0x6333303830783020ull,0x3009090a20303837ull,
0x3130303030303178ull,0x3034343278302031ull,0x6378302030383663ull,0x2064303630303830ull,
0x3630303430307830ull,0x783009090a203038ull,0x3131383032393063ull,0x3030303030783020ull,
0x3039783020303836ull,0x3020353138303030ull,0x3837303030303078ull,0x31783009090a2030ull,
0x2031313038303030ull,0x3030386537307830ull,0x3030327830203330ull,0x7830203530323838ull,
0x3330303030303030ull,0x3063783009090a20ull,0x3020643036303530ull,0x3837303030303078ull,
0x3339306278302030ull,0x3678302064663930ull,0x2038633734383030ull,0x303064783009090aull,
0x7830203530323065ull,0x3038373030633038ull,0x3030303061783020ull,0x6363783020643036ull,
0x0a20303837343230ull,0x3030303178300909ull,0x3278302031313632ull,0x2030383763303034ull,
0x3230303031627830ull,0x3038307830203530ull,0x090a203038373034ull,0x3030303061783009ull,
0x6338783020643036ull,0x3020303837343630ull,0x3130303030303178ull,0x3034343278302031ull,
0x09090a2030383663ull,0x3230303830637830ull,0x3430307830203530ull,0x7830203038363030ull,
0x3131383033393063ull,0x3030303030783020ull,0x3009090a20303836ull,0x3138303030303978ull,
0x3430306378302030ull,0x3178302030313230ull,0x2035303038663330ull,0x6666666666307830ull,
0x783009090a206666ull,0x3131383030303061ull,0x3432306363783020ull,0x3132783020303837ull,
0x3020353132303030ull,0x3837303330343078ull,0x61783009090a2030ull,0x2031313830303030ull,
0x3734363063387830ull,0x3030337830203038ull,0x7830203531383035ull,0x3038373030303461ull,
0x3032783009090a20ull,0x3020303132386238ull,0x3161386263303478ull,0x3430303378302034ull,
0x6178302064303630ull,0x2030383730303034ull,0x633034783009090aull,0x7830203031613861ull,
0x3431323861383032ull,0x3061383036783020ull,0x3038783020643036ull,0x0a20303837303130ull,
0x3530303378300909ull,0x6178302039303430ull,0x2030383730303034ull,0x3630303030327830ull,
0x3034307830203930ull,0x090a203038373830ull,0x3230303031783009ull,0x3432783020643061ull,
0x3020303837633030ull,0x3134303230303378ull,0x3031346378302031ull,0x09090a2030383730ull,
0x3830373030347830ull,0x3030307830203931ull,0x7830203038373030ull,0x3531303831303031ull,
0x3030303030783020ull,0x3009090a20333030ull,0x3163633030303278ull,0x3132343078302031ull,
0x3678302030383730ull,0x2039316130363030ull,0x3738313030307830ull,0x783009090a203038ull,
0x3131383035303764ull,0x3030633065783020ull,0x3132783020303837ull,0x3020353032303030ull,
0x3837343530343078ull,0x33783009090a2030ull,0x2035316330303130ull,0x3730303134637830ull,
0x3030337830203038ull,0x7830203530383031ull,0x3038373030303461ull,0x3036783009090a20ull,
0x3020393038303630ull,0x3837343130303078ull,0x3030303278302030ull,0x3078302035303430ull,
0x2030383734303034ull,0x303033783009090aull,0x7830203530323032ull,0x3038373030313463ull,
0x6430303032783020ull,0x3430783020353030ull,0x0a20303837343032ull,0x6530306478300909ull,
0x6178302031303230ull,0x2031383730306330ull,0x6f630a7d0a7d090aull,0x616e090a7b206564ull,
0x325a5f203d20656dull,0x6441786964615235ull,0x7374657366664f64ull,0x6666756853646e41ull,
0x79654b323150656cull,0x69615065756c6156ull,0x0a696a6a5f305372ull,0x203d206d656d6c09ull,
0x206d656d73090a30ull,0x6572090a3834203dull,0x0a3532203d202067ull,0x203d202072616209ull,
0x74736e6f63090a31ull,0x65730909090a7b20ull,0x203d20656d616e67ull,0x09090a74736e6f63ull,
0x206d756e67657309ull,0x0909090a31203d20ull,0x202074657366666full,0x620909090a30203dull,
0x3d20202073657479ull,0x656d09090a303820ull,0x300909090a7b206dull,0x3030303030303078ull,
0x3030303078302065ull,0x3078302066303030ull,0x2031303030303030ull,0x3030303030307830ull,
0x300909090a203330ull,0x3330303030303078ull,0x6666666678302030ull,0x3078302063666666ull,
0x2066663330303030ull,0x3030313030307830ull,0x300909090a203030ull,0x3030303030303078ull,
0x3030303078302032ull,0x3078302034303030ull,0x2035303030303030ull,0x3030303030307830ull,
0x300909090a203630ull,0x3030303030303078ull,0x3030303078302037ull,0x3078302038303030ull,
0x2039303030303030ull,0x3030303030307830ull,0x300909090a206130ull,0x3030303030303078ull,
0x3030303078302062ull,0x3078302063303030ull,0x2064303030303030ull,0x3030303030307830ull,
0x0a7d09090a206666ull,0x636e6962090a7d09ull,0x09090a7b2065646full,0x3030303030617830ull,
0x3034307830203131ull,0x7830203063373030ull,0x3130383138303030ull,0x3066333465783020ull,
0x3009090a20303035ull,0x6639303038303378ull,0x3134343678302064ull,0x3378302038633730ull,
0x2031303830323030ull,0x3530303134637830ull,0x783009090a203030ull,0x3130303030303132ull,
0x3430383730783020ull,0x3064783020303035ull,0x3020313030306530ull,0x3035303063303878ull,
0x30783009090a2030ull,0x2035303830323030ull,0x3530303030637830ull,0x3034307830203030ull,
0x7830203130613138ull,0x3030353030323465ull,0x3638783009090a20ull,0x3020333065666631ull,
0x3030303030303078ull,0x3138303378302030ull,0x3678302031303830ull,0x2030633763303463ull,
0x303031783009090aull,0x7830206430303831ull,0x3330303030303030ull,0x3032383064783020ull,
0x3430783020393030ull,0x0a20303837303034ull,0x3034303278300909ull,0x3078302031303830ull,
0x2030383763303034ull,0x3030633730337830ull,0x3063367830203531ull,0x090a203038373831ull,
0x3030303061783009ull,0x6332783020353161ull,0x3020303837343130ull,0x6662303230306478ull,
0x3030343078302064ull,0x09090a2038643730ull,0x3030323030307830ull,0x3030637830203530ull,
0x7830203038373030ull,0x3530303630323464ull,0x3130303032783020ull,0x3009090a20303836ull,
0x3030303030343178ull,0x3030343478302031ull,0x3178302030383664ull,0x2031303866303030ull,
0x3164333036307830ull,0x783009090a203030ull,0x3330656666313638ull,0x3030303030783020ull,
0x3030783020303030ull,0x3020353038303230ull,0x3836303030306378ull,0x64783009090a2030ull,
0x2039303036303234ull,0x3630303030327830ull,0x3038327830203038ull,0x7830203130306330ull,
0x3038363030323430ull,0x3430783009090a20ull,0x3020313038313830ull,0x3836303032346578ull,
0x6631363878302030ull,0x3078302033306566ull,0x2030303030303030ull,0x303033783009090aull,
0x7830206430363031ull,0x3038373030313463ull,0x3031383033783020ull,0x6336783020646637ull,
0x0a20386437633034ull,0x3030303178300909ull,0x3078302033303063ull,0x2030383231303030ull,
0x3830323030337830ull,0x3134657830203930ull,0x090a203038373030ull,0x3430303061783009ull,
0x3430783020313063ull,0x3020303837303032ull,0x3138303338306478ull,0x3034343078302035ull,
0x09090a2030383730ull,0x3830353830647830ull,0x3434307830203931ull,0x7830203038373030ull,
0x6430343034383036ull,0x3030343036783020ull,0x3009090a20303837ull,0x3061303030303278ull,
0x3130343078302039ull,0x3378302030383738ull,0x2064303630323030ull,0x3730303134637830ull,
0x783009090a203038ull,0x6466353036383033ull,0x3031346336783020ull,0x3032783020386337ull,
0x3020393161303030ull,0x3837633030343078ull,0x61783009090a2030ull,0x2033303033343030ull,
0x3030303030307830ull,0x3030317830203030ull,0x7830203330303334ull,0x3038323030303030ull,
0x3032783009090a20ull,0x3020643034386330ull,0x3030303030303078ull,0x3230303378302033ull,
0x6378302035316330ull,0x2030383730303134ull,0x303030783009090aull,0x7830203530363032ull,
0x3038373030303063ull,0x3030303132783020ull,0x3730783020643161ull,0x0a20303837303038ull,
0x6530306478300909ull,0x3878302035326530ull,0x2030383730306330ull,0x6330303030617830ull,
0x3134307830206430ull,0x090a203038373431ull,0x3862323031783009ull,0x6130783020353130ull,
0x3020626161616161ull,0x3263306230303478ull,0x3030303078302031ull,0x09090a2030383730ull,
0x6530613030367830ull,0x3030307830203132ull,0x7830203063373032ull,0x3932303130313033ull,
0x3030313463783020ull,0x3009090a20303837ull,0x3230313031303378ull,0x3031346578302031ull,
0x3678302030383730ull,0x2064666430613030ull,0x3738323030307830ull,0x783009090a203864ull,
0x3132303130303132ull,0x6331343430783020ull,0x3036783020303838ull,0x3020643065306230ull,
0x3837313230633078ull,0x33783009090a2030ull,0x2064303630623030ull,0x3730303163657830ull,
0x3730337830203038ull,0x7830206466643063ull,0x3863373430306336ull,0x3033783009090a20ull,
0x3020353136383030ull,0x3030303030303078ull,0x3030303178302033ull,0x3078302064306130ull,
0x2030383263333034ull,0x303030783009090aull,0x7830203930363032ull,0x3038373030303063ull,
0x3630323864783020ull,0x3032783020393030ull,0x0a20303837303030ull,0x3030383278300909ull,
0x3078302064303063ull,0x2030383734323234ull,0x3438303030327830ull,0x3030307830203930ull,
0x090a203730303030ull,0x3830303630783009ull,0x3465783020313030ull,0x3020303837633032ull,
0x6635303638303378ull,0x3034633678302064ull,0x09090a2038633763ull,0x6338303030327830ull,
0x3030307830203931ull,0x7830203363303030ull,0x6431653830303032ull,0x3030303030783020ull,
0x3009090a20333033ull,0x3030633230303178ull,0x3030303078302033ull,0x6678302030383230ull,
0x2031303030303030ull,0x3030303030657830ull,0x783009090a203230ull,0x3330656666313638ull,
0x3030303030783020ull,0x3638783020303030ull,0x3020333065666631ull,0x3030303030303078ull,
0x31783009090a2030ull,0x2039303231303030ull,0x3763303034347830ull,0x3230317830203038ull,
0x7830203931303862ull,0x6261616161616130ull,0x3034783009090a20ull,0x3020643038306430ull,
0x3837303030303078ull,0x6330303678302030ull,0x3078302064306130ull,0x2030633763303030ull,
0x313033783009090aull,0x7830203531363030ull,0x3038373030313463ull,0x3030313033783020ull,
0x3465783020643036ull,0x0a20303837303031ull,0x6330303678300909ull,0x3078302064663930ull,
0x2038643734313030ull,0x3630303031327830ull,0x3434307830206430ull,0x090a203038386331ull,
0x3032303033783009ull,0x3463783020643130ull,0x3020303837303031ull,0x3138303430303378ull,
0x3031346578302035ull,0x09090a2030383730ull,0x6130643030367830ull,0x3063307830203130ull,
0x7830203038376430ull,0x6430613030303032ull,0x6331303430783020ull,0x3009090a20303837ull,
0x3030303730303378ull,0x3031346578302039ull,0x3478302030383730ull,0x2031303830373030ull,
0x3730303030307830ull,0x783009090a203038ull,0x3130613036303036ull,0x3030303030783020ull,
0x3033783020303837ull,0x3020313030303031ull,0x3837303031346378ull,0x36783009090a2030ull,
0x2064303830363030ull,0x3730303030307830ull,0x3830647830203038ull,0x7830203130383031ull,
0x3038373030343430ull,0x3032783009090a20ull,0x3020383136383230ull,0x3130383330303278ull,
0x3630303378302030ull,0x3678302064663930ull,0x2038633738313034ull,0x303033783009090aull,
0x7830203330303030ull,0x3038323030303030ull,0x3063373033783020ull,0x6336783020643130ull,
0x0a20303837383030ull,0x3238303378300909ull,0x3678302031323030ull,0x2030383738303463ull,
0x3030383830337830ull,0x3463367830203532ull,0x090a203038373830ull,0x3033383033783009ull,
0x6336783020393230ull,0x3020303837383034ull,0x3230303938303378ull,0x3034633678302064ull,
0x09090a2030383738ull,0x3030613830337830ull,0x3463367830203133ull,0x7830203038373830ull,
0x3533303062383033ull,0x3830346336783020ull,0x3009090a20303837ull,0x3330306338303378ull,
0x3034633678302039ull,0x3378302030383738ull,0x2064333030643830ull,0x3738303463367830ull,
0x783009090a203038ull,0x3134303065383033ull,0x3830346336783020ull,0x3033783020303837ull,
0x3020353430306638ull,0x3837383034633678ull,0x33783009090a2030ull,0x2039343030303930ull,
0x3738303463367830ull,0x3930337830203038ull,0x7830206434303031ull,0x3038373830346336ull,
0x3033783009090a20ull,0x3020643030303239ull,0x3837383034633678ull,0x3038303378302030ull,
0x3678302039303030ull,0x2030383738303463ull,0x383033783009090aull,0x7830203130303031ull,
0x3038373830346336ull,0x3032383064783020ull,0x3430783020643165ull,0x0a20303837303034ull,
0x3238306478300909ull,0x3078302031323031ull,0x2030383730303434ull,0x3231323830647830ull,
0x3434307830203532ull,0x090a203038373030ull,0x3132383064783009ull,0x3430783020393234ull,
0x3020303837303034ull,0x3236313238306478ull,0x3034343078302064ull,0x09090a2030383730ull,
0x3831323830647830ull,0x3434307830203133ull,0x7830203038373030ull,0x3533613132383064ull,
0x3030343430783020ull,0x3009090a20303837ull,0x3363313238306478ull,0x3034343078302039ull,
0x6478302030383730ull,0x2064336531323830ull,0x3730303434307830ull,0x783009090a203038ull,
0x3134303232383064ull,0x3030343430783020ull,0x3064783020303837ull,0x3020353432323238ull,
0x3837303034343078ull,0x64783009090a2030ull,0x2039343432323830ull,0x3730303434307830ull,
0x3830647830203038ull,0x7830206434363232ull,0x3038373030343430ull,0x3064783009090a20ull,
0x3020313536303238ull,0x3837303034343078ull,0x3238306478302030ull,0x3078302035353430ull,
0x2030383730303434ull,0x383064783009090aull,0x7830203935303032ull,0x3038373030343430ull,
0x6434303033783020ull,0x3436783020313030ull,0x0a20306437303132ull,0x3030306178300909ull,
0x3078302064663130ull,0x2038633734313063ull,0x3830333030337830ull,0x3134637830203930ull,
0x090a203038363130ull,0x6330303032783009ull,0x3430783020393038ull,0x3020303836393032ull,
0x3034306530306478ull,0x3038303878302031ull,0x09090a2030383631ull,0x3866303030317830ull,
0x3034307830203130ull,0x7830203030316433ull,0x6435386630303031ull,0x6333303630783020ull,
0x3009090a20303837ull,0x3534303030303178ull,0x3034343278302064ull,0x6478302030383263ull,
0x2064666632373030ull,0x3730303034307830ull,0x783009090a203863ull,0x3330303239303061ull,
0x3030303030783020ull,0x3031783020303030ull,0x3020333030323930ull,0x3031303030303078ull,
0x31783009090a2030ull,0x2039303431303030ull,0x3763303034347830ull,0x3030337830203038ull,
0x7830203930303032ull,0x3038373030303465ull,0x3064783009090a20ull,0x3020393034303339ull,
0x3837303034343078ull,0x3230303378302030ull,0x6378302039303430ull,0x2030383730303134ull,
0x303032783009090aull,0x7830203930613030ull,0x3038373830303430ull,0x3032303030783020ull,
0x3063783020353034ull,0x0a20303837303030ull,0x3130353278300909ull,0x3078302039303866ull,
0x2033303030303030ull,0x3864333034337830ull,0x3334637830203136ull,0x090a203038373030ull,
0x3130303430783009ull,0x3465783020313038ull,0x3020303837383032ull,0x3030383030303178ull,
0x3230303178302038ull,0x09090a2063303238ull,0x6363303030327830ull,0x3234307830203136ull,
0x7830203038373036ull,0x3930303365303064ull,0x3030383061783020ull,0x3009090a20303837ull,
0x3030303030306678ull,0x3030306578302031ull,0x3878302032303030ull,0x2033306566663136ull,
0x3030303030307830ull,0x783009090a203030ull,0x6466663238303064ull,0x3030303430783020ull,
0x3061783020386337ull,0x3020333030336130ull,0x3030303030303078ull,0x31783009090a2030ull,
0x2033303033613030ull,0x3130303030307830ull,0x3030317830203030ull,0x7830203930343130ull,
0x3038376330303434ull,0x3033783009090a20ull,0x3020393030303230ull,0x3837303030346578ull,
0x3339306478302030ull,0x3078302039303430ull,0x2030383730303434ull,0x303033783009090aull,
0x7830203930343032ull,0x3038373030313463ull,0x3030303032783020ull,0x3430783020393061ull,
0x0a20303837383030ull,0x3230303078300909ull,0x6378302035303430ull,0x2030383730303030ull,
0x3866313035327830ull,0x3030307830203930ull,0x090a203330303030ull,0x6433303433783009ull,
0x3463783020313638ull,0x3020303837303033ull,0x3038313030343078ull,0x3032346578302031ull,
0x09090a2030383738ull,0x3038303030317830ull,0x3030317830203830ull,0x7830206330323832ull,
0x3136636330303032ull,0x3036323430783020ull,0x3009090a20303837ull,0x3030336530306478ull,
0x3038306178302039ull,0x6678302030383730ull,0x2031303030303030ull,0x3030303030657830ull,
0x783009090a203230ull,0x3330656666313638ull,0x3030303030783020ull,0x3064783020303030ull,
0x3020646666323930ull,0x6337303030343078ull,0x61783009090a2038ull,0x2033303034623030ull,
0x3030303030307830ull,0x3030317830203030ull,0x7830203330303462ull,0x3030313030303030ull,
0x3031783009090a20ull,0x3020393034313030ull,0x3837633030343478ull,0x3230303378302030ull,
0x6578302039303030ull,0x2030383730303034ull,0x393064783009090aull,0x7830203930343033ull,
0x3038373030343430ull,0x3032303033783020ull,0x3463783020393034ull,0x0a20303837303031ull,
0x3030303278300909ull,0x3078302039306130ull,0x2030383738303034ull,0x3430323030307830ull,
0x3030637830203530ull,0x090a203038373030ull,0x6631303532783009ull,0x3030783020393038ull,
0x3020333030303030ull,0x3638643330343378ull,0x3033346378302031ull,0x09090a2030383730ull,
0x3831303034307830ull,0x3234657830203130ull,0x7830203038373830ull,0x3830303830303031ull,
0x3832303031783020ull,0x3009090a20633032ull,0x3663633030303278ull,0x3632343078302031ull,
0x6478302030383730ull,0x2039303033653030ull,0x3730303830617830ull,0x783009090a203038ull,
0x3130303030303066ull,0x3030303065783020ull,0x3638783020323030ull,0x3020333065666631ull,
0x3030303030303078ull,0x64783009090a2030ull,0x2064666632613030ull,0x3730303034307830ull,
0x3030617830203863ull,0x7830203330303563ull,0x3030303030303030ull,0x3031783009090a20ull,
0x3020333030356330ull,0x3031303030303078ull,0x3030303178302030ull,0x3478302039303431ull,
0x2030383763303034ull,0x303033783009090aull,0x7830203930303032ull,0x3038373030303465ull,
0x3033393064783020ull,0x3430783020393034ull,0x0a20303837303034ull,0x3230303378300909ull,
0x6378302039303430ull,0x2030383730303134ull,0x6130303030327830ull,0x3034307830203930ull,
0x090a203038373830ull,0x3032303030783009ull,0x3063783020353034ull,0x3020303837303030ull,
0x3038663130353278ull,0x3030303078302039ull,0x09090a2033303030ull,0x3864333034337830ull,
0x3334637830203136ull,0x7830203038373030ull,0x3130383130303430ull,0x3830323465783020ull,
0x3009090a20303837ull,0x3030383030303178ull,0x3230303178302038ull,0x3278302063303238ull,
0x2031366363303030ull,0x3730363234307830ull,0x783009090a203038ull,0x3930303365303064ull,
0x3030383061783020ull,0x3066783020303837ull,0x3020313030303030ull,0x3030303030306578ull,
0x38783009090a2032ull,0x2033306566663136ull,0x3030303030307830ull,0x3030647830203030ull,
0x7830206466663262ull,0x3863373030303430ull,0x3061783009090a20ull,0x3020333030366430ull,
0x3030303030303078ull,0x6430303178302030ull,0x3078302033303036ull,0x2030303130303030ull,
0x303031783009090aull,0x7830203930343130ull,0x3038376330303434ull,0x3032303033783020ull,
0x3465783020393030ull,0x0a20303837303030ull,0x3339306478300909ull,0x3078302039303430ull,
0x2030383730303434ull,0x3430323030337830ull,0x3134637830203930ull,0x090a203038373030ull,
0x3030303032783009ull,0x3430783020393061ull,0x3020303837383030ull,0x3034303230303078ull,
0x3030306378302035ull,0x09090a2030383730ull,0x3866313035327830ull,0x3030307830203930ull,
0x7830203330303030ull,0x3136386433303433ull,0x3030333463783020ull,0x3009090a20303837ull,
0x3038313030343078ull,0x3032346578302031ull,0x3178302030383738ull,0x2038303038303030ull,
0x3238323030317830ull,0x783009090a206330ull,0x3136636330303032ull,0x3036323430783020ull,
0x3064783020303837ull,0x3020393030336530ull,0x3837303038306178ull,0x66783009090a2030ull,
0x2031303030303030ull,0x3030303030657830ull,0x3136387830203230ull,0x7830203330656666ull,
0x3030303030303030ull,0x3064783009090a20ull,0x3020646666326330ull,0x6337303030343078ull,
0x6530306178302038ull,0x3078302033303037ull,0x2030303030303030ull,0x303031783009090aull,
0x7830203330303765ull,0x3030313030303030ull,0x3130303031783020ull,0x3434783020393034ull,
0x0a20303837633030ull,0x3230303378300909ull,0x6578302039303030ull,0x2030383730303034ull,
0x3430333930647830ull,0x3434307830203930ull,0x090a203038373030ull,0x3032303033783009ull,
0x3463783020393034ull,0x3020303837303031ull,0x3061303030303278ull,0x3030343078302039ull,
0x09090a2030383738ull,0x3430323030307830ull,0x3030637830203530ull,0x7830203038373030ull,
0x3930386631303532ull,0x3030303030783020ull,0x3009090a20333030ull,0x3638643330343378ull,
0x3033346378302031ull,0x3078302030383730ull,0x2031303831303034ull,0x3738303234657830ull,
0x783009090a203038ull,0x3830303830303031ull,0x3832303031783020ull,0x3032783020633032ull,
0x3020313663633030ull,0x3837303632343078ull,0x64783009090a2030ull,0x2039303033653030ull,
0x3730303830617830ull,0x3030667830203038ull,0x7830203130303030ull,0x3230303030303065ull,
0x3638783009090a20ull,0x3020333065666631ull,0x3030303030303078ull,0x6430306478302030ull,
0x3078302064666632ull,0x2038633730303034ull,0x303061783009090aull,0x7830203330303866ull,
0x3030303030303030ull,0x3866303031783020ull,0x3030783020333030ull,0x0a20303031303030ull,
0x3030303178300909ull,0x3478302039303431ull,0x2030383763303034ull,0x3030323030337830ull,
0x3034657830203930ull,0x090a203038373030ull,0x3033393064783009ull,0x3430783020393034ull,
0x3020303837303034ull,0x3034303230303378ull,0x3031346378302039ull,0x09090a2030383730ull,
0x6130303030327830ull,0x3034307830203930ull,0x7830203038373830ull,0x3530343032303030ull,
0x3030303063783020ull,0x3009090a20303837ull,0x3038663130353278ull,0x3030303078302039ull,
0x3378302033303030ull,0x2031363864333034ull,0x3730303334637830ull,0x783009090a203038ull,
0x3130383130303430ull,0x3830323465783020ull,0x3031783020303837ull,0x3020383030383030ull,
0x3032383230303178ull,0x32783009090a2063ull,0x2031366363303030ull,0x3730363234307830ull,
0x3030647830203038ull,0x7830203930303365ull,0x3038373030383061ull,0x3066783009090a20ull,
0x3020313030303030ull,0x3030303030306578ull,0x6631363878302032ull,0x3078302033306566ull,
0x2030303030303030ull,0x303064783009090aull,0x7830206466663265ull,0x3863373030303430ull,
0x3930313061783020ull,0x3030783020333030ull,0x0a20303030303030ull,0x3031303178300909ull,
0x3078302033303039ull,0x2030303130303030ull,0x3431303030317830ull,0x3034347830203930ull,
0x090a203038376330ull,0x3032303033783009ull,0x3465783020393030ull,0x3020303837303030ull,
0x3034303339306478ull,0x3034343078302039ull,0x09090a2030383730ull,0x3430323030337830ull,
0x3134637830203930ull,0x7830203038373030ull,0x3930613030303032ull,0x3830303430783020ull,
0x3009090a20303837ull,0x3034303230303078ull,0x3030306378302035ull,0x3278302030383730ull,
0x2039303866313035ull,0x3030303030307830ull,0x783009090a203330ull,0x3136386433303433ull,
0x3030333463783020ull,0x3430783020303837ull,0x3020313038313030ull,0x3837383032346578ull,
0x31783009090a2030ull,0x2038303038303030ull,0x3238323030317830ull,0x3030327830206330ull,
0x7830203136636330ull,0x3038373036323430ull,0x3064783009090a20ull,0x3020393030336530ull,
0x3837303038306178ull,0x3030306678302030ull,0x6578302031303030ull,0x2032303030303030ull,
0x313638783009090aull,0x7830203330656666ull,0x3030303030303030ull,0x3266303064783020ull,
0x3430783020646666ull,0x0a20386337303030ull,0x3131306178300909ull,0x3078302033303061ull,
0x2030303030303030ull,0x3061313130317830ull,0x3030307830203330ull,0x090a203030313030ull,
0x3130303031783009ull,0x3434783020393034ull,0x3020303837633030ull,0x3030303230303378ull,
0x3030346578302039ull,0x09090a2030383730ull,0x3430333930647830ull,0x3434307830203930ull,
0x7830203038373030ull,0x3930343032303033ull,0x3030313463783020ull,0x3009090a20303837ull,
0x3061303030303278ull,0x3030343078302039ull,0x3078302030383738ull,0x2035303430323030ull,
0x3730303030637830ull,0x783009090a203038ull,0x3930386631303532ull,0x3030303030783020ull,
0x3433783020333030ull,0x3020313638643330ull,0x3837303033346378ull,0x30783009090a2030ull,
0x2031303831303034ull,0x3738303234657830ull,0x3030317830203038ull,0x7830203830303830ull,
0x6330323832303031ull,0x3032783009090a20ull,0x3020313663633030ull,0x3837303632343078ull,
0x6530306478302030ull,0x6178302039303033ull,0x2030383730303830ull,0x303066783009090aull,
0x7830203130303030ull,0x3230303030303065ull,0x6666313638783020ull,0x3030783020333065ull,
0x0a20303030303030ull,0x3031306478300909ull,0x3078302064666632ull,0x2038633730303034ull,
0x3062323130617830ull,0x3030307830203330ull,0x090a203030303030ull,0x6232313031783009ull,
0x3030783020333030ull,0x3020303031303030ull,0x3034313030303178ull,0x3030343478302039ull,
0x09090a2030383763ull,0x3030323030337830ull,0x3034657830203930ull,0x7830203038373030ull,
0x3930343033393064ull,0x3030343430783020ull,0x3009090a20303837ull,0x3034303230303378ull,
0x3031346378302039ull,0x3278302030383730ull,0x2039306130303030ull,0x3738303034307830ull,
0x783009090a203038ull,0x3530343032303030ull,0x3030303063783020ull,0x3532783020303837ull,
0x3020393038663130ull,0x3030303030303078ull,0x33783009090a2033ull,0x2031363864333034ull,
0x3730303334637830ull,0x3034307830203038ull,0x7830203130383130ull,0x3038373830323465ull,
0x3031783009090a20ull,0x3020383030383030ull,0x3032383230303178ull,0x3030303278302063ull,
0x3078302031366363ull,0x2030383730363234ull,0x303064783009090aull,0x7830203930303365ull,
0x3038373030383061ull,0x3030303066783020ull,0x3065783020313030ull,0x0a20323030303030ull,
0x6631363878300909ull,0x3078302033306566ull,0x2030303030303030ull,0x6632313130647830ull,
0x3034307830206466ull,0x090a203863373030ull,0x6333313061783009ull,0x3030783020333030ull,
0x3020303030303030ull,0x3030633331303178ull,0x3030303078302033ull,0x09090a2030303130ull,
0x3431303030317830ull,0x3034347830203930ull,0x7830203038376330ull,0x3930303032303033ull,
0x3030303465783020ull,0x3009090a20303837ull,0x3034303339306478ull,0x3034343078302039ull,
0x3378302030383730ull,0x2039303430323030ull,0x3730303134637830ull,0x783009090a203038ull,
0x3930613030303032ull,0x3830303430783020ull,0x3030783020303837ull,0x3020353034303230ull,
0x3837303030306378ull,0x32783009090a2030ull,0x2039303866313035ull,0x3030303030307830ull,
0x3034337830203330ull,0x7830203136386433ull,0x3038373030333463ull,0x3430783009090a20ull,
0x3020313038313030ull,0x3837383032346578ull,0x3030303178302030ull,0x3178302038303038ull,
0x2063303238323030ull,0x303032783009090aull,0x7830203136636330ull,0x3038373036323430ull,
0x3365303064783020ull,0x3061783020393030ull,0x0a20303837303038ull,0x3030306678300909ull,
0x6578302031303030ull,0x2032303030303030ull,0x6566663136387830ull,0x3030307830203330ull,
0x090a203030303030ull,0x3232313064783009ull,0x3430783020646666ull,0x3020386337303030ull,
0x3030643431306178ull,0x3030303078302033ull,0x09090a2030303030ull,0x3064343130317830ull,
0x3030307830203330ull,0x7830203030313030ull,0x3930343130303031ull,0x6330303434783020ull,
0x3009090a20303837ull,0x3030303230303378ull,0x3030346578302039ull,0x6478302030383730ull,
0x2039303430333930ull,0x3730303434307830ull,0x783009090a203038ull,0x3930343032303033ull,
0x3030313463783020ull,0x3032783020303837ull,0x3020393061303030ull,0x3837383030343078ull,
0x30783009090a2030ull,0x2035303430323030ull,0x3730303030637830ull,0x3035327830203038ull,
0x7830203930386631ull,0x3330303030303030ull,0x3433783009090a20ull,0x3020313638643330ull,
0x3837303033346378ull,0x3030343078302030ull,0x6578302031303831ull,0x2030383738303234ull,
0x303031783009090aull,0x7830203830303830ull,0x6330323832303031ull,0x6330303032783020ull,
0x3430783020313663ull,0x0a20303837303632ull,0x6530306478300909ull,0x6178302039303033ull,
0x2030383730303830ull,0x3030303030667830ull,0x3030657830203130ull,0x090a203230303030ull,
0x6666313638783009ull,0x3030783020333065ull,0x3020303030303030ull,0x6666323331306478ull,
0x3030343078302064ull,0x09090a2038633730ull,0x3065353130617830ull,0x3030307830203330ull,
0x7830203030303030ull,0x3330306535313031ull,0x3030303030783020ull,0x3009090a20303031ull,
0x3034313030303178ull,0x3030343478302039ull,0x3378302030383763ull,0x2039303030323030ull,
0x3730303034657830ull,0x783009090a203038ull,0x3930343033393064ull,0x3030343430783020ull,
0x3033783020303837ull,0x3020393034303230ull,0x3837303031346378ull,0x32783009090a2030ull,
0x2039306130303030ull,0x3738303034307830ull,0x3030307830203038ull,0x7830203530343032ull,
0x3038373030303063ull,0x3532783009090a20ull,0x3020393038663130ull,0x3030303030303078ull,
0x3330343378302033ull,0x6378302031363864ull,0x2030383730303334ull,0x303430783009090aull,
0x7830203130383130ull,0x3038373830323465ull,0x3830303031783020ull,0x3031783020383030ull,
0x0a20633032383230ull,0x3030303278300909ull,0x3078302031366363ull,0x2030383730363234ull,
0x3033653030647830ull,0x3830617830203930ull,0x090a203038373030ull,0x3030303066783009ull,
0x3065783020313030ull,0x3020323030303030ull,0x3065666631363878ull,0x3030303078302033ull,
0x09090a2030303030ull,0x6632343130647830ull,0x3034307830206466ull,0x7830203863373030ull,
0x3330306636313061ull,0x3030303030783020ull,0x3009090a20303030ull,0x3030663631303178ull,
0x3030303078302033ull,0x3178302030303130ull,0x2039303431303030ull,0x3763303034347830ull,
0x783009090a203038ull,0x3930303032303033ull,0x3030303465783020ull,0x3064783020303837ull,
0x3020393034303339ull,0x3837303034343078ull,0x33783009090a2030ull,0x2039303430323030ull,
0x3730303134637830ull,0x3030327830203038ull,0x7830203930613030ull,0x3038373830303430ull,
0x3030783009090a20ull,0x3020353034303230ull,0x3837303030306378ull,0x3130353278302030ull,
0x3078302039303866ull,0x2033303030303030ull,0x303433783009090aull,0x7830203136386433ull,
0x3038373030333463ull,0x3130303430783020ull,0x3465783020313038ull,0x0a20303837383032ull,
0x3030303178300909ull,0x3178302038303038ull,0x2063303238323030ull,0x6363303030327830ull,
0x3234307830203136ull,0x090a203038373036ull,0x3365303064783009ull,0x3061783020393030ull,
0x3020303837303038ull,0x3030303030306678ull,0x3030306578302031ull,0x09090a2032303030ull,
0x6566663136387830ull,0x3030307830203330ull,0x7830203030303030ull,0x6466663235313064ull,
0x3030303430783020ull,0x3009090a20386337ull,0x3030303831306178ull,0x3030303078302033ull,
0x3178302030303030ull,0x2033303030383130ull,0x3130303030307830ull,0x783009090a203030ull,
0x3930343130303031ull,0x6330303434783020ull,0x3033783020303837ull,0x3020393030303230ull,
0x3837303030346578ull,0x64783009090a2030ull,0x2039303430333930ull,0x3730303434307830ull,
0x3030337830203038ull,0x7830203930343032ull,0x3038373030313463ull,0x3032783009090a20ull,
0x3020393061303030ull,0x3837383030343078ull,0x3230303078302030ull,0x6378302035303430ull,
0x2030383730303030ull,0x303532783009090aull,0x7830203930386631ull,0x3330303030303030ull,
0x6433303433783020ull,0x3463783020313638ull,0x0a20303837303033ull,0x3030343078300909ull,
0x6578302031303831ull,0x2030383738303234ull,0x3038303030317830ull,0x3030317830203830ull,
0x090a206330323832ull,0x6330303032783009ull,0x3430783020313663ull,0x3020303837303632ull,
0x3030336530306478ull,0x3038306178302039ull,0x09090a2030383730ull,0x3030303030667830ull,
0x3030657830203130ull,0x7830203230303030ull,0x3330656666313638ull,0x3030303030783020ull,
0x3009090a20303030ull,0x6666323631306478ull,0x3030343078302064ull,0x6178302038633730ull,
0x2033303031393130ull,0x3030303030307830ull,0x783009090a203030ull,0x3330303139313031ull,
0x3030303030783020ull,0x3031783020303031ull,0x3020393034313030ull,0x3837633030343478ull,
0x33783009090a2030ull,0x2039303030323030ull,0x3730303034657830ull,0x3930647830203038ull,
0x7830203930343033ull,0x3038373030343430ull,0x3033783009090a20ull,0x3020393034303230ull,
0x3837303031346378ull,0x3030303278302030ull,0x3078302039306130ull,0x2030383738303034ull,
0x303030783009090aull,0x7830203530343032ull,0x3038373030303063ull,0x6631303532783020ull,
0x3030783020643038ull,0x0a20333030303030ull,0x3330343378300909ull,0x6378302039303864ull,
0x2030383730303334ull,0x3831303034307830ull,0x3234657830203130ull,0x090a203038376330ull,
0x3830303031783009ull,0x3132783020633032ull,0x3020633563653230ull,0x3030303030303178ull,
0x3330343078302039ull,0x09090a2030383763ull,0x6532653030647830ull,0x3830617830203930ull,
0x7830203038373030ull,0x3130303030303066ull,0x3030303065783020ull,0x3009090a20323030ull,
0x3065666631363878ull,0x3030303078302033ull,0x3278302030303030ull,0x2031313838303130ull,
0x3030303030307830ull,0x783009090a203330ull,0x6466393036303033ull,0x3430303436783020ull,
0x3031783020386337ull,0x3020333030623730ull,0x3832303030303078ull,0x66783009090a2030ull,
0x2031303030303030ull,0x3030303030657830ull,0x7d0a7d090a203130ull,0x0a7b2065646f630aull,
0x203d20656d616e09ull,0x696c6c6f63385a5full,0x6f6c663650446564ull,0x30535f3053347461ull,
0x697535505f30535full,0x6c090a6a5032746eull,0x0a30203d206d656dull,0x203d206d656d7309ull,
0x20676572090a3436ull,0x62090a3533203d20ull,0x0a30203d20207261ull,0x7b2074736e6f6309ull,
0x6e6765730909090aull,0x6f63203d20656d61ull,0x730909090a74736eull,0x3d20206d756e6765ull,
0x666f0909090a3120ull,0x203d202074657366ull,0x7479620909090a30ull,0x31203d2020207365ull,
0x206d656d09090a32ull,0x6678300909090a7bull,0x2066666666666666ull,0x3030303030307830ull,
0x3865337830203230ull,0x090a203030303030ull,0x62090a7d090a7d09ull,0x7b2065646f636e69ull,
0x303061783009090aull,0x7830203530633430ull,0x3038373030323430ull,0x3430303061783020ull,
0x3430783020393032ull,0x0a20303837303032ull,0x3230303478300909ull,0x3078302035303230ull,
0x2030383738313030ull,0x3030303030617830ull,0x3034307830203130ull,0x090a203038373030ull,
0x3030303032783009ull,0x3430783020393032ull,0x3020303837303030ull,0x3030383030303178ull,
0x3865373078302031ull,0x09090a2033303030ull,0x3430303030317830ull,0x3036307830203132ull,
0x7830203038376333ull,0x6466313031393062ull,0x3438303036783020ull,0x3009090a20386337ull,
0x3134303030303178ull,0x3330343078302031ull,0x6678302030383763ull,0x2031323030303037ull,
0x3734303030307830ull,0x783009090a203038ull,0x3131323032303766ull,0x6330303030783020ull,
0x3031783020343837ull,0x3020313032323030ull,0x3837633030343278ull,0x31783009090a2030ull,
0x2063303239323030ull,0x3439303030317830ull,0x3030317830206333ull,0x7830203832613832ull,
0x6334633830303031ull,0x3031783009090a20ull,0x3020633265383230ull,0x3030316563306278ull,
0x3030303178302034ull,0x3278302031303430ull,0x2030383663303434ull,0x383063783009090aull,
0x7830203530323032ull,0x3038363030343030ull,0x3031393063783020ull,0x3030783020313030ull,
0x0a20303836303030ull,0x3030303978300909ull,0x6378302030303030ull,0x2034303230303030ull,
0x3038303030317830ull,0x6537307830203130ull,0x090a203330303038ull,0x3030303061783009ull,
0x6363783020353132ull,0x3020303837343230ull,0x6631303239306278ull,0x3830303678302064ull,
0x09090a2038633734ull,0x3630303031627830ull,0x3038307830203130ull,0x7830203038376333ull,
0x3530343230303031ull,0x6330303432783020ull,0x3009090a20303837ull,0x3561303030306178ull,
0x3630633878302031ull,0x3178302030383734ull,0x2035303430303030ull,0x3663303434327830ull,
0x783009090a203038ull,0x3130303032383063ull,0x3030343030783020ull,0x3063783020303836ull,
0x3020353032303239ull,0x3836303030303078ull,0x39783009090a2030ull,0x2034303230303030ull,
0x3030313030637830ull,0x3030317830203430ull,0x7830203130303830ull,0x3330303038653730ull,
0x3061783009090a20ull,0x3020353132303030ull,0x3837343230636378ull,0x3339306278302030ull,
0x3678302064663130ull,0x2038633734383030ull,0x303162783009090aull,0x7830203130653130ull,
0x3038373034303830ull,0x3230303031783020ull,0x3432783020353036ull,0x0a20303837633030ull,
0x3030306178300909ull,0x3878302035356130ull,0x2030383734363063ull,0x3430303030317830ull,
0x3434327830203530ull,0x090a203038366330ull,0x3032383063783009ull,0x3030783020313030ull,
0x3020303836303034ull,0x3032303339306378ull,0x3030303078302035ull,0x09090a2030383630ull,
0x3230303030397830ull,0x3030637830203430ull,0x7830203030303031ull,0x6435303866333031ull,
0x6666666630783020ull,0x3009090a20666666ull,0x3030303030306178ull,0x3230636378302031ull,
0x3178302030383734ull,0x2031363866303030ull,0x3763333034307830ull,0x783009090a203038ull,
0x3536386630303031ull,0x6333303630783020ull,0x3031783020303837ull,0x3020393638663030ull,
0x3837633330343078ull,0x61783009090a2030ull,0x2039353030303030ull,0x3734363063387830ull,
0x3330317830203038ull,0x7830206436303866ull,0x6666666666666630ull,0x3031783009090a20ull,
0x3020313730386633ull,0x6666666666663078ull,0x3030303278302066ull,0x3078302031303832ull,
0x2030633730373034ull,0x303061783009090aull,0x7830203330303239ull,0x3030303030303030ull,
0x3234303031783020ull,0x3030783020333030ull,0x0a20303839303030ull,0x6633303178300909ull,
0x3078302035303038ull,0x2066666666666666ull,0x3230303031327830ull,0x3034307830203530ull,
0x090a203038373832ull,0x3031303033783009ull,0x3436783020646631ull,0x3020386337303130ull,
0x3030323430303178ull,0x3030303078302033ull,0x09090a2030383230ull,0x6132303030327830ull,
0x3034307830203531ull,0x7830203063376336ull,0x3330303234303031ull,0x3030303030783020ull,
0x3009090a20303839ull,0x3130386633303178ull,0x6666663078302039ull,0x3278302066666666ull,
0x2039316330303031ull,0x3763323034307830ull,0x783009090a203038ull,0x6466623036303033ull,
0x3031303436783020ull,0x3031783020386337ull,0x3020333030323430ull,0x3832303030303078ull,
0x32783009090a2030ull,0x2064316332303030ull,0x3763353034307830ull,0x3030317830203063ull,
0x7830203330303234ull,0x3038393030303030ull,0x3031783009090a20ull,0x3020353230386633ull,
0x6666666666663078ull,0x3030313278302066ull,0x3078302035323231ull,0x2030383730333034ull,
0x303033783009090aull,0x7830206466663039ull,0x3863376330303436ull,0x3634303031783020ull,
0x3030783020333030ull,0x0a20303832303030ull,0x3030303178300909ull,0x3078302035323866ull,
0x2030383763333036ull,0x3866303030317830ull,0x3034307830203531ull,0x090a203038376333ull,
0x6630303031783009ull,0x3630783020393138ull,0x3020303837633330ull,0x3030323930303178ull,
0x3030303078302033ull,0x09090a2030383730ull,0x6530393030337830ull,0x3034617830206431ull,
0x7830203038373030ull,0x3931613036303033ull,0x3030303461783020ull,0x3009090a20303837ull,
0x3165386263303478ull,0x6163303478302034ull,0x3378302038316338ull,0x2031303030313030ull,
0x3730303034617830ull,0x783009090a203038ull,0x3530613061383036ull,0x3831303038783020ull,
0x3032783020303837ull,0x3020633132383030ull,0x3065383030303178ull,0x66783009090a2030ull,
0x2031303630363033ull,0x3730303030307830ull,0x3830337830203038ull,0x7830206466313030ull,
0x3863373431343436ull,0x3031783009090a20ull,0x3020333030333530ull,0x3832303030303078ull,
0x3030303178302030ull,0x3078302035323866ull,0x2030383763333036ull,0x303031783009090aull,
0x7830203531386630ull,0x3038376333303430ull,0x6630303031783020ull,0x3630783020393138ull,
0x0a20303837633330ull,0x3930303178300909ull,0x3078302033303032ull,0x2030383730303030ull,
0x3966353930337830ull,0x3034367830206466ull,0x090a203863373830ull,0x6630303031783009ull,
0x3430783020353238ull,0x3020303837633330ull,0x3138663030303178ull,0x3330363078302035ull,
0x09090a2030383763ull,0x3866303030317830ull,0x3034307830203931ull,0x7830203038376333ull,
0x3330303239303031ull,0x3030303030783020ull,0x3009090a20303832ull,0x3030323930303478ull,
0x3030303078302033ull,0x3178302030303030ull,0x2035373866303030ull,0x3763333036307830ull,
0x783009090a203038ull,0x3033303864313032ull,0x3930303031783020ull,0x3366783020343038ull,
0x3020353034303430ull,0x3837303030303078ull,0x33783009090a2034ull,0x2064666630313030ull,
0x3734313034367830ull,0x3030357830203863ull,0x7830203330303030ull,0x3038323030303030ull,
0x3032783009090a20ull,0x3020353034303034ull,0x3837303030343078ull,0x3130303378302030ull,
0x3678302064666233ull,0x2038633738303034ull,0x303061783009090aull,0x7830203330306438ull,
0x3030303030303030ull,0x6438303031783020ull,0x3030783020333030ull,0x0a20303832303030ull,
0x3030303178300909ull,0x3078302031343831ull,0x2030383763333036ull,0x3062383030617830ull,
0x3030307830203330ull,0x090a203030303030ull,0x3030303766783009ull,0x3030783020313430ull,
0x3020343837343030ull,0x3332303230376678ull,0x3030303078302031ull,0x09090a2034383734ull,
0x3232333430627830ull,0x3430627830203430ull,0x7830203034303238ull,0x3837323031303063ull,
0x3266343062783020ull,0x3009090a20343434ull,0x3430323031306578ull,0x3730303078302039ull,
0x6578302030383738ull,0x2064373232313130ull,0x3738343030307830ull,0x783009090a203038ull,
0x3934323130303031ull,0x6330303432783020ull,0x3039783020303837ull,0x3020393765333030ull,
0x3837303030303478ull,0x62783009090a2030ull,0x2038343432393830ull,0x6333303030397830ull,
0x3230627830203038ull,0x7830206466353230ull,0x3863373031303036ull,0x3031783009090a20ull,
0x3020393763313030ull,0x3837633330343078ull,0x3830303178302030ull,0x3078302033303038ull,
0x2030303130303030ull,0x303039783009090aull,0x7830206437653330ull,0x3038373030303034ull,
0x3230363062783020ull,0x3062783020303834ull,0x0a20383361316134ull,0x3130306378300909ull,
0x6278302034336533ull,0x2038343831343430ull,0x6533303130637830ull,0x3030637830203033ull,
0x090a203438633164ull,0x3333353062783009ull,0x3063783020383763ull,0x3020633765333131ull,
0x3838313231306578ull,0x3830303078302035ull,0x09090a2030383734ull,0x3034363930637830ull,
0x3030307830203138ull,0x7830203038373030ull,0x3538653365313065ull,0x3438303030783020ull,
0x3009090a20303837ull,0x3838313032306378ull,0x3030303078302039ull,0x6578302030383730ull,
0x2031333831313230ull,0x3738343034307830ull,0x783009090a203038ull,0x3934343237393065ull,
0x3838303830783020ull,0x3065783020303837ull,0x3020313338313839ull,0x3837383430303078ull,
0x65783009090a2030ull,0x2031333032393930ull,0x3730333030307830ull,0x3230637830203038ull,
0x7830203134653330ull,0x3038373030303030ull,0x3065783009090a20ull,0x3020313463333739ull,
0x3837303430383078ull,0x6631306578302030ull,0x3078302039373234ull,0x2030383738373034ull,
0x323063783009090aull,0x7830203934613130ull,0x3038373030303030ull,0x3464303065783020ull,
0x3430783020353332ull,0x0a20303837383330ull,0x3739306578300909ull,0x3078302039336331ull,
0x2030383738343038ull,0x6131383930657830ull,0x3030307830203533ull,0x090a203038373833ull,
0x3338393065783009ull,0x3030783020393363ull,0x3020303837303430ull,0x3032303939306578ull,
0x3330303078302035ull,0x09090a2030383734ull,0x3232393930657830ull,0x3030307830203533ull,
0x7830203038373833ull,0x3330306238303031ull,0x3030303030783020ull,0x3009090a20303837ull,
0x3338663030303178ull,0x3330363078302035ull,0x3178302030383763ull,0x2035303866303030ull,
0x3763333034307830ull,0x783009090a203038ull,0x3133386630303031ull,0x6333303630783020ull,
0x3062783020303837ull,0x3020353261313030ull,0x3837343230303078ull,0x62783009090a2032ull,
0x2038313831363030ull,0x3230353030627830ull,0x3030667830203431ull,0x7830203130303030ull,
0x3230303030303065ull,0x3032783009090a20ull,0x3020353761623130ull,0x3030303030303078ull,
0x3539303378302033ull,0x3678302064666233ull,0x2038633734313034ull,0x303031783009090aull,
0x7830203330306135ull,0x3038323030303030ull,0x3030303035783020ull,0x3030783020333030ull,
0x0a20303837303030ull,0x3030306278300909ull,0x3078302031363231ull,0x2032383730363030ull,
0x3862313030327830ull,0x3030307830203137ull,0x090a203330303030ull,0x3331383033783009ull,
0x6336783020646639ull,0x3020386337343134ull,0x3663306131306278ull,0x3931306278302038ull,
0x09090a2034366130ull,0x3066323030317830ull,0x3030307830203330ull,0x7830203038323030ull,
0x6436366231303032ull,0x3030303030783020ull,0x3009090a20333030ull,0x6637333138303378ull,
0x3134633678302064ull,0x3178302038633734ull,0x2033303065323030ull,0x3230303030307830ull,
0x783009090a203038ull,0x6435656131303032ull,0x3030303030783020ull,0x3033783020333030ull,
0x3020646666323138ull,0x6337343134633678ull,0x31783009090a2038ull,0x2033303064323030ull,
0x3230303030307830ull,0x3830627830203038ull,0x7830203430363831ull,0x6330303930383062ull,
0x3063783009090a20ull,0x3020303032303130ull,0x3165393238306278ull,0x3330306578302034ull,
0x3078302031303630ull,0x2030383730303030ull,0x303065783009090aull,0x7830203931613035ull,
0x3038373030303030ull,0x3030303031783020ull,0x3432783020313038ull,0x0a20303837633030ull,
0x3030303978300909ull,0x3478302064316330ull,0x2030383730303030ull,0x3030393830627830ull,
0x3030397830203030ull,0x090a206331653030ull,0x3037303062783009ull,0x3036783020646631ull,
0x3020386337303130ull,0x3030646230306178ull,0x3030303078302033ull,0x09090a2030303030ull,
0x3061623030317830ull,0x3030307830203330ull,0x7830203030313030ull,0x3931633030303039ull,
0x3030303034783020ull,0x3009090a20303837ull,0x3063303130306378ull,0x3330306378302034ull,
0x6378302063306330ull,0x2030323230613030ull,0x3030373430627830ull,0x783009090a206331ull,
0x3130633035303063ull,0x3030303030783020ull,0x3065783020303837ull,0x3020353136303430ull,
0x3837303230633078ull,0x63783009090a2030ull,0x2039316530363930ull,0x3730303030307830ull,
0x3130657830203038ull,0x7830203531303033ull,0x3038373431303430ull,0x3063783009090a20ull,
0x3020633136303630ull,0x3230303630306378ull,0x3630306378302030ull,0x3078302039313230ull,
0x2030383730303030ull,0x303065783009090aull,0x7830206430363035ull,0x3038373031303030ull,
0x3031303065783020ull,0x3030783020353061ull,0x0a20303837383230ull,0x3030306578300909ull,
0x3078302035316130ull,0x2030383763343030ull,0x3830373930657830ull,0x3030307830203130ull,
0x090a203038376331ull,0x3137393065783009ull,0x3030783020393134ull,0x3020303837383130ull,
0x3136323739306578ull,0x3230303078302064ull,0x09090a2030383730ull,0x3630383930657830ull,
0x3063307830203130ull,0x7830203038373030ull,0x3530323038393065ull,0x3831306330783020ull,
0x3009090a20303837ull,0x3061303839306578ull,0x3130633078302064ull,0x3178302030383763ull,
0x2033303064623030ull,0x3730303030307830ull,0x783009090a203038ull,0x6430386630303031ull,
0x6333303430783020ull,0x3031783020303837ull,0x3020353038663030ull,0x3837633330363078ull,
0x31783009090a2030ull,0x2031303866303030ull,0x3763333034307830ull,0x3030337830203038ull,
0x7830203930343033ull,0x3238373030313463ull,0x3062783009090a20ull,0x3020383136303831ull,
0x3030306131306278ull,0x3931306278302063ull,0x3278302034313230ull,0x2030303866323031ull,
0x303064783009090aull,0x7830203130303065ull,0x3038373030383038ull,0x3236303062783020ull,
0x3062783020383136ull,0x0a20383038303330ull,0x3030306278300909ull,0x3078302064303431ull,
0x2030383734313030ull,0x3230343030337830ull,0x3134637830203130ull,0x090a203038373030ull,
0x6330303032783009ull,0x3430783020313063ull,0x3020303837303032ull,0x3030306530306478ull,
0x3063306178302039ull,0x09090a2030383730ull,0x3038343030327830ull,0x3030307830203530ull,
0x7830203330303030ull,0x6430323065303064ull,0x3030633061783020ull,0x3009090a20303837ull,
0x3030383830303278ull,0x3030303078302035ull,0x6478302033303030ull,0x2039313230653030ull,
0x3730306330617830ull,0x783009090a203038ull,0x3130303863303032ull,0x3030303030783020ull,
0x3064783020333030ull,0x3020643230306530ull,0x3837303063306178ull,0x0a7d0a7d090a2031ull,
0x090a7b2065646f63ull,0x5f203d20656d616eull,0x64726f657238325aull,0x6e41617461447265ull,
0x6c6543646e694664ull,0x504474726174536cull,0x365032746e697535ull,0x32533474616f6c66ull,
0x505f32535f32535full,0x206d656d6c090a6aull,0x656d73090a30203dull,0x34303131203d206dull,
0x3d2020676572090aull,0x726162090a303120ull,0x63090a31203d2020ull,0x090a7b2074736e6full,
0x6d616e6765730909ull,0x736e6f63203d2065ull,0x6765730909090a74ull,0x31203d20206d756eull,
0x7366666f0909090aull,0x0a30203d20207465ull,0x7365747962090909ull,0x090a38203d202020ull,
0x090a7b206d656d09ull,0x6666666678300909ull,0x6678302038666666ull,0x2066666666666666ull,
0x0a7d090a7d09090aull,0x65646f636e696209ull,0x61783009090a7b20ull,0x2035306334303030ull,
0x3730303234307830ull,0x3030617830203038ull,0x7830203930323430ull,0x3038373030323430ull,
0x3034783009090a20ull,0x3020353032303230ull,0x3837383130303078ull,0x3030306178302030ull,
0x3078302031303030ull,0x2030383730303034ull,0x303032783009090aull,0x7830203132303030ull,
0x3038373430303430ull,0x3133303033783020ull,0x3463783020353030ull,0x0a20303837303031ull,
0x6337303378300909ull,0x3678302064663131ull,0x2038633730313063ull,0x3030323030307830ull,
0x3030637830203530ull,0x090a203038373030ull,0x6330303032783009ull,0x3430783020393038ull,
0x3020303837343032ull,0x6631306337303378ull,0x3030343678302064ull,0x09090a2038633238ull,
0x3430653030647830ull,0x3830387830203130ull,0x7830203038373030ull,0x3130323230303430ull,
0x3030323465783020ull,0x3009090a20303837ull,0x3134303030313278ull,0x3034343078302031ull,
0x6478302030383630ull,0x2039303830653030ull,0x3630303830387830ull,0x783009090a203038ull,
0x3130303230303030ull,0x3830323465783020ull,0x3638783020303836ull,0x3020333065666631ull,
0x3030303030303078ull,0x33783009090a2030ull,0x2064663131633730ull,0x3738303063367830ull,
0x3030617830203863ull,0x7830203330303831ull,0x3030303030303030ull,0x3031783009090a20ull,
0x3020333030353130ull,0x3832303030303078ull,0x3030343378302030ull,0x3678302064663165ull,
0x2038633738303234ull,0x303031783009090aull,0x7830203330303831ull,0x3038323030303030ull,
0x3032303033783020ull,0x3463783020313030ull,0x0a20303837303031ull,0x3030303278300909ull,
0x3078302031306364ull,0x2030383730303234ull,0x3030653030647830ull,0x6330617830203132ull,
0x090a203038373030ull,0x3034303033783009ull,0x3463783020313032ull,0x3020323837303031ull,
0x3263653030313278ull,0x3030303178302034ull,0x09090a2030303238ull,0x3231653030647830ull,
0x6130387830203131ull,0x7830203038373030ull,0x3130323032303766ull,0x6330303030783020ull,
0x3009090a20343837ull,0x3132316530306478ull,0x3063303878302031ull,0x3378302030383730ull,
0x2031323031343030ull,0x3730303134637830ull,0x783009090a203038ull,0x3532346430303032ull,
0x3032323430783020ull,0x3064783020303837ull,0x3020313132316530ull,0x3837303061306178ull,
0x32783009090a2030ull,0x2031313864303030ull,0x3730323234307830ull,0x3030647830203038ull,
0x7830203130383065ull,0x3138373030613061ull,0x630a7d0a7d090a20ull,0x6e090a7b2065646full,
0x5a5f203d20656d61ull,0x61726765746e6939ull,0x616f6c6636506574ull,0x5f30535f30533474ull,
0x6d6c090a665f3053ull,0x090a30203d206d65ull,0x36203d206d656d73ull,0x2020676572090a34ull,
0x6162090a3431203dull,0x090a30203d202072ull,0x2065646f636e6962ull,0x3061783009090a7bull,
0x3020353063343030ull,0x3837303032343078ull,0x3030306178302030ull,0x3078302039303234ull,
0x2030383730303234ull,0x303034783009090aull,0x7830203530323032ull,0x3038373831303030ull,
0x3030303061783020ull,0x3430783020313030ull,0x0a20303837303030ull,0x3030303278300909ull,
0x3078302031303230ull,0x2030383730303034ull,0x3030343030337830ull,0x3134637830203132ull,
0x090a203038373030ull,0x6430303032783009ull,0x3430783020313034ull,0x3020303837303232ull,
0x3230643030303278ull,0x3232343078302035ull,0x09090a2030383730ull,0x3030653030647830ull,
0x6130387830203130ull,0x7830203038373030ull,0x3131323165303064ull,0x3030613038783020ull,
0x3009090a20303837ull,0x3230383030303178ull,0x3866333078302035ull,0x6278302033303030ull,
0x2064323231303031ull,0x3734323038307830ull,0x783009090a203038ull,0x3130386435383065ull,
0x3030323030783020ull,0x3065783020303837ull,0x3020353038643638ull,0x3837343032303078ull,
0x65783009090a2030ull,0x2039303864373830ull,0x3738303230307830ull,0x3030317830203038ull,
0x7830203433653832ull,0x6331303038383063ull,0x3063783009090a20ull,0x3020383232303838ull,
0x3234303838306378ull,0x3030303178302034ull,0x3078302031333630ull,0x2030383763333034ull,
0x303065783009090aull,0x7830203130386437ull,0x3038373031323030ull,0x6461303065783020ull,
0x3030783020393038ull,0x0a20303837343132ull,0x3930306578300909ull,0x3078302031313864ull,
0x2030383738313230ull,0x3731303030627830ull,0x3030367830206466ull,0x090a203863373430ull,
0x3832303031783009ull,0x3031783020343034ull,0x3020633038383030ull,0x3165306139306378ull,
0x3030303078302064ull,0x09090a2030383630ull,0x3631303030317830ull,0x3036307830203130ull,
0x7830203038366333ull,0x3531303830303031ull,0x3038666230783020ull,0x3009090a20333030ull,
0x3161303030316278ull,0x3230303078302035ull,0x6278302030383734ull,0x2064666230303030ull,
0x3730313030367830ull,0x783009090a203863ull,0x6431653061393063ull,0x3030303030783020ull,
0x3031783020303836ull,0x3020313061303030ull,0x3836633330343078ull,0x62783009090a2030ull,
0x2064663731313030ull,0x3734303030367830ull,0x3930637830203863ull,0x7830203932343161ull,
0x3038363030303030ull,0x3031783009090a20ull,0x3020393036313030ull,0x3836633330363078ull,
0x3230306278302030ull,0x3678302064666230ull,0x2038633730313030ull,0x393063783009090aull,
0x7830203932343161ull,0x3038363030303030ull,0x3030303031783020ull,0x3430783020393061ull,
0x0a20303836633330ull,0x3330306278300909ull,0x3678302064663731ull,0x2038633734303030ull,
0x3231613930637830ull,0x3030307830203532ull,0x090a203038363030ull,0x3130303031783009ull,
0x3630783020313136ull,0x3020303836633330ull,0x6662303430306278ull,0x3130303678302064ull,
0x09090a2038633730ull,0x3231613930637830ull,0x3030307830203532ull,0x7830203038363030ull,
0x3131613030303031ull,0x6333303430783020ull,0x3009090a20303836ull,0x3034383230303178ull,
0x3030303178302034ull,0x3178302038303838ull,0x2063306139323030ull,0x3865383031327830ull,
0x783009090a203031ull,0x3130383065303064ull,0x3030613061783020ull,0x3031783020303837ull,
0x3020343034393030ull,0x3032393230303178ull,0x31783009090a2038ull,0x2063303839303030ull,
0x6365383031327830ull,0x3030317830203031ull,0x7830203130653030ull,0x3038376333303430ull,
0x3064783009090a20ull,0x3020313038306530ull,0x3837303061306178ull,0x0a7d0a7d090a2031ull,
0x090a7b2065646f63ull,0x5f203d20656d616eull,0x786964615234315aull,0x7553786966657250ull,
0x6d656d6c090a766dull,0x6d73090a30203d20ull,0x0a3631203d206d65ull,0x203d202067657209ull,
0x20726162090a3031ull,0x6f63090a31203d20ull,0x09090a7b2074736eull,0x656d616e67657309ull,
0x74736e6f63203d20ull,0x6e6765730909090aull,0x0a31203d20206d75ull,0x657366666f090909ull,
0x090a30203d202074ull,0x2073657479620909ull,0x090a3032203d2020ull,0x090a7b206d656d09ull,
0x3030303078300909ull,0x3078302031313030ull,0x2066303030303030ull,0x6666666666667830ull,
0x3030307830203038ull,0x090a206662633030ull,0x6666666678300909ull,0x09090a2063666666ull,
0x6962090a7d090a7dull,0x0a7b2065646f636eull,0x6232303178300909ull,0x3078302035303038ull,
0x2062616161616161ull,0x3030303030617830ull,0x3034307830203131ull,0x090a203038373030ull,
0x3038303034783009ull,0x3030783020313036ull,0x3020303837303030ull,0x3030303031303378ull,
0x3031346378302039ull,0x09090a2030383730ull,0x3030303130337830ull,0x3134657830203130ull,
0x7830203038373030ull,0x6466353038303036ull,0x3830303030783020ull,0x3009090a20386437ull,
0x6635303830303678ull,0x3030303078302064ull,0x6178302038633738ull,0x2039316334303030ull,
0x3730303234307830ull,0x783009090a203038ull,0x3530303030343033ull,0x3166313430783020ull,
0x3033783020303837ull,0x3020313030303034ull,0x3837306631343078ull,0x33783009090a2030ull,
0x2064306330343030ull,0x3730303134637830ull,0x3030337830203038ull,0x7830203930323037ull,
0x3038373030313465ull,0x3033783009090a20ull,0x3020353030303730ull,0x3837303031346578ull,
0x3030303278302030ull,0x3078302039303430ull,0x2030383763303034ull,0x383064783009090aull,
0x7830203130303032ull,0x3038373030343430ull,0x3036303033783020ull,0x3463783020353032ull,
0x0a20303837303031ull,0x3730303378300909ull,0x6378302064303430ull,0x2030383730303134ull,
0x3430363030337830ull,0x3134637830203930ull,0x090a203038373030ull,0x3030303032783009ull,
0x3430783020313030ull,0x3020303837343030ull,0x3163306230303378ull,0x3031346378302035ull,
0x09090a2030383730ull,0x6330613030337830ull,0x3134637830206431ull,0x7830203038373030ull,
0x3430363832303032ull,0x3830343032783020ull,0x3009090a20303038ull,0x3161383730303278ull,
0x3130303278302034ull,0x6478302038303038ull,0x2031303830313830ull,0x3730303434307830ull,
0x783009090a203038ull,0x6430613830303032ull,0x3030303030783020ull,0x3033783020336330ull,
0x3020353038303430ull,0x3837303031346578ull,0x33783009090a2030ull,0x2064663730323030ull,
0x3763303034367830ull,0x3830367830203863ull,0x7830203130323030ull,0x3038373030343036ull,
0x3061783009090a20ull,0x3020333030393230ull,0x3030303030303078ull,0x3030303178302030ull,
0x3078302035303430ull,0x2030383763333036ull,0x303031783009090aull,0x7830203330303932ull,
0x3038323030303030ull,0x3834303032783020ull,0x3030783020313230ull,0x0a20333030303030ull,
0x3230303378300909ull,0x6378302064313230ull,0x2030383730303134ull,0x3031323030307830ull,
0x3030637830203530ull,0x090a203038373030ull,0x3030303132783009ull,0x3730783020643165ull,
0x3020303837303038ull,0x3265306530306478ull,0x3063303878302031ull,0x09090a2030383730ull,
0x3438303030327830ull,0x3030307830203930ull,0x7830206630303030ull,0x3130383931303630ull,
0x3032323465783020ull,0x3009090a20303837ull,0x6637303230303378ull,0x3130343678302064ull,
0x3278302038633730ull,0x2064316538303030ull,0x3030303030307830ull,0x783009090a203333ull,
0x3330303332303031ull,0x3030303030783020ull,0x3066783020303832ull,0x3020313030303030ull,
0x3030303030306578ull,0x38783009090a2032ull,0x2033306566663136ull,0x3030303030307830ull,
0x3530347830203030ull,0x7830206430383031ull,0x3330303030303030ull,0x3032783009090a20ull,
0x3020643136383031ull,0x3030303030303078ull,0x3330303378302033ull,0x3678302039306530ull,
0x2030643730313034ull,0x303061783009090aull,0x7830206466353030ull,0x3863373431306330ull,
0x6133303061783020ull,0x3030783020333030ull,0x0a20303030303030ull,0x3030303178300909ull,
0x3078302039303630ull,0x2030383763333034ull,0x3061333030317830ull,0x3030307830203330ull,
0x090a203030313130ull,0x3834303032783009ull,0x3030783020313234ull,0x3020333030303030ull,
0x3030313230303078ull,0x3030306378302035ull,0x09090a2030383730ull,0x3866303030317830ull,
0x3036307830203132ull,0x7830203038376333ull,0x3132306330303432ull,0x3032323430783020ull,
0x3009090a20303837ull,0x3036383130303278ull,0x3030303078302064ull,0x3078302033303030ull,
0x2031303230303036ull,0x3730323234657830ull,0x783009090a203038ull,0x6466373037303033ull,
0x3431303436783020ull,0x3031783020386437ull,0x3020333030353330ull,0x3832313030303078ull,
0x66783009090a2030ull,0x2031303030303030ull,0x3030303030657830ull,0x3136387830203230ull,
0x7830203330656666ull,0x3030303030303030ull,0x3030783009090a20ull,0x3020393034303230ull,
0x3837303030306378ull,0x3430303278302030ull,0x3078302031323438ull,0x2033303030303030ull,
0x303831783009090aull,0x7830206430363230ull,0x3038376330303434ull,0x3132303030783020ull,
0x3063783020353030ull,0x0a20303837303030ull,0x3030383078300909ull,0x6578302031303832ull,
0x2030383763303234ull,0x6566663136387830ull,0x3030307830203330ull,0x090a203030303030ull,
0x3831313031783009ull,0x3030783020313230ull,0x3020333030303030ull,0x3034303034303278ull,
0x3230343078302064ull,0x09090a2030383730ull,0x3638303130327830ull,0x3030307830203532ull,
0x7830203330303030ull,0x6466333163373033ull,0x6330306336783020ull,0x3009090a20386437ull,
0x3036303230303078ull,0x3030306378302039ull,0x3178302030383730ull,0x2064303832303038ull,
0x3564303034347830ull,0x783009090a203030ull,0x6430386630303031ull,0x6433303430783020ull,
0x3638783020303832ull,0x3020333065666631ull,0x3030303030303078ull,0x32783009090a2030ull,
0x2064303065303034ull,0x3763303234307830ull,0x3034307830203038ull,0x7830203130303230ull,
0x3038376330323465ull,0x3638783009090a20ull,0x3020333065666631ull,0x3030303030303078ull,
0x3130303378302030ull,0x6378302031323031ull,0x2030383730303134ull,0x383033783009090aull,
0x7830206466313133ull,0x3864376330346336ull,0x3334303031783020ull,0x3030783020333030ull,
0x0a20303832313030ull,0x6633303278300909ull,0x3078302064303438ull,0x2066666666666666ull,
0x3730633730337830ull,0x3063367830206466ull,0x090a203864376330ull,0x3030303430783009ull,
0x3034783020643030ull,0x3020303035313030ull,0x3036303030313278ull,0x3134343078302064ull,
0x09090a2030303531ull,0x3630303030307830ull,0x3030637830203930ull,0x7830203030353130ull,
0x6430303030303831ull,0x6430303434783020ull,0x3009090a20303035ull,0x3038663030303178ull,
0x3330343078302064ull,0x6178302030383264ull,0x2033303065353030ull,0x3030303030307830ull,
0x783009090a203030ull,0x3330306535303031ull,0x3030303030783020ull,0x3432783020303031ull,
0x3020313230633030ull,0x3837633032343078ull,0x32783009090a2030ull,0x2039303438313030ull,
0x3030303030307830ull,0x3036307830203330ull,0x7830203130323030ull,0x3038373032323465ull,
0x3033783009090a20ull,0x3020646635303730ull,0x6337343130343678ull,0x3530303178302038ull,
0x3078302033303039ull,0x2030383230303030ull,0x303066783009090aull,0x7830203130303030ull,
0x3230303030303065ull,0x6666313638783020ull,0x3030783020333065ull,0x0a20303030303030ull,
0x3830303378300909ull,0x6378302039306330ull,0x2030383730303134ull,0x3438303030327830ull,
0x3030307830203930ull,0x090a203331303030ull,0x3034303033783009ull,0x3465783020393034ull,
0x3020303837303031ull,0x3034303730303378ull,0x3031346378302064ull,0x09090a2030383730ull,
0x3430363030337830ull,0x3134637830203930ull,0x7830203038373030ull,0x3930363030303032ull,
0x3830303430783020ull,0x3009090a20303837ull,0x3032383130303278ull,0x3030303078302035ull,
0x3378302033303030ull,0x2064663530313030ull,0x3763303034367830ull,0x783009090a203863ull,
0x3330303437303061ull,0x3030303030783020ull,0x3031783020303030ull,0x3020333030343730ull,
0x3832303030303078ull,0x32783009090a2030ull,0x2064303038343030ull,0x3030303030307830ull,
0x3030337830203330ull,0x7830203130323032ull,0x3038373030313463ull,0x3030783009090a20ull,
0x3020353036303230ull,0x3837303030306378ull,0x3030313278302030ull,0x3078302064303030ull,
0x2030383730303837ull,0x303631783009090aull,0x7830203130383931ull,0x3038376330303434ull,
0x3830303032783020ull,0x3030783020353032ull,0x0a20663030303030ull,0x6530306478300909ull,
0x6178302031303630ull,0x2030383730306330ull,0x3530313030337830ull,0x3034367830206466ull,
0x090a203863373031ull,0x3830303032783009ull,0x3030783020643036ull,0x3020333330303030ull,
0x3030653630303178ull,0x3030303078302033ull,0x09090a2030383230ull,0x3930633730337830ull,
0x3034367830206466ull,0x7830206163373431ull,0x3330303030303033ull,0x3030303030783020ull,
0x3009090a20303832ull,0x3063303230303378ull,0x3031346378302031ull,0x6478302030383730ull,
0x2035303831363630ull,0x3730303030327830ull,0x783009090a203038ull,0x3930303030303132ull,
0x3430383730783020ull,0x3431783020303837ull,0x3020313030303030ull,0x3837633030343478ull,
0x33783009090a2030ull,0x2035306130323030ull,0x3730303134637830ull,0x3030647830203038ull,
0x7830203130343065ull,0x3038373030633061ull,0x3031783009090a20ull,0x3020393030383030ull,
0x3030303030303078ull,0x3030313278302033ull,0x3078302031303230ull,0x2030383730303837ull,
0x303064783009090aull,0x7830203930303065ull,0x3138373030633061ull,0x630a7d0a7d090a20ull,
0x6e090a7b2065646full,0x5a5f203d20656d61ull,0x736148636c616339ull,0x616f6c6636504468ull,
0x746e697535503474ull,0x206d656d6c090a32ull,0x656d73090a30203dull,0x090a3233203d206dull,
0x37203d2020676572ull,0x3d2020726162090aull,0x736e6f63090a3020ull,0x730909090a7b2074ull,
0x3d20656d616e6765ull,0x090a74736e6f6320ull,0x6d756e6765730909ull,0x09090a31203d2020ull,
0x2074657366666f09ull,0x0909090a30203d20ull,0x2020207365747962ull,0x656d09090a34203dull,
0x300909090a7b206dull,0x3030303038653378ull,0x090a7d09090a2030ull,0x6f636e6962090a7dull,
0x3009090a7b206564ull,0x3063343030306178ull,0x3032343078302035ull,0x6178302030383730ull,
0x2039303234303030ull,0x3730303234307830ull,0x783009090a203038ull,0x3530323032303034ull,
0x3831303030783020ull,0x3061783020303837ull,0x3020313030303030ull,0x3837303030343078ull,
0x32783009090a2030ull,0x2031303230303030ull,0x3730303034307830ull,0x3030337830203038ull,
0x7830203530303034ull,0x3038373030313463ull,0x3031783009090a20ull,0x3020393030383030ull,
0x3030303865373078ull,0x3030303278302033ull,0x3078302035303863ull,0x2030383734303234ull,
0x393062783009090aull,0x7830206466353031ull,0x3863373438303036ull,0x3065303064783020ull,
0x3038783020393032ull,0x0a20303837303063ull,0x3030303178300909ull,0x3278302064303232ull,
0x2030383763303034ull,0x3430303031627830ull,0x3038307830203930ull,0x090a203038373833ull,
0x3030303031783009ull,0x3432783020643030ull,0x3020303836633034ull,0x3034303038306378ull,
0x3034303078302039ull,0x09090a2030383630ull,0x3630313930637830ull,0x3030307830206430ull,
0x7830203038363030ull,0x6330363030303039ull,0x3033303063783020ull,0x3009090a20633034ull,
0x3030383030303178ull,0x3865373078302039ull,0x6178302033303030ull,0x2064303630303030ull,
0x3734323063637830ull,0x783009090a203038ull,0x3131323834303032ull,0x3030303030783020ull,
0x3062783020333030ull,0x3020646635303239ull,0x6337343830303678ull,0x61783009090a2038ull,
0x2039303630303030ull,0x3734363063387830ull,0x3030647830203038ull,0x7830206430383065ull,
0x3038373030633038ull,0x3031783009090a20ull,0x3020313134323030ull,0x3837633030343278ull,
0x3030316278302030ull,0x3078302064303630ull,0x2030383763333038ull,0x303031783009090aull,
0x7830203131303030ull,0x3038366330343432ull,0x3030383063783020ull,0x3030783020643036ull,
0x0a20303836303034ull,0x3239306378300909ull,0x3078302031313830ull,0x2030383630303030ull,
0x3830303030397830ull,0x3030307830203531ull,0x090a203038373030ull,0x3830303031783009ull,
0x3730783020313130ull,0x3020333030303865ull,0x3032383830303278ull,0x3030303078302035ull,
0x09090a2033303030ull,0x3630353030637830ull,0x3030307830206430ull,0x7830203038373030ull,
0x6466393033393062ull,0x3438303036783020ull,0x3009090a20386337ull,0x3032306530306478ull,
0x3063303878302035ull,0x6178302030383730ull,0x2035313630303030ull,0x3734323063637830ull,
0x783009090a203038ull,0x3131363230303031ull,0x6330303432783020ull,0x3162783020303837ull,
0x3020643032303030ull,0x3837303430383078ull,0x61783009090a2030ull,0x2035306130303030ull,
0x3734363063387830ull,0x3030317830203038ull,0x7830203131303030ull,0x3038366330343432ull,
0x3063783009090a20ull,0x3020643036303038ull,0x3836303034303078ull,0x3339306378302030ull,
0x3078302031313830ull,0x2030383630303030ull,0x303039783009090aull,0x7830203031383030ull,
0x3031363034303063ull,0x3866333031783020ull,0x6630783020643030ull,0x0a20666666666666ull,
0x3030306178300909ull,0x6378302031313830ull,0x2030383734323063ull,0x3638633830327830ull,
0x3830327830203431ull,0x090a203831363862ull,0x3030303061783009ull,0x6338783020313138ull,
0x3020303837343630ull,0x3132303630303378ull,0x3030346178302039ull,0x09090a2030383730ull,
0x3830353030337830ull,0x3034617830203530ull,0x7830203038373030ull,0x3031633861633034ull,
0x3862633034783020ull,0x3009090a20343032ull,0x3036303030313278ull,0x3230343078302064ull,
0x3678302030383738ull,0x2031313230613830ull,0x3730313030387830ull,0x783009090a203038ull,
0x3930343033303033ull,0x3030303461783020ull,0x3033783020303837ull,0x3020353030303330ull,
0x3837303031346378ull,0x32783009090a2030ull,0x2038303838323030ull,0x3038303030317830ull,
0x3030327830206330ull,0x7830203130636330ull,0x3038373430323430ull,0x3064783009090a20ull,
0x3020393030306530ull,0x3837303038306178ull,0x0a7d0a7d090a2031ull,0x090a7b2065646f63ull,
0x5f203d20656d616eull,0x537869646152385aull,0x79654b3231506d75ull,0x69615065756c6156ull,
0x6d6c090a6a6a6a72ull,0x090a30203d206d65ull,0x34203d206d656d73ull,0x2020676572090a38ull,
0x6162090a3432203dull,0x090a31203d202072ull,0x0a7b2074736e6f63ull,0x616e676573090909ull,
0x6e6f63203d20656dull,0x65730909090a7473ull,0x203d20206d756e67ull,0x66666f0909090a31ull,
0x30203d2020746573ull,0x657479620909090aull,0x3038203d20202073ull,0x7b206d656d09090aull,
0x303078300909090aull,0x3020666633303030ull,0x3030303030303078ull,0x3130303078302066ull,
0x3078302030303030ull,0x2031303030303030ull,0x303078300909090aull,0x3020323030303030ull,
0x3030303030303078ull,0x3030303078302033ull,0x3078302034303030ull,0x2035303030303030ull,
0x303078300909090aull,0x3020363030303030ull,0x3030303030303078ull,0x3030303078302037ull,
0x3078302038303030ull,0x2039303030303030ull,0x303078300909090aull,0x3020613030303030ull,
0x3030303030303078ull,0x3030303078302062ull,0x3078302063303030ull,0x2064303030303030ull,
0x303078300909090aull,0x3020653030303030ull,0x6630303030303078ull,0x3030303078302066ull,
0x3078302030633030ull,0x2063663330303030ull,0x0a7d090a7d09090aull,0x65646f636e696209ull,
0x61783009090a7b20ull,0x2035303030303030ull,0x3730303034307830ull,0x3830337830203038ull,
0x7830206466333030ull,0x3863373031343436ull,0x3061783009090a20ull,0x3020333030623030ull,
0x3030303030303078ull,0x3030303178302030ull,0x3078302031303230ull,0x2030383763333036ull,
0x303031783009090aull,0x7830203330306230ull,0x3038323030303030ull,0x3863303032783020ull,
0x3030783020393030ull,0x0a20333030303030ull,0x3230303078300909ull,0x6378302035303430ull,
0x2030383730303030ull,0x3238303030327830ull,0x3030307830203530ull,0x090a203730303030ull,
0x3830303630783009ull,0x3465783020313030ull,0x3020303837306633ull,0x6633303038303378ull,
0x3034343678302064ull,0x09090a2038633763ull,0x3037303030317830ull,0x3030307830203330ull,
0x7830203038323030ull,0x3130303030303066ull,0x3030303065783020ull,0x3009090a20323030ull,
0x3065666631363878ull,0x3030303078302033ull,0x3178302030303030ull,0x2039306530303030ull,
0x3763303034347830ull,0x783009090a203038ull,0x3531303862323031ull,0x6161616130783020ull,
0x3034783020626161ull,0x3020353038306230ull,0x3837303030303078ull,0x36783009090a2030ull,
0x2035306130613030ull,0x3734303030307830ull,0x3130337830203063ull,0x7830203131323030ull,
0x3038373030313463ull,0x3033783009090a20ull,0x3020643032303031ull,0x3837303031346578ull,
0x6130303678302030ull,0x3078302064663930ull,0x2038643730313030ull,0x303132783009090aull,
0x7830206430363030ull,0x3038383830343430ull,0x3034303033783020ull,0x3465783020313130ull,
0x0a20303837303031ull,0x3430313478300909ull,0x3078302035306332ull,0x2033303030303030ull,
0x6130623030367830ull,0x3063307830203930ull,0x090a203038376430ull,0x3030303032783009ull,
0x3430783020353138ull,0x3020303837343030ull,0x3034303730303378ull,0x3031346578302064ull,
0x09090a2030383730ull,0x6330623030347830ull,0x3030307830203930ull,0x7830203038373030ull,
0x3930653061303036ull,0x3830303030783020ull,0x3009090a20303837ull,0x3034303031303378ull,
0x3031346378302039ull,0x3678302030383730ull,0x2035316330613030ull,0x3738303030307830ull,
0x783009090a203038ull,0x3930303031383064ull,0x3030343430783020ull,0x3032783020303837ull,
0x3020383161383330ull,0x3134383530303278ull,0x33783009090a2034ull,0x2064666230363030ull,
0x3738313034367830ull,0x3130617830203863ull,0x7830203330306531ull,0x3030303030303030ull,
0x3031783009090a20ull,0x3020333030653131ull,0x3832303030303078ull,0x6337303378302030ull,
0x3678302064313430ull,0x2030383738303034ull,0x383033783009090aull,0x7830203132343033ull,
0x3038373830343436ull,0x3034383033783020ull,0x3436783020353234ull,0x0a20303837383034ull,
0x3538303378300909ull,0x3678302039323430ull,0x2030383738303434ull,0x3430363830337830ull,
0x3434367830206432ull,0x090a203038373830ull,0x3037383033783009ull,0x3436783020313334ull,
0x3020303837383034ull,0x3334303838303378ull,0x3034343678302035ull,0x09090a2030383738ull,
0x3430393830337830ull,0x3434367830203933ull,0x7830203038373830ull,0x6433343061383033ull,
0x3830343436783020ull,0x3009090a20303837ull,0x3434306238303378ull,0x3034343678302031ull,
0x3378302030383738ull,0x2035343430633830ull,0x3738303434367830ull,0x783009090a203038ull,
0x3934343064383033ull,0x3830343436783020ull,0x3033783020303837ull,0x3020643434306538ull,
0x3837383034343678ull,0x33783009090a2030ull,0x2031353430663830ull,0x3738303434367830ull,
0x3930337830203038ull,0x7830206430343030ull,0x3038373830343436ull,0x3033783009090a20ull,
0x3020393034303138ull,0x3837383034343678ull,0x3338306478302030ull,0x3078302064316530ull,
0x2030383730303434ull,0x383064783009090aull,0x7830203132303133ull,0x3038373030343430ull,
0x3133383064783020ull,0x3430783020353232ull,0x0a20303837303034ull,0x3338306478300909ull,
0x3078302039323431ull,0x2030383730303434ull,0x3631333830647830ull,0x3434307830206432ull,
0x090a203038373030ull,0x3133383064783009ull,0x3430783020313338ull,0x3020303837303034ull,
0x3361313338306478ull,0x3034343078302035ull,0x09090a2030383730ull,0x6331333830647830ull,
0x3434307830203933ull,0x7830203038373030ull,0x6433653133383064ull,0x3030343430783020ull,
0x3009090a20303837ull,0x3430323338306478ull,0x3034343078302031ull,0x6478302030383730ull,
0x2035343232333830ull,0x3730303434307830ull,0x783009090a203038ull,0x3934343233383064ull,
0x3030343430783020ull,0x3064783020303837ull,0x3020643436323338ull,0x3837303034343078ull,
0x64783009090a2030ull,0x2031353832333830ull,0x3730303434307830ull,0x3830647830203038ull,
0x7830203535363033ull,0x3038373030343430ull,0x3064783009090a20ull,0x3020393534303338ull,
0x3837303034343078ull,0x3530303378302030ull,0x3678302039306363ull,0x2030643730313234ull,
0x303061783009090aull,0x7830206466353030ull,0x3863373431306330ull,0x3033303033783020ull,
0x3463783020393061ull,0x0a20303836313031ull,0x3030303278300909ull,0x3078302039303863ull,
0x2030383639303234ull,0x3430653030647830ull,0x6330387830206435ull,0x090a203038363130ull,
0x6630303031783009ull,0x3430783020643538ull,0x3020303031643330ull,0x3038663030303178ull,
0x3330343078302039ull,0x09090a2030383763ull,0x3630303030317830ull,0x3434327830203930ull,
0x7830203038326330ull,0x6466353037303064ull,0x3030303430783020ull,0x3009090a20386337ull,
0x3030363530306178ull,0x3030303078302033ull,0x3178302030303030ull,0x2033303036353030ull,
0x3130303030307830ull,0x783009090a203030ull,0x6430303130303031ull,0x6330303434783020ull,
0x3033783020303837ull,0x3020643065323330ull,0x3837303030346578ull,0x64783009090a2030ull,
0x2064303630313930ull,0x3730303434307830ull,0x3030337830203038ull,0x7830206430363032ull,
0x3038373030313463ull,0x3032783009090a20ull,0x3020643038303030ull,0x3837633030343078ull,
0x3230303078302030ull,0x6378302035303630ull,0x2030383730303030ull,0x303532783009090aull,
0x7830206430386631ull,0x3330303030303030ull,0x3130303430783020ull,0x3465783020313038ull,
0x0a20303837633032ull,0x3030306678300909ull,0x6578302031303030ull,0x2032303030303030ull,
0x6566663136387830ull,0x3030307830203330ull,0x090a203030303030ull,0x3038303064783009ull,
0x3430783020646635ull,0x3020386337303030ull,0x3030333630306178ull,0x3030303078302033ull,
0x09090a2030303030ull,0x3033363030317830ull,0x3030307830203330ull,0x7830203030313030ull,
0x6430303130303031ull,0x6330303434783020ull,0x3009090a20303837ull,0x3065323330303378ull,
0x3030346578302064ull,0x6478302030383730ull,0x2064303630313930ull,0x3730303434307830ull,
0x783009090a203038ull,0x6430363032303033ull,0x3030313463783020ull,0x3032783020303837ull,
0x3020643038303030ull,0x3837633030343078ull,0x30783009090a2030ull,0x2035303630323030ull,
0x3730303030637830ull,0x3035327830203038ull,0x7830206430386631ull,0x3330303030303030ull,
0x3430783009090a20ull,0x3020313038313030ull,0x3837633032346578ull,0x3030306678302030ull,
0x6578302031303030ull,0x2032303030303030ull,0x313638783009090aull,0x7830203330656666ull,
0x3030303030303030ull,0x3039303064783020ull,0x3430783020646635ull,0x0a20386337303030ull,
0x3730306178300909ull,0x3078302033303030ull,0x2030303030303030ull,0x3030373030317830ull,
0x3030307830203330ull,0x090a203030313030ull,0x3130303031783009ull,0x3434783020643030ull,
0x3020303837633030ull,0x3065323330303378ull,0x3030346578302064ull,0x09090a2030383730ull,
0x3630313930647830ull,0x3434307830206430ull,0x7830203038373030ull,0x6430363032303033ull,
0x3030313463783020ull,0x3009090a20303837ull,0x3038303030303278ull,0x3030343078302064ull,
0x3078302030383763ull,0x2035303630323030ull,0x3730303030637830ull,0x783009090a203038ull,
0x6430386631303532ull,0x3030303030783020ull,0x3430783020333030ull,0x3020313038313030ull,
0x3837633032346578ull,0x66783009090a2030ull,0x2031303030303030ull,0x3030303030657830ull,
0x3136387830203230ull,0x7830203330656666ull,0x3030303030303030ull,0x3064783009090a20ull,
0x3020646635306130ull,0x6337303030343078ull,0x3730306178302038ull,0x3078302033303064ull,
0x2030303030303030ull,0x303031783009090aull,0x7830203330306437ull,0x3030313030303030ull,
0x3130303031783020ull,0x3434783020643030ull,0x0a20303837633030ull,0x3330303378300909ull,
0x6578302064306532ull,0x2030383730303034ull,0x3630313930647830ull,0x3434307830206430ull,
0x090a203038373030ull,0x3032303033783009ull,0x3463783020643036ull,0x3020303837303031ull,
0x3038303030303278ull,0x3030343078302064ull,0x09090a2030383763ull,0x3630323030307830ull,
0x3030637830203530ull,0x7830203038373030ull,0x6430386631303532ull,0x3030303030783020ull,
0x3009090a20333030ull,0x3038313030343078ull,0x3032346578302031ull,0x6678302030383763ull,
0x2031303030303030ull,0x3030303030657830ull,0x783009090a203230ull,0x3330656666313638ull,
0x3030303030783020ull,0x3064783020303030ull,0x3020646635306230ull,0x6337303030343078ull,
0x61783009090a2038ull,0x2033303061383030ull,0x3030303030307830ull,0x3030317830203030ull,
0x7830203330306138ull,0x3030313030303030ull,0x3031783009090a20ull,0x3020643030313030ull,
0x3837633030343478ull,0x3330303378302030ull,0x6578302064306532ull,0x2030383730303034ull,
0x393064783009090aull,0x7830206430363031ull,0x3038373030343430ull,0x3032303033783020ull,
0x3463783020643036ull,0x0a20303837303031ull,0x3030303278300909ull,0x3078302064303830ull,
0x2030383763303034ull,0x3630323030307830ull,0x3030637830203530ull,0x090a203038373030ull,
0x6631303532783009ull,0x3030783020643038ull,0x3020333030303030ull,0x3038313030343078ull,
0x3032346578302031ull,0x09090a2030383763ull,0x3030303030667830ull,0x3030657830203130ull,
0x7830203230303030ull,0x3330656666313638ull,0x3030303030783020ull,0x3009090a20303030ull,
0x6635306330306478ull,0x3030343078302064ull,0x6178302038633730ull,0x2033303037393030ull,
0x3030303030307830ull,0x783009090a203030ull,0x3330303739303031ull,0x3030303030783020ull,
0x3031783020303031ull,0x3020643030313030ull,0x3837633030343478ull,0x33783009090a2030ull,
0x2064306532333030ull,0x3730303034657830ull,0x3930647830203038ull,0x7830206430363031ull,
0x3038373030343430ull,0x3033783009090a20ull,0x3020643036303230ull,0x3837303031346378ull,
0x3030303278302030ull,0x3078302064303830ull,0x2030383763303034ull,0x303030783009090aull,
0x7830203530363032ull,0x3038373030303063ull,0x6631303532783020ull,0x3030783020643038ull,
0x0a20333030303030ull,0x3030343078300909ull,0x6578302031303831ull,0x2030383763303234ull,
0x3030303030667830ull,0x3030657830203130ull,0x090a203230303030ull,0x6666313638783009ull,
0x3030783020333065ull,0x3020303030303030ull,0x6635306430306478ull,0x3030343078302064ull,
0x09090a2038633730ull,0x3034613030617830ull,0x3030307830203330ull,0x7830203030303030ull,
0x3330303461303031ull,0x3030303030783020ull,0x3009090a20303031ull,0x3030313030303178ull,
0x3030343478302064ull,0x3378302030383763ull,0x2064306532333030ull,0x3730303034657830ull,
0x783009090a203038ull,0x6430363031393064ull,0x3030343430783020ull,0x3033783020303837ull,
0x3020643036303230ull,0x3837303031346378ull,0x32783009090a2030ull,0x2064303830303030ull,
0x3763303034307830ull,0x3030307830203038ull,0x7830203530363032ull,0x3038373030303063ull,
0x3532783009090a20ull,0x3020643038663130ull,0x3030303030303078ull,0x3030343078302033ull,
0x6578302031303831ull,0x2030383763303234ull,0x303066783009090aull,0x7830203130303030ull,
0x3230303030303065ull,0x6666313638783020ull,0x3030783020333065ull,0x0a20303030303030ull,
0x6530306478300909ull,0x3078302064663530ull,0x2038633730303034ull,0x3031623030617830ull,
0x3030307830203330ull,0x090a203030303030ull,0x3162303031783009ull,0x3030783020333030ull,
0x3020303031303030ull,0x3030313030303178ull,0x3030343478302064ull,0x09090a2030383763ull,
0x6532333030337830ull,0x3034657830206430ull,0x7830203038373030ull,0x6430363031393064ull,
0x3030343430783020ull,0x3009090a20303837ull,0x3036303230303378ull,0x3031346378302064ull,
0x3278302030383730ull,0x2064303830303030ull,0x3763303034307830ull,0x783009090a203038ull,
0x3530363032303030ull,0x3030303063783020ull,0x3532783020303837ull,0x3020643038663130ull,
0x3030303030303078ull,0x30783009090a2033ull,0x2031303831303034ull,0x3763303234657830ull,
0x3030667830203038ull,0x7830203130303030ull,0x3230303030303065ull,0x3638783009090a20ull,
0x3020333065666631ull,0x3030303030303078ull,0x6630306478302030ull,0x3078302064663530ull,
0x2038633730303034ull,0x303061783009090aull,0x7830203330306562ull,0x3030303030303030ull,
0x6562303031783020ull,0x3030783020333030ull,0x0a20303031303030ull,0x3030303178300909ull,
0x3478302064303031ull,0x2030383763303034ull,0x6532333030337830ull,0x3034657830206430ull,
0x090a203038373030ull,0x3031393064783009ull,0x3430783020643036ull,0x3020303837303034ull,
0x3036303230303378ull,0x3031346378302064ull,0x09090a2030383730ull,0x3830303030327830ull,
0x3034307830206430ull,0x7830203038376330ull,0x3530363032303030ull,0x3030303063783020ull,
0x3009090a20303837ull,0x3038663130353278ull,0x3030303078302064ull,0x3078302033303030ull,
0x2031303831303034ull,0x3763303234657830ull,0x783009090a203038ull,0x3130303030303066ull,
0x3030303065783020ull,0x3638783020323030ull,0x3020333065666631ull,0x3030303030303078ull,
0x64783009090a2030ull,0x2064663530303130ull,0x3730303034307830ull,0x3030617830203863ull,
0x7830203330306263ull,0x3030303030303030ull,0x3031783009090a20ull,0x3020333030626330ull,
0x3031303030303078ull,0x3030303178302030ull,0x3478302064303031ull,0x2030383763303034ull,
0x303033783009090aull,0x7830206430653233ull,0x3038373030303465ull,0x3031393064783020ull,
0x3430783020643036ull,0x0a20303837303034ull,0x3230303378300909ull,0x6378302064303630ull,
0x2030383730303134ull,0x3830303030327830ull,0x3034307830206430ull,0x090a203038376330ull,
0x3032303030783009ull,0x3063783020353036ull,0x3020303837303030ull,0x3038663130353278ull,
0x3030303078302064ull,0x09090a2033303030ull,0x3831303034307830ull,0x3234657830203130ull,
0x7830203038376330ull,0x3130303030303066ull,0x3030303065783020ull,0x3009090a20323030ull,
0x3065666631363878ull,0x3030303078302033ull,0x6478302030303030ull,0x2064663530313130ull,
0x3730303034307830ull,0x783009090a203863ull,0x3330303864303061ull,0x3030303030783020ull,
0x3031783020303030ull,0x3020333030386430ull,0x3031303030303078ull,0x31783009090a2030ull,
0x2064303031303030ull,0x3763303034347830ull,0x3030337830203038ull,0x7830206430653233ull,
0x3038373030303465ull,0x3064783009090a20ull,0x3020643036303139ull,0x3837303034343078ull,
0x3230303378302030ull,0x6378302064303630ull,0x2030383730303134ull,0x303032783009090aull,
0x7830206430383030ull,0x3038376330303430ull,0x3032303030783020ull,0x3063783020353036ull,
0x0a20303837303030ull,0x3130353278300909ull,0x3078302064303866ull,0x2033303030303030ull,
0x3831303034307830ull,0x3234657830203130ull,0x090a203038376330ull,0x3030303066783009ull,
0x3065783020313030ull,0x3020323030303030ull,0x3065666631363878ull,0x3030303078302033ull,
0x09090a2030303030ull,0x3530323130647830ull,0x3034307830206466ull,0x7830203863373030ull,
0x3330303565303061ull,0x3030303030783020ull,0x3009090a20303030ull,0x3030356530303178ull,
0x3030303078302033ull,0x3178302030303130ull,0x2064303031303030ull,0x3763303034347830ull,
0x783009090a203038ull,0x6430653233303033ull,0x3030303465783020ull,0x3064783020303837ull,
0x3020643036303139ull,0x3837303034343078ull,0x33783009090a2030ull,0x2064303630323030ull,
0x3730303134637830ull,0x3030327830203038ull,0x7830206430383030ull,0x3038376330303430ull,
0x3030783009090a20ull,0x3020353036303230ull,0x3837303030306378ull,0x3130353278302030ull,
0x3078302064303866ull,0x2033303030303030ull,0x303430783009090aull,0x7830203130383130ull,
0x3038376330323465ull,0x3030303066783020ull,0x3065783020313030ull,0x0a20323030303030ull,
0x6631363878300909ull,0x3078302033306566ull,0x2030303030303030ull,0x3530333130647830ull,
0x3034307830206466ull,0x090a203863373030ull,0x3266303061783009ull,0x3030783020333030ull,
0x3020303030303030ull,0x3030326630303178ull,0x3030303078302033ull,0x09090a2030303130ull,
0x3031303030317830ull,0x3034347830206430ull,0x7830203038376330ull,0x6430653233303033ull,
0x3030303465783020ull,0x3009090a20303837ull,0x3036303139306478ull,0x3034343078302064ull,
0x3378302030383730ull,0x2064303630323030ull,0x3730303134637830ull,0x783009090a203038ull,
0x6430383030303032ull,0x6330303430783020ull,0x3030783020303837ull,0x3020353036303230ull,
0x3837303030306378ull,0x32783009090a2030ull,0x2064303866313035ull,0x3030303030307830ull,
0x3034307830203330ull,0x7830203130383130ull,0x3038376330323465ull,0x3066783009090a20ull,
0x3020313030303030ull,0x3030303030306578ull,0x6631363878302032ull,0x3078302033306566ull,
0x2030303030303030ull,0x313064783009090aull,0x7830206466353034ull,0x3863373030303430ull,
0x6666303061783020ull,0x3030783020333030ull,0x0a20303030303030ull,0x6630303178300909ull,
0x3078302033303066ull,0x2030303130303030ull,0x3031303030317830ull,0x3034347830206430ull,
0x090a203038376330ull,0x3233303033783009ull,0x3465783020643065ull,0x3020303837303030ull,
0x3036303139306478ull,0x3034343078302064ull,0x09090a2030383730ull,0x3630323030337830ull,
0x3134637830206430ull,0x7830203038373030ull,0x6430383030303032ull,0x6330303430783020ull,
0x3009090a20303837ull,0x3036303230303078ull,0x3030306378302035ull,0x3278302030383730ull,
0x2064303866313035ull,0x3030303030307830ull,0x783009090a203330ull,0x3130383130303430ull,
0x6330323465783020ull,0x3066783020303837ull,0x3020313030303030ull,0x3030303030306578ull,
0x38783009090a2032ull,0x2033306566663136ull,0x3030303030307830ull,0x3130647830203030ull,
0x7830206466353035ull,0x3863373030303430ull,0x3061783009090a20ull,0x3020333030633031ull,
0x3030303030303078ull,0x3031303178302030ull,0x3078302033303063ull,0x2030303130303030ull,
0x303031783009090aull,0x7830206430303130ull,0x3038376330303434ull,0x3233303033783020ull,
0x3465783020643065ull,0x0a20303837303030ull,0x3139306478300909ull,0x3078302064303630ull,
0x2030383730303434ull,0x3630323030337830ull,0x3134637830206430ull,0x090a203038373030ull,
0x3030303032783009ull,0x3430783020643038ull,0x3020303837633030ull,0x3036303230303078ull,
0x3030306378302035ull,0x09090a2030383730ull,0x3866313035327830ull,0x3030307830206430ull,
0x7830203330303030ull,0x3130383130303430ull,0x6330323465783020ull,0x3009090a20303837ull,
0x3030303030306678ull,0x3030306578302031ull,0x3878302032303030ull,0x2033306566663136ull,
0x3030303030307830ull,0x783009090a203030ull,0x6466353036313064ull,0x3030303430783020ull,
0x3061783020386337ull,0x3020333030393131ull,0x3030303030303078ull,0x31783009090a2030ull,
0x2033303039313130ull,0x3130303030307830ull,0x3030317830203030ull,0x7830203930303130ull,
0x3038376330303434ull,0x3033783009090a20ull,0x3020393065323230ull,0x3837303030346578ull,
0x3139306478302030ull,0x3078302039303430ull,0x2030383730303434ull,0x303033783009090aull,
0x7830203930343032ull,0x3038373030313463ull,0x3030303032783020ull,0x3430783020393038ull,
0x0a20303837383030ull,0x3230303078300909ull,0x6378302035303430ull,0x2030383730303030ull,
0x3866313035327830ull,0x3030307830203930ull,0x090a203330303030ull,0x3130303430783009ull,
0x3465783020313038ull,0x3020303837383032ull,0x3030303030306678ull,0x3030306578302031ull,
0x09090a2032303030ull,0x6566663136387830ull,0x3030307830203330ull,0x7830203030303030ull,
0x3531613830313032ull,0x3030303030783020ull,0x3009090a20333030ull,0x6664303530303378ull,
0x3130343678302064ull,0x3178302038633730ull,0x2033303033343030ull,0x3230303030307830ull,
0x783009090a203038ull,0x3930303032303033ull,0x3030313465783020ull,0x3033783020323837ull,
0x3020646635303139ull,0x6337303134343678ull,0x33783009090a2038ull,0x2033303030303030ull,
0x3230303030307830ull,0x3030337830203038ull,0x7830206430343032ull,0x3038373030313463ull,
0x3064783009090a20ull,0x3020313030303538ull,0x3837303034343078ull,0x3239303678302030ull,
0x3678302035303430ull,0x2030383734303430ull,0x303032783009090aull,0x7830203830303833ull,
0x3030303831303032ull,0x3863303032783020ull,0x3030783020353034ull,0x0a20333030303030ull,
0x3230303378300909ull,0x6378302031303030ull,0x2030383730303134ull,0x3230323030307830ull,
0x3030637830203530ull,0x090a203038373030ull,0x3030303132783009ull,0x3730783020353030ull,
0x3020303837303038ull,0x3030383030363178ull,0x3030343478302031ull,0x09090a2030383763ull,
0x3638303030327830ull,0x3030307830206430ull,0x7830203730303030ull,0x3130323065303064ull,
0x3030633061783020ull,0x3009090a20303837ull,0x6637303339303378ull,0x3034343678302064ull,
0x3278302038633763ull,0x2035303238303030ull,0x3330303030307830ull,0x783009090a203330ull,
0x3330303932313031ull,0x3030303030783020ull,0x3066783020303832ull,0x3020313030303030ull,
0x3030303030306578ull,0x0a7d0a7d090a2031ull,0x0000000000000000ull
};


}



extern "C" {


static const unsigned long long __deviceText_$compute_13$[] = {
0x6f69737265762e09ull,0x2e090a342e31206eull,0x7320746567726174ull,0x2f2f090a33315f6dull,
0x656c69706d6f6320ull,0x2f20687469772064ull,0x61636f6c2f727375ull,0x6f2f616475632f6cull,
0x696c2f34366e6570ull,0x2f090a65622f2f62ull,0x6e65706f766e202full,0x746c697562206363ull,
0x39303032206e6f20ull,0x0a0a39302d34302dull,0x752e206765722e09ull,0x313c617225203233ull,
0x65722e090a3b3e37ull,0x25203436752e2067ull,0x3b3e37313c616472ull,0x2e206765722e090aull,
0x3c61662520323366ull,0x722e090a3b3e3731ull,0x203436662e206765ull,0x3e37313c61646625ull,
0x206765722e090a3bull,0x767225203233752eull,0x722e090a3b3e353cull,0x203436752e206765ull,
0x3b3e353c76647225ull,0x2e206765722e090aull,0x3c76662520323366ull,0x65722e090a3b3e35ull,
0x25203436662e2067ull,0x0a3b3e353c766466ull,0x2d2d2d2f2f090a0aull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x6d6f43202f2f090aull,0x2f20676e696c6970ull,
0x78706d742f706d74ull,0x36303030305f7466ull,0x303030305f366632ull,0x5f36312d30303030ull,
0x656c636974726170ull,0x632e6d6574737953ull,0x2f2820692e337070ull,0x494263632f706d74ull,
0x566e314830752e23ull,0x2d2d2d2f2f090a29ull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2f2f090a0aull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x74704f202f2f090aull,0x2f090a3a736e6f69ull,0x2d2d2d2d2d2d2d2full,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2f2f090a2d2d2d2dull,0x7465677261542020ull,
0x5349202c7874703aull,0x2c33315f6d733a41ull,0x3a6e6169646e4520ull,0x202c656c7474696cull,
0x207265746e696f50ull,0x0a34363a657a6953ull,0x334f2d20202f2f09ull,0x696d6974704f2809ull,
0x6c206e6f6974617aull,0x2f090a296c657665ull,0x280930672d20202full,0x656c206775626544ull,
0x2f2f090a296c6576ull,0x522809326d2d2020ull,0x64612074726f7065ull,0x736569726f736976ull,
0x2d2d2d2f2f090a29ull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x656c69662e090a0aull,0x6d6f633c22093109ull,0x6e696c2d646e616dull,0x69662e090a223e65ull,
0x742f22093209656cull,0x6678706d742f706dull,0x3236303030305f74ull,0x30303030305f3666ull,
0x705f35312d303030ull,0x53656c6369747261ull,0x75632e6d65747379ull,0x70672e3265666164ull,
0x6c69662e090a2275ull,0x7261702209330965ull,0x6b5f73656c636974ull,0x75632e6c656e7265ull,
0x6c69662e090a2268ull,0x6461722209340965ull,0x632e74726f737869ull,0x69662e090a226875ull,
0x752f22093509656cull,0x672f62696c2f7273ull,0x365f3638782f6363ull,0x2d78756e696c2d34ull,
0x2e332e342f756e67ull,0x64756c636e692f33ull,0x6665646474732f65ull,0x69662e090a22682eull,
0x682f22093609656cull,0x6d726f6e2f656d6full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,
0x632f6564756c636eull,0x63697665642f7472ull,0x6d69746e75725f65ull,0x662e090a22682e65ull,
0x2f22093709656c69ull,0x726f6e2f656d6f68ull,0x616475632f6c616dull,0x2f2e2e2f6e69622full,
0x2f6564756c636e69ull,0x6665645f74736f68ull,0x0a22682e73656e69ull,0x3809656c69662e09ull,
0x2f656d6f682f2209ull,0x632f6c616d726f6eull,0x2f6e69622f616475ull,0x756c636e692f2e2eull,
0x746c6975622f6564ull,0x73657079745f6e69ull,0x69662e090a22682eull,0x682f22093909656cull,
0x6d726f6e2f656d6full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,0x642f6564756c636eull,
0x79745f6563697665ull,0x090a22682e736570ull,0x303109656c69662eull,0x2f656d6f682f2209ull,
0x632f6c616d726f6eull,0x2f6e69622f616475ull,0x756c636e692f2e2eull,0x65766972642f6564ull,
0x2e73657079745f72ull,0x6c69662e090a2268ull,0x682f220931310965ull,0x6d726f6e2f656d6full,
0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,0x742f6564756c636eull,0x745f657275747865ull,
0x0a22682e73657079ull,0x3109656c69662e09ull,0x656d6f682f220932ull,0x2f6c616d726f6e2full,
0x6e69622f61647563ull,0x6c636e692f2e2e2full,0x746365762f656475ull,0x73657079745f726full,
0x69662e090a22682eull,0x2f2209333109656cull,0x726f6e2f656d6f68ull,0x616475632f6c616dull,
0x2f2e2e2f6e69622full,0x2f6564756c636e69ull,0x6c5f656369766564ull,0x61705f68636e7561ull,
0x73726574656d6172ull,0x69662e090a22682eull,0x2f2209343109656cull,0x726f6e2f656d6f68ull,
0x616475632f6c616dull,0x2f2e2e2f6e69622full,0x2f6564756c636e69ull,0x726f74732f747263ull,
0x73616c635f656761ull,0x662e090a22682e73ull,0x2209353109656c69ull,0x636e692f7273752full,
0x7469622f6564756cull,0x2e73657079742f73ull,0x6c69662e090a2268ull,0x752f220936310965ull,
0x756c636e692f7273ull,0x2e656d69742f6564ull,0x6c69662e090a2268ull,0x6170220937310965ull,
0x5f73656c63697472ull,0x632e6c656e72656bull,0x6c69662e090a2275ull,0x6172220938310965ull,
0x5f74726f73786964ull,0x632e6c656e72656bull,0x6c69662e090a2275ull,0x682f220939310965ull,
0x6d726f6e2f656d6full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,0x632f6564756c636eull,
0x75665f6e6f6d6d6full,0x2e736e6f6974636eull,0x6c69662e090a2268ull,0x682f220930320965ull,
0x6d726f6e2f656d6full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,0x632f6564756c636eull,
0x5f636e75662f7472ull,0x22682e6f7263616dull,0x09656c69662e090aull,0x6d6f682f22093132ull,
0x6c616d726f6e2f65ull,0x69622f616475632full,0x636e692f2e2e2f6eull,0x74616d2f6564756cull,
0x6974636e75665f68ull,0x090a22682e736e6full,0x323209656c69662eull,0x2f656d6f682f2209ull,
0x632f6c616d726f6eull,0x2f6e69622f616475ull,0x756c636e692f2e2eull,0x63697665642f6564ull,
0x6974636e75665f65ull,0x090a22682e736e6full,0x333209656c69662eull,0x2f656d6f682f2209ull,
0x632f6c616d726f6eull,0x2f6e69622f616475ull,0x756c636e692f2e2eull,0x5f6874616d2f6564ull,
0x746e6174736e6f63ull,0x662e090a22682e73ull,0x2209343209656c69ull,0x6f6e2f656d6f682full,
0x6475632f6c616d72ull,0x2e2e2f6e69622f61ull,0x6564756c636e692full,0x615f31315f6d732full,
0x75665f63696d6f74ull,0x2e736e6f6974636eull,0x6c69662e090a2268ull,0x682f220935320965ull,
0x6d726f6e2f656d6full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,0x732f6564756c636eull,
0x6f74615f32315f6dull,0x636e75665f63696dull,0x22682e736e6f6974ull,0x09656c69662e090aull,
0x6d6f682f22093632ull,0x6c616d726f6e2f65ull,0x69622f616475632full,0x636e692f2e2e2f6eull,
0x5f6d732f6564756cull,0x6c62756f645f3331ull,0x6974636e75665f65ull,0x090a22682e736e6full,
0x373209656c69662eull,0x2f656d6f682f2209ull,0x632f6c616d726f6eull,0x2f6e69622f616475ull,
0x756c636e692f2e2eull,0x75747865742f6564ull,0x68637465665f6572ull,0x6f6974636e75665full,
0x2e090a22682e736eull,0x09383209656c6966ull,0x6e2f656d6f682f22ull,0x75632f6c616d726full,
0x2e2f6e69622f6164ull,0x64756c636e692f2eull,0x665f6874616d2f65ull,0x736e6f6974636e75ull,
0x7874705f6c62645full,0x2e090a0a22682e33ull,0x2e096e7265747865ull,0x2e20646572616873ull,
0x2034206e67696c61ull,0x646152732038622eull,0x3b5d5b6d75537869ull,0x2e207865742e090aull,
0x50646c6f20343675ull,0x090a3b786554736full,0x36752e207865742eull,0x6c6556646c6f2034ull,
0x742e090a3b786554ull,0x203436752e207865ull,0x656c636974726170ull,0x3b78655468736148ull,
0x2e207865742e090aull,0x6c6c656320343675ull,0x7865547472617453ull,0x207865742e090a3bull,
0x697267203436752eull,0x7265746e756f4364ull,0x2e090a3b78655473ull,0x3436752e20786574ull,
0x6c65436469726720ull,0x090a3b786554736cull,0x2e2074736e6f632eull,0x3631206e67696c61ull,
0x7261702038622e20ull,0x5d3231315b736d61ull,0x626f6c672e090a3bull,0x67696c612e206c61ull,
0x2038622e2034206eull,0x7553786964615264ull,0x3830363639315b6dull,0x6f6c672e090a3b5dull,
0x696c612e206c6162ull,0x38622e2034206e67ull,0x4278696461526420ull,0x5b6d75536b636f6cull,
0x2e090a0a3b5d3436ull,0x5a5f207972746e65ull,0x61726765746e6939ull,0x616f6c6636506574ull,
0x5f30535f30533474ull,0x090a2820665f3053ull,0x206d617261702e09ull,0x635f5f203436752eull,
0x5f6d726170616475ull,0x6765746e69395a5full,0x6c66365065746172ull,0x535f30533474616full,
0x6e5f665f30535f30ull,0x090a2c736f507765ull,0x206d617261702e09ull,0x635f5f203436752eull,
0x5f6d726170616475ull,0x6765746e69395a5full,0x6c66365065746172ull,0x535f30533474616full,
0x6e5f665f30535f30ull,0x090a2c6c65567765ull,0x206d617261702e09ull,0x635f5f203436752eull,
0x5f6d726170616475ull,0x6765746e69395a5full,0x6c66365065746172ull,0x535f30533474616full,
0x6f5f665f30535f30ull,0x090a2c736f50646cull,0x206d617261702e09ull,0x635f5f203436752eull,
0x5f6d726170616475ull,0x6765746e69395a5full,0x6c66365065746172ull,0x535f30533474616full,
0x6f5f665f30535f30ull,0x090a2c6c6556646cull,0x206d617261702e09ull,0x635f5f203233662eull,
0x5f6d726170616475ull,0x6765746e69395a5full,0x6c66365065746172ull,0x535f30533474616full,
0x645f665f30535f30ull,0x656d695461746c65ull,0x722e090a7b090a29ull,0x203233752e206765ull,
0x090a3b3e373c7225ull,0x36752e206765722eull,0x32313c6472252034ull,0x6765722e090a3b3eull,
0x6625203233662e20ull,0x2e090a3b3e37343cull,0x6572702e20676572ull,0x3b3e383c70252064ull,
0x3109636f6c2e090aull,0x240a300931360937ull,0x395a5f5f3142424cull,0x7461726765746e69ull,
0x74616f6c66365065ull,0x535f30535f305334ull,0x6c2e090a3a665f30ull,0x353609373109636full,
0x2e747663090a3009ull,0x203631752e323373ull,0x6325202c31722509ull,0x203b782e64696174ull,
0x090a202f2f092020ull,0x2e3233732e747663ull,0x3272250920363175ull,0x2e6469746e25202cull,
0x2f09202020203b78ull,0x326c756d090a202full,0x3233732e6f6c2e34ull,0x25202c3372250920ull,
0x3b327225202c3172ull,0x090a202f2f092020ull,0x2e3233752e747663ull,0x3472250920363175ull,
0x782e64697425202cull,0x2f0920202020203bull,0x2e646461090a202full,0x3572250920323375ull,
0x25202c337225202cull,0x20202020203b3472ull,0x090a202f2f092020ull,0x2e3436752e747663ull,
0x6472250920323373ull,0x203b357225202c31ull,0x2f09202020202020ull,0x2e6c756d090a202full,
0x09203436752e6f6cull,0x7225202c32647225ull,0x203b3631202c3164ull,0x090a202f2f092020ull,
0x6d617261702e646cull,0x722509203436752eull,0x635f5f5b202c3364ull,0x5f6d726170616475ull,
0x6765746e69395a5full,0x6c66365065746172ull,0x535f30533474616full,0x6f5f665f30535f30ull,
0x093b5d736f50646cull,0x36313a6469202f2full,0x616475635f5f2034ull,0x395a5f5f6d726170ull,
0x7461726765746e69ull,0x74616f6c66365065ull,0x535f30535f305334ull,0x50646c6f5f665f30ull,
0x090a3078302b736full,0x203436752e646461ull,0x25202c3464722509ull,0x647225202c336472ull,
0x2f09202020203b32ull,0x672e646c090a202full,0x34762e6c61626f6cull,0x257b09203233662eull,
0x252c3266252c3166ull,0x2c7d3466252c3366ull,0x302b346472255b20ull,0x090a202f2f093b5dull,
0x09373109636f6c2eull,0x646c090a30093636ull,0x752e6d617261702eull,0x3564722509203436ull,
0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x61726765746e6939ull,0x616f6c6636506574ull,
0x5f30535f30533474ull,0x646c6f5f665f3053ull,0x2f2f093b5d6c6556ull,0x203936313a646920ull,
0x6170616475635f5full,0x6e69395a5f5f6d72ull,0x5065746172676574ull,0x533474616f6c6636ull,
0x5f30535f30535f30ull,0x6c6556646c6f5f66ull,0x6461090a3078302bull,0x2509203436752e64ull,
0x647225202c366472ull,0x3b32647225202c35ull,0x202f2f0920202020ull,0x6f6c672e646c090aull,
0x662e34762e6c6162ull,0x3566257b09203233ull,0x3766252c3666252cull,0x5b202c7d3866252cull,
0x3b5d302b36647225ull,0x6c2e090a202f2f09ull,0x313709373109636full,0x702e646c090a3009ull,
0x3233662e6d617261ull,0x5b202c3966250920ull,0x6170616475635f5full,0x6e69395a5f5f6d72ull,
0x5065746172676574ull,0x533474616f6c6636ull,0x5f30535f30535f30ull,0x5461746c65645f66ull,
0x2f2f093b5d656d69ull,0x203036313a646920ull,0x6170616475635f5full,0x6e69395a5f5f6d72ull,
0x5065746172676574ull,0x533474616f6c6636ull,0x5f30535f30535f30ull,0x5461746c65645f66ull,
0x0a3078302b656d69ull,0x736e6f632e646c09ull,0x2509203233662e74ull,0x61705b202c303166ull,
0x5d30322b736d6172ull,0x3a6469202f2f093bull,0x6172617020343731ull,0x0a343178302b736dull,
0x3233662e6c756d09ull,0x202c313166250920ull,0x6625202c30316625ull,0x0920202020203b39ull,
0x646461090a202f2full,0x662509203233662eull,0x31316625202c3231ull,0x20203b356625202cull,
0x0a202f2f09202020ull,0x736e6f632e646c09ull,0x2509203233662e74ull,0x61705b202c333166ull,
0x5d32332b736d6172ull,0x3a6469202f2f093bull,0x6172617020393531ull,0x0a303278302b736dull,
0x3233662e6c756d09ull,0x202c343166250920ull,0x6625202c32316625ull,0x09202020203b3331ull,
0x766f6d090a202f2full,0x662509203233662eull,0x34316625202c3531ull,0x202020202020203bull,
0x0a202f2f09202020ull,0x736e6f632e646c09ull,0x2509203233662e74ull,0x61705b202c363166ull,
0x5d34322b736d6172ull,0x3a6469202f2f093bull,0x6172617020353731ull,0x0a383178302b736dull,
0x3233662e6c756d09ull,0x202c373166250920ull,0x6625202c36316625ull,0x0920202020203b39ull,
0x646461090a202f2full,0x662509203233662eull,0x37316625202c3831ull,0x20203b366625202cull,
0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c393166250920ull,0x6625202c38316625ull,
0x09202020203b3331ull,0x766f6d090a202f2full,0x662509203233662eull,0x39316625202c3032ull,
0x202020202020203bull,0x0a202f2f09202020ull,0x736e6f632e646c09ull,0x2509203233662e74ull,
0x61705b202c313266ull,0x5d38322b736d6172ull,0x3a6469202f2f093bull,0x6172617020363731ull,
0x0a633178302b736dull,0x3233662e6c756d09ull,0x202c323266250920ull,0x6625202c31326625ull,
0x0920202020203b39ull,0x646461090a202f2full,0x662509203233662eull,0x32326625202c3332ull,
0x20203b376625202cull,0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c343266250920ull,
0x6625202c33326625ull,0x09202020203b3331ull,0x766f6d090a202f2full,0x662509203233662eull,
0x34326625202c3532ull,0x202020202020203bull,0x0a202f2f09202020ull,0x373109636f6c2e09ull,
0x6d090a3009343709ull,0x09203233662e6c75ull,0x6625202c36326625ull,0x3b396625202c3431ull,
0x2f2f092020202020ull,0x662e646461090a20ull,0x3732662509203233ull,0x202c36326625202cull,
0x202020203b316625ull,0x6d090a202f2f0920ull,0x09203233662e766full,0x6625202c38326625ull,
0x20202020203b3732ull,0x2f2f092020202020ull,0x662e6c756d090a20ull,0x3932662509203233ull,
0x202c39316625202cull,0x202020203b396625ull,0x61090a202f2f0920ull,0x09203233662e6464ull,
0x6625202c30336625ull,0x3b326625202c3932ull,0x2f2f092020202020ull,0x662e766f6d090a20ull,
0x3133662509203233ull,0x203b30336625202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,
0x09203233662e6c75ull,0x6625202c32336625ull,0x3b396625202c3432ull,0x2f2f092020202020ull,
0x662e646461090a20ull,0x3333662509203233ull,0x202c32336625202cull,0x202020203b336625ull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x6625202c34336625ull,0x20202020203b3333ull,
0x2f2f092020202020ull,0x6f632e646c090a20ull,0x203233662e74736eull,0x5b202c3533662509ull,
0x332b736d61726170ull,0x69202f2f093b5d36ull,0x6170203835313a64ull,0x3278302b736d6172ull,
0x662e766f6d090a34ull,0x3633662509203233ull,0x303866336630202cull,0x2020203b30303030ull,
0x090a31202f2f0920ull,0x203233662e627573ull,0x25202c3733662509ull,0x336625202c363366ull,
0x2f09202020203b35ull,0x70746573090a202full,0x203233662e746c2eull,0x6625202c31702509ull,
0x37326625202c3733ull,0x090a202f2f09203bull,0x7262203170252140ull,0x305f744c24092061ull,
0x20203b363638345full,0x2f09202020202020ull,0x636f6c2e090a202full,0x3009373709373109ull,
0x33662e766f6d090aull,0x2c38326625092032ull,0x20203b3733662520ull,0x2020202020202020ull,
0x646c090a202f2f09ull,0x662e74736e6f632eull,0x3833662509203233ull,0x6d617261705b202cull,
0x093b5d3430312b73ull,0x37313a6469202f2full,0x736d617261702037ull,0x6d090a383678302bull,
0x09203233662e6c75ull,0x6625202c35316625ull,0x34316625202c3833ull,0x2f2f09202020203bull,
0x5f305f744c240a20ull,0x6d090a3a36363834ull,0x09203233662e766full,0x6630202c39336625ull,
0x3030303030386662ull,0x2f2f09202020203bull,0x646461090a312d20ull,0x662509203233662eull,
0x35336625202c3034ull,0x203b39336625202cull,0x0a202f2f09202020ull,0x74672e7074657309ull,
0x702509203233662eull,0x2c30346625202c32ull,0x09203b3832662520ull,0x252140090a202f2full,
0x0920617262203270ull,0x33355f305f744c24ull,0x20202020203b3837ull,0x0a202f2f09202020ull,
0x373109636f6c2e09ull,0x6d090a3009383709ull,0x09203233662e766full,0x6625202c38326625ull,
0x20202020203b3034ull,0x2f2f092020202020ull,0x6f632e646c090a20ull,0x203233662e74736eull,
0x5b202c3134662509ull,0x312b736d61726170ull,0x202f2f093b5d3430ull,0x70203737313a6469ull,
0x78302b736d617261ull,0x2e6c756d090a3836ull,0x3166250920323366ull,0x2c31346625202c35ull,
0x20203b3531662520ull,0x240a202f2f092020ull,0x3733355f305f744cull,0x70746573090a3a38ull,
0x203233662e746c2eull,0x6625202c33702509ull,0x30336625202c3733ull,0x090a202f2f09203bull,
0x7262203370252140ull,0x305f744c24092061ull,0x20203b303938355full,0x2f09202020202020ull,
0x636f6c2e090a202full,0x3009393709373109ull,0x33662e766f6d090aull,0x2c31336625092032ull,
0x20203b3733662520ull,0x2020202020202020ull,0x646c090a202f2f09ull,0x662e74736e6f632eull,
0x3234662509203233ull,0x6d617261705b202cull,0x093b5d3430312b73ull,0x37313a6469202f2full,
0x736d617261702037ull,0x6d090a383678302bull,0x09203233662e6c75ull,0x6625202c30326625ull,
0x39316625202c3234ull,0x2f2f09202020203bull,0x5f305f744c240a20ull,0x73090a3a30393835ull,
0x662e74672e707465ull,0x2c34702509203233ull,0x25202c3034662520ull,0x2f2f09203b313366ull,
0x3470252140090a20ull,0x4c24092061726220ull,0x323034365f305f74ull,0x202020202020203bull,
0x2e090a202f2f0920ull,0x3809373109636f6cull,0x766f6d090a300930ull,0x662509203233662eull,
0x30346625202c3133ull,0x202020202020203bull,0x0a202f2f09202020ull,0x736e6f632e646c09ull,
0x2509203233662e74ull,0x61705b202c333466ull,0x3430312b736d6172ull,0x6469202f2f093b5dull,
0x726170203737313aull,0x383678302b736d61ull,0x33662e6c756d090aull,0x2c30326625092032ull,
0x25202c3334662520ull,0x202020203b303266ull,0x744c240a202f2f09ull,0x3a323034365f305full,
0x6c2e70746573090aull,0x2509203233662e74ull,0x37336625202c3570ull,0x203b33336625202cull,
0x2140090a202f2f09ull,0x2061726220357025ull,0x365f305f744c2409ull,0x202020203b343139ull,
0x202f2f0920202020ull,0x3109636f6c2e090aull,0x090a300931380937ull,0x203233662e766f6dull,
0x25202c3433662509ull,0x202020203b373366ull,0x2f09202020202020ull,0x632e646c090a202full,
0x3233662e74736e6full,0x202c343466250920ull,0x2b736d617261705bull,0x2f2f093b5d343031ull,
0x203737313a646920ull,0x302b736d61726170ull,0x6c756d090a383678ull,0x662509203233662eull,
0x34346625202c3532ull,0x203b34326625202cull,0x0a202f2f09202020ull,0x39365f305f744c24ull,
0x746573090a3a3431ull,0x3233662e74672e70ull,0x25202c3670250920ull,0x336625202c303466ull,
0x0a202f2f09203b34ull,0x6220367025214009ull,0x5f744c2409206172ull,0x203b363234375f30ull,
0x0920202020202020ull,0x6f6c2e090a202f2full,0x0932380937310963ull,0x662e766f6d090a30ull,
0x3433662509203233ull,0x203b30346625202cull,0x2020202020202020ull,0x6c090a202f2f0920ull,
0x2e74736e6f632e64ull,0x3466250920323366ull,0x617261705b202c35ull,0x3b5d3430312b736dull,
0x313a6469202f2f09ull,0x6d61726170203737ull,0x090a383678302b73ull,0x203233662e6c756dull,
0x25202c3532662509ull,0x326625202c353466ull,0x2f09202020203b35ull,0x305f744c240a202full,
0x090a3a363234375full,0x09373109636f6c2eull,0x646c090a30093538ull,0x752e6d617261702eull,
0x3764722509203436ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x61726765746e6939ull,
0x616f6c6636506574ull,0x5f30535f30533474ull,0x77656e5f665f3053ull,0x2f2f093b5d736f50ull,
0x203837313a646920ull,0x6170616475635f5full,0x6e69395a5f5f6d72ull,0x5065746172676574ull,
0x533474616f6c6636ull,0x5f30535f30535f30ull,0x736f5077656e5f66ull,0x6461090a3078302bull,
0x2509203436752e64ull,0x647225202c386472ull,0x3b32647225202c37ull,0x202f2f0920202020ull,
0x6f6c672e7473090aull,0x662e34762e6c6162ull,0x6472255b09203233ull,0x257b202c5d302b38ull,
0x313366252c383266ull,0x66252c343366252cull,0x0a202f2f093b7d34ull,0x373109636f6c2e09ull,
0x6c090a3009363809ull,0x2e6d617261702e64ull,0x6472250920343675ull,0x75635f5f5b202c39ull,
0x5f5f6d7261706164ull,0x726765746e69395aull,0x6f6c663650657461ull,0x30535f3053347461ull,
0x656e5f665f30535full,0x2f093b5d6c655677ull,0x3338313a6469202full,0x70616475635f5f20ull,
0x69395a5f5f6d7261ull,0x657461726765746eull,0x3474616f6c663650ull,0x30535f30535f3053ull,
0x655677656e5f665full,0x61090a3078302b6cull,0x09203436752e6464ull,0x25202c3031647225ull,
0x647225202c396472ull,0x2f2f092020203b32ull,0x6c672e7473090a20ull,0x2e34762e6c61626full,
0x72255b0920323366ull,0x202c5d302b303164ull,0x66252c353166257bull,0x2c353266252c3032ull,
0x2f2f093b7d386625ull,0x09636f6c2e090a20ull,0x0a30093738093731ull,0x20203b7469786509ull,
0x2020202020202020ull,0x2020202020202020ull,0x0920202020202020ull,0x57444c240a202f2full,
0x69395a5f5f646e65ull,0x657461726765746eull,0x3474616f6c663650ull,0x30535f30535f3053ull,
0x2f207d090a3a665full,0x746e69395a5f202full,0x3650657461726765ull,0x30533474616f6c66ull,
0x665f30535f30535full,0x72746e652e090a0aull,0x707531315a5f2079ull,0x6469724765746164ull,
0x74616f6c66365044ull,0x28205f31536a5034ull,0x617261702e09090aull,0x5f203436752e206dull,
0x726170616475635full,0x707531315a5f5f6dull,0x6469724765746164ull,0x74616f6c66365044ull,
0x705f5f31536a5034ull,0x702e09090a2c736full,0x36752e206d617261ull,0x616475635f5f2034ull,
0x315a5f5f6d726170ull,0x4765746164707531ull,0x6c66365044646972ull,0x31536a503474616full,
0x6f43646972675f5full,0x0a2c737265746e75ull,0x6d617261702e0909ull,0x5f5f203436752e20ull,
0x6d72617061647563ull,0x64707531315a5f5full,0x4464697247657461ull,0x3474616f6c663650ull,
0x72675f5f31536a50ull,0x29736c6c65436469ull,0x65722e090a7b090aull,0x25203233752e2067ull,
0x090a3b3e31333c72ull,0x36752e206765722eull,0x34313c6472252034ull,0x6765722e090a3b3eull,
0x6625203233662e20ull,0x2e090a3b3e31333cull,0x6572702e20676572ull,0x3b3e353c70252064ull,
0x3109636f6c2e090aull,0x0a30093433310937ull,0x5a5f5f3142424c24ull,0x6574616470753131ull,
0x6636504464697247ull,0x536a503474616f6cull,0x6f6c2e090a3a5f31ull,0x3936340932320963ull,
0x747663090a300934ull,0x3631752e3233732eull,0x25202c3172250920ull,0x3b782e6469617463ull,
0x0a202f2f09202020ull,0x3233732e74766309ull,0x722509203631752eull,0x6469746e25202c32ull,
0x09202020203b782eull,0x6c756d090a202f2full,0x33732e6f6c2e3432ull,0x202c337225092032ull,
0x327225202c317225ull,0x0a202f2f0920203bull,0x3233752e74766309ull,0x722509203631752eull,
0x2e64697425202c34ull,0x0920202020203b78ull,0x646461090a202f2full,0x722509203233752eull,
0x202c337225202c35ull,0x202020203b347225ull,0x0a202f2f09202020ull,0x617261702e646c09ull,
0x2509203436752e6dull,0x5f5f5b202c316472ull,0x6d72617061647563ull,0x64707531315a5f5full,
0x4464697247657461ull,0x3474616f6c663650ull,0x6f705f5f31536a50ull,0x69202f2f093b5d73ull,
0x635f5f2035393a64ull,0x5f6d726170616475ull,0x6164707531315a5full,0x5044646972476574ull,
0x503474616f6c6636ull,0x736f705f5f31536aull,0x7663090a3078302bull,0x33732e3436752e74ull,
0x2c32647225092032ull,0x2020203b35722520ull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,
0x722509203436752eull,0x32647225202c3364ull,0x2020203b3631202cull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x647225202c346472ull,0x3b33647225202c31ull,0x202f2f0920202020ull,
0x6f6c672e646c090aull,0x203233662e6c6162ull,0x255b202c31662509ull,0x203b5d302b346472ull,
0x393a6469202f2f09ull,0x6f632e646c090a36ull,0x203233662e74736eull,0x705b202c32662509ull,
0x36352b736d617261ull,0x6469202f2f093b5dull,0x617261702037393aull,0x0a383378302b736dull,
0x3233662e62757309ull,0x25202c3366250920ull,0x3b326625202c3166ull,0x0920202020202020ull,
0x2e646c090a202f2full,0x33662e74736e6f63ull,0x202c346625092032ull,0x2b736d617261705bull,
0x202f2f093b5d3836ull,0x61702038393a6469ull,0x3478302b736d6172ull,0x662e766f6d090a34ull,
0x2c35662509203233ull,0x2020203b34662520ull,0x2020202020202020ull,0x2e090a202f2f0920ull,
0x3409323209636f6cull,0x61090a3009363136ull,0x09203233662e7362ull,0x346625202c366625ull,
0x202020202020203bull,0x2f2f092020202020ull,0x662e766f6d090a20ull,0x2c37662509203233ull,
0x3030386537663020ull,0x202020203b303030ull,0x352e38202f2f0920ull,0x37332b6536303730ull,
0x672e70746573090aull,0x2509203233662e74ull,0x2c366625202c3170ull,0x2020203b37662520ull,
0x2140090a202f2f09ull,0x2061726220317025ull,0x325f315f744c2409ull,0x202020203b323635ull,
0x202f2f0920202020ull,0x3209636f6c2e090aull,0x3009373136340932ull,0x33662e766f6d090aull,
0x202c386625092032ull,0x3030303865336630ull,0x20202020203b3030ull,0x35322e30202f2f09ull,
0x33662e6c756d090aull,0x202c336625092032ull,0x386625202c336625ull,0x202020202020203bull,
0x6c2e090a202f2f09ull,0x363409323209636full,0x6f6d090a30093831ull,0x2509203233662e76ull,
0x65336630202c3966ull,0x203b303030303038ull,0x202f2f0920202020ull,0x756d090a35322e30ull,
0x2509203233662e6cull,0x2c346625202c3566ull,0x2020203b39662520ull,0x202f2f0920202020ull,
0x325f315f744c240aull,0x6c2e090a3a323635ull,0x333909373109636full,0x2e766964090a3009ull,
0x662e786f72707061ull,0x3031662509203233ull,0x25202c336625202cull,0x0a202f2f093b3566ull,
0x696d722e74766309ull,0x3233662e3233662eull,0x202c313166250920ull,0x0920203b30316625ull,
0x747663090a202f2full,0x3233732e697a722eull,0x722509203233662eull,0x3b31316625202c36ull,
0x0a202f2f09202020ull,0x323209636f6c2e09ull,0x0a30093439363409ull,0x626f6c672e646c09ull,
0x09203233662e6c61ull,0x255b202c32316625ull,0x093b5d342b346472ull,0x39393a6469202f2full,
0x6e6f632e646c090aull,0x09203233662e7473ull,0x705b202c33316625ull,0x30362b736d617261ull,
0x6469202f2f093b5dull,0x726170203030313aull,0x633378302b736d61ull,0x33662e627573090aull,
0x202c336625092032ull,0x6625202c32316625ull,0x20202020203b3331ull,0x646c090a202f2f09ull,
0x662e74736e6f632eull,0x3431662509203233ull,0x6d617261705b202cull,0x2f093b5d32372b73ull,
0x3130313a6469202full,0x2b736d6172617020ull,0x6f6d090a38347830ull,0x2509203233662e76ull,
0x34316625202c3566ull,0x202020202020203bull,0x202f2f0920202020ull,0x3209636f6c2e090aull,
0x3009363136340932ull,0x33662e736261090aull,0x2c35316625092032ull,0x20203b3431662520ull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x376630202c363166ull,
0x3b30303030303865ull,0x202f2f0920202020ull,0x6536303730352e38ull,0x746573090a37332bull,
0x3233662e74672e70ull,0x25202c3270250920ull,0x316625202c353166ull,0x0a202f2f09203b36ull,
0x6220327025214009ull,0x5f744c2409206172ull,0x203b343730335f31ull,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3136340932320963ull,0x766f6d090a300937ull,0x662509203233662eull,
0x65336630202c3731ull,0x203b303030303038ull,0x30202f2f09202020ull,0x6c756d090a35322eull,
0x662509203233662eull,0x202c336625202c33ull,0x2020203b37316625ull,0x0a202f2f09202020ull,
0x323209636f6c2e09ull,0x0a30093831363409ull,0x3233662e766f6d09ull,0x202c383166250920ull,
0x3030303865336630ull,0x09202020203b3030ull,0x0a35322e30202f2full,0x3233662e6c756d09ull,
0x25202c3566250920ull,0x316625202c343166ull,0x0920202020203b38ull,0x5f744c240a202f2full,
0x0a3a343730335f31ull,0x373109636f6c2e09ull,0x64090a3009343909ull,0x6f727070612e7669ull,
0x2509203233662e78ull,0x336625202c393166ull,0x2f093b356625202cull,0x2e747663090a202full,
0x2e3233662e696d72ull,0x3266250920323366ull,0x3b39316625202c30ull,0x090a202f2f092020ull,
0x2e697a722e747663ull,0x203233662e323373ull,0x6625202c37722509ull,0x2f092020203b3032ull,
0x636f6c2e090a202full,0x3439363409323209ull,0x672e646c090a3009ull,0x33662e6c61626f6cull,
0x2c31326625092032ull,0x382b346472255b20ull,0x6469202f2f093b5dull,0x646c090a3230313aull,
0x662e74736e6f632eull,0x3232662509203233ull,0x6d617261705b202cull,0x2f093b5d34362b73ull,
0x3330313a6469202full,0x2b736d6172617020ull,0x7573090a30347830ull,0x2509203233662e62ull,
0x31326625202c3366ull,0x203b32326625202cull,0x202f2f0920202020ull,0x6e6f632e646c090aull,
0x09203233662e7473ull,0x705b202c33326625ull,0x36372b736d617261ull,0x6469202f2f093b5dull,
0x726170203430313aull,0x633478302b736d61ull,0x33662e766f6d090aull,0x202c356625092032ull,
0x2020203b33326625ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,0x363409323209636full,
0x6261090a30093631ull,0x2509203233662e73ull,0x326625202c343266ull,0x2020202020203b33ull,
0x202f2f0920202020ull,0x33662e766f6d090aull,0x2c35326625092032ull,0x3030386537663020ull,
0x202020203b303030ull,0x30352e38202f2f09ull,0x0a37332b65363037ull,0x74672e7074657309ull,
0x702509203233662eull,0x2c34326625202c33ull,0x09203b3532662520ull,0x252140090a202f2full,
0x0920617262203370ull,0x35335f315f744c24ull,0x20202020203b3638ull,0x0a202f2f09202020ull,
0x323209636f6c2e09ull,0x0a30093731363409ull,0x3233662e766f6d09ull,0x202c363266250920ull,
0x3030303865336630ull,0x09202020203b3030ull,0x0a35322e30202f2full,0x3233662e6c756d09ull,
0x25202c3366250920ull,0x36326625202c3366ull,0x092020202020203bull,0x6f6c2e090a202f2full,
0x3136340932320963ull,0x766f6d090a300938ull,0x662509203233662eull,0x65336630202c3732ull,
0x203b303030303038ull,0x30202f2f09202020ull,0x6c756d090a35322eull,0x662509203233662eull,
0x2c33326625202c35ull,0x20203b3732662520ull,0x0a202f2f09202020ull,0x35335f315f744c24ull,
0x6f6c2e090a3a3638ull,0x3132310937310963ull,0x2e766964090a3009ull,0x662e786f72707061ull,
0x3832662509203233ull,0x25202c336625202cull,0x0a202f2f093b3566ull,0x736e6f632e646c09ull,
0x2509203233752e74ull,0x7261705b202c3872ull,0x3b5d34342b736d61ull,0x393a6469202f2f09ull,
0x736d617261702031ull,0x73090a633278302bull,0x09203233752e6275ull,0x387225202c397225ull,
0x202020203b31202cull,0x2f2f092020202020ull,0x6f632e646c090a20ull,0x203233752e74736eull,
0x5b202c3031722509ull,0x342b736d61726170ull,0x69202f2f093b5d38ull,0x6170203530313a64ull,
0x3378302b736d6172ull,0x752e627573090a30ull,0x3131722509203233ull,0x202c30317225202cull,
0x2020202020203b31ull,0x6c090a202f2f0920ull,0x2e74736e6f632e64ull,0x3172250920323375ull,
0x617261705b202c32ull,0x093b5d30342b736dull,0x30393a6469202f2full,0x2b736d6172617020ull,
0x7573090a38327830ull,0x2509203233752e62ull,0x317225202c333172ull,0x2020203b31202c32ull,
0x202f2f0920202020ull,0x6d722e747663090aull,0x33662e3233662e69ull,0x2c39326625092032ull,
0x20203b3832662520ull,0x696d090a202f2f09ull,0x2509203233752e6eull,0x377225202c343172ull,
0x20203b397225202cull,0x202f2f0920202020ull,0x33752e6e696d090aull,0x2c35317225092032ull,
0x7225202c36722520ull,0x20202020203b3331ull,0x7663090a202f2f09ull,0x33732e697a722e74ull,
0x2509203233662e32ull,0x326625202c363172ull,0x202f2f0920203b39ull,0x2e34326c756d090aull,
0x09203233732e6f6cull,0x7225202c37317225ull,0x32317225202c3431ull,0x6d090a202f2f093bull,
0x09203233752e6e69ull,0x7225202c38317225ull,0x31317225202c3631ull,0x2f2f09202020203bull,
0x34326c756d090a20ull,0x203233732e6f6c2eull,0x25202c3931722509ull,0x387225202c383172ull,
0x6d090a202f2f093bull,0x2e6f6c2e34326c75ull,0x3272250920323373ull,0x2c39317225202c30ull,
0x2f093b3231722520ull,0x2e646461090a202full,0x3272250920323373ull,0x2c37317225202c31ull,
0x20203b3032722520ull,0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3232722509ull,
0x317225202c313272ull,0x2f09202020203b35ull,0x702e646c090a202full,0x3436752e6d617261ull,
0x202c356472250920ull,0x70616475635f5f5bull,0x31315a5f5f6d7261ull,0x7247657461647075ull,
0x6f6c663650446469ull,0x5f31536a50347461ull,0x756f43646972675full,0x093b5d737265746eull,
0x30313a6469202f2full,0x616475635f5f2036ull,0x315a5f5f6d726170ull,0x4765746164707531ull,
0x6c66365044646972ull,0x31536a503474616full,0x6f43646972675f5full,0x302b737265746e75ull,
0x2e747663090a3078ull,0x203233752e343675ull,0x25202c3664722509ull,0x202020203b323272ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3764722509203436ull,0x202c36647225202cull,
0x2f09202020203b34ull,0x2e646461090a202full,0x6472250920343675ull,0x2c35647225202c38ull,
0x20203b3764722520ull,0x090a202f2f092020ull,0x203233752e766f6dull,0x31202c3332722509ull,
0x202020202020203bull,0x2f09202020202020ull,0x6d6f7461090a202full,0x2e6c61626f6c672eull,
0x203233752e646461ull,0x5b202c3176722509ull,0x25202c5d38647225ull,0x202f2f093b333272ull,
0x33732e766f6d090aull,0x2c34327225092032ull,0x20203b3176722520ull,0x2020202020202020ull,
0x6c2e090a202f2f09ull,0x323109373109636full,0x2e646c090a300936ull,0x33752e74736e6f63ull,
0x2c35327225092032ull,0x736d617261705b20ull,0x2f2f093b5d34382bull,0x702039383a646920ull,
0x78302b736d617261ull,0x702e646c090a3435ull,0x3436752e6d617261ull,0x202c396472250920ull,
0x70616475635f5f5bull,0x31315a5f5f6d7261ull,0x7247657461647075ull,0x6f6c663650446469ull,
0x5f31536a50347461ull,0x6c6543646972675full,0x202f2f093b5d736cull,0x5f203730313a6469ull,
0x726170616475635full,0x707531315a5f5f6dull,0x6469724765746164ull,0x74616f6c66365044ull,
0x675f5f31536a5034ull,0x736c6c6543646972ull,0x7573090a3078302bull,0x2509203233752e62ull,
0x327225202c363272ull,0x2020203b31202c35ull,0x202f2f0920202020ull,0x33752e6e696d090aull,
0x2c37327225092032ull,0x25202c3432722520ull,0x202020203b363272ull,0x756d090a202f2f09ull,
0x3233752e6f6c2e6cull,0x202c383272250920ull,0x7225202c32327225ull,0x202f2f09203b3532ull,
0x33752e646461090aull,0x2c39327225092032ull,0x25202c3732722520ull,0x202020203b383272ull,
0x7663090a202f2f09ull,0x33752e3436752e74ull,0x3031647225092032ull,0x203b39327225202cull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c313164ull,
0x20203b34202c3031ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c32316472ull,
0x31647225202c3964ull,0x202f2f0920203b31ull,0x6f6c672e7473090aull,0x203233752e6c6162ull,
0x2b32316472255b09ull,0x3b357225202c5d30ull,0x313a6469202f2f09ull,0x636f6c2e090a3830ull,
0x0933343109373109ull,0x3b74697865090a30ull,0x2020202020202020ull,0x2020202020202020ull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x5a5f5f646e655744ull,0x6574616470753131ull,
0x6636504464697247ull,0x536a503474616f6cull,0x2f207d090a3a5f31ull,0x707531315a5f202full,
0x6469724765746164ull,0x74616f6c66365044ull,0x0a0a5f31536a5034ull,0x207972746e652e09ull,
0x48636c6163395a5full,0x6c66365044687361ull,0x697535503474616full,0x09090a282032746eull,
0x2e206d617261702eull,0x75635f5f20343675ull,0x5f5f6d7261706164ull,0x6148636c6163395aull,
0x6f6c663650446873ull,0x6e69753550347461ull,0x0a2c736f705f3274ull,0x6d617261702e0909ull,
0x5f5f203436752e20ull,0x6d72617061647563ull,0x636c6163395a5f5full,0x6636504468736148ull,
0x7535503474616f6cull,0x7261705f32746e69ull,0x736148656c636974ull,0x2e090a7b090a2968ull,
0x3233752e20676572ull,0x3b3e34323c722520ull,0x2e206765722e090aull,0x3c64722520343675ull,
0x65722e090a3b3e39ull,0x25203233662e2067ull,0x090a3b3e31333c66ull,0x72702e206765722eull,
0x3e353c7025206465ull,0x09636f6c2e090a3bull,0x3009383431093731ull,0x5f5f3142424c240aull,
0x6148636c6163395aull,0x6f6c663650446873ull,0x6e69753550347461ull,0x6f6c2e090a3a3274ull,
0x3936340932320963ull,0x747663090a300934ull,0x3631752e3233732eull,0x25202c3172250920ull,
0x3b782e6469617463ull,0x0a202f2f09202020ull,0x3233732e74766309ull,0x722509203631752eull,
0x6469746e25202c32ull,0x09202020203b782eull,0x6c756d090a202f2full,0x33732e6f6c2e3432ull,
0x202c337225092032ull,0x327225202c317225ull,0x0a202f2f0920203bull,0x3233752e74766309ull,
0x722509203631752eull,0x2e64697425202c34ull,0x0920202020203b78ull,0x646461090a202f2full,
0x722509203233752eull,0x202c337225202c35ull,0x202020203b347225ull,0x0a202f2f09202020ull,
0x3436752e74766309ull,0x722509203233732eull,0x3b357225202c3164ull,0x0920202020202020ull,
0x2e646c090a202f2full,0x36752e6d61726170ull,0x2c32647225092034ull,0x616475635f5f5b20ull,
0x395a5f5f6d726170ull,0x68736148636c6163ull,0x74616f6c66365044ull,0x32746e6975355034ull,
0x2f093b5d736f705full,0x2039383a6469202full,0x6170616475635f5full,0x6163395a5f5f6d72ull,
0x504468736148636cull,0x503474616f6c6636ull,0x705f32746e697535ull,0x090a3078302b736full,
0x752e6f6c2e6c756dull,0x3364722509203436ull,0x202c31647225202cull,0x2f092020203b3631ull,
0x2e646461090a202full,0x6472250920343675ull,0x2c32647225202c34ull,0x20203b3364722520ull,
0x090a202f2f092020ull,0x61626f6c672e646cull,0x2509203233662e6cull,0x6472255b202c3166ull,
0x2f09203b5d302b34ull,0x0a30393a6469202full,0x736e6f632e646c09ull,0x2509203233662e74ull,
0x7261705b202c3266ull,0x3b5d36352b736d61ull,0x393a6469202f2f09ull,0x736d617261702031ull,
0x73090a383378302bull,0x09203233662e6275ull,0x316625202c336625ull,0x20203b326625202cull,
0x2f2f092020202020ull,0x6f632e646c090a20ull,0x203233662e74736eull,0x705b202c34662509ull,
0x38362b736d617261ull,0x6469202f2f093b5dull,0x617261702032393aull,0x0a343478302b736dull,
0x3233662e766f6d09ull,0x25202c3566250920ull,0x20202020203b3466ull,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3136340932320963ull,0x736261090a300936ull,0x662509203233662eull,
0x203b346625202c36ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x3233662e766f6d09ull,
0x30202c3766250920ull,0x3030303038653766ull,0x0920202020203b30ull,0x3730352e38202f2full,
0x090a37332b653630ull,0x2e74672e70746573ull,0x3170250920323366ull,0x25202c366625202cull,
0x2f092020203b3766ull,0x70252140090a202full,0x2409206172622031ull,0x3635325f325f744cull,
0x2020202020203b32ull,0x090a202f2f092020ull,0x09323209636f6c2eull,0x090a300937313634ull,
0x203233662e766f6dull,0x6630202c38662509ull,0x3030303030386533ull,0x2f0920202020203bull,
0x090a35322e30202full,0x203233662e6c756dull,0x6625202c33662509ull,0x203b386625202c33ull,
0x2f09202020202020ull,0x636f6c2e090a202full,0x3831363409323209ull,0x2e766f6d090a3009ull,
0x3966250920323366ull,0x303865336630202cull,0x2020203b30303030ull,0x2e30202f2f092020ull,
0x2e6c756d090a3532ull,0x3566250920323366ull,0x25202c346625202cull,0x20202020203b3966ull,
0x240a202f2f092020ull,0x3635325f325f744cull,0x636f6c2e090a3a32ull,0x3009333909373109ull,
0x70612e766964090aull,0x3233662e786f7270ull,0x202c303166250920ull,0x356625202c336625ull,
0x63090a202f2f093bull,0x662e696d722e7476ull,0x09203233662e3233ull,0x6625202c31316625ull,
0x2f2f0920203b3031ull,0x722e747663090a20ull,0x662e3233732e697aull,0x2c36722509203233ull,
0x20203b3131662520ull,0x2e090a202f2f0920ull,0x3409323209636f6cull,0x6c090a3009343936ull,
0x6c61626f6c672e64ull,0x662509203233662eull,0x6472255b202c3231ull,0x2f2f093b5d342b34ull,
0x090a33393a646920ull,0x74736e6f632e646cull,0x662509203233662eull,0x7261705b202c3331ull,
0x3b5d30362b736d61ull,0x393a6469202f2f09ull,0x736d617261702034ull,0x73090a633378302bull,
0x09203233662e6275ull,0x316625202c336625ull,0x3b33316625202c32ull,0x2f2f092020202020ull,
0x6f632e646c090a20ull,0x203233662e74736eull,0x5b202c3431662509ull,0x372b736d61726170ull,
0x69202f2f093b5d32ull,0x7261702035393a64ull,0x383478302b736d61ull,0x33662e766f6d090aull,
0x202c356625092032ull,0x2020203b34316625ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,
0x363409323209636full,0x6261090a30093631ull,0x2509203233662e73ull,0x316625202c353166ull,
0x2020202020203b34ull,0x202f2f0920202020ull,0x33662e766f6d090aull,0x2c36316625092032ull,
0x3030386537663020ull,0x202020203b303030ull,0x30352e38202f2f09ull,0x0a37332b65363037ull,
0x74672e7074657309ull,0x702509203233662eull,0x2c35316625202c32ull,0x09203b3631662520ull,
0x252140090a202f2full,0x0920617262203270ull,0x30335f325f744c24ull,0x20202020203b3437ull,
0x0a202f2f09202020ull,0x323209636f6c2e09ull,0x0a30093731363409ull,0x3233662e766f6d09ull,
0x202c373166250920ull,0x3030303865336630ull,0x09202020203b3030ull,0x0a35322e30202f2full,
0x3233662e6c756d09ull,0x25202c3366250920ull,0x37316625202c3366ull,0x092020202020203bull,
0x6f6c2e090a202f2full,0x3136340932320963ull,0x766f6d090a300938ull,0x662509203233662eull,
0x65336630202c3831ull,0x203b303030303038ull,0x30202f2f09202020ull,0x6c756d090a35322eull,
0x662509203233662eull,0x2c34316625202c35ull,0x20203b3831662520ull,0x0a202f2f09202020ull,
0x30335f325f744c24ull,0x6f6c2e090a3a3437ull,0x0934390937310963ull,0x612e766964090a30ull,
0x33662e786f727070ull,0x2c39316625092032ull,0x6625202c33662520ull,0x090a202f2f093b35ull,
0x2e696d722e747663ull,0x203233662e323366ull,0x25202c3032662509ull,0x2f0920203b393166ull,
0x2e747663090a202full,0x2e3233732e697a72ull,0x3772250920323366ull,0x203b30326625202cull,
0x090a202f2f092020ull,0x09323209636f6c2eull,0x090a300934393634ull,0x61626f6c672e646cull,
0x2509203233662e6cull,0x72255b202c313266ull,0x2f093b5d382b3464ull,0x0a36393a6469202full,
0x736e6f632e646c09ull,0x2509203233662e74ull,0x61705b202c323266ull,0x5d34362b736d6172ull,
0x3a6469202f2f093bull,0x6d61726170203739ull,0x090a303478302b73ull,0x203233662e627573ull,
0x6625202c33662509ull,0x32326625202c3132ull,0x2f0920202020203bull,0x632e646c090a202full,
0x3233662e74736e6full,0x202c333266250920ull,0x2b736d617261705bull,0x202f2f093b5d3637ull,
0x61702038393a6469ull,0x3478302b736d6172ull,0x662e766f6d090a63ull,0x2c35662509203233ull,
0x20203b3332662520ull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3409323209636f6cull,
0x61090a3009363136ull,0x09203233662e7362ull,0x6625202c34326625ull,0x20202020203b3332ull,
0x2f2f092020202020ull,0x662e766f6d090a20ull,0x3532662509203233ull,0x303865376630202cull,
0x2020203b30303030ull,0x352e38202f2f0920ull,0x37332b6536303730ull,0x672e70746573090aull,
0x2509203233662e74ull,0x34326625202c3370ull,0x203b35326625202cull,0x2140090a202f2f09ull,
0x2061726220337025ull,0x335f325f744c2409ull,0x202020203b363835ull,0x202f2f0920202020ull,
0x3209636f6c2e090aull,0x3009373136340932ull,0x33662e766f6d090aull,0x2c36326625092032ull,
0x3030386533663020ull,0x202020203b303030ull,0x35322e30202f2f09ull,0x33662e6c756d090aull,
0x202c336625092032ull,0x326625202c336625ull,0x2020202020203b36ull,0x6c2e090a202f2f09ull,
0x363409323209636full,0x6f6d090a30093831ull,0x2509203233662e76ull,0x336630202c373266ull,
0x3b30303030303865ull,0x202f2f0920202020ull,0x756d090a35322e30ull,0x2509203233662e6cull,
0x33326625202c3566ull,0x203b37326625202cull,0x202f2f0920202020ull,0x335f325f744c240aull,
0x6c2e090a3a363835ull,0x353109373109636full,0x2e646c090a300938ull,0x36752e6d61726170ull,
0x2c35647225092034ull,0x616475635f5f5b20ull,0x395a5f5f6d726170ull,0x68736148636c6163ull,
0x74616f6c66365044ull,0x32746e6975355034ull,0x6c6369747261705full,0x093b5d6873614865ull,
0x39393a6469202f2full,0x70616475635f5f20ull,0x63395a5f5f6d7261ull,0x4468736148636c61ull,
0x3474616f6c663650ull,0x5f32746e69753550ull,0x656c636974726170ull,0x3078302b68736148ull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x31647225202c3664ull,0x202020203b38202cull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x647225202c376472ull,0x3b36647225202c35ull,
0x202f2f0920202020ull,0x6e6f632e646c090aull,0x09203233752e7473ull,0x61705b202c387225ull,
0x5d34342b736d6172ull,0x3a6469202f2f093bull,0x6172617020303031ull,0x0a633278302b736dull,
0x736e6f632e646c09ull,0x2509203233752e74ull,0x7261705b202c3972ull,0x3b5d30342b736d61ull,
0x313a6469202f2f09ull,0x6d61726170203130ull,0x090a383278302b73ull,0x727070612e766964ull,
0x09203233662e786full,0x6625202c38326625ull,0x093b356625202c33ull,0x747663090a202f2full,
0x3233662e696d722eull,0x662509203233662eull,0x38326625202c3932ull,0x0a202f2f0920203bull,
0x697a722e74766309ull,0x3233662e3233732eull,0x202c303172250920ull,0x0920203b39326625ull,
0x2e646c090a202f2full,0x33752e74736e6f63ull,0x2c31317225092032ull,0x736d617261705b20ull,
0x2f2f093b5d38342bull,0x203230313a646920ull,0x302b736d61726170ull,0x627573090a303378ull,
0x722509203233752eull,0x31317225202c3231ull,0x202020203b31202cull,0x0a202f2f09202020ull,
0x3233752e6e696d09ull,0x202c333172250920ull,0x7225202c30317225ull,0x09202020203b3231ull,
0x6c756d090a202f2full,0x33732e6f6c2e3432ull,0x2c34317225092032ull,0x25202c3331722520ull,
0x0a202f2f093b3872ull,0x6c2e34326c756d09ull,0x2509203233732e6full,0x317225202c353172ull,
0x093b397225202c34ull,0x627573090a202f2full,0x722509203233752eull,0x2c387225202c3631ull,
0x20202020203b3120ull,0x0a202f2f09202020ull,0x3233752e6e696d09ull,0x202c373172250920ull,
0x317225202c377225ull,0x0920202020203b36ull,0x6c756d090a202f2full,0x33732e6f6c2e3432ull,
0x2c38317225092032ull,0x25202c3731722520ull,0x0a202f2f093b3972ull,0x3233732e64646109ull,
0x202c393172250920ull,0x7225202c35317225ull,0x09202020203b3831ull,0x627573090a202f2full,
0x722509203233752eull,0x2c397225202c3032ull,0x20202020203b3120ull,0x0a202f2f09202020ull,
0x3233752e6e696d09ull,0x202c313272250920ull,0x327225202c367225ull,0x0920202020203b30ull,
0x646461090a202f2full,0x722509203233732eull,0x39317225202c3232ull,0x203b31327225202cull,
0x0a202f2f09202020ull,0x626f6c672e747309ull,0x33752e32762e6c61ull,0x376472255b092032ull,
0x72257b202c5d302bull,0x3b7d3572252c3232ull,0x6c2e090a202f2f09ull,0x353109373109636full,
0x697865090a300939ull,0x2020202020203b74ull,0x2020202020202020ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x5f646e6557444c24ull,0x48636c6163395a5full,0x6c66365044687361ull,
0x697535503474616full,0x207d090a3a32746eull,0x6163395a5f202f2full,0x504468736148636cull,
0x503474616f6c6636ull,0x0a0a32746e697535ull,0x207972746e652e09ull,0x726f657238325a5full,
0x4161746144726564ull,0x6543646e6946646eull,0x4474726174536c6cull,0x5032746e69753550ull,
0x533474616f6c6636ull,0x5f32535f32535f32ull,0x2e09090a28206a50ull,0x752e206d61726170ull,
0x6475635f5f203436ull,0x5a5f5f6d72617061ull,0x6564726f65723832ull,0x646e416174614472ull,
0x6c6c6543646e6946ull,0x3550447472617453ull,0x66365032746e6975ull,0x5f32533474616f6cull,
0x6a505f32535f3253ull,0x6c6369747261705full,0x090a2c6873614865ull,0x206d617261702e09ull,
0x635f5f203436752eull,0x5f6d726170616475ull,0x726f657238325a5full,0x4161746144726564ull,
0x6543646e6946646eull,0x4474726174536c6cull,0x5032746e69753550ull,0x533474616f6c6636ull,
0x5f32535f32535f32ull,0x6f50646c6f5f6a50ull,0x61702e09090a2c73ull,0x3436752e206d6172ull,
0x70616475635f5f20ull,0x38325a5f5f6d7261ull,0x44726564726f6572ull,0x6946646e41617461ull,
0x74536c6c6543646eull,0x6975355044747261ull,0x6f6c66365032746eull,0x32535f3253347461ull,
0x6f5f6a505f32535full,0x090a2c6c6556646cull,0x206d617261702e09ull,0x635f5f203436752eull,
0x5f6d726170616475ull,0x726f657238325a5full,0x4161746144726564ull,0x6543646e6946646eull,
0x4474726174536c6cull,0x5032746e69753550ull,0x533474616f6c6636ull,0x5f32535f32535f32ull,
0x6574726f735f6a50ull,0x09090a2c736f5064ull,0x2e206d617261702eull,0x75635f5f20343675ull,
0x5f5f6d7261706164ull,0x64726f657238325aull,0x6e41617461447265ull,0x6c6543646e694664ull,
0x504474726174536cull,0x365032746e697535ull,0x32533474616f6c66ull,0x505f32535f32535full,
0x646574726f735f6aull,0x2e09090a2c6c6556ull,0x752e206d61726170ull,0x6475635f5f203436ull,
0x5a5f5f6d72617061ull,0x6564726f65723832ull,0x646e416174614472ull,0x6c6c6543646e6946ull,
0x3550447472617453ull,0x66365032746e6975ull,0x5f32533474616f6cull,0x6a505f32535f3253ull,
0x6174536c6c65635full,0x090a7b090a297472ull,0x33752e206765722eull,0x3e38323c72252032ull,
0x206765722e090a3bull,0x647225203436752eull,0x2e090a3b3e33323cull,0x3233662e20676572ull,
0x3b3e34313c662520ull,0x2e206765722e090aull,0x3c70252064657270ull,0x68732e090a3b3e35ull,
0x6c612e2064657261ull,0x622e2034206e6769ull,0x616475635f5f2038ull,0x486465726168735full,
0x3139363931687361ull,0x3b5d383230315b32ull,0x657270202f2f090aull,0x203d206174614476ull,
0x636f6c2e090a3631ull,0x0939363109373109ull,0x5f3142424c240a30ull,0x726f657238325a5full,
0x4161746144726564ull,0x6543646e6946646eull,0x4474726174536c6cull,0x5032746e69753550ull,
0x533474616f6c6636ull,0x5f32535f32535f32ull,0x6f6c2e090a3a6a50ull,0x3337310937310963ull,
0x2e747663090a3009ull,0x203631752e323373ull,0x6325202c31722509ull,0x203b782e64696174ull,
0x090a202f2f092020ull,0x2e3233732e747663ull,0x3272250920363175ull,0x2e6469746e25202cull,
0x2f09202020203b78ull,0x326c756d090a202full,0x3233732e6f6c2e34ull,0x25202c3372250920ull,
0x3b327225202c3172ull,0x090a202f2f092020ull,0x2e3233752e747663ull,0x3472250920363175ull,
0x782e64697425202cull,0x2f0920202020203bull,0x2e646461090a202full,0x3572250920323375ull,
0x25202c337225202cull,0x20202020203b3472ull,0x090a202f2f092020ull,0x2e3436752e747663ull,
0x6472250920323373ull,0x203b357225202c31ull,0x2f09202020202020ull,0x702e646c090a202full,
0x3436752e6d617261ull,0x202c326472250920ull,0x70616475635f5f5bull,0x38325a5f5f6d7261ull,
0x44726564726f6572ull,0x6946646e41617461ull,0x74536c6c6543646eull,0x6975355044747261ull,
0x6f6c66365032746eull,0x32535f3253347461ull,0x705f6a505f32535full,0x48656c6369747261ull,
0x2f2f093b5d687361ull,0x5f2035393a646920ull,0x726170616475635full,0x657238325a5f5f6dull,
0x746144726564726full,0x646e6946646e4161ull,0x726174536c6c6543ull,0x746e697535504474ull,
0x74616f6c66365032ull,0x535f32535f325334ull,0x7261705f6a505f32ull,0x736148656c636974ull,
0x6d090a3078302b68ull,0x36752e6f6c2e6c75ull,0x2c33647225092034ull,0x38202c3164722520ull,
0x2f2f09202020203bull,0x752e646461090a20ull,0x3464722509203436ull,0x202c32647225202cull,
0x2020203b33647225ull,0x6c090a202f2f0920ull,0x6c61626f6c672e64ull,0x203233752e32762eull,
0x72252c3672257b09ull,0x6472255b202c7d37ull,0x2f2f093b5d302b34ull,0x09636f6c2e090a20ull,
0x3009393731093731ull,0x36752e766f6d090aull,0x2c35647225092034ull,0x5f616475635f5f20ull,
0x6148646572616873ull,0x3231393639316873ull,0x63090a202f2f093bull,0x752e3436752e7476ull,
0x3664722509203233ull,0x20203b347225202cull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,
0x2509203436752e6full,0x647225202c376472ull,0x2020203b34202c36ull,0x61090a202f2f0920ull,
0x09203436752e6464ull,0x7225202c38647225ull,0x37647225202c3564ull,0x2f2f09202020203bull,
0x68732e7473090a20ull,0x3233752e64657261ull,0x2b386472255b0920ull,0x3b367225202c5d34ull,
0x3a6469202f2f0920ull,0x6475635f5f203839ull,0x6465726168735f61ull,0x3936393168736148ull,
0x090a3078302b3231ull,0x203233732e766f6dull,0x3b30202c38722509ull,0x2020202020202020ull,
0x2f09202020202020ull,0x2e746573090a202full,0x732e3233752e7467ull,0x2c39722509203233ull,
0x7225202c35722520ull,0x090a202f2f093b38ull,0x203233732e67656eull,0x25202c3031722509ull,
0x20202020203b3972ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3172250920323375ull,
0x2020203b30202c31ull,0x2020202020202020ull,0x090a202f2f092020ull,0x752e71652e746573ull,
0x09203233752e3233ull,0x7225202c32317225ull,0x3b31317225202c34ull,0x656e090a202f2f09ull,
0x2509203233732e67ull,0x317225202c333172ull,0x2020202020203b32ull,0x202f2f0920202020ull,
0x33622e646e61090aull,0x2c34317225092032ull,0x25202c3031722520ull,0x202020203b333172ull,
0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x203b30202c353172ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x652e70746573090aull,0x2509203233732e71ull,0x34317225202c3170ull,
0x203b35317225202cull,0x2540090a202f2f09ull,0x0920617262203170ull,0x38325f335f744c24ull,
0x20202020203b3831ull,0x202f2f0920202020ull,0x6f6c672e646c090aull,0x752e32762e6c6162ull,
0x3172257b09203233ull,0x2c7d373172252c36ull,0x2d2b346472255b20ull,0x0a202f2f093b5d38ull,
0x373109636f6c2e09ull,0x090a300936383109ull,0x203233732e766f6dull,0x25202c3831722509ull,
0x202020203b363172ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3172250920323373ull,
0x3b37317225202c39ull,0x2020202020202020ull,0x090a202f2f092020ull,0x09373109636f6c2eull,
0x6d090a3009343831ull,0x09203233732e766full,0x7225202c30327225ull,0x20202020203b3831ull,
0x2f2f092020202020ull,0x68732e7473090a20ull,0x3233752e64657261ull,0x6475635f5f5b0920ull,
0x6465726168735f61ull,0x3936393168736148ull,0x25202c5d302b3231ull,0x202f2f093b303272ull,
0x5f203330313a6469ull,0x68735f616475635full,0x6873614864657261ull,0x302b323139363931ull,
0x335f744c240a3078ull,0x090a3a383138325full,0x09373109636f6c2eull,0x62090a3009373831ull,
0x20636e79732e7261ull,0x20202020203b3009ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x752e766f6d090a20ull,0x3132722509203233ull,0x202020203b30202cull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x732e71652e707465ull,0x2c32702509203233ull,0x7225202c35722520ull,
0x2f2f0920203b3132ull,0x2032702540090a20ull,0x5f4c240920617262ull,0x203b323635325f33ull,
0x2020202020202020ull,0x6c090a202f2f0920ull,0x6465726168732e64ull,0x722509203233752eull,
0x6472255b202c3232ull,0x2f2f093b5d302b38ull,0x203430313a646920ull,0x735f616475635f5full,
0x7361486465726168ull,0x2b32313936393168ull,0x746573090a307830ull,0x3233752e71652e70ull,
0x25202c3370250920ull,0x367225202c323272ull,0x0a202f2f0920203bull,0x7262203370254009ull,
0x5f335f4c24092061ull,0x2020203b36303332ull,0x0920202020202020ull,0x335f4c240a202f2full,
0x090a3a323635325full,0x09373109636f6c2eull,0x6c090a3009303931ull,0x2e6d617261702e64ull,
0x6472250920343675ull,0x75635f5f5b202c39ull,0x5f5f6d7261706164ull,0x64726f657238325aull,
0x6e41617461447265ull,0x6c6543646e694664ull,0x504474726174536cull,0x365032746e697535ull,
0x32533474616f6c66ull,0x505f32535f32535full,0x74536c6c65635f6aull,0x2f2f093b5d747261ull,
0x203530313a646920ull,0x6170616475635f5full,0x7238325a5f5f6d72ull,0x6144726564726f65ull,
0x6e6946646e416174ull,0x6174536c6c654364ull,0x6e69753550447472ull,0x616f6c6636503274ull,
0x5f32535f32533474ull,0x65635f6a505f3253ull,0x2b74726174536c6cull,0x747663090a307830ull,
0x3233752e3436752eull,0x2c30316472250920ull,0x2020203b36722520ull,0x0a202f2f09202020ull,
0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x31647225202c3131ull,0x0920203b34202c30ull,
0x646461090a202f2full,0x722509203436752eull,0x647225202c323164ull,0x3131647225202c39ull,
0x0a202f2f0920203bull,0x626f6c672e747309ull,0x09203233752e6c61ull,0x302b32316472255bull,
0x093b357225202c5dull,0x30313a6469202f2full,0x325f335f4c240a36ull,0x6c2e090a3a363033ull,
0x393109373109636full,0x2e646c090a300934ull,0x36752e6d61726170ull,0x3331647225092034ull,
0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x6564726f65723832ull,0x646e416174614472ull,
0x6c6c6543646e6946ull,0x3550447472617453ull,0x66365032746e6975ull,0x5f32533474616f6cull,
0x6a505f32535f3253ull,0x5d736f50646c6f5full,0x3a6469202f2f093bull,0x75635f5f20373031ull,
0x5f5f6d7261706164ull,0x64726f657238325aull,0x6e41617461447265ull,0x6c6543646e694664ull,
0x504474726174536cull,0x365032746e697535ull,0x32533474616f6c66ull,0x505f32535f32535full,
0x736f50646c6f5f6aull,0x7663090a3078302bull,0x33752e3436752e74ull,0x3431647225092032ull,
0x20203b377225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x647225202c353164ull,0x203b3631202c3431ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c36316472ull,0x647225202c333164ull,0x202f2f09203b3531ull,0x6f6c672e646c090aull,
0x662e34762e6c6162ull,0x252c5f7b09203233ull,0x252c3266252c3166ull,0x72255b202c7d3366ull,
0x093b5d302b363164ull,0x766f6d090a202f2full,0x722509203233732eull,0x3b377225202c3332ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x202c343272250920ull,
0x2020202020203b30ull,0x0920202020202020ull,0x766f6d090a202f2full,0x722509203233732eull,
0x20203b30202c3532ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,
0x202c363272250920ull,0x2020202020203b30ull,0x0920202020202020ull,0x786574090a202f2full,
0x662e34762e64312eull,0x7b203233732e3233ull,0x2c3566252c346625ull,0x7d3766252c366625ull,
0x6c6556646c6f5b2cull,0x3272257b2c786554ull,0x252c343272252c33ull,0x363272252c353272ull,
0x6f6c2e090a3b5d7dull,0x3539310937310963ull,0x2e766f6d090a3009ull,0x3866250920323366ull,
0x20203b346625202cull,0x2020202020202020ull,0x090a202f2f092020ull,0x203233662e766f6dull,
0x6625202c39662509ull,0x2020202020203b35ull,0x2f09202020202020ull,0x2e766f6d090a202full,
0x3166250920323366ull,0x203b366625202c30ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x203233662e766f6dull,0x25202c3131662509ull,0x20202020203b3766ull,0x2f09202020202020ull,
0x636f6c2e090a202full,0x0937393109373109ull,0x6c2e6c756d090a30ull,0x2509203436752e6full,
0x7225202c37316472ull,0x203b3631202c3164ull,0x6c090a202f2f0920ull,0x2e6d617261702e64ull,
0x6472250920343675ull,0x635f5f5b202c3831ull,0x5f6d726170616475ull,0x726f657238325a5full,
0x4161746144726564ull,0x6543646e6946646eull,0x4474726174536c6cull,0x5032746e69753550ull,
0x533474616f6c6636ull,0x5f32535f32535f32ull,0x6574726f735f6a50ull,0x2f093b5d736f5064ull,
0x3231313a6469202full,0x70616475635f5f20ull,0x38325a5f5f6d7261ull,0x44726564726f6572ull,
0x6946646e41617461ull,0x74536c6c6543646eull,0x6975355044747261ull,0x6f6c66365032746eull,
0x32535f3253347461ull,0x735f6a505f32535full,0x736f50646574726full,0x6461090a3078302bull,
0x2509203436752e64ull,0x7225202c39316472ull,0x647225202c383164ull,0x202f2f09203b3731ull,
0x6f6c672e646c090aull,0x203233662e6c6162ull,0x5b202c3231662509ull,0x5d302b3631647225ull,
0x3a6469202f2f093bull,0x2e7473090a333131ull,0x762e6c61626f6c67ull,0x5b09203233662e34ull,
0x5d302b3931647225ull,0x2c323166257b202cull,0x2c3266252c316625ull,0x2f2f093b7d336625ull,
0x09636f6c2e090a20ull,0x3009383931093731ull,0x7261702e646c090aull,0x09203436752e6d61ull,
0x5b202c3032647225ull,0x6170616475635f5full,0x7238325a5f5f6d72ull,0x6144726564726f65ull,
0x6e6946646e416174ull,0x6174536c6c654364ull,0x6e69753550447472ull,0x616f6c6636503274ull,
0x5f32535f32533474ull,0x6f735f6a505f3253ull,0x5d6c655664657472ull,0x3a6469202f2f093bull,
0x75635f5f20383131ull,0x5f5f6d7261706164ull,0x64726f657238325aull,0x6e41617461447265ull,
0x6c6543646e694664ull,0x504474726174536cull,0x365032746e697535ull,0x32533474616f6c66ull,
0x505f32535f32535full,0x646574726f735f6aull,0x0a3078302b6c6556ull,0x3436752e64646109ull,
0x2c31326472250920ull,0x202c303264722520ull,0x09203b3731647225ull,0x2e7473090a202f2full,
0x762e6c61626f6c67ull,0x5b09203233662e34ull,0x5d302b3132647225ull,0x252c3866257b202cull,
0x2c303166252c3966ull,0x2f093b7d31316625ull,0x636f6c2e090a202full,0x0930303209373109ull,
0x3b74697865090a30ull,0x2020202020202020ull,0x2020202020202020ull,0x2020202020202020ull,
0x4c240a202f2f0920ull,0x5a5f5f646e655744ull,0x6564726f65723832ull,0x646e416174614472ull,
0x6c6c6543646e6946ull,0x3550447472617453ull,0x66365032746e6975ull,0x5f32533474616f6cull,
0x6a505f32535f3253ull,0x202f2f207d090a3aull,0x726f657238325a5full,0x4161746144726564ull,
0x6543646e6946646eull,0x4474726174536c6cull,0x5032746e69753550ull,0x533474616f6c6636ull,
0x5f32535f32535f32ull,0x6e652e090a0a6a50ull,0x63385a5f20797274ull,0x50446564696c6c6full,
0x533474616f6c6636ull,0x5f30535f30535f30ull,0x5032746e69753550ull,0x702e09090a28206aull,
0x36752e206d617261ull,0x616475635f5f2034ull,0x385a5f5f6d726170ull,0x446564696c6c6f63ull,
0x3474616f6c663650ull,0x30535f30535f3053ull,0x32746e697535505full,0x6f5077656e5f6a50ull,
0x61702e09090a2c73ull,0x3436752e206d6172ull,0x70616475635f5f20ull,0x63385a5f5f6d7261ull,
0x50446564696c6c6full,0x533474616f6c6636ull,0x5f30535f30535f30ull,0x5032746e69753550ull,
0x6c655677656e5f6aull,0x7261702e09090a2cull,0x203436752e206d61ull,0x6170616475635f5full,
0x6f63385a5f5f6d72ull,0x3650446564696c6cull,0x30533474616f6c66ull,0x505f30535f30535full,
0x6a5032746e697535ull,0x2c736f50646c6f5full,0x617261702e09090aull,0x5f203436752e206dull,
0x726170616475635full,0x6c6f63385a5f5f6dull,0x663650446564696cull,0x5f30533474616f6cull,
0x35505f30535f3053ull,0x5f6a5032746e6975ull,0x0a2c6c6556646c6full,0x6d617261702e0909ull,
0x5f5f203436752e20ull,0x6d72617061647563ull,0x6c6c6f63385a5f5full,0x6c66365044656469ull,
0x535f30533474616full,0x7535505f30535f30ull,0x705f6a5032746e69ull,0x48656c6369747261ull,
0x2e09090a2c687361ull,0x752e206d61726170ull,0x6475635f5f203436ull,0x5a5f5f6d72617061ull,
0x6564696c6c6f6338ull,0x74616f6c66365044ull,0x535f30535f305334ull,0x746e697535505f30ull,
0x6c6c65635f6a5032ull,0x090a297472617453ull,0x206765722e090a7bull,0x3c7225203233752eull,
0x722e090a3b3e3638ull,0x203436752e206765ull,0x3b3e39313c647225ull,0x2e206765722e090aull,
0x313c662520323366ull,0x722e090a3b3e3336ull,0x646572702e206765ull,0x3b3e31323c702520ull,
0x726f73202f2f090aull,0x2061746144646574ull,0x6c2e090a3631203dull,0x333309373109636full,
0x42424c240a300938ull,0x6c6f63385a5f5f31ull,0x663650446564696cull,0x5f30533474616f6cull,
0x35505f30535f3053ull,0x3a6a5032746e6975ull,0x33732e747663090aull,0x2509203631752e32ull,
0x61746325202c3172ull,0x2020203b782e6469ull,0x7663090a202f2f09ull,0x31752e3233732e74ull,
0x202c327225092036ull,0x3b782e6469746e25ull,0x202f2f0920202020ull,0x2e34326c756d090aull,
0x09203233732e6f6cull,0x317225202c337225ull,0x20203b327225202cull,0x7663090a202f2f09ull,
0x31752e3233752e74ull,0x202c347225092036ull,0x203b782e64697425ull,0x202f2f0920202020ull,
0x33752e646461090aull,0x202c357225092032ull,0x347225202c337225ull,0x202020202020203bull,
0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x3b357225202c3672ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x33732e766f6d090aull,0x202c377225092032ull,0x2020202020203b30ull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x20203b30202c3872ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x33732e766f6d090aull,0x202c397225092032ull,
0x2020202020203b30ull,0x2020202020202020ull,0x6574090a202f2f09ull,0x2e34762e64312e78ull,
0x203233732e323366ull,0x3266252c3166257bull,0x3466252c3366252cull,0x6f50646c6f5b2c7dull,
0x72257b2c78655473ull,0x72252c3772252c36ull,0x3b5d7d3972252c38ull,0x3109636f6c2e090aull,
0x0a30093834330937ull,0x3233662e766f6d09ull,0x25202c3566250920ull,0x20202020203b3166ull,
0x0920202020202020ull,0x766f6d090a202f2full,0x662509203233662eull,0x203b326625202c36ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x3233662e766f6d09ull,0x25202c3766250920ull,
0x20202020203b3366ull,0x0920202020202020ull,0x766f6d090a202f2full,0x722509203233732eull,
0x3b357225202c3031ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,
0x202c313172250920ull,0x2020202020203b30ull,0x0920202020202020ull,0x766f6d090a202f2full,
0x722509203233732eull,0x20203b30202c3231ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x3233732e766f6d09ull,0x202c333172250920ull,0x2020202020203b30ull,0x0920202020202020ull,
0x786574090a202f2full,0x662e34762e64312eull,0x7b203233732e3233ull,0x2c3966252c386625ull,
0x3166252c30316625ull,0x56646c6f5b2c7d31ull,0x257b2c7865546c65ull,0x313172252c303172ull,
0x72252c323172252cull,0x2e090a3b5d7d3331ull,0x3309373109636f6cull,0x6f6d090a30093934ull,
0x2509203233662e76ull,0x386625202c323166ull,0x202020202020203bull,0x202f2f0920202020ull,
0x33662e766f6d090aull,0x2c33316625092032ull,0x2020203b39662520ull,0x2020202020202020ull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x316625202c343166ull,0x2020202020203b30ull,
0x202f2f0920202020ull,0x33662e766f6d090aull,0x2c35316625092032ull,0x20203b3131662520ull,
0x2020202020202020ull,0x6c2e090a202f2f09ull,0x363409323209636full,0x646c090a30093439ull,
0x662e74736e6f632eull,0x3631662509203233ull,0x6d617261705b202cull,0x2f093b5d36352b73ull,
0x3239343a6469202full,0x2b736d6172617020ull,0x7573090a38337830ull,0x2509203233662e62ull,
0x356625202c373166ull,0x203b36316625202cull,0x202f2f0920202020ull,0x6e6f632e646c090aull,
0x09203233662e7473ull,0x705b202c38316625ull,0x38362b736d617261ull,0x6469202f2f093b5dull,
0x726170203339343aull,0x343478302b736d61ull,0x33662e766f6d090aull,0x2c39316625092032ull,
0x20203b3831662520ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,0x363409323209636full,
0x6261090a30093631ull,0x2509203233662e73ull,0x316625202c303266ull,0x2020202020203b38ull,
0x202f2f0920202020ull,0x33662e766f6d090aull,0x2c31326625092032ull,0x3030386537663020ull,
0x202020203b303030ull,0x30352e38202f2f09ull,0x0a37332b65363037ull,0x74672e7074657309ull,
0x702509203233662eull,0x2c30326625202c31ull,0x09203b3132662520ull,0x252140090a202f2full,
0x0920617262203170ull,0x34315f345f744c24ull,0x202020203b383333ull,0x0a202f2f09202020ull,
0x323209636f6c2e09ull,0x0a30093731363409ull,0x3233662e766f6d09ull,0x202c323266250920ull,
0x3030303865336630ull,0x09202020203b3030ull,0x0a35322e30202f2full,0x3233662e6c756d09ull,
0x202c373166250920ull,0x6625202c37316625ull,0x09202020203b3232ull,0x6f6c2e090a202f2full,
0x3136340932320963ull,0x766f6d090a300938ull,0x662509203233662eull,0x65336630202c3332ull,
0x203b303030303038ull,0x30202f2f09202020ull,0x6c756d090a35322eull,0x662509203233662eull,
0x38316625202c3931ull,0x203b33326625202cull,0x0a202f2f09202020ull,0x34315f345f744c24ull,
0x6c2e090a3a383333ull,0x333909373109636full,0x2e766964090a3009ull,0x662e786f72707061ull,
0x3432662509203233ull,0x202c37316625202cull,0x2f2f093b39316625ull,0x722e747663090a20ull,
0x662e3233662e696dull,0x3532662509203233ull,0x203b34326625202cull,0x63090a202f2f0920ull,
0x732e697a722e7476ull,0x09203233662e3233ull,0x6625202c34317225ull,0x2f2f0920203b3532ull,
0x09636f6c2e090a20ull,0x0934393634093232ull,0x6f632e646c090a30ull,0x203233662e74736eull,
0x5b202c3632662509ull,0x362b736d61726170ull,0x69202f2f093b5d30ull,0x6170203439343a64ull,
0x3378302b736d6172ull,0x662e627573090a63ull,0x3731662509203233ull,0x25202c366625202cull,
0x202020203b363266ull,0x6c090a202f2f0920ull,0x2e74736e6f632e64ull,0x3266250920323366ull,
0x617261705b202c37ull,0x093b5d32372b736dull,0x39343a6469202f2full,0x736d617261702035ull,
0x6d090a383478302bull,0x09203233662e766full,0x6625202c39316625ull,0x20202020203b3732ull,
0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x0936313634093232ull,0x662e736261090a30ull,
0x3832662509203233ull,0x203b37326625202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x6630202c39326625ull,0x3030303030386537ull,0x2f2f09202020203bull,
0x36303730352e3820ull,0x6573090a37332b65ull,0x33662e74672e7074ull,0x202c327025092032ull,
0x6625202c38326625ull,0x202f2f09203b3932ull,0x203270252140090aull,0x744c240920617262ull,
0x30353834315f345full,0x202020202020203bull,0x6c2e090a202f2f09ull,0x363409323209636full,
0x6f6d090a30093731ull,0x2509203233662e76ull,0x336630202c303366ull,0x3b30303030303865ull,
0x202f2f0920202020ull,0x756d090a35322e30ull,0x2509203233662e6cull,0x316625202c373166ull,
0x3b30336625202c37ull,0x202f2f0920202020ull,0x3209636f6c2e090aull,0x3009383136340932ull,
0x33662e766f6d090aull,0x2c31336625092032ull,0x3030386533663020ull,0x202020203b303030ull,
0x35322e30202f2f09ull,0x33662e6c756d090aull,0x2c39316625092032ull,0x25202c3732662520ull,
0x202020203b313366ull,0x744c240a202f2f09ull,0x30353834315f345full,0x09636f6c2e090a3aull,
0x0a30093439093731ull,0x7070612e76696409ull,0x203233662e786f72ull,0x25202c3233662509ull,
0x316625202c373166ull,0x090a202f2f093b39ull,0x2e696d722e747663ull,0x203233662e323366ull,
0x25202c3333662509ull,0x2f0920203b323366ull,0x2e747663090a202full,0x2e3233732e697a72ull,
0x3172250920323366ull,0x3b33336625202c35ull,0x090a202f2f092020ull,0x09323209636f6c2eull,
0x090a300934393634ull,0x74736e6f632e646cull,0x662509203233662eull,0x7261705b202c3433ull,
0x3b5d34362b736d61ull,0x343a6469202f2f09ull,0x6d61726170203639ull,0x090a303478302b73ull,
0x203233662e627573ull,0x25202c3731662509ull,0x34336625202c3766ull,0x2f0920202020203bull,
0x632e646c090a202full,0x3233662e74736e6full,0x202c353366250920ull,0x2b736d617261705bull,
0x202f2f093b5d3637ull,0x70203739343a6469ull,0x78302b736d617261ull,0x2e766f6d090a6334ull,
0x3166250920323366ull,0x3b35336625202c39ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x09323209636f6c2eull,0x090a300936313634ull,0x203233662e736261ull,0x25202c3633662509ull,
0x202020203b353366ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3366250920323366ull,
0x3865376630202c37ull,0x20203b3030303030ull,0x2e38202f2f092020ull,0x332b653630373035ull,
0x2e70746573090a37ull,0x09203233662e7467ull,0x336625202c337025ull,0x3b37336625202c36ull,
0x40090a202f2f0920ull,0x6172622033702521ull,0x5f345f744c240920ull,0x20203b3236333531ull,
0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x0937313634093232ull,0x662e766f6d090a30ull,
0x3833662509203233ull,0x303865336630202cull,0x2020203b30303030ull,0x322e30202f2f0920ull,
0x662e6c756d090a35ull,0x3731662509203233ull,0x202c37316625202cull,0x2020203b38336625ull,
0x2e090a202f2f0920ull,0x3409323209636f6cull,0x6d090a3009383136ull,0x09203233662e766full,
0x6630202c39336625ull,0x3030303030386533ull,0x2f2f09202020203bull,0x6d090a35322e3020ull,
0x09203233662e6c75ull,0x6625202c39316625ull,0x39336625202c3533ull,0x2f2f09202020203bull,
0x5f345f744c240a20ull,0x090a3a3236333531ull,0x09373109636f6c2eull,0x64090a3009323533ull,
0x6f727070612e7669ull,0x2509203233662e78ull,0x316625202c303466ull,0x3b39316625202c37ull,
0x7663090a202f2f09ull,0x33662e696d722e74ull,0x2509203233662e32ull,0x346625202c313466ull,
0x202f2f0920203b30ull,0x7a722e747663090aull,0x33662e3233732e69ull,0x2c36317225092032ull,
0x20203b3134662520ull,0x646c090a202f2f09ull,0x662e74736e6f632eull,0x3234662509203233ull,
0x6d617261705b202cull,0x2f093b5d36332b73ull,0x3137343a6469202full,0x2b736d6172617020ull,
0x6f6d090a34327830ull,0x2509203233732e76ull,0x3b312d202c373172ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x33662e766f6d090aull,0x2c33346625092032ull,0x3030303030663020ull,
0x202020203b303030ull,0x6d090a30202f2f09ull,0x09203233662e766full,0x6630202c34346625ull,
0x3030303030303030ull,0x2f2f09202020203bull,0x2e766f6d090a3020ull,0x3466250920323366ull,
0x3030306630202c35ull,0x20203b3030303030ull,0x0a30202f2f092020ull,0x36315f345f744c24ull,
0x2f2f200a3a363833ull,0x4c203e706f6f6c3cull,0x79646f6220706f6full,0x353320656e696c20ull,
0x697473656e202c32ull,0x687470656420676eull,0x657469202c31203aull,0x3a736e6f69746172ull,
0x2e766f6d090a3320ull,0x3172250920323373ull,0x20203b312d202c38ull,0x2020202020202020ull,
0x240a202f2f092020ull,0x3137315f345f744cull,0x3c2f2f200a3a3435ull,0x6f4c203e706f6f6cull,
0x2079646f6220706full,0x32353320656e696cull,0x6e697473656e202cull,0x3a68747065642067ull,
0x72657469202c3220ull,0x203a736e6f697461ull,0x732e766f6d090a33ull,0x3931722509203233ull,
0x2020203b312d202cull,0x2020202020202020ull,0x4c240a202f2f0920ull,0x323937315f345f74ull,
0x6c3c2f2f200a3a32ull,0x6f6f4c203e706f6full,0x6c2079646f622070ull,0x2c32353320656e69ull,
0x676e697473656e20ull,0x203a687470656420ull,0x6172657469202c33ull,0x33203a736e6f6974ull,
0x3109636f6c2e090aull,0x0a30093839320937ull,0x3233732e64646109ull,0x202c303272250920ull,
0x7225202c34317225ull,0x09202020203b3931ull,0x766f6d090a202f2full,0x722509203233752eull,
0x20203b30202c3132ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x746c2e7074657309ull,
0x702509203233732eull,0x2c30327225202c34ull,0x09203b3132722520ull,0x702540090a202f2full,
0x2409206172622034ull,0x3732325f345f744cull,0x20202020203b3638ull,0x0a202f2f09202020ull,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c32353320ull,0x6c6562616c206461ull,0x345f744c24206465ull,0x090a32323937315full,
0x74736e6f632e646cull,0x722509203233752eull,0x7261705b202c3232ull,0x3b5d30342b736d61ull,
0x343a6469202f2f09ull,0x6d61726170203839ull,0x090a383278302b73ull,0x203233752e627573ull,
0x25202c3332722509ull,0x203b31202c323272ull,0x2f09202020202020ull,0x70746573090a202full,
0x203233752e74672eull,0x7225202c35702509ull,0x33327225202c3032ull,0x090a202f2f09203bull,
0x6172622035702540ull,0x5f345f744c240920ull,0x20203b3638373232ull,0x2f09202020202020ull,
0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c32353320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x323937315f345f74ull,
0x732e646461090a32ull,0x3432722509203233ull,0x202c35317225202cull,0x2020203b38317225ull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x3b30202c35327225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233732e746cull,0x327225202c367025ull,
0x3b35327225202c34ull,0x40090a202f2f0920ull,0x2061726220367025ull,0x325f345f744c2409ull,
0x2020203b36383732ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c32353320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x32323937315f345full,0x6e6f632e646c090aull,0x09203233752e7473ull,
0x705b202c36327225ull,0x34342b736d617261ull,0x6469202f2f093b5dull,0x726170203736343aull,
0x633278302b736d61ull,0x33752e627573090aull,0x2c37327225092032ull,0x31202c3632722520ull,
0x202020202020203bull,0x6573090a202f2f09ull,0x33752e74672e7074ull,0x202c377025092032ull,
0x7225202c34327225ull,0x202f2f09203b3732ull,0x622037702540090aull,0x5f744c2409206172ull,
0x3b36383732325f34ull,0x2020202020202020ull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x353320656e696c20ull,0x2064616568202c32ull,
0x2064656c6562616cull,0x37315f345f744c24ull,0x646461090a323239ull,0x722509203233732eull,
0x36317225202c3832ull,0x203b37317225202cull,0x0a202f2f09202020ull,0x3233752e766f6d09ull,
0x202c393272250920ull,0x2020202020203b30ull,0x0920202020202020ull,0x746573090a202f2full,
0x3233732e746c2e70ull,0x25202c3870250920ull,0x327225202c383272ull,0x0a202f2f09203b39ull,
0x7262203870254009ull,0x345f744c24092061ull,0x203b36383732325full,0x0920202020202020ull,
0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x32353320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3937315f345f744cull,
0x632e646c090a3232ull,0x3233752e74736e6full,0x202c303372250920ull,0x2b736d617261705bull,
0x202f2f093b5d3834ull,0x70203939343a6469ull,0x78302b736d617261ull,0x2e627573090a3033ull,
0x3372250920323375ull,0x2c30337225202c31ull,0x20202020203b3120ull,0x090a202f2f092020ull,
0x2e656c2e70746573ull,0x3970250920323375ull,0x202c38327225202cull,0x2f09203b31337225ull,
0x39702540090a202full,0x4c24092061726220ull,0x32303832315f345full,0x202020202020203bull,
0x240a202f2f092020ull,0x3732325f345f744cull,0x345f4c240a3a3638ull,0x0a3a38353033315full,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c32353320ull,0x6c6562616c206461ull,0x345f744c24206465ull,0x090a32323937315full,
0x203233662e766f6dull,0x30202c3634662509ull,0x3030303030303066ull,0x2f09202020203b30ull,
0x766f6d090a30202full,0x662509203233662eull,0x30306630202c3734ull,0x203b303030303030ull,
0x30202f2f09202020ull,0x33662e766f6d090aull,0x2c38346625092032ull,0x3030303030663020ull,
0x202020203b303030ull,0x62090a30202f2f09ull,0x0920696e752e6172ull,0x35325f345f744c24ull,
0x2020202020203b38ull,0x2f2f092020202020ull,0x315f345f4c240a20ull,0x2f200a3a32303832ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3320656e696c2079ull,
0x64616568202c3235ull,0x64656c6562616c20ull,0x315f345f744c2420ull,0x6c2e090a32323937ull,
0x303109373109636full,0x6e696d090a300934ull,0x722509203233752eull,0x38327225202c3233ull,
0x203b31337225202cull,0x0a202f2f09202020ull,0x6c2e34326c756d09ull,0x2509203233732e6full,
0x337225202c333372ull,0x3b36327225202c32ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,
0x3433722509203233ull,0x202c33337225202cull,0x2f2f093b32327225ull,0x752e6e696d090a20ull,
0x3533722509203233ull,0x202c34327225202cull,0x2020203b37327225ull,0x6d090a202f2f0920ull,
0x2e6f6c2e34326c75ull,0x3372250920323373ull,0x2c35337225202c36ull,0x2f093b3232722520ull,
0x2e646461090a202full,0x3372250920323373ull,0x2c34337225202c37ull,0x20203b3633722520ull,
0x090a202f2f092020ull,0x203233752e6e696dull,0x25202c3833722509ull,0x327225202c303272ull,
0x2f09202020203b33ull,0x2e646461090a202full,0x3372250920323373ull,0x2c37337225202c39ull,
0x20203b3833722520ull,0x090a202f2f092020ull,0x09373109636f6c2eull,0x6d090a3009363033ull,
0x09203233732e766full,0x7225202c30347225ull,0x20202020203b3933ull,0x2f2f092020202020ull,
0x732e766f6d090a20ull,0x3134722509203233ull,0x202020203b30202cull,0x2020202020202020ull,
0x6d090a202f2f0920ull,0x09203233732e766full,0x3b30202c32347225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x732e766f6d090a20ull,0x3334722509203233ull,0x202020203b30202cull,
0x2020202020202020ull,0x74090a202f2f0920ull,0x34762e64312e7865ull,0x3233732e3233752eull,
0x252c343472257b20ull,0x363472252c353472ull,0x5b2c7d373472252cull,0x726174536c6c6563ull,
0x72257b2c78655474ull,0x2c313472252c3034ull,0x3472252c32347225ull,0x2f2f200a3b5d7d33ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x353320656e696c20ull,
0x2064616568202c32ull,0x2064656c6562616cull,0x37315f345f744c24ull,0x6f6c2e090a323239ull,
0x3930330937310963ull,0x2e766f6d090a3009ull,0x3472250920323373ull,0x3b34347225202c38ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x203233752e766f6dull,0x2d202c3934722509ull,
0x2020202020203b31ull,0x2f09202020202020ull,0x70746573090a202full,0x203233752e656e2eull,
0x25202c3031702509ull,0x347225202c383472ull,0x090a202f2f093b39ull,0x7262203031702540ull,
0x345f744c24092061ull,0x203b38373138315full,0x2f09202020202020ull,0x6c3c2f2f200a202full,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c32353320656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x323937315f345f74ull,0x662e766f6d090a32ull,
0x3634662509203233ull,0x303030306630202cull,0x2020203b30303030ull,0x090a30202f2f0920ull,
0x203233662e766f6dull,0x30202c3734662509ull,0x3030303030303066ull,0x2f09202020203b30ull,
0x766f6d090a30202full,0x662509203233662eull,0x30306630202c3834ull,0x203b303030303030ull,
0x30202f2f09202020ull,0x6e752e617262090aull,0x345f744c24092069ull,0x2020203b3835325full,
0x2020202020202020ull,0x744c240a202f2f09ull,0x38373138315f345full,0x6f6c3c2f2f200a3aull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c32353320656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x32323937315f345full,0x6e6f632e646c090aull,
0x09203233752e7473ull,0x705b202c30357225ull,0x34382b736d617261ull,0x6469202f2f093b5dull,
0x726170203536343aull,0x343578302b736d61ull,0x33752e766f6d090aull,0x2c31357225092032ull,
0x20202020203b3020ull,0x2020202020202020ull,0x6573090a202f2f09ull,0x33752e71652e7074ull,
0x2c31317025092032ull,0x25202c3035722520ull,0x202f2f093b313572ull,0x33662e766f6d090aull,
0x2c39346625092032ull,0x3030303030663020ull,0x202020203b303030ull,0x6d090a30202f2f09ull,
0x09203233662e766full,0x6630202c30356625ull,0x3030303030303030ull,0x2f2f09202020203bull,
0x2e766f6d090a3020ull,0x3566250920323366ull,0x3030306630202c31ull,0x20203b3030303030ull,
0x0a30202f2f092020ull,0x6220313170254009ull,0x5f744c2409206172ull,0x3b38393233325f34ull,
0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x32353320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3937315f345f744cull,0x2e766f6d090a3232ull,0x3572250920323373ull,0x3b30357225202c32ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x203233752e766f6dull,0x30202c3335722509ull,
0x202020202020203bull,0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c32353320656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x323937315f345f74ull,0x732e766f6d090a32ull,0x3435722509203233ull,
0x203b32357225202cull,0x2020202020202020ull,0x4c240a202f2f0920ull,0x303239315f345f74ull,
0x6c3c2f2f200a3a32ull,0x6f6f4c203e706f6full,0x6c2079646f622070ull,0x2c39303320656e69ull,
0x676e697473656e20ull,0x203a687470656420ull,0x6d69747365202c34ull,0x6574692064657461ull,
0x3a736e6f69746172ull,0x6e776f6e6b6e7520ull,0x33752e646461090aull,0x2c35357225092032ull,
0x25202c3834722520ull,0x202020203b333572ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,
0x357225202c363572ull,0x2020202020203b35ull,0x202f2f0920202020ull,0x33732e766f6d090aull,
0x2c37357225092032ull,0x20202020203b3020ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,
0x2509203233732e76ull,0x203b30202c383572ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x33732e766f6d090aull,0x2c39357225092032ull,0x20202020203b3020ull,0x2020202020202020ull,
0x6574090a202f2f09ull,0x2e34762e64312e78ull,0x203233732e323375ull,0x72252c303672257bull,
0x2c323672252c3136ull,0x705b2c7d33367225ull,0x48656c6369747261ull,0x7b2c786554687361ull,
0x3572252c36357225ull,0x252c383572252c37ull,0x200a3b5d7d393572ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c393033ull,
0x656c6562616c2064ull,0x5f345f744c242064ull,0x2e090a3230323931ull,0x3309373109636f6cull,
0x6f6d090a30093631ull,0x2509203233732e76ull,0x367225202c343672ull,0x2020202020203b30ull,
0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093731330937ull,0x656e2e7074657309ull,
0x702509203233752eull,0x39337225202c3231ull,0x093b34367225202cull,0x702540090a202f2full,
0x0920617262203231ull,0x38315f345f744c24ull,0x202020203b303936ull,0x0a202f2f09202020ull,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c39303320ull,0x6c6562616c206461ull,0x345f744c24206465ull,0x090a32303239315full,
0x203233752e627573ull,0x25202c3536722509ull,0x38347225202c3572ull,0x2f0920202020203bull,
0x70746573090a202full,0x203233752e71652eull,0x25202c3331702509ull,0x367225202c333572ull,
0x090a202f2f093b35ull,0x7262203331702540ull,0x345f744c24092061ull,0x203b38353439315full,
0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c39303320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x303239315f345f74ull,0x732e766f6d090a32ull,0x3636722509203233ull,0x203b35357225202cull,
0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203233732e766full,0x3b30202c37367225ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x732e766f6d090a20ull,0x3836722509203233ull,
0x202020203b30202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203233732e766full,
0x3b30202c39367225ull,0x2020202020202020ull,0x2f2f092020202020ull,0x312e786574090a20ull,
0x3233662e34762e64ull,0x66257b203233732eull,0x2c333566252c3235ull,0x3566252c34356625ull,
0x50646c6f5b2c7d35ull,0x257b2c786554736full,0x373672252c363672ull,0x72252c383672252cull,
0x2f200a3b5d7d3936ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3320656e696c2079ull,0x64616568202c3930ull,0x64656c6562616c20ull,0x315f345f744c2420ull,
0x6c2e090a32303239ull,0x323309373109636full,0x766f6d090a300930ull,0x662509203233662eull,
0x32356625202c3635ull,0x202020202020203bull,0x0a202f2f09202020ull,0x3233662e766f6d09ull,
0x202c373566250920ull,0x2020203b33356625ull,0x0920202020202020ull,0x766f6d090a202f2full,
0x662509203233662eull,0x34356625202c3835ull,0x202020202020203bull,0x0a202f2f09202020ull,
0x3233732e766f6d09ull,0x202c303772250920ull,0x2020203b35357225ull,0x0920202020202020ull,
0x766f6d090a202f2full,0x722509203233732eull,0x20203b30202c3137ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x202c323772250920ull,0x2020202020203b30ull,
0x0920202020202020ull,0x766f6d090a202f2full,0x722509203233732eull,0x20203b30202c3337ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x2e64312e78657409ull,0x732e3233662e3476ull,
0x393566257b203233ull,0x66252c303666252cull,0x7d323666252c3136ull,0x6c6556646c6f5b2cull,
0x3772257b2c786554ull,0x252c313772252c30ull,0x333772252c323772ull,0x3c2f2f200a3b5d7dull,
0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,0x39303320656e696cull,
0x6c2064616568202cull,0x242064656c656261ull,0x3239315f345f744cull,0x636f6c2e090a3230ull,
0x0931323309373109ull,0x662e766f6d090a30ull,0x3336662509203233ull,0x203b39356625202cull,
0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203233662e766full,0x6625202c34366625ull,
0x20202020203b3036ull,0x2f2f092020202020ull,0x662e766f6d090a20ull,0x3536662509203233ull,
0x203b31366625202cull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3209373109636f6cull,
0x7573090a30093431ull,0x2509203233662e62ull,0x356625202c363666ull,0x203b366625202c37ull,
0x202f2f0920202020ull,0x33662e627573090aull,0x2c37366625092032ull,0x25202c3635662520ull,
0x20202020203b3566ull,0x7573090a202f2f09ull,0x2509203233662e62ull,0x356625202c383666ull,
0x203b376625202c38ull,0x202f2f0920202020ull,0x33662e646461090aull,0x2c39366625092032ull,
0x25202c3234662520ull,0x202020203b323466ull,0x756d090a202f2f09ull,0x2509203233662e6cull,
0x366625202c303766ull,0x3b36366625202c36ull,0x202f2f0920202020ull,0x33662e64616d090aull,
0x2c31376625092032ull,0x25202c3736662520ull,0x376625202c373666ull,0x090a202f2f093b30ull,
0x203233662e64616dull,0x25202c3237662509ull,0x366625202c383666ull,0x3b31376625202c38ull,
0x7173090a202f2f09ull,0x6f727070612e7472ull,0x2509203233662e78ull,0x376625202c333766ull,
0x202f2f0920203b32ull,0x672e70746573090aull,0x2509203233662e74ull,0x366625202c343170ull,
0x3b33376625202c39ull,0x2140090a202f2f09ull,0x6172622034317025ull,0x5f345f744c240920ull,
0x20203b3632323032ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3930332065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x0a32303239315f34ull,0x373109636f6c2e09ull,0x090a300935333209ull,
0x203233662e627573ull,0x25202c3437662509ull,0x316625202c333666ull,0x2f09202020203b32ull,
0x2e627573090a202full,0x3766250920323366ull,0x2c34366625202c35ull,0x20203b3331662520ull,
0x090a202f2f092020ull,0x203233662e627573ull,0x25202c3637662509ull,0x316625202c353666ull,
0x2f09202020203b34ull,0x72717372090a202full,0x786f727070612e74ull,0x662509203233662eull,
0x32376625202c3737ull,0x090a202f2f09203bull,0x203233662e6c756dull,0x25202c3837662509ull,
0x376625202c363666ull,0x2f09202020203b37ull,0x2e6c756d090a202full,0x3766250920323366ull,
0x2c37366625202c39ull,0x20203b3737662520ull,0x090a202f2f092020ull,0x203233662e6c756dull,
0x25202c3038662509ull,0x376625202c383666ull,0x2f09202020203b37ull,0x2e6c756d090a202full,
0x3866250920323366ull,0x2c35376625202c31ull,0x20203b3837662520ull,0x090a202f2f092020ull,
0x203233662e64616dull,0x25202c3238662509ull,0x376625202c393766ull,0x3b31386625202c34ull,
0x616d090a202f2f09ull,0x2509203233662e64ull,0x386625202c333866ull,0x2c36376625202c30ull,
0x2f093b3238662520ull,0x632e646c090a202full,0x3233662e74736e6full,0x202c343866250920ull,
0x2b736d617261705bull,0x202f2f093b5d3639ull,0x70203936343a6469ull,0x78302b736d617261ull,
0x2e6c756d090a3036ull,0x3866250920323366ull,0x2c39376625202c35ull,0x20203b3338662520ull,
0x090a202f2f092020ull,0x203233662e627573ull,0x25202c3638662509ull,0x386625202c343766ull,
0x2f09202020203b35ull,0x2e6c756d090a202full,0x3866250920323366ull,0x2c34386625202c37ull,
0x20203b3638662520ull,0x090a202f2f092020ull,0x203233662e6c756dull,0x25202c3838662509ull,
0x386625202c383766ull,0x2f09202020203b33ull,0x2e627573090a202full,0x3866250920323366ull,
0x2c35376625202c39ull,0x20203b3838662520ull,0x090a202f2f092020ull,0x203233662e6c756dull,
0x25202c3039662509ull,0x386625202c343866ull,0x2f09202020203b39ull,0x2e6c756d090a202full,
0x3966250920323366ull,0x2c30386625202c31ull,0x20203b3338662520ull,0x090a202f2f092020ull,
0x203233662e627573ull,0x25202c3239662509ull,0x396625202c363766ull,0x2f09202020203b31ull,
0x2e6c756d090a202full,0x3966250920323366ull,0x2c34386625202c33ull,0x20203b3239662520ull,
0x090a202f2f092020ull,0x09373109636f6c2eull,0x73090a3009373332ull,0x09203233662e6275ull,
0x6625202c34396625ull,0x33376625202c3936ull,0x2f2f09202020203bull,0x6f632e646c090a20ull,
0x203233662e74736eull,0x5b202c3539662509ull,0x382b736d61726170ull,0x69202f2f093b5d38ull,
0x6170203130353a64ull,0x3578302b736d6172ull,0x662e6c756d090a38ull,0x3639662509203233ull,
0x202c35396625202cull,0x2020203b34396625ull,0x6c090a202f2f0920ull,0x2e74736e6f632e64ull,
0x3966250920323366ull,0x617261705b202c37ull,0x3b5d3030312b736dull,0x343a6469202f2f09ull,
0x6d61726170203036ull,0x090a343678302b73ull,0x74736e6f632e646cull,0x662509203233662eull,
0x7261705b202c3839ull,0x3b5d32392b736d61ull,0x343a6469202f2f09ull,0x6d61726170203836ull,
0x090a633578302b73ull,0x203233662e6c756dull,0x25202c3939662509ull,0x396625202c393766ull,
0x2f09202020203b36ull,0x2e6c756d090a202full,0x3166250920323366ull,0x34376625202c3030ull,
0x203b38396625202cull,0x090a202f2f092020ull,0x203233662e627573ull,0x202c313031662509ull,
0x25202c3030316625ull,0x2f0920203b393966ull,0x2e646461090a202full,0x3166250920323366ull,
0x37386625202c3230ull,0x3b3130316625202cull,0x090a202f2f092020ull,0x203233662e64616dull,
0x202c333031662509ull,0x6625202c37366625ull,0x30316625202c3739ull,0x090a202f2f093b32ull,
0x203233662e6c756dull,0x202c343031662509ull,0x6625202c38376625ull,0x2f092020203b3639ull,
0x2e6c756d090a202full,0x3166250920323366ull,0x35376625202c3530ull,0x203b38396625202cull,
0x090a202f2f092020ull,0x203233662e627573ull,0x202c363031662509ull,0x25202c3530316625ull,
0x2f09203b34303166ull,0x2e646461090a202full,0x3166250920323366ull,0x30396625202c3730ull,
0x3b3630316625202cull,0x090a202f2f092020ull,0x203233662e64616dull,0x202c383031662509ull,
0x6625202c36366625ull,0x30316625202c3739ull,0x090a202f2f093b37ull,0x203233662e6c756dull,
0x202c393031662509ull,0x6625202c30386625ull,0x2f092020203b3639ull,0x2e6c756d090a202full,
0x3166250920323366ull,0x36376625202c3031ull,0x203b38396625202cull,0x090a202f2f092020ull,
0x203233662e627573ull,0x202c313131662509ull,0x25202c3031316625ull,0x2f09203b39303166ull,
0x2e646461090a202full,0x3166250920323366ull,0x33396625202c3231ull,0x3b3131316625202cull,
0x090a202f2f092020ull,0x203233662e64616dull,0x202c333131662509ull,0x6625202c38366625ull,
0x31316625202c3739ull,0x090a202f2f093b32ull,0x20696e752e617262ull,0x315f345f744c2409ull,
0x2020203b30373939ull,0x2f09202020202020ull,0x345f744c240a202full,0x0a3a36323230325full,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c39303320ull,0x6c6562616c206461ull,0x345f744c24206465ull,0x090a32303239315full,
0x203233662e766f6dull,0x202c333131662509ull,0x3030303030306630ull,0x2f092020203b3030ull,
0x766f6d090a30202full,0x662509203233662eull,0x306630202c383031ull,0x3b30303030303030ull,
0x30202f2f09202020ull,0x33662e766f6d090aull,0x3330316625092032ull,0x303030306630202cull,
0x2020203b30303030ull,0x4c240a30202f2f09ull,0x373939315f345f74ull,0x6c3c2f2f200a3a30ull,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c39303320656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x303239315f345f74ull,0x09636f6c2e090a32ull,
0x3009353233093731ull,0x33662e646461090aull,0x2c31356625092032ull,0x202c333031662520ull,
0x2020203b31356625ull,0x6461090a202f2f09ull,0x2509203233662e64ull,0x316625202c303566ull,
0x30356625202c3830ull,0x202f2f092020203bull,0x33662e646461090aull,0x2c39346625092032ull,
0x202c333131662520ull,0x2020203b39346625ull,0x744c240a202f2f09ull,0x38353439315f345full,
0x6f6c3c2f2f200a3aull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x202c39303320656eull,0x62616c2064616568ull,0x744c242064656c65ull,0x32303239315f345full,
0x3109636f6c2e090aull,0x0a30093431330937ull,0x3233752e64646109ull,0x202c333572250920ull,
0x3b31202c33357225ull,0x0920202020202020ull,0x746573090a202f2full,0x3233752e656e2e70ull,
0x202c353170250920ull,0x7225202c30357225ull,0x0a202f2f093b3335ull,0x6220353170254009ull,
0x5f744c2409206172ull,0x3b32303239315f34ull,0x0920202020202020ull,0x3c2f2f200a202f2full,
0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,0x32353320656e696cull,
0x6c2064616568202cull,0x242064656c656261ull,0x3937315f345f744cull,0x2e617262090a3232ull,
0x744c240920696e75ull,0x30393638315f345full,0x202020202020203bull,0x240a202f2f092020ull,
0x3233325f345f744cull,0x3c2f2f200a3a3839ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x32353320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3937315f345f744cull,0x345f744c240a3232ull,0x0a3a30393638315full,0x31355f345f744c24ull,
0x6c3c2f2f200a3a34ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c32353320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x323937315f345f74ull,
0x09636f6c2e090a32ull,0x3009373233093731ull,0x33662e766f6d090aull,0x2c38346625092032ull,
0x20203b3135662520ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,
0x356625202c373466ull,0x2020202020203b30ull,0x202f2f0920202020ull,0x33662e766f6d090aull,
0x2c36346625092032ull,0x20203b3934662520ull,0x2020202020202020ull,0x744c240a202f2f09ull,
0x0a3a3835325f345full,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,
0x656e696c2079646full,0x6568202c32353320ull,0x6c6562616c206461ull,0x345f744c24206465ull,
0x090a32323937315full,0x09373109636f6c2eull,0x61090a3009313633ull,0x09203233662e6464ull,
0x6625202c35346625ull,0x35346625202c3834ull,0x2f2f09202020203bull,0x662e646461090a20ull,
0x3434662509203233ull,0x202c37346625202cull,0x2020203b34346625ull,0x61090a202f2f0920ull,
0x09203233662e6464ull,0x6625202c33346625ull,0x33346625202c3634ull,0x2f2f09202020203bull,
0x732e646461090a20ull,0x3931722509203233ull,0x202c39317225202cull,0x2020202020203b31ull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x3b32202c34377225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233732e656eull,0x7225202c36317025ull,
0x34377225202c3931ull,0x40090a202f2f093bull,0x6172622036317025ull,0x5f345f744c240920ull,
0x20203b3232393731ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c32353320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x34353137315f345full,0x33732e646461090aull,0x2c38317225092032ull,
0x31202c3831722520ull,0x202020202020203bull,0x6f6d090a202f2f09ull,0x2509203233752e76ull,
0x203b32202c353772ull,0x2020202020202020ull,0x202f2f0920202020ull,0x6e2e70746573090aull,
0x2509203233732e65ull,0x317225202c373170ull,0x3b35377225202c38ull,0x2540090a202f2f09ull,
0x2061726220373170ull,0x315f345f744c2409ull,0x2020203b34353137ull,0x202f2f0920202020ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x68202c3235332065ull,0x6562616c20646165ull,0x5f744c242064656cull,0x0a36383336315f34ull,
0x3233732e64646109ull,0x202c373172250920ull,0x3b31202c37317225ull,0x0920202020202020ull,
0x766f6d090a202f2full,0x722509203233752eull,0x20203b32202c3637ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x656e2e7074657309ull,0x702509203233732eull,0x37317225202c3831ull,
0x093b36377225202cull,0x702540090a202f2full,0x0920617262203831ull,0x36315f345f744c24ull,
0x202020203b363833ull,0x0a202f2f09202020ull,0x373109636f6c2e09ull,0x090a300934313209ull,
0x74736e6f632e646cull,0x662509203233662eull,0x61705b202c343131ull,0x5d36312b736d6172ull,
0x3a6469202f2f093bull,0x6172617020323035ull,0x0a303178302b736dull,0x3233662e64646109ull,
0x2c35313166250920ull,0x202c343131662520ull,0x0920203b32346625ull,0x2e646c090a202f2full,
0x33662e74736e6f63ull,0x3631316625092032ull,0x6d617261705b202cull,0x2f2f093b5d342b73ull,
0x203330353a646920ull,0x302b736d61726170ull,0x2e627573090a3478ull,0x3166250920323366ull,
0x31316625202c3731ull,0x203b366625202c36ull,0x090a202f2f092020ull,0x74736e6f632e646cull,
0x662509203233662eull,0x61705b202c383131ull,0x3b5d302b736d6172ull,0x353a6469202f2f09ull,
0x6d61726170203430ull,0x73090a3078302b73ull,0x09203233662e6275ull,0x25202c3931316625ull,
0x6625202c38313166ull,0x2f2f092020203b35ull,0x6f632e646c090a20ull,0x203233662e74736eull,
0x202c303231662509ull,0x2b736d617261705bull,0x69202f2f093b5d38ull,0x6170203530353a64ull,
0x3878302b736d6172ull,0x33662e627573090aull,0x3132316625092032ull,0x2c3032316625202cull,
0x2020203b37662520ull,0x756d090a202f2f09ull,0x2509203233662e6cull,0x6625202c32323166ull,
0x316625202c373131ull,0x202f2f09203b3731ull,0x33662e64616d090aull,0x3332316625092032ull,
0x2c3931316625202cull,0x202c393131662520ull,0x2f093b3232316625ull,0x2e64616d090a202full,
0x3166250920323366ull,0x32316625202c3432ull,0x3132316625202c31ull,0x3b3332316625202cull,
0x7173090a202f2f09ull,0x6f727070612e7472ull,0x2509203233662e78ull,0x6625202c35323166ull,
0x202f2f093b343231ull,0x672e70746573090aull,0x2509203233662e74ull,0x316625202c393170ull,
0x32316625202c3531ull,0x090a202f2f093b35ull,0x6220393170252140ull,0x5f744c2409206172ull,
0x3b32363731325f34ull,0x2f09202020202020ull,0x636f6c2e090a202full,0x0938323209373109ull,
0x662e67656e090a30ull,0x3231662509203233ull,0x3b32316625202c36ull,0x2020202020202020ull,
0x6e090a202f2f0920ull,0x09203233662e6765ull,0x25202c3732316625ull,0x202020203b343166ull,
0x2f2f092020202020ull,0x7472717372090a20ull,0x2e786f727070612eull,0x3166250920323366ull,
0x32316625202c3832ull,0x090a202f2f093b34ull,0x203233662e6c756dull,0x202c393231662509ull,
0x25202c3731316625ull,0x2f09203b38323166ull,0x2e6c756d090a202full,0x3166250920323366ull,
0x31316625202c3033ull,0x3832316625202c39ull,0x090a202f2f09203bull,0x203233662e6c756dull,
0x202c313331662509ull,0x25202c3132316625ull,0x2f09203b38323166ull,0x2e6c756d090a202full,
0x3166250920323366ull,0x32316625202c3233ull,0x3b33316625202c39ull,0x090a202f2f092020ull,
0x203233662e67656eull,0x202c333331662509ull,0x20203b3233316625ull,0x2f09202020202020ull,
0x2e64616d090a202full,0x3166250920323366ull,0x33316625202c3433ull,0x3632316625202c30ull,
0x3b3333316625202cull,0x616d090a202f2f09ull,0x2509203233662e64ull,0x6625202c35333166ull,
0x316625202c313331ull,0x33316625202c3732ull,0x090a202f2f093b34ull,0x203233662e64616dull,
0x202c363331662509ull,0x25202c3033316625ull,0x6625202c35333166ull,0x0a202f2f093b3231ull,
0x3233662e67656e09ull,0x2c37333166250920ull,0x203b363331662520ull,0x0920202020202020ull,
0x64616d090a202f2full,0x662509203233662eull,0x316625202c383331ull,0x33316625202c3932ull,
0x3b33316625202c35ull,0x656e090a202f2f09ull,0x2509203233662e67ull,0x6625202c39333166ull,
0x202020203b383331ull,0x202f2f0920202020ull,0x33662e64616d090aull,0x3034316625092032ull,
0x2c3133316625202cull,0x202c353331662520ull,0x2f2f093b34316625ull,0x662e67656e090a20ull,
0x3431662509203233ull,0x3034316625202c31ull,0x202020202020203bull,0x2e090a202f2f0920ull,
0x3209373109636f6cull,0x7573090a30093533ull,0x2509203233662e62ull,0x6625202c32343166ull,
0x316625202c353131ull,0x202f2f09203b3532ull,0x6e6f632e646c090aull,0x09203233662e7473ull,
0x5b202c3334316625ull,0x382b736d61726170ull,0x69202f2f093b5d38ull,0x6170203130353a64ull,
0x3578302b736d6172ull,0x662e6c756d090a38ull,0x3431662509203233ull,0x3334316625202c34ull,
0x3b3234316625202cull,0x6c090a202f2f0920ull,0x2e74736e6f632e64ull,0x3166250920323366ull,
0x7261705b202c3534ull,0x3b5d32392b736d61ull,0x343a6469202f2f09ull,0x6d61726170203836ull,
0x090a633578302b73ull,0x74736e6f632e646cull,0x662509203233662eull,0x61705b202c363431ull,
0x5d36392b736d6172ull,0x3a6469202f2f093bull,0x6172617020393634ull,0x0a303678302b736dull,
0x3233662e6c756d09ull,0x2c37343166250920ull,0x202c303331662520ull,0x09203b3434316625ull,
0x64616d090a202f2full,0x662509203233662eull,0x316625202c383431ull,0x3534316625202c32ull,
0x3b3734316625202cull,0x756d090a202f2f09ull,0x2509203233662e6cull,0x6625202c39343166ull,
0x316625202c373331ull,0x202f2f09203b3634ull,0x33662e627573090aull,0x3035316625092032ull,
0x2c3934316625202cull,0x203b383431662520ull,0x756d090a202f2f09ull,0x2509203233662e6cull,
0x6625202c31353166ull,0x316625202c393231ull,0x202f2f09203b3434ull,0x33662e64616d090aull,
0x3235316625092032ull,0x202c33316625202cull,0x25202c3534316625ull,0x2f2f093b31353166ull,
0x662e6c756d090a20ull,0x3531662509203233ull,0x3933316625202c33ull,0x3b3634316625202cull,
0x73090a202f2f0920ull,0x09203233662e6275ull,0x25202c3435316625ull,0x6625202c33353166ull,
0x2f2f09203b323531ull,0x662e6c756d090a20ull,0x3531662509203233ull,0x3133316625202c35ull,
0x3b3434316625202cull,0x6d090a202f2f0920ull,0x09203233662e6461ull,0x25202c3635316625ull,
0x316625202c343166ull,0x35316625202c3534ull,0x090a202f2f093b35ull,0x203233662e6c756dull,
0x202c373531662509ull,0x25202c3134316625ull,0x2f09203b36343166ull,0x2e627573090a202full,
0x3166250920323366ull,0x35316625202c3835ull,0x3635316625202c37ull,0x090a202f2f09203bull,
0x20696e752e617262ull,0x325f345f744c2409ull,0x2020203b36303531ull,0x2f09202020202020ull,
0x345f744c240a202full,0x0a3a32363731325full,0x3233662e766f6d09ull,0x2c38353166250920ull,
0x3030303030663020ull,0x092020203b303030ull,0x6f6d090a30202f2full,0x2509203233662e76ull,
0x6630202c34353166ull,0x3030303030303030ull,0x202f2f092020203bull,0x662e766f6d090a30ull,
0x3531662509203233ull,0x3030306630202c30ull,0x20203b3030303030ull,0x240a30202f2f0920ull,
0x3531325f345f744cull,0x6f6c2e090a3a3630ull,0x3037330937310963ull,0x2e646461090a3009ull,
0x3466250920323366ull,0x3035316625202c35ull,0x203b35346625202cull,0x090a202f2f092020ull,
0x203233662e646461ull,0x25202c3434662509ull,0x6625202c34353166ull,0x2f092020203b3434ull,
0x2e646461090a202full,0x3466250920323366ull,0x3835316625202c33ull,0x203b33346625202cull,
0x090a202f2f092020ull,0x09373109636f6c2eull,0x6c090a3009373733ull,0x2e6d617261702e64ull,
0x6472250920343675ull,0x75635f5f5b202c31ull,0x5f5f6d7261706164ull,0x64696c6c6f63385aull,
0x616f6c6636504465ull,0x5f30535f30533474ull,0x6e697535505f3053ull,0x7261705f6a503274ull,
0x736148656c636974ull,0x69202f2f093b5d68ull,0x5f5f203630353a64ull,0x6d72617061647563ull,
0x6c6c6f63385a5f5full,0x6c66365044656469ull,0x535f30533474616full,0x7535505f30535f30ull,
0x705f6a5032746e69ull,0x48656c6369747261ull,0x0a3078302b687361ull,0x3436752e74766309ull,
0x722509203233732eull,0x3b357225202c3264ull,0x0920202020202020ull,0x6c756d090a202f2full,
0x203436752e6f6c2eull,0x25202c3364722509ull,0x203b38202c326472ull,0x0a202f2f09202020ull,
0x3436752e64646109ull,0x202c346472250920ull,0x7225202c31647225ull,0x09202020203b3364ull,
0x2e646c090a202f2full,0x762e6c61626f6c67ull,0x7b09203233752e32ull,0x3772252c37377225ull,
0x6472255b202c7d38ull,0x2f2f093b5d302b34ull,0x732e766f6d090a20ull,0x3937722509203233ull,
0x203b37377225202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,0x09203233732e766full,
0x7225202c30387225ull,0x20202020203b3837ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,
0x3009353733093731ull,0x7261702e646c090aull,0x09203436752e6d61ull,0x5f5b202c35647225ull,
0x726170616475635full,0x6c6f63385a5f5f6dull,0x663650446564696cull,0x5f30533474616f6cull,
0x35505f30535f3053ull,0x5f6a5032746e6975ull,0x3b5d6c655677656eull,0x343a6469202f2f09ull,
0x6475635f5f203037ull,0x5a5f5f6d72617061ull,0x6564696c6c6f6338ull,0x74616f6c66365044ull,
0x535f30535f305334ull,0x746e697535505f30ull,0x5677656e5f6a5032ull,0x090a3078302b6c65ull,
0x203233662e646461ull,0x202c393531662509ull,0x6625202c32316625ull,0x2f092020203b3534ull,
0x2e766f6d090a202full,0x3872250920323373ull,0x3b30387225202c31ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e3436752e747663ull,0x6472250920323375ull,0x3b31387225202c36ull,
0x2f09202020202020ull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x7225202c37647225ull,
0x203b3631202c3664ull,0x090a202f2f092020ull,0x203436752e646461ull,0x25202c3864722509ull,
0x647225202c356472ull,0x2f09202020203b37ull,0x672e7473090a202full,0x33662e6c61626f6cull,
0x386472255b092032ull,0x316625202c5d302bull,0x69202f2f093b3935ull,0x61090a3131353a64ull,
0x09203233662e6464ull,0x25202c3036316625ull,0x346625202c333166ull,0x2f2f092020203b34ull,
0x732e766f6d090a20ull,0x3238722509203233ull,0x203b30387225202cull,0x2020202020202020ull,
0x63090a202f2f0920ull,0x752e3436752e7476ull,0x3964722509203233ull,0x203b32387225202cull,
0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c30316472ull,
0x203b3631202c3964ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3131647225ull,
0x647225202c356472ull,0x2f2f0920203b3031ull,0x6c672e7473090a20ull,0x3233662e6c61626full,
0x31316472255b0920ull,0x316625202c5d342bull,0x69202f2f093b3036ull,0x61090a3231353a64ull,
0x09203233662e6464ull,0x25202c3136316625ull,0x346625202c343166ull,0x2f2f092020203b33ull,
0x732e766f6d090a20ull,0x3338722509203233ull,0x203b30387225202cull,0x2020202020202020ull,
0x63090a202f2f0920ull,0x752e3436752e7476ull,0x3164722509203233ull,0x3b33387225202c32ull,
0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c33316472ull,
0x3b3631202c323164ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3431647225ull,
0x647225202c356472ull,0x2f2f0920203b3331ull,0x6c672e7473090a20ull,0x3233662e6c61626full,
0x34316472255b0920ull,0x316625202c5d382bull,0x69202f2f093b3136ull,0x6d090a3331353a64ull,
0x09203233732e766full,0x7225202c34387225ull,0x20202020203b3038ull,0x2f2f092020202020ull,
0x752e747663090a20ull,0x09203233752e3436ull,0x25202c3531647225ull,0x202020203b343872ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3631647225092034ull,0x2c3531647225202cull,
0x2f2f09203b363120ull,0x752e646461090a20ull,0x3164722509203436ull,0x2c35647225202c37ull,
0x203b363164722520ull,0x73090a202f2f0920ull,0x6c61626f6c672e74ull,0x255b09203233662eull,
0x5d32312b37316472ull,0x093b35316625202cull,0x31353a6469202f2full,0x09636f6c2e090a34ull,
0x3009393733093731ull,0x203b74697865090aull,0x2020202020202020ull,0x2020202020202020ull,
0x2020202020202020ull,0x444c240a202f2f09ull,0x385a5f5f646e6557ull,0x446564696c6c6f63ull,
0x3474616f6c663650ull,0x30535f30535f3053ull,0x32746e697535505full,0x2f207d090a3a6a50ull,
0x6c6f63385a5f202full,0x663650446564696cull,0x5f30533474616f6cull,0x35505f30535f3053ull,
0x0a6a5032746e6975ull,0x7972746e652e090aull,0x69646152385a5f20ull,0x4b3231506d755378ull,
0x5065756c61567965ull,0x28206a6a6a726961ull,0x617261702e09090aull,0x5f203436752e206dull,
0x726170616475635full,0x646152385a5f5f6dull,0x3231506d75537869ull,0x65756c615679654bull,
0x5f6a6a6a72696150ull,0x090a2c6174614470ull,0x206d617261702e09ull,0x635f5f203233752eull,
0x5f6d726170616475ull,0x7869646152385a5full,0x654b3231506d7553ull,0x615065756c615679ull,
0x6c655f6a6a6a7269ull,0x0a2c73746e656d65ull,0x6d617261702e0909ull,0x5f5f203233752e20ull,
0x6d72617061647563ull,0x69646152385a5f5full,0x4b3231506d755378ull,0x5065756c61567965ull,
0x655f6a6a6a726961ull,0x5f73746e656d656cull,0x5f6465646e756f72ull,0x2c323730335f6f74ull,
0x617261702e09090aull,0x5f203233752e206dull,0x726170616475635full,0x646152385a5f5f6dull,
0x3231506d75537869ull,0x65756c615679654bull,0x5f6a6a6a72696150ull,0x090a297466696873ull,
0x206765722e090a7bull,0x687225203631752eull,0x722e090a3b3e333cull,0x203233752e206765ull,
0x3b3e3638313c7225ull,0x2e206765722e090aull,0x3c64722520343675ull,0x722e090a3b3e3035ull,
0x646572702e206765ull,0x3b3e31343c702520ull,0x3109636f6c2e090aull,0x0a30093130310938ull,
0x5a5f5f3142424c24ull,0x7553786964615238ull,0x5679654b3231506dull,0x7269615065756c61ull,
0x6c2e090a3a6a6a6aull,0x303109383109636full,0x747663090a300933ull,0x3631752e3233752eull,
0x25202c3172250920ull,0x20203b782e646974ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,
0x25202c3272250920ull,0x20202020203b3172ull,0x0920202020202020ull,0x766f6d090a202f2full,
0x722509203233752eull,0x3b33323031202c33ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x74672e7074657309ull,0x702509203233752eull,0x202c317225202c31ull,0x092020203b337225ull,
0x702540090a202f2full,0x2409206172622031ull,0x3430325f355f744cull,0x20202020203b3238ull,
0x0a202f2f09202020ull,0x3436752e766f6d09ull,0x202c316472250920ull,0x7553786964615273ull,
0x0920202020203b6dull,0x766f6d090a202f2full,0x722509203233752eull,0x3b37383031202c34ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x3233752e62757309ull,0x25202c3572250920ull,
0x3b317225202c3472ull,0x0920202020202020ull,0x726873090a202f2full,0x722509203233732eull,
0x202c357225202c36ull,0x20202020203b3133ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,
0x36202c3772250920ull,0x2020202020203b33ull,0x0920202020202020ull,0x646e61090a202f2full,
0x722509203233622eull,0x202c367225202c38ull,0x202020203b377225ull,0x0a202f2f09202020ull,
0x3233732e64646109ull,0x25202c3972250920ull,0x3b357225202c3872ull,0x0920202020202020ull,
0x726873090a202f2full,0x722509203233732eull,0x2c397225202c3031ull,0x20202020203b3620ull,
0x0a202f2f09202020ull,0x3436752e74766309ull,0x722509203233752eull,0x3b317225202c3264ull,
0x0920202020202020ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,0x25202c3364722509ull,
0x203b34202c326472ull,0x0a202f2f09202020ull,0x3436752e64646109ull,0x202c346472250920ull,
0x7225202c31647225ull,0x09202020203b3364ull,0x766f6d090a202f2full,0x722509203233732eull,
0x30317225202c3131ull,0x202020202020203bull,0x0a202f2f09202020ull,0x30325f355f744c24ull,
0x2f2f200a3a343939ull,0x4c203e706f6f6c3cull,0x79646f6220706f6full,0x303120656e696c20ull,
0x697473656e202c33ull,0x687470656420676eull,0x747365202c31203aull,0x6920646574616d69ull,
0x6e6f697461726574ull,0x6f6e6b6e75203a73ull,0x636f6c2e090a6e77ull,0x0938303109383109ull,
0x752e766f6d090a30ull,0x3231722509203233ull,0x202020203b30202cull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203233752eull,0x202c5d302b346472ull,
0x2f2f093b32317225ull,0x203437313a646920ull,0x7553786964615273ull,0x61090a3078302b6dull,
0x09203233752e6464ull,0x327225202c327225ull,0x2020203b3436202cull,0x2f2f092020202020ull,
0x752e646461090a20ull,0x3464722509203436ull,0x202c34647225202cull,0x202020203b363532ull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x3031202c33317225ull,0x20202020203b3332ull,
0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233752e656cull,0x327225202c327025ull,
0x203b33317225202cull,0x40090a202f2f0920ull,0x2061726220327025ull,0x325f355f744c2409ull,
0x2020203b34393930ull,0x2f2f092020202020ull,0x5f355f744c240a20ull,0x090a3a3238343032ull,
0x203436752e766f6dull,0x73202c3164722509ull,0x6d75537869646152ull,0x2f0920202020203bull,
0x636f6c2e090a202full,0x0936333109383109ull,0x732e726162090a30ull,0x203b300920636e79ull,
0x2020202020202020ull,0x2020202020202020ull,0x61090a202f2f0920ull,0x09203233622e646eull,
0x7225202c34317225ull,0x20203b3531202c31ull,0x2f2f092020202020ull,0x752e726873090a20ull,
0x3531722509203233ull,0x34202c317225202cull,0x202020202020203bull,0x6d090a202f2f0920ull,
0x09203631752e766full,0x6325202c31687225ull,0x203b782e64696174ull,0x2f2f092020202020ull,
0x772e6c756d090a20ull,0x203631752e656469ull,0x25202c3631722509ull,0x203b34202c316872ull,
0x6c090a202f2f0920ull,0x2e6d617261702e64ull,0x3172250920323375ull,0x75635f5f5b202c37ull,
0x5f5f6d7261706164ull,0x537869646152385aull,0x79654b3231506d75ull,0x69615065756c6156ull,
0x656c655f6a6a6a72ull,0x6f725f73746e656dull,0x6f745f6465646e75ull,0x093b5d323730335full,
0x37313a6469202f2full,0x616475635f5f2036ull,0x385a5f5f6d726170ull,0x6d75537869646152ull,
0x615679654b323150ull,0x6a7269615065756cull,0x656d656c655f6a6aull,0x6e756f725f73746eull,
0x335f6f745f646564ull,0x0a3078302b323730ull,0x3233752e766f6d09ull,0x202c383172250920ull,
0x353536313334312dull,0x092020203b353637ull,0x6c756d090a202f2full,0x203233752e69682eull,
0x25202c3931722509ull,0x317225202c373172ull,0x0a202f2f09203b38ull,0x3233752e72687309ull,
0x202c303272250920ull,0x3b37202c39317225ull,0x0920202020202020ull,0x646461090a202f2full,
0x722509203233752eull,0x35317225202c3132ull,0x203b36317225202cull,0x0a202f2f09202020ull,
0x2e6f6c2e6c756d09ull,0x3272250920323375ull,0x2c30327225202c32ull,0x09203b3132722520ull,
0x646461090a202f2full,0x722509203233752eull,0x34317225202c3332ull,0x203b32327225202cull,
0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x25202c3272250920ull,0x202020203b333272ull,
0x0920202020202020ull,0x646461090a202f2full,0x722509203233752eull,0x30327225202c3432ull,
0x203b32327225202cull,0x0a202f2f09202020ull,0x65672e7074657309ull,0x702509203233752eull,
0x2c33327225202c33ull,0x09203b3432722520ull,0x702540090a202f2full,0x2409206172622033ull,
0x3531325f355f744cull,0x20202020203b3630ull,0x0a202f2f09202020ull,0x3233752e62757309ull,
0x202c353272250920ull,0x7225202c30327225ull,0x09202020203b3431ull,0x646461090a202f2full,
0x722509203233752eull,0x35327225202c3632ull,0x2020203b3531202cull,0x0a202f2f09202020ull,
0x3233732e72687309ull,0x202c373272250920ull,0x3133202c36327225ull,0x092020202020203bull,
0x766f6d090a202f2full,0x722509203233732eull,0x203b3531202c3832ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233622e646e6109ull,0x202c393272250920ull,0x7225202c37327225ull,
0x09202020203b3832ull,0x646461090a202f2full,0x722509203233732eull,0x39327225202c3033ull,
0x203b36327225202cull,0x0a202f2f09202020ull,0x3233732e72687309ull,0x202c313372250920ull,
0x3b34202c30337225ull,0x0920202020202020ull,0x766f6d090a202f2full,0x722509203233752eull,
0x20203b30202c3233ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,
0x702509203233752eull,0x2c34317225202c34ull,0x09203b3233722520ull,0x766f6d090a202f2full,
0x722509203233752eull,0x20203b31202c3333ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x71652e7074657309ull,0x702509203233752eull,0x2c34317225202c35ull,0x09203b3333722520ull,
0x766f6d090a202f2full,0x722509203233752eull,0x20203b32202c3433ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233752eull,0x2c34317225202c36ull,
0x09203b3433722520ull,0x766f6d090a202f2full,0x722509203233752eull,0x20203b33202c3533ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233752eull,
0x2c34317225202c37ull,0x09203b3533722520ull,0x766f6d090a202f2full,0x722509203233752eull,
0x20203b34202c3633ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,
0x702509203233752eull,0x2c34317225202c38ull,0x09203b3633722520ull,0x766f6d090a202f2full,
0x722509203233752eull,0x20203b35202c3733ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x71652e7074657309ull,0x702509203233752eull,0x2c34317225202c39ull,0x09203b3733722520ull,
0x766f6d090a202f2full,0x722509203233752eull,0x20203b36202c3833ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233752eull,0x34317225202c3031ull,
0x093b38337225202cull,0x766f6d090a202f2full,0x722509203233752eull,0x20203b37202c3933ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233752eull,
0x34317225202c3131ull,0x093b39337225202cull,0x766f6d090a202f2full,0x722509203233752eull,
0x20203b38202c3034ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,
0x702509203233752eull,0x34317225202c3231ull,0x093b30347225202cull,0x766f6d090a202f2full,
0x722509203233752eull,0x20203b39202c3134ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x71652e7074657309ull,0x702509203233752eull,0x34317225202c3331ull,0x093b31347225202cull,
0x766f6d090a202f2full,0x722509203233752eull,0x203b3031202c3234ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233752eull,0x34317225202c3431ull,
0x093b32347225202cull,0x766f6d090a202f2full,0x722509203233752eull,0x203b3131202c3334ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233752eull,
0x34317225202c3531ull,0x093b33347225202cull,0x766f6d090a202f2full,0x722509203233752eull,
0x203b3231202c3434ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,
0x702509203233752eull,0x34317225202c3631ull,0x093b34347225202cull,0x766f6d090a202f2full,
0x722509203233752eull,0x203b3331202c3534ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x71652e7074657309ull,0x702509203233752eull,0x34317225202c3731ull,0x093b35347225202cull,
0x766f6d090a202f2full,0x722509203233752eull,0x203b3431202c3634ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233752eull,0x34317225202c3831ull,
0x093b36347225202cull,0x766f6d090a202f2full,0x722509203233752eull,0x203b3531202c3734ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233752eull,
0x34317225202c3931ull,0x093b37347225202cull,0x6c6573090a202f2full,0x2509203233732e70ull,
0x202c31202c383472ull,0x203b347025202c30ull,0x0a202f2f09202020ull,0x33732e706c657309ull,
0x2c39347225092032ull,0x25202c30202c3120ull,0x09202020203b3570ull,0x6c6573090a202f2full,
0x2509203233732e70ull,0x202c31202c303572ull,0x203b367025202c30ull,0x0a202f2f09202020ull,
0x33732e706c657309ull,0x2c31357225092032ull,0x25202c30202c3120ull,0x09202020203b3770ull,
0x6c6573090a202f2full,0x2509203233732e70ull,0x202c31202c323572ull,0x203b387025202c30ull,
0x0a202f2f09202020ull,0x33732e706c657309ull,0x2c33357225092032ull,0x25202c30202c3120ull,
0x09202020203b3970ull,0x6c6573090a202f2full,0x2509203233732e70ull,0x202c31202c343572ull,
0x3b30317025202c30ull,0x0a202f2f09202020ull,0x33732e706c657309ull,0x2c35357225092032ull,
0x25202c30202c3120ull,0x092020203b313170ull,0x6c6573090a202f2full,0x2509203233732e70ull,
0x202c31202c363572ull,0x3b32317025202c30ull,0x0a202f2f09202020ull,0x33732e706c657309ull,
0x2c37357225092032ull,0x25202c30202c3120ull,0x092020203b333170ull,0x6c6573090a202f2full,
0x2509203233732e70ull,0x202c31202c383572ull,0x3b34317025202c30ull,0x0a202f2f09202020ull,
0x33732e706c657309ull,0x2c39357225092032ull,0x25202c30202c3120ull,0x092020203b353170ull,
0x6c6573090a202f2full,0x2509203233732e70ull,0x202c31202c303672ull,0x3b36317025202c30ull,
0x0a202f2f09202020ull,0x33732e706c657309ull,0x2c31367225092032ull,0x25202c30202c3120ull,
0x092020203b373170ull,0x6c6573090a202f2full,0x2509203233732e70ull,0x202c31202c323672ull,
0x3b38317025202c30ull,0x0a202f2f09202020ull,0x33732e706c657309ull,0x2c33367225092032ull,
0x25202c30202c3120ull,0x092020203b393170ull,0x2e646c090a202f2full,0x33752e6d61726170ull,
0x2c34367225092032ull,0x616475635f5f5b20ull,0x385a5f5f6d726170ull,0x6d75537869646152ull,
0x615679654b323150ull,0x6a7269615065756cull,0x656d656c655f6a6aull,0x2f2f093b5d73746eull,
0x203237313a646920ull,0x6170616475635f5full,0x6152385a5f5f6d72ull,0x31506d7553786964ull,
0x756c615679654b32ull,0x6a6a6a7269615065ull,0x746e656d656c655full,0x6d090a3078302b73ull,
0x09203233732e766full,0x7225202c35367225ull,0x20202020203b3133ull,0x2f2f092020202020ull,
0x5f355f744c240a20ull,0x200a3a3831303232ull,0x3e706f6f6c3c2f2full,0x6f6220706f6f4c20ull,
0x20656e696c207964ull,0x73656e202c363331ull,0x70656420676e6974ull,0x65202c31203a6874ull,
0x646574616d697473ull,0x6974617265746920ull,0x6b6e75203a736e6full,0x6573090a6e776f6eull,
0x33752e746c2e7074ull,0x2c30327025092032ull,0x7225202c32722520ull,0x202f2f09203b3436ull,
0x303270252140090aull,0x4c24092061726220ull,0x333532325f355f74ull,0x2020202020203b30ull,
0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x333120656e696c20ull,0x2064616568202c36ull,0x2064656c6562616cull,0x32325f355f744c24ull,
0x6f6c2e090a383130ull,0x3834310938310963ull,0x702e646c090a3009ull,0x3436752e6d617261ull,
0x202c356472250920ull,0x70616475635f5f5bull,0x52385a5f5f6d7261ull,0x506d755378696461ull,
0x6c615679654b3231ull,0x6a6a726961506575ull,0x5d61746144705f6aull,0x3a6469202f2f093bull,
0x75635f5f20373731ull,0x5f5f6d7261706164ull,0x537869646152385aull,0x79654b3231506d75ull,
0x69615065756c6156ull,0x6144705f6a6a6a72ull,0x090a3078302b6174ull,0x2e3436752e747663ull,
0x6472250920323375ull,0x203b327225202c36ull,0x2f09202020202020ull,0x2e6c756d090a202full,
0x09203436752e6f6cull,0x7225202c37647225ull,0x20203b38202c3664ull,0x090a202f2f092020ull,
0x203436752e646461ull,0x25202c3864722509ull,0x647225202c356472ull,0x2f09202020203b37ull,
0x672e646c090a202full,0x33752e6c61626f6cull,0x2c36367225092032ull,0x302b386472255b20ull,
0x6469202f2f093b5dull,0x7262090a3837313aull,0x240920696e752e61ull,0x3232325f355f744cull,
0x20202020203b3437ull,0x202f2f0920202020ull,0x325f355f744c240aull,0x2f200a3a30333532ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,
0x64616568202c3633ull,0x64656c6562616c20ull,0x325f355f744c2420ull,0x6c2e090a38313032ull,
0x353109383109636full,0x766f6d090a300930ull,0x722509203233752eull,0x20203b30202c3636ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x32325f355f744c24ull,0x2f2f200a3a343732ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x333120656e696c20ull,
0x2064616568202c36ull,0x2064656c6562616cull,0x32325f355f744c24ull,0x6c6573090a383130ull,
0x2509203233732e70ull,0x202c31202c373672ull,0x3b30327025202c30ull,0x0a202f2f09202020ull,
0x3233622e646e6109ull,0x202c383672250920ull,0x7225202c37367225ull,0x09202020203b3834ull,
0x766f6d090a202f2full,0x722509203233752eull,0x20203b30202c3936ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,0x38367225202c3132ull,
0x093b39367225202cull,0x702540090a202f2full,0x0920617262203132ull,0x32325f355f744c24ull,
0x202020203b363837ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c36333120ull,0x6c6562616c206461ull,
0x355f744c24206465ull,0x090a38313032325full,0x09383109636f6c2eull,0x6c090a3009333731ull,
0x2e6d617261702e64ull,0x3772250920323373ull,0x75635f5f5b202c30ull,0x5f5f6d7261706164ull,
0x537869646152385aull,0x79654b3231506d75ull,0x69615065756c6156ull,0x6968735f6a6a6a72ull,
0x202f2f093b5d7466ull,0x5f203937313a6469ull,0x726170616475635full,0x646152385a5f5f6dull,
0x3231506d75537869ull,0x65756c615679654bull,0x5f6a6a6a72696150ull,0x78302b7466696873ull,
0x752e726873090a30ull,0x3137722509203233ull,0x202c36367225202cull,0x2020203b30377225ull,
0x61090a202f2f0920ull,0x09203233622e646eull,0x7225202c32377225ull,0x3b353532202c3137ull,
0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203233752e6full,0x377225202c333772ull,
0x2020203b34202c32ull,0x61090a202f2f0920ull,0x09203233752e6464ull,0x7225202c34377225ull,
0x33377225202c3531ull,0x2f2f09202020203bull,0x752e747663090a20ull,0x09203233752e3436ull,
0x7225202c39647225ull,0x20202020203b3437ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,
0x3031647225092034ull,0x202c39647225202cull,0x2f2f092020203b34ull,0x752e646461090a20ull,
0x3164722509203436ull,0x2c31647225202c31ull,0x203b303164722520ull,0x6c090a202f2f0920ull,
0x6465726168732e64ull,0x722509203233752eull,0x6472255b202c3537ull,0x2f093b5d302b3131ull,
0x3038313a6469202full,0x5378696461527320ull,0x090a3078302b6d75ull,0x203233752e646461ull,
0x25202c3637722509ull,0x203b31202c353772ull,0x2f09202020202020ull,0x732e7473090a202full,
0x33752e6465726168ull,0x316472255b092032ull,0x7225202c5d302b31ull,0x69202f2f093b3637ull,
0x5273203138313a64ull,0x2b6d755378696461ull,0x5f744c240a307830ull,0x3a36383732325f35ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x68202c3633312065ull,0x6562616c20646165ull,0x5f744c242064656cull,0x0a38313032325f35ull,
0x383109636f6c2e09ull,0x090a300934373109ull,0x636e79732e726162ull,0x202020203b300920ull,
0x2020202020202020ull,0x2f09202020202020ull,0x2e646e61090a202full,0x3772250920323362ull,
0x2c37367225202c37ull,0x20203b3934722520ull,0x090a202f2f092020ull,0x203233752e766f6dull,
0x30202c3837722509ull,0x202020202020203bull,0x2f09202020202020ull,0x70746573090a202full,
0x203233732e71652eull,0x25202c3232702509ull,0x377225202c373772ull,0x090a202f2f093b38ull,
0x7262203232702540ull,0x355f744c24092061ull,0x203b38393233325full,0x2f09202020202020ull,
0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c36333120656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x313032325f355f74ull,
0x09636f6c2e090a38ull,0x3009363731093831ull,0x7261702e646c090aull,0x09203233732e6d61ull,
0x5f5b202c39377225ull,0x726170616475635full,0x646152385a5f5f6dull,0x3231506d75537869ull,
0x65756c615679654bull,0x5f6a6a6a72696150ull,0x093b5d7466696873ull,0x37313a6469202f2full,
0x616475635f5f2039ull,0x385a5f5f6d726170ull,0x6d75537869646152ull,0x615679654b323150ull,
0x6a7269615065756cull,0x74666968735f6a6aull,0x6873090a3078302bull,0x2509203233752e72ull,
0x367225202c313772ull,0x3b39377225202c36ull,0x202f2f0920202020ull,0x33622e646e61090aull,
0x2c32377225092032ull,0x32202c3137722520ull,0x20202020203b3535ull,0x756d090a202f2f09ull,
0x3233752e6f6c2e6cull,0x202c333772250920ull,0x3b34202c32377225ull,0x202f2f0920202020ull,
0x33752e646461090aull,0x2c30387225092032ull,0x25202c3531722520ull,0x202020203b333772ull,
0x7663090a202f2f09ull,0x33752e3436752e74ull,0x3231647225092032ull,0x203b30387225202cull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c333164ull,
0x20203b34202c3231ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c31316472ull,
0x31647225202c3164ull,0x202f2f0920203b33ull,0x6168732e646c090aull,0x203233752e646572ull,
0x5b202c3138722509ull,0x5d302b3131647225ull,0x3a6469202f2f093bull,0x6461527320323831ull,
0x78302b6d75537869ull,0x752e646461090a30ull,0x3238722509203233ull,0x202c31387225202cull,
0x2020202020203b31ull,0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203233752eull,
0x2c5d302b31316472ull,0x2f093b3238722520ull,0x3338313a6469202full,0x5378696461527320ull,
0x240a3078302b6d75ull,0x3233325f355f744cull,0x3c2f2f200a3a3839ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x36333120656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3032325f355f744cull,0x636f6c2e090a3831ull,0x0937373109383109ull,
0x732e726162090a30ull,0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,
0x61090a202f2f0920ull,0x09203233622e646eull,0x7225202c33387225ull,0x30357225202c3736ull,
0x2f2f09202020203bull,0x752e766f6d090a20ull,0x3438722509203233ull,0x202020203b30202cull,
0x2020202020202020ull,0x73090a202f2f0920ull,0x732e71652e707465ull,0x3332702509203233ull,
0x202c33387225202cull,0x2f2f093b34387225ull,0x3332702540090a20ull,0x4c24092061726220ull,
0x313833325f355f74ull,0x2020202020203b30ull,0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,0x64616568202c3633ull,
0x64656c6562616c20ull,0x325f355f744c2420ull,0x6c2e090a38313032ull,0x373109383109636full,
0x2e646c090a300939ull,0x33732e6d61726170ull,0x2c35387225092032ull,0x616475635f5f5b20ull,
0x385a5f5f6d726170ull,0x6d75537869646152ull,0x615679654b323150ull,0x6a7269615065756cull,
0x74666968735f6a6aull,0x6469202f2f093b5dull,0x635f5f203937313aull,0x5f6d726170616475ull,
0x7869646152385a5full,0x654b3231506d7553ull,0x615065756c615679ull,0x68735f6a6a6a7269ull,
0x0a3078302b746669ull,0x3233752e72687309ull,0x202c313772250920ull,0x7225202c36367225ull,
0x09202020203b3538ull,0x646e61090a202f2full,0x722509203233622eull,0x31377225202c3237ull,
0x20203b353532202cull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,0x3772250920323375ull,
0x2c32377225202c33ull,0x09202020203b3420ull,0x646461090a202f2full,0x722509203233752eull,
0x35317225202c3638ull,0x203b33377225202cull,0x0a202f2f09202020ull,0x3436752e74766309ull,
0x722509203233752eull,0x387225202c343164ull,0x0920202020203b36ull,0x6c756d090a202f2full,
0x203436752e6f6c2eull,0x202c353164722509ull,0x34202c3431647225ull,0x0a202f2f0920203bull,
0x3436752e64646109ull,0x2c31316472250920ull,0x25202c3164722520ull,0x0920203b35316472ull,
0x2e646c090a202f2full,0x752e646572616873ull,0x3738722509203233ull,0x31316472255b202cull,
0x202f2f093b5d302bull,0x73203438313a6469ull,0x6d75537869646152ull,0x6461090a3078302bull,
0x2509203233752e64ull,0x387225202c383872ull,0x2020203b31202c37ull,0x202f2f0920202020ull,
0x6168732e7473090aull,0x203233752e646572ull,0x2b31316472255b09ull,0x38387225202c5d30ull,
0x3a6469202f2f093bull,0x6461527320353831ull,0x78302b6d75537869ull,0x5f355f744c240a30ull,
0x200a3a3031383332ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c363331ull,0x656c6562616c2064ull,0x5f355f744c242064ull,
0x2e090a3831303232ull,0x3109383109636f6cull,0x6162090a30093038ull,0x0920636e79732e72ull,
0x2020202020203b30ull,0x2020202020202020ull,0x202f2f0920202020ull,0x33622e646e61090aull,
0x2c39387225092032ull,0x25202c3736722520ull,0x202020203b313572ull,0x6f6d090a202f2f09ull,
0x2509203233752e76ull,0x203b30202c303972ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x652e70746573090aull,0x2509203233732e71ull,0x387225202c343270ull,0x3b30397225202c39ull,
0x2540090a202f2f09ull,0x2061726220343270ull,0x325f355f744c2409ull,0x2020203b32323334ull,
0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x68202c3633312065ull,0x6562616c20646165ull,0x5f744c242064656cull,
0x0a38313032325f35ull,0x383109636f6c2e09ull,0x090a300932383109ull,0x6d617261702e646cull,
0x722509203233732eull,0x635f5f5b202c3139ull,0x5f6d726170616475ull,0x7869646152385a5full,
0x654b3231506d7553ull,0x615065756c615679ull,0x68735f6a6a6a7269ull,0x2f2f093b5d746669ull,
0x203937313a646920ull,0x6170616475635f5full,0x6152385a5f5f6d72ull,0x31506d7553786964ull,
0x756c615679654b32ull,0x6a6a6a7269615065ull,0x302b74666968735full,0x2e726873090a3078ull,
0x3772250920323375ull,0x2c36367225202c31ull,0x20203b3139722520ull,0x090a202f2f092020ull,
0x203233622e646e61ull,0x25202c3237722509ull,0x353532202c313772ull,0x2f0920202020203bull,
0x2e6c756d090a202full,0x09203233752e6f6cull,0x7225202c33377225ull,0x20203b34202c3237ull,
0x090a202f2f092020ull,0x203233752e646461ull,0x25202c3239722509ull,0x377225202c353172ull,
0x2f09202020203b33ull,0x2e747663090a202full,0x203233752e343675ull,0x202c363164722509ull,
0x2020203b32397225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3164722509203436ull,
0x3631647225202c37ull,0x2f0920203b34202cull,0x2e646461090a202full,0x6472250920343675ull,
0x31647225202c3131ull,0x3b3731647225202cull,0x090a202f2f092020ull,0x65726168732e646cull,
0x2509203233752e64ull,0x72255b202c333972ull,0x093b5d302b313164ull,0x38313a6469202f2full,
0x7869646152732036ull,0x0a3078302b6d7553ull,0x3233752e64646109ull,0x202c343972250920ull,
0x3b31202c33397225ull,0x0920202020202020ull,0x2e7473090a202f2full,0x752e646572616873ull,
0x6472255b09203233ull,0x25202c5d302b3131ull,0x202f2f093b343972ull,0x73203738313a6469ull,
0x6d75537869646152ull,0x744c240a3078302bull,0x32323334325f355full,0x6f6c3c2f2f200a3aull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36333120656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x38313032325f355full,0x3109636f6c2e090aull,
0x0a30093338310938ull,0x6e79732e72616209ull,0x2020203b30092063ull,0x2020202020202020ull,
0x0920202020202020ull,0x646e61090a202f2full,0x722509203233622eull,0x37367225202c3539ull,
0x203b32357225202cull,0x0a202f2f09202020ull,0x3233752e766f6d09ull,0x202c363972250920ull,
0x2020202020203b30ull,0x0920202020202020ull,0x746573090a202f2full,0x3233732e71652e70ull,
0x202c353270250920ull,0x7225202c35397225ull,0x0a202f2f093b3639ull,0x6220353270254009ull,
0x5f744c2409206172ull,0x3b34333834325f35ull,0x0920202020202020ull,0x3c2f2f200a202f2full,
0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,0x36333120656e696cull,
0x6c2064616568202cull,0x242064656c656261ull,0x3032325f355f744cull,0x636f6c2e090a3831ull,
0x0935383109383109ull,0x61702e646c090a30ull,0x203233732e6d6172ull,0x5b202c3739722509ull,
0x6170616475635f5full,0x6152385a5f5f6d72ull,0x31506d7553786964ull,0x756c615679654b32ull,
0x6a6a6a7269615065ull,0x3b5d74666968735full,0x313a6469202f2f09ull,0x6475635f5f203937ull,
0x5a5f5f6d72617061ull,0x7553786964615238ull,0x5679654b3231506dull,0x7269615065756c61ull,
0x666968735f6a6a6aull,0x73090a3078302b74ull,0x09203233752e7268ull,0x7225202c31377225ull,
0x37397225202c3636ull,0x2f2f09202020203bull,0x622e646e61090a20ull,0x3237722509203233ull,
0x202c31377225202cull,0x202020203b353532ull,0x6d090a202f2f0920ull,0x33752e6f6c2e6c75ull,
0x2c33377225092032ull,0x34202c3237722520ull,0x2f2f09202020203bull,0x752e646461090a20ull,
0x3839722509203233ull,0x202c35317225202cull,0x2020203b33377225ull,0x63090a202f2f0920ull,
0x752e3436752e7476ull,0x3164722509203233ull,0x3b38397225202c38ull,0x2f2f092020202020ull,
0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c39316472ull,0x203b34202c383164ull,
0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3131647225ull,0x647225202c316472ull,
0x2f2f0920203b3931ull,0x68732e646c090a20ull,0x3233752e64657261ull,0x202c393972250920ull,
0x302b31316472255bull,0x6469202f2f093b5dull,0x615273203838313aull,0x302b6d7553786964ull,
0x2e646461090a3078ull,0x3172250920323375ull,0x39397225202c3030ull,0x202020203b31202cull,
0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233752e64ull,0x5d302b3131647225ull,
0x3b3030317225202cull,0x313a6469202f2f09ull,0x6964615273203938ull,0x3078302b6d755378ull,
0x325f355f744c240aull,0x2f200a3a34333834ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3120656e696c2079ull,0x64616568202c3633ull,0x64656c6562616c20ull,
0x325f355f744c2420ull,0x6c2e090a38313032ull,0x383109383109636full,0x726162090a300936ull,
0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x3233622e646e6109ull,0x2c31303172250920ull,0x25202c3736722520ull,0x092020203b333572ull,
0x766f6d090a202f2full,0x722509203233752eull,0x203b30202c323031ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,0x30317225202c3632ull,
0x3230317225202c31ull,0x40090a202f2f093bull,0x6172622036327025ull,0x5f355f744c240920ull,
0x20203b3634333532ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36333120656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x38313032325f355full,0x3109636f6c2e090aull,0x0a30093838310938ull,
0x617261702e646c09ull,0x2509203233732e6dull,0x5f5b202c33303172ull,0x726170616475635full,
0x646152385a5f5f6dull,0x3231506d75537869ull,0x65756c615679654bull,0x5f6a6a6a72696150ull,
0x093b5d7466696873ull,0x37313a6469202f2full,0x616475635f5f2039ull,0x385a5f5f6d726170ull,
0x6d75537869646152ull,0x615679654b323150ull,0x6a7269615065756cull,0x74666968735f6a6aull,
0x6873090a3078302bull,0x2509203233752e72ull,0x367225202c313772ull,0x3330317225202c36ull,
0x202f2f092020203bull,0x33622e646e61090aull,0x2c32377225092032ull,0x32202c3137722520ull,
0x20202020203b3535ull,0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,0x202c333772250920ull,
0x3b34202c32377225ull,0x202f2f0920202020ull,0x33752e646461090aull,0x3430317225092032ull,
0x202c35317225202cull,0x2020203b33377225ull,0x7663090a202f2f09ull,0x33752e3436752e74ull,
0x3032647225092032ull,0x3b3430317225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,
0x722509203436752eull,0x647225202c313264ull,0x20203b34202c3032ull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x7225202c31316472ull,0x32647225202c3164ull,0x202f2f0920203b31ull,
0x6168732e646c090aull,0x203233752e646572ull,0x202c353031722509ull,0x302b31316472255bull,
0x6469202f2f093b5dull,0x615273203039313aull,0x302b6d7553786964ull,0x2e646461090a3078ull,
0x3172250920323375ull,0x30317225202c3630ull,0x2020203b31202c35ull,0x090a202f2f092020ull,
0x65726168732e7473ull,0x5b09203233752e64ull,0x5d302b3131647225ull,0x3b3630317225202cull,
0x313a6469202f2f09ull,0x6964615273203139ull,0x3078302b6d755378ull,0x325f355f744c240aull,
0x2f200a3a36343335ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3120656e696c2079ull,0x64616568202c3633ull,0x64656c6562616c20ull,0x325f355f744c2420ull,
0x6c2e090a38313032ull,0x383109383109636full,0x726162090a300939ull,0x300920636e79732eull,
0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,0x3233622e646e6109ull,
0x2c37303172250920ull,0x25202c3736722520ull,0x092020203b343572ull,0x766f6d090a202f2full,
0x722509203233752eull,0x203b30202c383031ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x71652e7074657309ull,0x702509203233732eull,0x30317225202c3732ull,0x3830317225202c37ull,
0x40090a202f2f093bull,0x6172622037327025ull,0x5f355f744c240920ull,0x20203b3835383532ull,
0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c36333120656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x38313032325f355full,0x3109636f6c2e090aull,0x0a30093139310938ull,0x617261702e646c09ull,
0x2509203233732e6dull,0x5f5b202c39303172ull,0x726170616475635full,0x646152385a5f5f6dull,
0x3231506d75537869ull,0x65756c615679654bull,0x5f6a6a6a72696150ull,0x093b5d7466696873ull,
0x37313a6469202f2full,0x616475635f5f2039ull,0x385a5f5f6d726170ull,0x6d75537869646152ull,
0x615679654b323150ull,0x6a7269615065756cull,0x74666968735f6a6aull,0x6873090a3078302bull,
0x2509203233752e72ull,0x367225202c313772ull,0x3930317225202c36ull,0x202f2f092020203bull,
0x33622e646e61090aull,0x2c32377225092032ull,0x32202c3137722520ull,0x20202020203b3535ull,
0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,0x202c333772250920ull,0x3b34202c32377225ull,
0x202f2f0920202020ull,0x33752e646461090aull,0x3031317225092032ull,0x202c35317225202cull,
0x2020203b33377225ull,0x7663090a202f2f09ull,0x33752e3436752e74ull,0x3232647225092032ull,
0x3b3031317225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x647225202c333264ull,0x20203b34202c3232ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c31316472ull,0x32647225202c3164ull,0x202f2f0920203b33ull,0x6168732e646c090aull,
0x203233752e646572ull,0x202c313131722509ull,0x302b31316472255bull,0x6469202f2f093b5dull,
0x615273203239313aull,0x302b6d7553786964ull,0x2e646461090a3078ull,0x3172250920323375ull,
0x31317225202c3231ull,0x2020203b31202c31ull,0x090a202f2f092020ull,0x65726168732e7473ull,
0x5b09203233752e64ull,0x5d302b3131647225ull,0x3b3231317225202cull,0x313a6469202f2f09ull,
0x6964615273203339ull,0x3078302b6d755378ull,0x325f355f744c240aull,0x2f200a3a38353835ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,
0x64616568202c3633ull,0x64656c6562616c20ull,0x325f355f744c2420ull,0x6c2e090a38313032ull,
0x393109383109636full,0x726162090a300932ull,0x300920636e79732eull,0x202020202020203bull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x3233622e646e6109ull,0x2c33313172250920ull,
0x25202c3736722520ull,0x092020203b353572ull,0x766f6d090a202f2full,0x722509203233752eull,
0x203b30202c343131ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,
0x702509203233732eull,0x31317225202c3832ull,0x3431317225202c33ull,0x40090a202f2f093bull,
0x6172622038327025ull,0x5f355f744c240920ull,0x20203b3037333632ull,0x2f2f092020202020ull,
0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x202c36333120656eull,0x62616c2064616568ull,0x744c242064656c65ull,0x38313032325f355full,
0x3109636f6c2e090aull,0x0a30093439310938ull,0x617261702e646c09ull,0x2509203233732e6dull,
0x5f5b202c35313172ull,0x726170616475635full,0x646152385a5f5f6dull,0x3231506d75537869ull,
0x65756c615679654bull,0x5f6a6a6a72696150ull,0x093b5d7466696873ull,0x37313a6469202f2full,
0x616475635f5f2039ull,0x385a5f5f6d726170ull,0x6d75537869646152ull,0x615679654b323150ull,
0x6a7269615065756cull,0x74666968735f6a6aull,0x6873090a3078302bull,0x2509203233752e72ull,
0x367225202c313772ull,0x3531317225202c36ull,0x202f2f092020203bull,0x33622e646e61090aull,
0x2c32377225092032ull,0x32202c3137722520ull,0x20202020203b3535ull,0x756d090a202f2f09ull,
0x3233752e6f6c2e6cull,0x202c333772250920ull,0x3b34202c32377225ull,0x202f2f0920202020ull,
0x33752e646461090aull,0x3631317225092032ull,0x202c35317225202cull,0x2020203b33377225ull,
0x7663090a202f2f09ull,0x33752e3436752e74ull,0x3432647225092032ull,0x3b3631317225202cull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c353264ull,
0x20203b34202c3432ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c31316472ull,
0x32647225202c3164ull,0x202f2f0920203b35ull,0x6168732e646c090aull,0x203233752e646572ull,
0x202c373131722509ull,0x302b31316472255bull,0x6469202f2f093b5dull,0x615273203439313aull,
0x302b6d7553786964ull,0x2e646461090a3078ull,0x3172250920323375ull,0x31317225202c3831ull,
0x2020203b31202c37ull,0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233752e64ull,
0x5d302b3131647225ull,0x3b3831317225202cull,0x313a6469202f2f09ull,0x6964615273203539ull,
0x3078302b6d755378ull,0x325f355f744c240aull,0x2f200a3a30373336ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,0x64616568202c3633ull,
0x64656c6562616c20ull,0x325f355f744c2420ull,0x6c2e090a38313032ull,0x393109383109636full,
0x726162090a300935ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233622e646e6109ull,0x2c39313172250920ull,0x25202c3736722520ull,
0x092020203b363572ull,0x766f6d090a202f2full,0x722509203233752eull,0x203b30202c303231ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,
0x31317225202c3932ull,0x3032317225202c39ull,0x40090a202f2f093bull,0x6172622039327025ull,
0x5f355f744c240920ull,0x20203b3238383632ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36333120656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x38313032325f355full,0x3109636f6c2e090aull,
0x0a30093739310938ull,0x617261702e646c09ull,0x2509203233732e6dull,0x5f5b202c31323172ull,
0x726170616475635full,0x646152385a5f5f6dull,0x3231506d75537869ull,0x65756c615679654bull,
0x5f6a6a6a72696150ull,0x093b5d7466696873ull,0x37313a6469202f2full,0x616475635f5f2039ull,
0x385a5f5f6d726170ull,0x6d75537869646152ull,0x615679654b323150ull,0x6a7269615065756cull,
0x74666968735f6a6aull,0x6873090a3078302bull,0x2509203233752e72ull,0x367225202c313772ull,
0x3132317225202c36ull,0x202f2f092020203bull,0x33622e646e61090aull,0x2c32377225092032ull,
0x32202c3137722520ull,0x20202020203b3535ull,0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,
0x202c333772250920ull,0x3b34202c32377225ull,0x202f2f0920202020ull,0x33752e646461090aull,
0x3232317225092032ull,0x202c35317225202cull,0x2020203b33377225ull,0x7663090a202f2f09ull,
0x33752e3436752e74ull,0x3632647225092032ull,0x3b3232317225202cull,0x202f2f0920202020ull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c373264ull,0x20203b34202c3632ull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c31316472ull,0x32647225202c3164ull,
0x202f2f0920203b37ull,0x6168732e646c090aull,0x203233752e646572ull,0x202c333231722509ull,
0x302b31316472255bull,0x6469202f2f093b5dull,0x615273203639313aull,0x302b6d7553786964ull,
0x2e646461090a3078ull,0x3172250920323375ull,0x32317225202c3432ull,0x2020203b31202c33ull,
0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233752e64ull,0x5d302b3131647225ull,
0x3b3432317225202cull,0x313a6469202f2f09ull,0x6964615273203739ull,0x3078302b6d755378ull,
0x325f355f744c240aull,0x2f200a3a32383836ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3120656e696c2079ull,0x64616568202c3633ull,0x64656c6562616c20ull,
0x325f355f744c2420ull,0x6c2e090a38313032ull,0x393109383109636full,0x726162090a300938ull,
0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x3233622e646e6109ull,0x2c35323172250920ull,0x25202c3736722520ull,0x092020203b373572ull,
0x766f6d090a202f2full,0x722509203233752eull,0x203b30202c363231ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,0x32317225202c3033ull,
0x3632317225202c35ull,0x40090a202f2f093bull,0x6172622030337025ull,0x5f355f744c240920ull,
0x20203b3439333732ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36333120656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x38313032325f355full,0x3109636f6c2e090aull,0x0a30093030320938ull,
0x617261702e646c09ull,0x2509203233732e6dull,0x5f5b202c37323172ull,0x726170616475635full,
0x646152385a5f5f6dull,0x3231506d75537869ull,0x65756c615679654bull,0x5f6a6a6a72696150ull,
0x093b5d7466696873ull,0x37313a6469202f2full,0x616475635f5f2039ull,0x385a5f5f6d726170ull,
0x6d75537869646152ull,0x615679654b323150ull,0x6a7269615065756cull,0x74666968735f6a6aull,
0x6873090a3078302bull,0x2509203233752e72ull,0x367225202c313772ull,0x3732317225202c36ull,
0x202f2f092020203bull,0x33622e646e61090aull,0x2c32377225092032ull,0x32202c3137722520ull,
0x20202020203b3535ull,0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,0x202c333772250920ull,
0x3b34202c32377225ull,0x202f2f0920202020ull,0x33752e646461090aull,0x3832317225092032ull,
0x202c35317225202cull,0x2020203b33377225ull,0x7663090a202f2f09ull,0x33752e3436752e74ull,
0x3832647225092032ull,0x3b3832317225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,
0x722509203436752eull,0x647225202c393264ull,0x20203b34202c3832ull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x7225202c31316472ull,0x32647225202c3164ull,0x202f2f0920203b39ull,
0x6168732e646c090aull,0x203233752e646572ull,0x202c393231722509ull,0x302b31316472255bull,
0x6469202f2f093b5dull,0x615273203839313aull,0x302b6d7553786964ull,0x2e646461090a3078ull,
0x3172250920323375ull,0x32317225202c3033ull,0x2020203b31202c39ull,0x090a202f2f092020ull,
0x65726168732e7473ull,0x5b09203233752e64ull,0x5d302b3131647225ull,0x3b3033317225202cull,
0x313a6469202f2f09ull,0x6964615273203939ull,0x3078302b6d755378ull,0x325f355f744c240aull,
0x2f200a3a34393337ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3120656e696c2079ull,0x64616568202c3633ull,0x64656c6562616c20ull,0x325f355f744c2420ull,
0x6c2e090a38313032ull,0x303209383109636full,0x726162090a300931ull,0x300920636e79732eull,
0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,0x3233622e646e6109ull,
0x2c31333172250920ull,0x25202c3736722520ull,0x092020203b383572ull,0x766f6d090a202f2full,
0x722509203233752eull,0x203b30202c323331ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x71652e7074657309ull,0x702509203233732eull,0x33317225202c3133ull,0x3233317225202c31ull,
0x40090a202f2f093bull,0x6172622031337025ull,0x5f355f744c240920ull,0x20203b3630393732ull,
0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c36333120656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x38313032325f355full,0x3109636f6c2e090aull,0x0a30093330320938ull,0x617261702e646c09ull,
0x2509203233732e6dull,0x5f5b202c33333172ull,0x726170616475635full,0x646152385a5f5f6dull,
0x3231506d75537869ull,0x65756c615679654bull,0x5f6a6a6a72696150ull,0x093b5d7466696873ull,
0x37313a6469202f2full,0x616475635f5f2039ull,0x385a5f5f6d726170ull,0x6d75537869646152ull,
0x615679654b323150ull,0x6a7269615065756cull,0x74666968735f6a6aull,0x6873090a3078302bull,
0x2509203233752e72ull,0x367225202c313772ull,0x3333317225202c36ull,0x202f2f092020203bull,
0x33622e646e61090aull,0x2c32377225092032ull,0x32202c3137722520ull,0x20202020203b3535ull,
0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,0x202c333772250920ull,0x3b34202c32377225ull,
0x202f2f0920202020ull,0x33752e646461090aull,0x3433317225092032ull,0x202c35317225202cull,
0x2020203b33377225ull,0x7663090a202f2f09ull,0x33752e3436752e74ull,0x3033647225092032ull,
0x3b3433317225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x647225202c313364ull,0x20203b34202c3033ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c31316472ull,0x33647225202c3164ull,0x202f2f0920203b31ull,0x6168732e646c090aull,
0x203233752e646572ull,0x202c353331722509ull,0x302b31316472255bull,0x6469202f2f093b5dull,
0x615273203030323aull,0x302b6d7553786964ull,0x2e646461090a3078ull,0x3172250920323375ull,
0x33317225202c3633ull,0x2020203b31202c35ull,0x090a202f2f092020ull,0x65726168732e7473ull,
0x5b09203233752e64ull,0x5d302b3131647225ull,0x3b3633317225202cull,0x323a6469202f2f09ull,
0x6964615273203130ull,0x3078302b6d755378ull,0x325f355f744c240aull,0x2f200a3a36303937ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,
0x64616568202c3633ull,0x64656c6562616c20ull,0x325f355f744c2420ull,0x6c2e090a38313032ull,
0x303209383109636full,0x726162090a300934ull,0x300920636e79732eull,0x202020202020203bull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x3233622e646e6109ull,0x2c37333172250920ull,
0x25202c3736722520ull,0x092020203b393572ull,0x766f6d090a202f2full,0x722509203233752eull,
0x203b30202c383331ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,
0x702509203233732eull,0x33317225202c3233ull,0x3833317225202c37ull,0x40090a202f2f093bull,
0x6172622032337025ull,0x5f355f744c240920ull,0x20203b3831343832ull,0x2f2f092020202020ull,
0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x202c36333120656eull,0x62616c2064616568ull,0x744c242064656c65ull,0x38313032325f355full,
0x3109636f6c2e090aull,0x0a30093630320938ull,0x617261702e646c09ull,0x2509203233732e6dull,
0x5f5b202c39333172ull,0x726170616475635full,0x646152385a5f5f6dull,0x3231506d75537869ull,
0x65756c615679654bull,0x5f6a6a6a72696150ull,0x093b5d7466696873ull,0x37313a6469202f2full,
0x616475635f5f2039ull,0x385a5f5f6d726170ull,0x6d75537869646152ull,0x615679654b323150ull,
0x6a7269615065756cull,0x74666968735f6a6aull,0x6873090a3078302bull,0x2509203233752e72ull,
0x367225202c313772ull,0x3933317225202c36ull,0x202f2f092020203bull,0x33622e646e61090aull,
0x2c32377225092032ull,0x32202c3137722520ull,0x20202020203b3535ull,0x756d090a202f2f09ull,
0x3233752e6f6c2e6cull,0x202c333772250920ull,0x3b34202c32377225ull,0x202f2f0920202020ull,
0x33752e646461090aull,0x3034317225092032ull,0x202c35317225202cull,0x2020203b33377225ull,
0x7663090a202f2f09ull,0x33752e3436752e74ull,0x3233647225092032ull,0x3b3034317225202cull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c333364ull,
0x20203b34202c3233ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c31316472ull,
0x33647225202c3164ull,0x202f2f0920203b33ull,0x6168732e646c090aull,0x203233752e646572ull,
0x202c313431722509ull,0x302b31316472255bull,0x6469202f2f093b5dull,0x615273203230323aull,
0x302b6d7553786964ull,0x2e646461090a3078ull,0x3172250920323375ull,0x34317225202c3234ull,
0x2020203b31202c31ull,0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233752e64ull,
0x5d302b3131647225ull,0x3b3234317225202cull,0x323a6469202f2f09ull,0x6964615273203330ull,
0x3078302b6d755378ull,0x325f355f744c240aull,0x2f200a3a38313438ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,0x64616568202c3633ull,
0x64656c6562616c20ull,0x325f355f744c2420ull,0x6c2e090a38313032ull,0x303209383109636full,
0x726162090a300937ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233622e646e6109ull,0x2c33343172250920ull,0x25202c3736722520ull,
0x092020203b303672ull,0x766f6d090a202f2full,0x722509203233752eull,0x203b30202c343431ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,
0x34317225202c3333ull,0x3434317225202c33ull,0x40090a202f2f093bull,0x6172622033337025ull,
0x5f355f744c240920ull,0x20203b3033393832ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36333120656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x38313032325f355full,0x3109636f6c2e090aull,
0x0a30093930320938ull,0x617261702e646c09ull,0x2509203233732e6dull,0x5f5b202c35343172ull,
0x726170616475635full,0x646152385a5f5f6dull,0x3231506d75537869ull,0x65756c615679654bull,
0x5f6a6a6a72696150ull,0x093b5d7466696873ull,0x37313a6469202f2full,0x616475635f5f2039ull,
0x385a5f5f6d726170ull,0x6d75537869646152ull,0x615679654b323150ull,0x6a7269615065756cull,
0x74666968735f6a6aull,0x6873090a3078302bull,0x2509203233752e72ull,0x367225202c313772ull,
0x3534317225202c36ull,0x202f2f092020203bull,0x33622e646e61090aull,0x2c32377225092032ull,
0x32202c3137722520ull,0x20202020203b3535ull,0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,
0x202c333772250920ull,0x3b34202c32377225ull,0x202f2f0920202020ull,0x33752e646461090aull,
0x3634317225092032ull,0x202c35317225202cull,0x2020203b33377225ull,0x7663090a202f2f09ull,
0x33752e3436752e74ull,0x3433647225092032ull,0x3b3634317225202cull,0x202f2f0920202020ull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c353364ull,0x20203b34202c3433ull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c31316472ull,0x33647225202c3164ull,
0x202f2f0920203b35ull,0x6168732e646c090aull,0x203233752e646572ull,0x202c373431722509ull,
0x302b31316472255bull,0x6469202f2f093b5dull,0x615273203430323aull,0x302b6d7553786964ull,
0x2e646461090a3078ull,0x3172250920323375ull,0x34317225202c3834ull,0x2020203b31202c37ull,
0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233752e64ull,0x5d302b3131647225ull,
0x3b3834317225202cull,0x323a6469202f2f09ull,0x6964615273203530ull,0x3078302b6d755378ull,
0x325f355f744c240aull,0x2f200a3a30333938ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3120656e696c2079ull,0x64616568202c3633ull,0x64656c6562616c20ull,
0x325f355f744c2420ull,0x6c2e090a38313032ull,0x313209383109636full,0x726162090a300930ull,
0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x3233622e646e6109ull,0x2c39343172250920ull,0x25202c3736722520ull,0x092020203b313672ull,
0x766f6d090a202f2full,0x722509203233752eull,0x203b30202c303531ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,0x34317225202c3433ull,
0x3035317225202c39ull,0x40090a202f2f093bull,0x6172622034337025ull,0x5f355f744c240920ull,
0x20203b3234343932ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c36333120656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x38313032325f355full,0x3109636f6c2e090aull,0x0a30093231320938ull,
0x617261702e646c09ull,0x2509203233732e6dull,0x5f5b202c31353172ull,0x726170616475635full,
0x646152385a5f5f6dull,0x3231506d75537869ull,0x65756c615679654bull,0x5f6a6a6a72696150ull,
0x093b5d7466696873ull,0x37313a6469202f2full,0x616475635f5f2039ull,0x385a5f5f6d726170ull,
0x6d75537869646152ull,0x615679654b323150ull,0x6a7269615065756cull,0x74666968735f6a6aull,
0x6873090a3078302bull,0x2509203233752e72ull,0x367225202c313772ull,0x3135317225202c36ull,
0x202f2f092020203bull,0x33622e646e61090aull,0x2c32377225092032ull,0x32202c3137722520ull,
0x20202020203b3535ull,0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,0x202c333772250920ull,
0x3b34202c32377225ull,0x202f2f0920202020ull,0x33752e646461090aull,0x3235317225092032ull,
0x202c35317225202cull,0x2020203b33377225ull,0x7663090a202f2f09ull,0x33752e3436752e74ull,
0x3633647225092032ull,0x3b3235317225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,
0x722509203436752eull,0x647225202c373364ull,0x20203b34202c3633ull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x7225202c31316472ull,0x33647225202c3164ull,0x202f2f0920203b37ull,
0x6168732e646c090aull,0x203233752e646572ull,0x202c333531722509ull,0x302b31316472255bull,
0x6469202f2f093b5dull,0x615273203630323aull,0x302b6d7553786964ull,0x2e646461090a3078ull,
0x3172250920323375ull,0x35317225202c3435ull,0x2020203b31202c33ull,0x090a202f2f092020ull,
0x65726168732e7473ull,0x5b09203233752e64ull,0x5d302b3131647225ull,0x3b3435317225202cull,
0x323a6469202f2f09ull,0x6964615273203730ull,0x3078302b6d755378ull,0x325f355f744c240aull,
0x2f200a3a32343439ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3120656e696c2079ull,0x64616568202c3633ull,0x64656c6562616c20ull,0x325f355f744c2420ull,
0x6c2e090a38313032ull,0x313209383109636full,0x726162090a300933ull,0x300920636e79732eull,
0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,0x3233622e646e6109ull,
0x2c35353172250920ull,0x25202c3736722520ull,0x092020203b323672ull,0x766f6d090a202f2full,
0x722509203233752eull,0x203b30202c363531ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x71652e7074657309ull,0x702509203233732eull,0x35317225202c3533ull,0x3635317225202c35ull,
0x40090a202f2f093bull,0x6172622035337025ull,0x5f355f744c240920ull,0x20203b3435393932ull,
0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c36333120656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x38313032325f355full,0x3109636f6c2e090aull,0x0a30093531320938ull,0x617261702e646c09ull,
0x2509203233732e6dull,0x5f5b202c37353172ull,0x726170616475635full,0x646152385a5f5f6dull,
0x3231506d75537869ull,0x65756c615679654bull,0x5f6a6a6a72696150ull,0x093b5d7466696873ull,
0x37313a6469202f2full,0x616475635f5f2039ull,0x385a5f5f6d726170ull,0x6d75537869646152ull,
0x615679654b323150ull,0x6a7269615065756cull,0x74666968735f6a6aull,0x6873090a3078302bull,
0x2509203233752e72ull,0x367225202c313772ull,0x3735317225202c36ull,0x202f2f092020203bull,
0x33622e646e61090aull,0x2c32377225092032ull,0x32202c3137722520ull,0x20202020203b3535ull,
0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,0x202c333772250920ull,0x3b34202c32377225ull,
0x202f2f0920202020ull,0x33752e646461090aull,0x3835317225092032ull,0x202c35317225202cull,
0x2020203b33377225ull,0x7663090a202f2f09ull,0x33752e3436752e74ull,0x3833647225092032ull,
0x3b3835317225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x647225202c393364ull,0x20203b34202c3833ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c31316472ull,0x33647225202c3164ull,0x202f2f0920203b39ull,0x6168732e646c090aull,
0x203233752e646572ull,0x202c393531722509ull,0x302b31316472255bull,0x6469202f2f093b5dull,
0x615273203830323aull,0x302b6d7553786964ull,0x2e646461090a3078ull,0x3172250920323375ull,
0x35317225202c3036ull,0x2020203b31202c39ull,0x090a202f2f092020ull,0x65726168732e7473ull,
0x5b09203233752e64ull,0x5d302b3131647225ull,0x3b3036317225202cull,0x323a6469202f2f09ull,
0x6964615273203930ull,0x3078302b6d755378ull,0x325f355f744c240aull,0x2f200a3a34353939ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,
0x64616568202c3633ull,0x64656c6562616c20ull,0x325f355f744c2420ull,0x6c2e090a38313032ull,
0x313209383109636full,0x726162090a300936ull,0x300920636e79732eull,0x202020202020203bull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x3233622e646e6109ull,0x2c31363172250920ull,
0x25202c3736722520ull,0x092020203b333672ull,0x766f6d090a202f2full,0x722509203233752eull,
0x203b30202c323631ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,
0x702509203233732eull,0x36317225202c3633ull,0x3236317225202c31ull,0x40090a202f2f093bull,
0x6172622036337025ull,0x5f355f744c240920ull,0x20203b3636343033ull,0x2f2f092020202020ull,
0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x202c36333120656eull,0x62616c2064616568ull,0x744c242064656c65ull,0x38313032325f355full,
0x3109636f6c2e090aull,0x0a30093831320938ull,0x617261702e646c09ull,0x2509203233732e6dull,
0x5f5b202c33363172ull,0x726170616475635full,0x646152385a5f5f6dull,0x3231506d75537869ull,
0x65756c615679654bull,0x5f6a6a6a72696150ull,0x093b5d7466696873ull,0x37313a6469202f2full,
0x616475635f5f2039ull,0x385a5f5f6d726170ull,0x6d75537869646152ull,0x615679654b323150ull,
0x6a7269615065756cull,0x74666968735f6a6aull,0x6873090a3078302bull,0x2509203233752e72ull,
0x367225202c313772ull,0x3336317225202c36ull,0x202f2f092020203bull,0x33622e646e61090aull,
0x2c32377225092032ull,0x32202c3137722520ull,0x20202020203b3535ull,0x756d090a202f2f09ull,
0x3233752e6f6c2e6cull,0x202c333772250920ull,0x3b34202c32377225ull,0x202f2f0920202020ull,
0x33752e646461090aull,0x3436317225092032ull,0x202c35317225202cull,0x2020203b33377225ull,
0x7663090a202f2f09ull,0x33752e3436752e74ull,0x3034647225092032ull,0x3b3436317225202cull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c313464ull,
0x20203b34202c3034ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c31316472ull,
0x34647225202c3164ull,0x202f2f0920203b31ull,0x6168732e646c090aull,0x203233752e646572ull,
0x202c353631722509ull,0x302b31316472255bull,0x6469202f2f093b5dull,0x615273203031323aull,
0x302b6d7553786964ull,0x2e646461090a3078ull,0x3172250920323375ull,0x36317225202c3636ull,
0x2020203b31202c35ull,0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233752e64ull,
0x5d302b3131647225ull,0x3b3636317225202cull,0x323a6469202f2f09ull,0x6964615273203131ull,
0x3078302b6d755378ull,0x335f355f744c240aull,0x2f200a3a36363430ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,0x64616568202c3633ull,
0x64656c6562616c20ull,0x325f355f744c2420ull,0x6c2e090a38313032ull,0x313209383109636full,
0x726162090a300939ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233752e64646109ull,0x25202c3272250920ull,0x203b3631202c3272ull,
0x0920202020202020ull,0x746573090a202f2full,0x3233752e74672e70ull,0x202c373370250920ull,
0x7225202c34327225ull,0x0a202f2f09203b32ull,0x6220373370254009ull,0x5f744c2409206172ull,
0x3b38313032325f35ull,0x0920202020202020ull,0x5f744c240a202f2full,0x3a36303531325f35ull,
0x3109636f6c2e090aull,0x0a30093833320938ull,0x3233752e72687309ull,0x2c37363172250920ull,
0x3b32202c31722520ull,0x0920202020202020ull,0x766f6d090a202f2full,0x722509203233752eull,
0x353532202c383631ull,0x202020202020203bull,0x0a202f2f09202020ull,0x74672e7074657309ull,
0x702509203233752eull,0x36317225202c3833ull,0x3836317225202c37ull,0x40090a202f2f093bull,
0x6172622038337025ull,0x5f355f744c240920ull,0x20203b3433323133ull,0x2f2f092020202020ull,
0x752e766f6d090a20ull,0x3631722509203233ull,0x203b313732202c39ull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x09203233752e6275ull,0x25202c3037317225ull,0x7225202c39363172ull,
0x2f2f09203b373631ull,0x732e726873090a20ull,0x3731722509203233ull,0x3037317225202c31ull,
0x2020203b3133202cull,0x6d090a202f2f0920ull,0x09203233732e766full,0x31202c3237317225ull,
0x2020202020203b35ull,0x2f2f092020202020ull,0x622e646e61090a20ull,0x3731722509203233ull,
0x3137317225202c33ull,0x3b3237317225202cull,0x61090a202f2f0920ull,0x09203233732e6464ull,
0x25202c3437317225ull,0x7225202c33373172ull,0x2f2f09203b303731ull,0x732e726873090a20ull,
0x3731722509203233ull,0x3437317225202c35ull,0x202020203b34202cull,0x61090a202f2f0920ull,
0x09203233622e646eull,0x25202c3637317225ull,0x20203b33202c3172ull,0x2f2f092020202020ull,
0x34326c756d090a20ull,0x203233752e6f6c2eull,0x202c373731722509ull,0x34202c3736317225ull,
0x6d090a202f2f093bull,0x2e6f6c2e34326c75ull,0x3172250920323375ull,0x36317225202c3837ull,
0x093b323931202c37ull,0x646461090a202f2full,0x722509203233752eull,0x317225202c393731ull,
0x3837317225202c36ull,0x0a202f2f0920203bull,0x3233752e64646109ull,0x2c30383172250920ull,
0x202c363731722520ull,0x09203b3737317225ull,0x747663090a202f2full,0x3233752e3436752eull,
0x2c32346472250920ull,0x203b303831722520ull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,
0x6472250920343675ull,0x34647225202c3334ull,0x0920203b34202c32ull,0x646461090a202f2full,
0x722509203436752eull,0x647225202c343464ull,0x3334647225202c31ull,0x0a202f2f0920203bull,
0x3436752e766f6d09ull,0x2c35346472250920ull,0x5378696461526420ull,0x09202020203b6d75ull,
0x646461090a202f2full,0x722509203233752eull,0x317225202c313831ull,0x37317225202c3637ull,
0x0a202f2f09203b39ull,0x3436752e74766309ull,0x722509203233752eull,0x317225202c363464ull,
0x09202020203b3138ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,0x202c373464722509ull,
0x34202c3634647225ull,0x0a202f2f0920203bull,0x3436752e64646109ull,0x2c38346472250920ull,
0x202c353464722520ull,0x09203b3734647225ull,0x766f6d090a202f2full,0x722509203233732eull,
0x317225202c323831ull,0x20202020203b3537ull,0x0a202f2f09202020ull,0x31335f355f744c24ull,
0x2f2f200a3a363437ull,0x4c203e706f6f6c3cull,0x79646f6220706f6full,0x333220656e696c20ull,
0x697473656e202c38ull,0x687470656420676eull,0x747365202c31203aull,0x6920646574616d69ull,
0x6e6f697461726574ull,0x6f6e6b6e75203a73ull,0x636f6c2e090a6e77ull,0x0931343209383109ull,
0x68732e646c090a30ull,0x3233752e64657261ull,0x2c33383172250920ull,0x2b34346472255b20ull,
0x69202f2f093b5d30ull,0x5273203231323a64ull,0x2b6d755378696461ull,0x2e7473090a307830ull,
0x752e6c61626f6c67ull,0x6472255b09203233ull,0x25202c5d302b3834ull,0x2f2f093b33383172ull,
0x203331323a646920ull,0x7553786964615264ull,0x61090a3078302b6dull,0x09203436752e6464ull,
0x25202c3834647225ull,0x3231202c38346472ull,0x2f2f09203b383832ull,0x752e646461090a20ull,
0x3731722509203233ull,0x3737317225202c37ull,0x2020203b3436202cull,0x61090a202f2f0920ull,
0x09203436752e6464ull,0x25202c3434647225ull,0x3532202c34346472ull,0x2f2f092020203b36ull,
0x752e766f6d090a20ull,0x3831722509203233ull,0x3b30323031202c34ull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x752e656c2e707465ull,0x3933702509203233ull,0x2c3737317225202cull,
0x093b343831722520ull,0x702540090a202f2full,0x0920617262203933ull,0x31335f355f744c24ull,
0x202020203b363437ull,0x0a202f2f09202020ull,0x31335f355f744c24ull,0x6c2e090a3a343332ull,
0x343209383109636full,0x697865090a300934ull,0x2020202020203b74ull,0x2020202020202020ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x5f646e6557444c24ull,0x7869646152385a5full,
0x654b3231506d7553ull,0x615065756c615679ull,0x090a3a6a6a6a7269ull,0x385a5f202f2f207dull,
0x6d75537869646152ull,0x615679654b323150ull,0x6a7269615065756cull,0x6e652e090a0a6a6aull,
0x34315a5f20797274ull,0x6572507869646152ull,0x0a766d7553786966ull,0x6765722e090a7b09ull,
0x7225203233752e20ull,0x2e090a3b3e30373cull,0x3436752e20676572ull,0x3e30333c64722520ull,
0x206765722e090a3bull,0x702520646572702eull,0x2e090a3b3e35313cull,0x3209383109636f6cull,
0x424c240a30093135ull,0x5234315a5f5f3142ull,0x6665725078696461ull,0x0a3a766d75537869ull,
0x383109636f6c2e09ull,0x090a300939363209ull,0x2e3233752e747663ull,0x3172250920363175ull,
0x782e64697425202cull,0x2f0920202020203bull,0x2e646e61090a202full,0x3272250920323362ull,
0x31202c317225202cull,0x2020202020203b35ull,0x090a202f2f092020ull,0x203233752e726873ull,
0x7225202c33722509ull,0x2020203b34202c31ull,0x2f09202020202020ull,0x326c756d090a202full,
0x3233752e6f6c2e34ull,0x25202c3472250920ull,0x203b3731202c3372ull,0x090a202f2f092020ull,
0x203233752e646461ull,0x7225202c35722509ull,0x203b347225202c32ull,0x2f09202020202020ull,
0x2e766f6d090a202full,0x3672250920323375ull,0x36313334312d202cull,0x20203b3536373535ull,
0x090a202f2f092020ull,0x752e69682e6c756dull,0x2c37722509203233ull,0x7225202c31722520ull,
0x2f09202020203b36ull,0x2e726873090a202full,0x3872250920323375ull,0x37202c377225202cull,
0x202020202020203bull,0x090a202f2f092020ull,0x2e3233752e747663ull,0x3972250920363175ull,
0x646961746325202cull,0x2f092020203b782eull,0x326c756d090a202full,0x3233752e6f6c2e34ull,
0x202c303172250920ull,0x3b3631202c397225ull,0x090a202f2f092020ull,0x203233752e766f6dull,
0x2d202c3131722509ull,0x3735353631333431ull,0x2f092020203b3536ull,0x2e6c756d090a202full,
0x09203233752e6968ull,0x7225202c32317225ull,0x3b31317225202c31ull,0x090a202f2f092020ull,
0x203233752e726873ull,0x25202c3331722509ull,0x203b37202c323172ull,0x2f09202020202020ull,
0x2e6c756d090a202full,0x09203233752e6f6cull,0x7225202c34317225ull,0x3b323931202c3331ull,
0x090a202f2f092020ull,0x203233752e627573ull,0x25202c3531722509ull,0x34317225202c3172ull,
0x2f0920202020203bull,0x2e646461090a202full,0x3172250920323375ull,0x202c387225202c36ull,
0x2020203b30317225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3731722509203233ull,
0x202c36317225202cull,0x2f0920203b323931ull,0x2e646461090a202full,0x3172250920323375ull,
0x2c35317225202c38ull,0x20203b3731722520ull,0x090a202f2f092020ull,0x203233732e766f6dull,
0x25202c3931722509ull,0x202020203b383172ull,0x2f09202020202020ull,0x2e6c756d090a202full,
0x09203233752e6f6cull,0x7225202c30327225ull,0x3b32373033202c39ull,0x090a202f2f092020ull,
0x203233752e646461ull,0x25202c3132722509ull,0x373033202c303272ull,0x2f09202020203b32ull,
0x70746573090a202full,0x203233752e656c2eull,0x7225202c31702509ull,0x38317225202c3132ull,
0x090a202f2f09203bull,0x6172622031702540ull,0x5f365f744c240920ull,0x2020203b32383637ull,
0x2f09202020202020ull,0x2e766f6d090a202full,0x6472250920343675ull,0x6964615264202c31ull,
0x2020203b6d755378ull,0x090a202f2f092020ull,0x203436752e766f6dull,0x73202c3264722509ull,
0x6d75537869646152ull,0x2f0920202020203bull,0x2e627573090a202full,0x3272250920323375ull,
0x2c31327225202c32ull,0x20203b3831722520ull,0x090a202f2f092020ull,0x203233752e646461ull,
0x25202c3332722509ull,0x313931202c323272ull,0x2f0920202020203bull,0x2e766f6d090a202full,
0x3272250920323373ull,0x313334312d202c34ull,0x203b353637353536ull,0x090a202f2f092020ull,
0x203233732e766f6dull,0x30202c3532722509ull,0x202020202020203bull,0x2f09202020202020ull,
0x70746573090a202full,0x203233732e746c2eull,0x7225202c32702509ull,0x35327225202c3332ull,
0x090a202f2f09203bull,0x203233732e736261ull,0x25202c3632722509ull,0x202020203b333272ull,
0x2f09202020202020ull,0x2e6c756d090a202full,0x09203233752e6968ull,0x7225202c37327225ull,
0x34327225202c3632ull,0x090a202f2f09203bull,0x203233732e726873ull,0x25202c3832722509ull,
0x203b37202c373272ull,0x2f09202020202020ull,0x32702540090a202full,0x3233732e62757320ull,
0x202c383272250920ull,0x7225202c35327225ull,0x0a202f2f093b3832ull,0x3233732e766f6d09ull,
0x202c393272250920ull,0x2020203b38327225ull,0x0920202020202020ull,0x747663090a202f2full,
0x3233752e3436752eull,0x202c336472250920ull,0x202020203b357225ull,0x0a202f2f09202020ull,
0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x2c33647225202c34ull,0x09202020203b3420ull,
0x646461090a202f2full,0x722509203436752eull,0x34647225202c3564ull,0x203b32647225202cull,
0x0a202f2f09202020ull,0x3436752e74766309ull,0x722509203233752eull,0x38317225202c3664ull,
0x092020202020203bull,0x6c756d090a202f2full,0x203436752e6f6c2eull,0x25202c3764722509ull,
0x203b34202c366472ull,0x0a202f2f09202020ull,0x3436752e64646109ull,0x202c386472250920ull,
0x7225202c31647225ull,0x09202020203b3764ull,0x766f6d090a202f2full,0x722509203233732eull,
0x39327225202c3033ull,0x202020202020203bull,0x0a202f2f09202020ull,0x31385f365f744c24ull,
0x3c2f2f200a3a3439ull,0x6f4c203e706f6f6cull,0x2079646f6220706full,0x39363220656e696cull,
0x6e697473656e202cull,0x3a68747065642067ull,0x69747365202c3120ull,0x746920646574616dull,
0x736e6f6974617265ull,0x776f6e6b6e75203aull,0x09636f6c2e090a6eull,0x3009343732093831ull,
0x6f6c672e646c090aull,0x203233752e6c6162ull,0x5b202c3133722509ull,0x3b5d302b38647225ull,
0x313a6469202f2f09ull,0x6964615264203432ull,0x3078302b6d755378ull,0x6168732e7473090aull,
0x203233752e646572ull,0x302b356472255b09ull,0x3b31337225202c5dull,0x313a6469202f2f09ull,
0x6964615273203532ull,0x3078302b6d755378ull,0x3109636f6c2e090aull,0x0a30093537320938ull,
0x3436752e64646109ull,0x202c356472250920ull,0x3138202c35647225ull,0x0920202020203b36ull,
0x646461090a202f2full,0x722509203233752eull,0x39317225202c3931ull,0x20203b323931202cull,
0x0a202f2f09202020ull,0x3436752e64646109ull,0x202c386472250920ull,0x3637202c38647225ull,
0x0920202020203b38ull,0x746573090a202f2full,0x3233752e74672e70ull,0x25202c3370250920ull,
0x317225202c313272ull,0x0a202f2f09203b39ull,0x7262203370254009ull,0x365f744c24092061ull,
0x20203b343931385full,0x0920202020202020ull,0x5f744c240a202f2full,0x0a3a323836375f36ull,
0x3436752e766f6d09ull,0x202c316472250920ull,0x7553786964615264ull,0x0920202020203b6dull,
0x766f6d090a202f2full,0x722509203436752eull,0x64615273202c3264ull,0x20203b6d75537869ull,
0x0a202f2f09202020ull,0x383109636f6c2e09ull,0x090a300939373209ull,0x636e79732e726162ull,
0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,0x636f6c2e090a202full,
0x0933383209383109ull,0x34326c756d090a30ull,0x203233752e6f6c2eull,0x25202c3233722509ull,
0x203b3731202c3172ull,0x6d090a202f2f0920ull,0x09203233732e766full,0x7225202c33337225ull,
0x20202020203b3233ull,0x2f2f092020202020ull,0x752e646461090a20ull,0x3433722509203233ull,
0x202c32337225202cull,0x20202020203b3631ull,0x73090a202f2f0920ull,0x752e74672e707465ull,
0x2c34702509203233ull,0x25202c3433722520ull,0x2f2f09203b323372ull,0x3470252140090a20ull,
0x4c24092061726220ull,0x363037385f365f74ull,0x202020202020203bull,0x63090a202f2f0920ull,
0x732e3436732e7476ull,0x3964722509203233ull,0x203b32337225202cull,0x2f2f092020202020ull,
0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c30316472ull,0x20203b34202c3964ull,
0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3131647225ull,0x647225202c326472ull,
0x2f2f0920203b3031ull,0x752e766f6d090a20ull,0x3533722509203233ull,0x202020203b30202cull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x383132395f365f74ull,0x6f6c3c2f2f200a3aull,
0x706f6f4c203e706full,0x696c2079646f6220ull,0x202c33383220656eull,0x20676e697473656eull,
0x31203a6874706564ull,0x746172657469202cull,0x3631203a736e6f69ull,0x3109636f6c2e090aull,
0x0a30093838320938ull,0x726168732e646c09ull,0x09203233752e6465ull,0x255b202c36337225ull,
0x3b5d302b31316472ull,0x313a6469202f2f09ull,0x6964615273203632ull,0x3078302b6d755378ull,
0x33752e646461090aull,0x2c35337225092032ull,0x25202c3633722520ull,0x202020203b353372ull,
0x6c2e090a202f2f09ull,0x383209383109636full,0x2e7473090a300939ull,0x752e646572616873ull,
0x6472255b09203233ull,0x25202c5d302b3131ull,0x202f2f093b353372ull,0x73203732313a6469ull,
0x6d75537869646152ull,0x6c2e090a3078302bull,0x393209383109636full,0x646461090a300930ull,
0x722509203233732eull,0x33337225202c3333ull,0x202020203b31202cull,0x0a202f2f09202020ull,
0x3436752e64646109ull,0x2c31316472250920ull,0x202c313164722520ull,0x0920202020203b34ull,
0x746573090a202f2full,0x3233752e656e2e70ull,0x25202c3570250920ull,0x337225202c333372ull,
0x0a202f2f09203b34ull,0x7262203570254009ull,0x365f744c24092061ull,0x20203b383132395full,
0x0920202020202020ull,0x5f744c240a202f2full,0x0a3a363037385f36ull,0x383109636f6c2e09ull,
0x090a300932393209ull,0x636e79732e726162ull,0x202020203b300920ull,0x2020202020202020ull,
0x2f09202020202020ull,0x636f6c2e090a202full,0x0935303309383109ull,0x732e747663090a30ull,
0x09203233732e3436ull,0x25202c3231647225ull,0x202020203b323372ull,0x6d090a202f2f0920ull,
0x36752e6f6c2e6c75ull,0x3331647225092034ull,0x2c3231647225202cull,0x2f2f0920203b3420ull,
0x752e646461090a20ull,0x3164722509203436ull,0x2c32647225202c34ull,0x203b333164722520ull,
0x6c090a202f2f0920ull,0x6465726168732e64ull,0x722509203233752eull,0x6472255b202c3733ull,
0x093b5d30362b3431ull,0x32313a6469202f2full,0x7869646152732038ull,0x0a3078302b6d7553ull,
0x726168732e747309ull,0x09203233752e6465ull,0x362b34316472255bull,0x37337225202c5d34ull,
0x3a6469202f2f093bull,0x6461527320393231ull,0x78302b6d75537869ull,0x09636f6c2e090a30ull,
0x3009363033093831ull,0x79732e726162090aull,0x20203b300920636eull,0x2020202020202020ull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x3b3731202c383372ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x315f365f744c240aull,0x2f200a3a32343230ull,
0x203e706f6f6c3c2full,0x646f6220706f6f4cull,0x3320656e696c2079ull,0x7473656e202c3630ull,
0x7470656420676e69ull,0x7365202c31203a68ull,0x20646574616d6974ull,0x6f69746172657469ull,
0x6e6b6e75203a736eull,0x627573090a6e776full,0x722509203233732eull,0x32337225202c3933ull,
0x203b38337225202cull,0x0a202f2f09202020ull,0x3233732e64646109ull,0x202c303472250920ull,
0x3631202c39337225ull,0x092020202020203bull,0x766f6d090a202f2full,0x722509203233752eull,
0x20203b30202c3134ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x656c2e7074657309ull,
0x702509203233732eull,0x2c30347225202c36ull,0x09203b3134722520ull,0x702540090a202f2full,
0x2409206172622036ull,0x3730315f365f744cull,0x20202020203b3435ull,0x0a202f2f09202020ull,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c36303320ull,0x6c6562616c206461ull,0x365f744c24206465ull,0x090a32343230315full,
0x09383109636f6c2eull,0x63090a3009323133ull,0x732e3436732e7476ull,0x3164722509203233ull,
0x3b39337225202c35ull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x7225202c36316472ull,0x203b34202c353164ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x25202c3731647225ull,0x647225202c326472ull,0x2f2f0920203b3631ull,0x68732e646c090a20ull,
0x3233752e64657261ull,0x202c323472250920ull,0x362b37316472255bull,0x69202f2f093b5d34ull,
0x5273203033313a64ull,0x2b6d755378696461ull,0x617262090a307830ull,0x4c240920696e752eull,
0x393430315f365f74ull,0x2020202020203b38ull,0x0a202f2f09202020ull,0x30315f365f744c24ull,
0x2f2f200a3a343537ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x303320656e696c20ull,0x2064616568202c36ull,0x2064656c6562616cull,0x30315f365f744c24ull,
0x766f6d090a323432ull,0x722509203233752eull,0x20203b30202c3234ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x30315f365f744c24ull,0x2f2f200a3a383934ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x303320656e696c20ull,0x2064616568202c36ull,
0x2064656c6562616cull,0x30315f365f744c24ull,0x6f6c2e090a323432ull,0x3331330938310963ull,
0x2e726162090a3009ull,0x3b300920636e7973ull,0x2020202020202020ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x09383109636f6c2eull,0x6c090a3009343133ull,0x6465726168732e64ull,
0x722509203233752eull,0x6472255b202c3334ull,0x093b5d34362b3431ull,0x33313a6469202f2full,
0x7869646152732031ull,0x0a3078302b6d7553ull,0x3233752e64646109ull,0x202c343472250920ull,
0x7225202c33347225ull,0x09202020203b3234ull,0x2e7473090a202f2full,0x752e646572616873ull,
0x6472255b09203233ull,0x202c5d34362b3431ull,0x2f2f093b34347225ull,0x203233313a646920ull,
0x7553786964615273ull,0x2e090a3078302b6dull,0x3309383109636f6cull,0x6162090a30093531ull,
0x0920636e79732e72ull,0x2020202020203b30ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x3109636f6c2e090aull,0x0a30093631330938ull,0x2e6f6c2e6c756d09ull,0x3372250920323373ull,
0x2c38337225202c38ull,0x09202020203b3220ull,0x766f6d090a202f2full,0x722509203233752eull,
0x33363233202c3534ull,0x202020202020203bull,0x0a202f2f09202020ull,0x656c2e7074657309ull,
0x702509203233732eull,0x2c38337225202c37ull,0x09203b3534722520ull,0x702540090a202f2full,
0x2409206172622037ull,0x3230315f365f744cull,0x20202020203b3234ull,0x0a202f2f09202020ull,
0x383109636f6c2e09ull,0x090a300935323309ull,0x203233732e766f6dull,0x25202c3333722509ull,
0x202020203b323372ull,0x2f09202020202020ull,0x2e627573090a202full,0x3472250920323373ull,
0x2c32337225202c36ull,0x20202020203b3120ull,0x090a202f2f092020ull,0x203233752e766f6dull,
0x30202c3734722509ull,0x202020202020203bull,0x2f09202020202020ull,0x70746573090a202full,
0x203233732e656c2eull,0x7225202c38702509ull,0x37347225202c3634ull,0x090a202f2f09203bull,
0x6172622038702540ull,0x5f365f744c240920ull,0x20203b3232353131ull,0x2f09202020202020ull,
0x636f6c2e090a202full,0x0938323309383109ull,0x68732e646c090a30ull,0x3233752e64657261ull,
0x202c383472250920ull,0x2d2b34316472255bull,0x69202f2f093b5d34ull,0x5273203333313a64ull,
0x2b6d755378696461ull,0x617262090a307830ull,0x4c240920696e752eull,0x363231315f365f74ull,
0x2020202020203b36ull,0x0a202f2f09202020ull,0x31315f365f744c24ull,0x6f6d090a3a323235ull,
0x2509203233752e76ull,0x203b30202c383472ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x315f365f744c240aull,0x40090a3a36363231ull,0x6172622034702521ull,0x5f365f744c240920ull,
0x20203b3837373131ull,0x2f2f092020202020ull,0x732e766f6d090a20ull,0x3164722509203436ull,
0x3431647225202c31ull,0x202020202020203bull,0x4c240a202f2f0920ull,0x393232315f365f74ull,
0x6c3c2f2f200a3a30ull,0x6f6f4c203e706f6full,0x6c2079646f622070ull,0x2c38323320656e69ull,
0x676e697473656e20ull,0x203a687470656420ull,0x6172657469202c31ull,0x31203a736e6f6974ull,
0x09636f6c2e090a36ull,0x3009313333093831ull,0x6168732e646c090aull,0x203233752e646572ull,
0x5b202c3934722509ull,0x5d302b3131647225ull,0x3a6469202f2f093bull,0x6461527320343331ull,
0x78302b6d75537869ull,0x752e646461090a30ull,0x3035722509203233ull,0x202c39347225202cull,
0x2020203b38347225ull,0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203233752eull,
0x2c5d302b31316472ull,0x2f093b3035722520ull,0x3533313a6469202full,0x5378696461527320ull,
0x090a3078302b6d75ull,0x09383109636f6c2eull,0x61090a3009323333ull,0x09203233732e6464ull,
0x7225202c33337225ull,0x20203b31202c3333ull,0x2f2f092020202020ull,0x752e646461090a20ull,
0x3164722509203436ull,0x3131647225202c31ull,0x202020203b34202cull,0x73090a202f2f0920ull,
0x752e656e2e707465ull,0x2c39702509203233ull,0x25202c3333722520ull,0x2f2f09203b343372ull,
0x2039702540090a20ull,0x744c240920617262ull,0x30393232315f365full,0x202020202020203bull,
0x4c240a202f2f0920ull,0x373731315f365f74ull,0x636f6c2e090a3a38ull,0x0934333309383109ull,
0x732e726162090a30ull,0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,
0x2e090a202f2f0920ull,0x3309383109636f6cull,0x6461090a30093534ull,0x2509203233752e64ull,
0x317225202c313572ull,0x2020203b31202c38ull,0x202f2f0920202020ull,0x33732e766f6d090aull,
0x2c39317225092032ull,0x20203b3135722520ull,0x2020202020202020ull,0x756d090a202f2f09ull,
0x3233752e6f6c2e6cull,0x202c323572250920ull,0x363532202c397225ull,0x202f2f092020203bull,
0x33752e646461090aull,0x2c33357225092032ull,0x32202c3235722520ull,0x20202020203b3635ull,
0x6873090a202f2f09ull,0x2509203233752e72ull,0x357225202c343572ull,0x2020203b34202c33ull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203233752eull,0x34357225202c3535ull,
0x20203b323931202cull,0x6573090a202f2f09ull,0x33752e656c2e7074ull,0x2c30317025092032ull,
0x25202c3535722520ull,0x202f2f093b313572ull,0x203031702540090aull,0x744c240920617262ull,
0x32303832315f365full,0x202020202020203bull,0x7573090a202f2f09ull,0x2509203233752e62ull,
0x357225202c363572ull,0x3b31357225202c35ull,0x202f2f0920202020ull,0x33752e646461090aull,
0x2c37357225092032ull,0x31202c3635722520ull,0x20202020203b3139ull,0x6f6d090a202f2f09ull,
0x2509203233732e76ull,0x34312d202c383572ull,0x3536373535363133ull,0x202f2f092020203bull,
0x33732e766f6d090aull,0x2c39357225092032ull,0x20202020203b3020ull,0x2020202020202020ull,
0x6573090a202f2f09ull,0x33732e746c2e7074ull,0x2c31317025092032ull,0x25202c3735722520ull,
0x202f2f093b393572ull,0x33732e736261090aull,0x2c30367225092032ull,0x20203b3735722520ull,
0x2020202020202020ull,0x756d090a202f2f09ull,0x3233752e69682e6cull,0x202c313672250920ull,
0x7225202c30367225ull,0x202f2f09203b3835ull,0x33732e726873090aull,0x2c32367225092032ull,
0x37202c3136722520ull,0x202020202020203bull,0x2540090a202f2f09ull,0x2e62757320313170ull,
0x3672250920323373ull,0x2c39357225202c32ull,0x2f093b3236722520ull,0x2e766f6d090a202full,
0x3672250920323373ull,0x3b32367225202c33ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x2e3436752e747663ull,0x6472250920323375ull,0x3b357225202c3831ull,0x2f09202020202020ull,
0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3931647225ull,0x3b34202c38316472ull,
0x090a202f2f092020ull,0x203436752e646461ull,0x25202c3564722509ull,0x7225202c39316472ull,
0x2f092020203b3264ull,0x2e747663090a202full,0x203233752e343675ull,0x202c303264722509ull,
0x2020203b31357225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3264722509203436ull,
0x3032647225202c31ull,0x2f0920203b34202cull,0x2e646461090a202full,0x6472250920343675ull,
0x2c31647225202c38ull,0x203b313264722520ull,0x090a202f2f092020ull,0x203233732e766f6dull,
0x25202c3436722509ull,0x202020203b333672ull,0x2f09202020202020ull,0x365f744c240a202full,
0x0a3a34313333315full,0x706f6f6c3c2f2f20ull,0x6220706f6f4c203eull,0x656e696c2079646full,
0x656e202c35343320ull,0x656420676e697473ull,0x202c31203a687470ull,0x6574616d69747365ull,
0x7461726574692064ull,0x6e75203a736e6f69ull,0x2e090a6e776f6e6bull,0x3309383109636f6cull,
0x646c090a30093834ull,0x2e6465726168732eull,0x3672250920323375ull,0x356472255b202c35ull,
0x202f2f093b5d302bull,0x73203633313a6469ull,0x6d75537869646152ull,0x7473090a3078302bull,
0x2e6c61626f6c672eull,0x72255b0920323375ull,0x25202c5d302b3864ull,0x202f2f093b353672ull,
0x64203733313a6469ull,0x6d75537869646152ull,0x6c2e090a3078302bull,0x353309383109636full,
0x646461090a300930ull,0x722509203436752eull,0x35647225202c3564ull,0x20203b363138202cull,
0x0a202f2f09202020ull,0x3233752e64646109ull,0x202c393172250920ull,0x3931202c39317225ull,
0x0920202020203b32ull,0x646461090a202f2full,0x722509203436752eull,0x38647225202c3864ull,
0x20203b383637202cull,0x0a202f2f09202020ull,0x74672e7074657309ull,0x702509203233752eull,
0x35357225202c3231ull,0x093b39317225202cull,0x702540090a202f2full,0x0920617262203231ull,
0x33315f365f744c24ull,0x202020203b343133ull,0x0a202f2f09202020ull,0x32315f365f744c24ull,
0x6f6d090a3a323038ull,0x2509203233752e76ull,0x203b30202c363672ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x6e2e70746573090aull,0x2509203233752e65ull,0x317225202c333170ull,
0x203b36367225202cull,0x2540090a202f2f09ull,0x2061726220333170ull,0x315f365f744c2409ull,
0x2020203b36323833ull,0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093735330938ull,
0x726168732e646c09ull,0x09203233752e6465ull,0x735b202c37367225ull,0x6d75537869646152ull,
0x3b5d32353033312bull,0x313a6469202f2f09ull,0x6964615273203833ull,0x3378302b6d755378ull,
0x766f6d090a636632ull,0x722509203436752eull,0x615264202c323264ull,0x6b636f6c42786964ull,
0x202f2f093b6d7553ull,0x36752e747663090aull,0x2509203233752e34ull,0x7225202c33326472ull,
0x2020202020203b39ull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x2c34326472250920ull,
0x202c333264722520ull,0x202f2f0920203b34ull,0x36752e646461090aull,0x3532647225092034ull,
0x2c3232647225202cull,0x203b343264722520ull,0x7473090a202f2f09ull,0x2e6c61626f6c672eull,
0x72255b0920323375ull,0x202c5d302b353264ull,0x2f2f093b37367225ull,0x203933313a646920ull,
0x6c42786964615264ull,0x302b6d75536b636full,0x636f6c2e090a3078ull,0x0938353309383109ull,
0x752e766f6d090a30ull,0x3836722509203233ull,0x202020203b30202cull,0x2020202020202020ull,
0x63090a202f2f0920ull,0x752e3436752e7476ull,0x3264722509203233ull,0x3b30327225202c36ull,
0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c37326472ull,
0x203b34202c363264ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3832647225ull,
0x647225202c316472ull,0x2f2f0920203b3732ull,0x6c672e7473090a20ull,0x3233752e6c61626full,
0x38326472255b0920ull,0x367225202c5d302bull,0x6469202f2f093b38ull,0x615264203034313aull,
0x302b6d7553786964ull,0x365f744c240a3078ull,0x0a3a36323833315full,0x383109636f6c2e09ull,
0x090a300930363309ull,0x2020203b74697865ull,0x2020202020202020ull,0x2020202020202020ull,
0x2f09202020202020ull,0x6557444c240a202full,0x5234315a5f5f646eull,0x6665725078696461ull,
0x0a3a766d75537869ull,0x5a5f202f2f207d09ull,0x5078696461523431ull,0x6d75537869666572ull,
0x746e652e090a0a76ull,0x5235325a5f207972ull,0x4f64644178696461ull,0x6e41737465736666ull,
0x656c666675685364ull,0x615679654b323150ull,0x537269615065756cull,0x0a2820696a6a5f30ull,
0x6d617261702e0909ull,0x5f5f203436752e20ull,0x6d72617061647563ull,0x64615235325a5f5full,
0x66664f6464417869ull,0x53646e4173746573ull,0x3150656c66667568ull,0x756c615679654b32ull,
0x5f30537269615065ull,0x637253705f696a6aull,0x7261702e09090a2cull,0x203436752e206d61ull,
0x6170616475635f5full,0x5235325a5f5f6d72ull,0x4f64644178696461ull,0x6e41737465736666ull,
0x656c666675685364ull,0x615679654b323150ull,0x537269615065756cull,0x44705f696a6a5f30ull,
0x702e09090a2c7473ull,0x33752e206d617261ull,0x616475635f5f2032ull,0x325a5f5f6d726170ull,
0x6441786964615235ull,0x7374657366664f64ull,0x6666756853646e41ull,0x79654b323150656cull,
0x69615065756c6156ull,0x5f696a6a5f305372ull,0x73746e656d656c65ull,0x7261702e09090a2cull,
0x203233752e206d61ull,0x6170616475635f5full,0x5235325a5f5f6d72ull,0x4f64644178696461ull,
0x6e41737465736666ull,0x656c666675685364ull,0x615679654b323150ull,0x537269615065756cull,
0x6c655f696a6a5f30ull,0x725f73746e656d65ull,0x745f6465646e756full,0x0a2c323730335f6full,
0x6d617261702e0909ull,0x5f5f203233732e20ull,0x6d72617061647563ull,0x64615235325a5f5full,
0x66664f6464417869ull,0x53646e4173746573ull,0x3150656c66667568ull,0x756c615679654b32ull,
0x5f30537269615065ull,0x666968735f696a6aull,0x2e090a7b090a2974ull,0x3233752e20676572ull,
0x3e3132323c722520ull,0x206765722e090a3bull,0x647225203436752eull,0x090a3b3e3532313cull,
0x72702e206765722eull,0x35343c7025206465ull,0x6b202f2f090a3b3eull,0x090a30203d207076ull,
0x09383109636f6c2eull,0x4c240a3009343733ull,0x35325a5f5f314242ull,0x6464417869646152ull,
0x417374657366664full,0x6c6666756853646eull,0x5679654b32315065ull,0x7269615065756c61ull,
0x0a3a696a6a5f3053ull,0x3233752e74766309ull,0x722509203631752eull,0x2e64697425202c31ull,
0x0920202020203b78ull,0x766f6d090a202f2full,0x722509203233752eull,0x2020203b30202c32ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x656e2e7074657309ull,0x702509203233752eull,
0x202c317225202c31ull,0x092020203b327225ull,0x702540090a202f2full,0x2409206172622031ull,
0x3833325f375f744cull,0x20202020203b3031ull,0x0a202f2f09202020ull,0x383109636f6c2e09ull,
0x090a300938373309ull,0x203233752e766f6dull,0x3b30202c33722509ull,0x2020202020202020ull,
0x2f09202020202020ull,0x732e7473090a202full,0x33752e6465726168ull,0x646152735b092032ull,
0x30342b6d75537869ull,0x337225202c5d3639ull,0x3a6469202f2f093bull,0x6461527320383932ull,
0x78302b6d75537869ull,0x744c240a30303031ull,0x30313833325f375full,0x752e766f6d090a3aull,
0x2c34722509203233ull,0x202020203b343120ull,0x2020202020202020ull,0x73090a202f2f0920ull,
0x752e74672e707465ull,0x2c32702509203233ull,0x7225202c31722520ull,0x2f2f092020203b34ull,
0x2032702540090a20ull,0x744c240920617262ull,0x32323334325f375full,0x202020202020203bull,
0x2e090a202f2f0920ull,0x3309383109636f6cull,0x6f6d090a30093138ull,0x2509203436752e76ull,
0x615273202c316472ull,0x203b6d7553786964ull,0x202f2f0920202020ull,0x36752e747663090aull,
0x2509203233752e34ull,0x317225202c326472ull,0x202020202020203bull,0x756d090a202f2f09ull,
0x3436752e6f6c2e6cull,0x202c336472250920ull,0x3b34202c32647225ull,0x202f2f0920202020ull,
0x36752e766f6d090aull,0x2c34647225092034ull,0x4278696461526420ull,0x3b6d75536b636f6cull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x647225202c356472ull,0x3b34647225202c33ull,
0x202f2f0920202020ull,0x6f6c672e646c090aull,0x203233752e6c6162ull,0x255b202c35722509ull,
0x203b5d302b356472ull,0x323a6469202f2f09ull,0x6964615264203939ull,0x75536b636f6c4278ull,
0x61090a3078302b6dull,0x09203436752e6464ull,0x7225202c36647225ull,0x31647225202c3364ull,
0x2f2f09202020203bull,0x68732e7473090a20ull,0x3233752e64657261ull,0x2b366472255b0920ull,
0x25202c5d30303134ull,0x69202f2f093b3572ull,0x5273203030333a64ull,0x2b6d755378696461ull,
0x5f744c240a307830ull,0x3a32323334325f37ull,0x36752e766f6d090aull,0x2c31647225092034ull,
0x5378696461527320ull,0x20202020203b6d75ull,0x6c2e090a202f2f09ull,0x383309383109636full,
0x726162090a300932ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x31202c3672250920ull,0x2020202020203b35ull,
0x0920202020202020ull,0x746573090a202f2full,0x3233732e656c2e70ull,0x25202c3370250920ull,
0x3b367225202c3172ull,0x0a202f2f09202020ull,0x33732e706c657309ull,0x202c377225092032ull,
0x7025202c30202c31ull,0x0920202020203b33ull,0x766f6d090a202f2full,0x722509203233732eull,
0x2020203b31202c38ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x35325f375f744c24ull,
0x2f2f200a3a363433ull,0x4c203e706f6f6c3cull,0x79646f6220706f6full,0x383320656e696c20ull,
0x697473656e202c32ull,0x687470656420676eull,0x747365202c31203aull,0x6920646574616d69ull,
0x6e6f697461726574ull,0x6f6e6b6e75203a73ull,0x2e627573090a6e77ull,0x3972250920323373ull,
0x25202c317225202cull,0x20202020203b3872ull,0x090a202f2f092020ull,0x203233732e766f6dull,
0x30202c3031722509ull,0x202020202020203bull,0x2f09202020202020ull,0x2e746573090a202full,
0x732e3233752e6567ull,0x3131722509203233ull,0x25202c397225202cull,0x202f2f093b303172ull,
0x33732e67656e090aull,0x2c32317225092032ull,0x20203b3131722520ull,0x2020202020202020ull,
0x6e61090a202f2f09ull,0x2509203233622e64ull,0x317225202c333172ull,0x203b377225202c32ull,
0x202f2f0920202020ull,0x33752e766f6d090aull,0x2c34317225092032ull,0x20202020203b3020ull,
0x2020202020202020ull,0x6573090a202f2f09ull,0x33732e71652e7074ull,0x202c347025092032ull,
0x7225202c33317225ull,0x202f2f09203b3431ull,0x622034702540090aull,0x5f744c2409206172ull,
0x3b38353835325f37ull,0x2020202020202020ull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x383320656e696c20ull,0x2064616568202c32ull,
0x2064656c6562616cull,0x35325f375f744c24ull,0x6f6c2e090a363433ull,0x3039330938310963ull,
0x2e747663090a3009ull,0x203233732e343673ull,0x25202c3764722509ull,0x20202020203b3972ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3864722509203436ull,0x202c37647225202cull,
0x2f09202020203b34ull,0x2e646461090a202full,0x6472250920343675ull,0x2c31647225202c39ull,
0x20203b3864722520ull,0x090a202f2f092020ull,0x65726168732e646cull,0x2509203233752e64ull,
0x72255b202c353172ull,0x5d363930342b3964ull,0x3a6469202f2f093bull,0x6461527320313033ull,
0x78302b6d75537869ull,0x752e617262090a30ull,0x5f744c240920696eull,0x3b32303635325f37ull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x353835325f375f74ull,0x6c3c2f2f200a3a38ull,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c32383320656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x343335325f375f74ull,0x752e766f6d090a36ull,
0x3531722509203233ull,0x202020203b30202cull,0x2020202020202020ull,0x4c240a202f2f0920ull,
0x303635325f375f74ull,0x6c3c2f2f200a3a32ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c32383320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x343335325f375f74ull,0x09636f6c2e090a36ull,0x3009313933093831ull,0x79732e726162090aull,
0x20203b300920636eull,0x2020202020202020ull,0x2020202020202020ull,0x2140090a202f2f09ull,
0x2061726220337025ull,0x325f375f744c2409ull,0x2020203b34313136ull,0x202f2f0920202020ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x68202c3238332065ull,0x6562616c20646165ull,0x5f744c242064656cull,0x0a36343335325f37ull,
0x383109636f6c2e09ull,0x090a300933393309ull,0x2e3436732e747663ull,0x6472250920323373ull,
0x3b317225202c3031ull,0x2f09202020202020ull,0x2e6c756d090a202full,0x09203436752e6f6cull,
0x25202c3131647225ull,0x3b34202c30316472ull,0x090a202f2f092020ull,0x203436752e646461ull,
0x202c323164722509ull,0x7225202c31647225ull,0x2f0920203b313164ull,0x732e646c090a202full,
0x33752e6465726168ull,0x2c36317225092032ull,0x2b32316472255b20ull,0x2f093b5d36393034ull,
0x3230333a6469202full,0x5378696461527320ull,0x090a3078302b6d75ull,0x203233752e646461ull,
0x25202c3731722509ull,0x317225202c363172ull,0x2f09202020203b35ull,0x732e7473090a202full,
0x33752e6465726168ull,0x316472255b092032ull,0x2c5d363930342b32ull,0x2f093b3731722520ull,
0x3330333a6469202full,0x5378696461527320ull,0x240a3078302b6d75ull,0x3136325f375f744cull,
0x3c2f2f200a3a3431ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x32383320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3335325f375f744cull,
0x636f6c2e090a3634ull,0x0934393309383109ull,0x732e726162090a30ull,0x203b300920636e79ull,
0x2020202020202020ull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3309383109636f6cull,
0x756d090a30093539ull,0x3233732e6f6c2e6cull,0x25202c3872250920ull,0x20203b32202c3872ull,
0x202f2f0920202020ull,0x33752e766f6d090aull,0x2c38317225092032ull,0x202020203b353120ull,
0x2020202020202020ull,0x6573090a202f2f09ull,0x33732e656c2e7074ull,0x202c357025092032ull,
0x317225202c387225ull,0x202f2f0920203b38ull,0x622035702540090aull,0x5f744c2409206172ull,
0x3b36343335325f37ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,0x303409383109636full,
0x646e61090a300939ull,0x722509203233622eull,0x2c317225202c3931ull,0x20202020203b3320ull,
0x0a202f2f09202020ull,0x3233752e72687309ull,0x202c303272250920ull,0x203b32202c317225ull,
0x0920202020202020ull,0x747663090a202f2full,0x3631752e3233752eull,0x202c313272250920ull,
0x782e646961746325ull,0x0a202f2f0920203bull,0x6c2e34326c756d09ull,0x2509203233752e6full,
0x327225202c323272ull,0x09203b3834202c30ull,0x646461090a202f2full,0x722509203233752eull,
0x31327225202c3332ull,0x203b32327225202cull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,
0x3272250920323375ull,0x2c33327225202c34ull,0x09202020203b3420ull,0x646461090a202f2full,
0x722509203233752eull,0x39317225202c3532ull,0x203b34327225202cull,0x0a202f2f09202020ull,
0x6c2e34326c756d09ull,0x2509203233732e6full,0x327225202c363272ull,0x0920203b34202c30ull,
0x646461090a202f2full,0x722509203233732eull,0x36327225202c3732ull,0x203b39317225202cull,
0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x202c383272250920ull,0x2020203b37327225ull,
0x0920202020202020ull,0x766f6d090a202f2full,0x722509203233752eull,0x33323031202c3932ull,
0x202020202020203bull,0x0a202f2f09202020ull,0x74672e7074657309ull,0x702509203233732eull,
0x2c37327225202c36ull,0x09203b3932722520ull,0x702540090a202f2full,0x2409206172622036ull,
0x3836325f375f744cull,0x20202020203b3238ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,
0x202c303372250920ull,0x2020203b37383031ull,0x0920202020202020ull,0x627573090a202f2full,
0x722509203233732eull,0x30337225202c3133ull,0x203b37327225202cull,0x0a202f2f09202020ull,
0x3233732e72687309ull,0x202c323372250920ull,0x3133202c31337225ull,0x092020202020203bull,
0x766f6d090a202f2full,0x722509203233732eull,0x203b3336202c3333ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233622e646e6109ull,0x202c343372250920ull,0x7225202c32337225ull,
0x09202020203b3333ull,0x646461090a202f2full,0x722509203233732eull,0x34337225202c3533ull,
0x203b31337225202cull,0x0a202f2f09202020ull,0x3233732e72687309ull,0x202c363372250920ull,
0x3b36202c35337225ull,0x0920202020202020ull,0x766f6d090a202f2full,0x722509203436752eull,
0x615264202c333164ull,0x203b6d7553786964ull,0x0a202f2f09202020ull,0x3436732e74766309ull,
0x722509203233732eull,0x327225202c343164ull,0x0920202020203b35ull,0x6c756d090a202f2full,
0x203436752e6f6c2eull,0x202c353164722509ull,0x34202c3431647225ull,0x0a202f2f0920203bull,
0x3436752e64646109ull,0x2c36316472250920ull,0x202c333164722520ull,0x09203b3531647225ull,
0x747663090a202f2full,0x3233732e3436732eull,0x2c37316472250920ull,0x20203b3732722520ull,
0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x31647225202c3831ull,
0x0920203b34202c37ull,0x646461090a202f2full,0x722509203436752eull,0x647225202c393164ull,
0x3831647225202c31ull,0x0a202f2f0920203bull,0x3233732e766f6d09ull,0x202c373372250920ull,
0x2020203b36337225ull,0x0920202020202020ull,0x5f744c240a202f2full,0x3a34393337325f37ull,
0x6f6f6c3c2f2f200aull,0x20706f6f4c203e70ull,0x6e696c2079646f62ull,0x6e202c3930342065ull,
0x6420676e69747365ull,0x2c31203a68747065ull,0x74616d6974736520ull,0x6172657469206465ull,
0x75203a736e6f6974ull,0x090a6e776f6e6b6eull,0x09383109636f6c2eull,0x6c090a3009323134ull,
0x6c61626f6c672e64ull,0x722509203233752eull,0x6472255b202c3833ull,0x2f093b5d302b3631ull,
0x3430333a6469202full,0x5378696461526420ull,0x090a3078302b6d75ull,0x203233732e766f6dull,
0x2d202c3933722509ull,0x3735353631333431ull,0x2f092020203b3536ull,0x2e766f6d090a202full,
0x3472250920323373ull,0x2020203b30202c30ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x2e746c2e70746573ull,0x3770250920323373ull,0x202c35327225202cull,0x2f09203b30347225ull,
0x2e736261090a202full,0x3472250920323373ull,0x3b35327225202c31ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x752e69682e6c756dull,0x3234722509203233ull,0x202c31347225202cull,
0x2f09203b39337225ull,0x2e726873090a202full,0x3472250920323373ull,0x2c32347225202c33ull,
0x202020203b313120ull,0x090a202f2f092020ull,0x6275732037702540ull,0x722509203233732eull,
0x30347225202c3334ull,0x093b33347225202cull,0x766f6d090a202f2full,0x722509203233732eull,
0x33347225202c3434ull,0x202020202020203bull,0x0a202f2f09202020ull,0x3436732e74766309ull,
0x722509203233732eull,0x347225202c303264ull,0x0920202020203b34ull,0x6c756d090a202f2full,
0x203436752e6f6c2eull,0x202c313264722509ull,0x34202c3032647225ull,0x0a202f2f0920203bull,
0x3436752e64646109ull,0x2c32326472250920ull,0x25202c3164722520ull,0x0920203b31326472ull,
0x2e646c090a202f2full,0x752e646572616873ull,0x3534722509203233ull,0x32326472255b202cull,
0x093b5d363930342bull,0x30333a6469202f2full,0x7869646152732035ull,0x0a3078302b6d7553ull,
0x3233752e64646109ull,0x202c363472250920ull,0x7225202c38337225ull,0x09202020203b3534ull,
0x2e7473090a202f2full,0x752e646572616873ull,0x6472255b09203233ull,0x25202c5d302b3931ull,
0x202f2f093b363472ull,0x73203630333a6469ull,0x6d75537869646152ull,0x6c2e090a3078302bull,
0x313409383109636full,0x646461090a300934ull,0x722509203233732eull,0x35327225202c3532ull,
0x203b32373033202cull,0x0a202f2f09202020ull,0x3436752e64646109ull,0x2c36316472250920ull,
0x202c363164722520ull,0x09203b3838323231ull,0x646461090a202f2full,0x722509203233732eull,
0x38327225202c3832ull,0x2020203b3436202cull,0x0a202f2f09202020ull,0x3436752e64646109ull,
0x2c39316472250920ull,0x202c393164722520ull,0x092020203b363532ull,0x766f6d090a202f2full,
0x722509203233752eull,0x33323031202c3734ull,0x202020202020203bull,0x0a202f2f09202020ull,
0x656c2e7074657309ull,0x702509203233732eull,0x2c38327225202c38ull,0x09203b3734722520ull,
0x702540090a202f2full,0x2409206172622038ull,0x3337325f375f744cull,0x20202020203b3439ull,
0x0a202f2f09202020ull,0x36325f375f744c24ull,0x6c2e090a3a323838ull,0x313409383109636full,
0x726162090a300936ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x383109636f6c2e09ull,0x090a300931333409ull,0x636e79732e726162ull,
0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,0x2e646e61090a202full,
0x3472250920323362ull,0x202c317225202c38ull,0x20202020203b3531ull,0x090a202f2f092020ull,
0x203233752e726873ull,0x25202c3934722509ull,0x20203b34202c3172ull,0x2f09202020202020ull,
0x326c756d090a202full,0x3233752e6f6c2e34ull,0x202c303572250920ull,0x3b34202c31327225ull,
0x090a202f2f092020ull,0x6d617261702e646cull,0x722509203233752eull,0x635f5f5b202c3135ull,
0x5f6d726170616475ull,0x6964615235325a5full,0x7366664f64644178ull,0x6853646e41737465ull,
0x323150656c666675ull,0x65756c615679654bull,0x6a5f305372696150ull,0x656d656c655f696aull,
0x6e756f725f73746eull,0x335f6f745f646564ull,0x2f2f093b5d323730ull,0x203730333a646920ull,
0x6170616475635f5full,0x5235325a5f5f6d72ull,0x4f64644178696461ull,0x6e41737465736666ull,
0x656c666675685364ull,0x615679654b323150ull,0x537269615065756cull,0x6c655f696a6a5f30ull,
0x725f73746e656d65ull,0x745f6465646e756full,0x302b323730335f6full,0x2e766f6d090a3078ull,
0x3572250920323375ull,0x313334312d202c32ull,0x203b353637353536ull,0x090a202f2f092020ull,
0x752e69682e6c756dull,0x3335722509203233ull,0x202c31357225202cull,0x2f09203b32357225ull,
0x2e726873090a202full,0x3572250920323375ull,0x2c33357225202c34ull,0x20202020203b3720ull,
0x090a202f2f092020ull,0x203233752e646461ull,0x25202c3535722509ull,0x357225202c393472ull,
0x2f09202020203b30ull,0x2e6c756d090a202full,0x09203233752e6f6cull,0x7225202c36357225ull,
0x35357225202c3435ull,0x090a202f2f09203bull,0x203233732e646461ull,0x25202c3735722509ull,
0x357225202c383472ull,0x2f09202020203b36ull,0x2e766f6d090a202full,0x3572250920323373ull,
0x3b37357225202c38ull,0x2020202020202020ull,0x090a202f2f092020ull,0x203233752e646461ull,
0x25202c3935722509ull,0x357225202c343572ull,0x2f09202020203b36ull,0x70746573090a202full,
0x203233752e65672eull,0x7225202c39702509ull,0x39357225202c3735ull,0x090a202f2f09203bull,
0x6172622039702540ull,0x5f375f744c240920ull,0x20203b3630393732ull,0x2f09202020202020ull,
0x2e627573090a202full,0x3672250920323375ull,0x2c34357225202c30ull,0x20203b3834722520ull,
0x090a202f2f092020ull,0x203233752e646461ull,0x25202c3136722509ull,0x3b3531202c303672ull,
0x2f09202020202020ull,0x2e726873090a202full,0x3672250920323373ull,0x2c31367225202c32ull,
0x202020203b313320ull,0x090a202f2f092020ull,0x203233732e766f6dull,0x31202c3336722509ull,
0x2020202020203b35ull,0x2f09202020202020ull,0x2e646e61090a202full,0x3672250920323362ull,
0x2c32367225202c34ull,0x20203b3336722520ull,0x090a202f2f092020ull,0x203233732e646461ull,
0x25202c3536722509ull,0x367225202c343672ull,0x2f09202020203b31ull,0x2e726873090a202full,
0x3672250920323373ull,0x2c35367225202c36ull,0x20202020203b3420ull,0x090a202f2f092020ull,
0x203233732e766f6dull,0x30202c3736722509ull,0x202020202020203bull,0x2f09202020202020ull,
0x70746573090a202full,0x203233732e71652eull,0x25202c3031702509ull,0x367225202c383472ull,
0x090a202f2f093b37ull,0x203233732e766f6dull,0x31202c3836722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,0x25202c3131702509ull,
0x367225202c383472ull,0x090a202f2f093b38ull,0x203233732e766f6dull,0x32202c3936722509ull,
0x202020202020203bull,0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,
0x25202c3231702509ull,0x367225202c383472ull,0x090a202f2f093b39ull,0x203233732e766f6dull,
0x33202c3037722509ull,0x202020202020203bull,0x2f09202020202020ull,0x70746573090a202full,
0x203233732e71652eull,0x25202c3331702509ull,0x377225202c383472ull,0x090a202f2f093b30ull,
0x203233732e766f6dull,0x34202c3137722509ull,0x202020202020203bull,0x2f09202020202020ull,
0x70746573090a202full,0x203233732e71652eull,0x25202c3431702509ull,0x377225202c383472ull,
0x090a202f2f093b31ull,0x203233732e766f6dull,0x35202c3237722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,0x25202c3531702509ull,
0x377225202c383472ull,0x090a202f2f093b32ull,0x203233732e766f6dull,0x36202c3337722509ull,
0x202020202020203bull,0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,
0x25202c3631702509ull,0x377225202c383472ull,0x090a202f2f093b33ull,0x203233732e766f6dull,
0x37202c3437722509ull,0x202020202020203bull,0x2f09202020202020ull,0x70746573090a202full,
0x203233732e71652eull,0x25202c3731702509ull,0x377225202c383472ull,0x090a202f2f093b34ull,
0x203233732e766f6dull,0x38202c3537722509ull,0x202020202020203bull,0x2f09202020202020ull,
0x70746573090a202full,0x203233732e71652eull,0x25202c3831702509ull,0x377225202c383472ull,
0x090a202f2f093b35ull,0x203233732e766f6dull,0x39202c3637722509ull,0x202020202020203bull,
0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,0x25202c3931702509ull,
0x377225202c383472ull,0x090a202f2f093b36ull,0x203233732e766f6dull,0x31202c3737722509ull,
0x2020202020203b30ull,0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,
0x25202c3032702509ull,0x377225202c383472ull,0x090a202f2f093b37ull,0x203233732e766f6dull,
0x31202c3837722509ull,0x2020202020203b31ull,0x2f09202020202020ull,0x70746573090a202full,
0x203233732e71652eull,0x25202c3132702509ull,0x377225202c383472ull,0x090a202f2f093b38ull,
0x203233732e766f6dull,0x31202c3937722509ull,0x2020202020203b32ull,0x2f09202020202020ull,
0x70746573090a202full,0x203233732e71652eull,0x25202c3232702509ull,0x377225202c383472ull,
0x090a202f2f093b39ull,0x203233732e766f6dull,0x31202c3038722509ull,0x2020202020203b33ull,
0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,0x25202c3332702509ull,
0x387225202c383472ull,0x090a202f2f093b30ull,0x203233732e766f6dull,0x31202c3138722509ull,
0x2020202020203b34ull,0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,
0x25202c3432702509ull,0x387225202c383472ull,0x090a202f2f093b31ull,0x203233732e766f6dull,
0x31202c3238722509ull,0x2020202020203b35ull,0x2f09202020202020ull,0x70746573090a202full,
0x203233732e71652eull,0x25202c3532702509ull,0x387225202c383472ull,0x090a202f2f093b32ull,
0x3233732e706c6573ull,0x202c333872250920ull,0x7025202c30202c31ull,0x2f092020203b3031ull,
0x706c6573090a202full,0x722509203233732eull,0x30202c31202c3438ull,0x203b31317025202cull,
0x090a202f2f092020ull,0x3233732e706c6573ull,0x202c353872250920ull,0x7025202c30202c31ull,
0x2f092020203b3231ull,0x706c6573090a202full,0x722509203233732eull,0x30202c31202c3638ull,
0x203b33317025202cull,0x090a202f2f092020ull,0x3233732e706c6573ull,0x202c373872250920ull,
0x7025202c30202c31ull,0x2f092020203b3431ull,0x706c6573090a202full,0x722509203233732eull,
0x30202c31202c3838ull,0x203b35317025202cull,0x090a202f2f092020ull,0x3233732e706c6573ull,
0x202c393872250920ull,0x7025202c30202c31ull,0x2f092020203b3631ull,0x706c6573090a202full,
0x722509203233732eull,0x30202c31202c3039ull,0x203b37317025202cull,0x090a202f2f092020ull,
0x3233732e706c6573ull,0x202c313972250920ull,0x7025202c30202c31ull,0x2f092020203b3831ull,
0x706c6573090a202full,0x722509203233732eull,0x30202c31202c3239ull,0x203b39317025202cull,
0x090a202f2f092020ull,0x3233732e706c6573ull,0x202c333972250920ull,0x7025202c30202c31ull,
0x2f092020203b3032ull,0x706c6573090a202full,0x722509203233732eull,0x30202c31202c3439ull,
0x203b31327025202cull,0x090a202f2f092020ull,0x3233732e706c6573ull,0x202c353972250920ull,
0x7025202c30202c31ull,0x2f092020203b3232ull,0x706c6573090a202full,0x722509203233732eull,
0x30202c31202c3639ull,0x203b33327025202cull,0x090a202f2f092020ull,0x3233732e706c6573ull,
0x202c373972250920ull,0x7025202c30202c31ull,0x2f092020203b3432ull,0x706c6573090a202full,
0x722509203233732eull,0x30202c31202c3839ull,0x203b35327025202cull,0x090a202f2f092020ull,
0x6d617261702e646cull,0x722509203233752eull,0x635f5f5b202c3939ull,0x5f6d726170616475ull,
0x6964615235325a5full,0x7366664f64644178ull,0x6853646e41737465ull,0x323150656c666675ull,
0x65756c615679654bull,0x6a5f305372696150ull,0x656d656c655f696aull,0x2f2f093b5d73746eull,
0x203439323a646920ull,0x6170616475635f5full,0x5235325a5f5f6d72ull,0x4f64644178696461ull,
0x6e41737465736666ull,0x656c666675685364ull,0x615679654b323150ull,0x537269615065756cull,
0x6c655f696a6a5f30ull,0x302b73746e656d65ull,0x2e766f6d090a3078ull,0x3172250920323373ull,
0x36367225202c3030ull,0x202020202020203bull,0x240a202f2f092020ull,0x3438325f375f744cull,
0x3c2f2f200a3a3831ull,0x6f4c203e706f6f6cull,0x2079646f6220706full,0x31333420656e696cull,
0x6e697473656e202cull,0x3a68747065642067ull,0x69747365202c3120ull,0x746920646574616dull,
0x736e6f6974617265ull,0x776f6e6b6e75203aull,0x2e70746573090a6eull,0x09203233752e746cull,
0x7225202c36327025ull,0x39397225202c3835ull,0x40090a202f2f093bull,0x7262203632702521ull,
0x375f744c24092061ull,0x203b30333938325full,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c31333420656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x38313438325f375full,0x3109636f6c2e090aull,
0x0a30093034340938ull,0x617261702e646c09ull,0x2509203436752e6dull,0x5f5b202c33326472ull,
0x726170616475635full,0x615235325a5f5f6dull,0x664f646441786964ull,0x646e417374657366ull,
0x50656c6666756853ull,0x6c615679654b3231ull,0x3053726961506575ull,0x7253705f696a6a5full,
0x69202f2f093b5d63ull,0x5f5f203830333a64ull,0x6d72617061647563ull,0x64615235325a5f5full,
0x66664f6464417869ull,0x53646e4173746573ull,0x3150656c66667568ull,0x756c615679654b32ull,
0x5f30537269615065ull,0x637253705f696a6aull,0x7663090a3078302bull,0x33732e3436752e74ull,
0x3432647225092032ull,0x203b38357225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,
0x722509203436752eull,0x647225202c353264ull,0x20203b38202c3432ull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x7225202c36326472ull,0x647225202c333264ull,0x202f2f09203b3532ull,
0x6f6c672e646c090aull,0x752e32762e6c6162ull,0x3172257b09203233ull,0x32303172252c3130ull,
0x326472255b202c7dull,0x2f2f093b5d302b36ull,0x732e766f6d090a20ull,0x3031722509203233ull,
0x3230317225202c33ull,0x202020202020203bull,0x62090a202f2f0920ull,0x0920696e752e6172ull,
0x38325f375f744c24ull,0x202020203b343736ull,0x2f2f092020202020ull,0x5f375f744c240a20ull,
0x200a3a3033393832ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c313334ull,0x656c6562616c2064ull,0x5f375f744c242064ull,
0x2e090a3831343832ull,0x3409383109636f6cull,0x6f6d090a30093334ull,0x2509203233752e76ull,
0x3b30202c31303172ull,0x2020202020202020ull,0x202f2f0920202020ull,0x325f375f744c240aull,
0x2f200a3a34373638ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3420656e696c2079ull,0x64616568202c3133ull,0x64656c6562616c20ull,0x325f375f744c2420ull,
0x6573090a38313438ull,0x09203233732e706cull,0x31202c3430317225ull,0x327025202c30202cull,
0x202f2f0920203b36ull,0x33622e646e61090aull,0x3530317225092032ull,0x2c3430317225202cull,
0x20203b3338722520ull,0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x3b30202c36303172ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x652e70746573090aull,0x2509203233732e71ull,
0x317225202c373270ull,0x30317225202c3530ull,0x090a202f2f093b36ull,0x7262203732702540ull,
0x375f744c24092061ull,0x203b36383139325full,0x2f09202020202020ull,0x6c3c2f2f200a202full,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c31333420656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x313438325f375f74ull,0x09636f6c2e090a38ull,
0x3009343734093831ull,0x7261702e646c090aull,0x09203233732e6d61ull,0x5b202c3730317225ull,
0x6170616475635f5full,0x5235325a5f5f6d72ull,0x4f64644178696461ull,0x6e41737465736666ull,
0x656c666675685364ull,0x615679654b323150ull,0x537269615065756cull,0x68735f696a6a5f30ull,
0x2f2f093b5d746669ull,0x203231333a646920ull,0x6170616475635f5full,0x5235325a5f5f6d72ull,
0x4f64644178696461ull,0x6e41737465736666ull,0x656c666675685364ull,0x615679654b323150ull,
0x537269615065756cull,0x68735f696a6a5f30ull,0x0a3078302b746669ull,0x3233752e72687309ull,
0x2c38303172250920ull,0x202c313031722520ull,0x09203b3730317225ull,0x646e61090a202f2full,
0x722509203233622eull,0x317225202c393031ull,0x3b353532202c3830ull,0x0a202f2f09202020ull,
0x2e6f6c2e6c756d09ull,0x3172250920323375ull,0x30317225202c3031ull,0x0920203b34202c39ull,
0x646461090a202f2full,0x722509203233752eull,0x347225202c313131ull,0x3031317225202c39ull,
0x0a202f2f0920203bull,0x3436752e74766309ull,0x722509203233752eull,0x317225202c373264ull,
0x09202020203b3131ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,0x202c383264722509ull,
0x34202c3732647225ull,0x0a202f2f0920203bull,0x3436752e64646109ull,0x2c39326472250920ull,
0x25202c3164722520ull,0x0920203b38326472ull,0x2e646c090a202f2full,0x752e646572616873ull,
0x3131722509203233ull,0x326472255b202c32ull,0x2f2f093b5d302b39ull,0x203331333a646920ull,
0x7553786964615273ull,0x61090a3078302b6dull,0x09203233752e6464ull,0x25202c3331317225ull,
0x3b31202c32313172ull,0x2f2f092020202020ull,0x68732e7473090a20ull,0x3233752e64657261ull,
0x39326472255b0920ull,0x317225202c5d302bull,0x69202f2f093b3331ull,0x5273203431333a64ull,
0x2b6d755378696461ull,0x6f6c2e090a307830ull,0x3537340938310963ull,0x702e646c090a3009ull,
0x3436752e6d617261ull,0x2c30336472250920ull,0x616475635f5f5b20ull,0x325a5f5f6d726170ull,
0x6441786964615235ull,0x7374657366664f64ull,0x6666756853646e41ull,0x79654b323150656cull,
0x69615065756c6156ull,0x5f696a6a5f305372ull,0x2f093b5d74734470ull,0x3531333a6469202full,
0x70616475635f5f20ull,0x35325a5f5f6d7261ull,0x6464417869646152ull,0x417374657366664full,
0x6c6666756853646eull,0x5679654b32315065ull,0x7269615065756c61ull,0x705f696a6a5f3053ull,
0x0a3078302b747344ull,0x3436752e74766309ull,0x722509203233752eull,0x317225202c313364ull,
0x09202020203b3231ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,0x202c323364722509ull,
0x38202c3133647225ull,0x0a202f2f0920203bull,0x3436752e64646109ull,0x2c33336472250920ull,
0x202c303364722520ull,0x09203b3233647225ull,0x766f6d090a202f2full,0x722509203233732eull,
0x317225202c343131ull,0x20202020203b3330ull,0x0a202f2f09202020ull,0x626f6c672e747309ull,
0x33752e32762e6c61ull,0x336472255b092032ull,0x257b202c5d302b33ull,0x3172252c31303172ull,
0x202f2f093b7d3431ull,0x325f375f744c240aull,0x2f200a3a36383139ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3420656e696c2079ull,0x64616568202c3133ull,
0x64656c6562616c20ull,0x325f375f744c2420ull,0x6c2e090a38313438ull,0x373409383109636full,
0x726162090a300937ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233622e646e6109ull,0x2c35313172250920ull,0x202c343031722520ull,
0x0920203b34387225ull,0x766f6d090a202f2full,0x722509203233752eull,0x203b30202c363131ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,
0x31317225202c3832ull,0x3631317225202c35ull,0x40090a202f2f093bull,0x6172622038327025ull,
0x5f375f744c240920ull,0x20203b3839363932ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c31333420656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x38313438325f375full,0x3109636f6c2e090aull,
0x0a30093038340938ull,0x617261702e646c09ull,0x2509203233732e6dull,0x5f5b202c37313172ull,
0x726170616475635full,0x615235325a5f5f6dull,0x664f646441786964ull,0x646e417374657366ull,
0x50656c6666756853ull,0x6c615679654b3231ull,0x3053726961506575ull,0x6968735f696a6a5full,
0x202f2f093b5d7466ull,0x5f203231333a6469ull,0x726170616475635full,0x615235325a5f5f6dull,
0x664f646441786964ull,0x646e417374657366ull,0x50656c6666756853ull,0x6c615679654b3231ull,
0x3053726961506575ull,0x6968735f696a6a5full,0x090a3078302b7466ull,0x203233752e726873ull,
0x202c383031722509ull,0x25202c3130317225ull,0x2f09203b37313172ull,0x2e646e61090a202full,
0x3172250920323362ull,0x30317225202c3930ull,0x203b353532202c38ull,0x090a202f2f092020ull,
0x752e6f6c2e6c756dull,0x3131722509203233ull,0x3930317225202c30ull,0x2f0920203b34202cull,
0x2e646461090a202full,0x3172250920323375ull,0x39347225202c3831ull,0x3b3031317225202cull,
0x090a202f2f092020ull,0x2e3436752e747663ull,0x6472250920323375ull,0x31317225202c3433ull,
0x2f09202020203b38ull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3533647225ull,
0x3b34202c34336472ull,0x090a202f2f092020ull,0x203436752e646461ull,0x202c393264722509ull,
0x7225202c31647225ull,0x2f0920203b353364ull,0x732e646c090a202full,0x33752e6465726168ull,
0x3931317225092032ull,0x39326472255b202cull,0x202f2f093b5d302bull,0x73203831333a6469ull,
0x6d75537869646152ull,0x6461090a3078302bull,0x2509203233752e64ull,0x7225202c30323172ull,
0x203b31202c393131ull,0x202f2f0920202020ull,0x6168732e7473090aull,0x203233752e646572ull,
0x2b39326472255b09ull,0x32317225202c5d30ull,0x6469202f2f093b30ull,0x615273203931333aull,
0x302b6d7553786964ull,0x636f6c2e090a3078ull,0x0931383409383109ull,0x61702e646c090a30ull,
0x203436752e6d6172ull,0x202c363364722509ull,0x70616475635f5f5bull,0x35325a5f5f6d7261ull,
0x6464417869646152ull,0x417374657366664full,0x6c6666756853646eull,0x5679654b32315065ull,
0x7269615065756c61ull,0x705f696a6a5f3053ull,0x2f2f093b5d747344ull,0x203531333a646920ull,
0x6170616475635f5full,0x5235325a5f5f6d72ull,0x4f64644178696461ull,0x6e41737465736666ull,
0x656c666675685364ull,0x615679654b323150ull,0x537269615065756cull,0x44705f696a6a5f30ull,
0x090a3078302b7473ull,0x2e3436752e747663ull,0x6472250920323375ull,0x31317225202c3733ull,
0x2f09202020203b39ull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3833647225ull,
0x3b38202c37336472ull,0x090a202f2f092020ull,0x203436752e646461ull,0x202c393364722509ull,
0x25202c3633647225ull,0x2f09203b38336472ull,0x2e766f6d090a202full,0x3172250920323373ull,
0x30317225202c3132ull,0x2020202020203b33ull,0x090a202f2f092020ull,0x61626f6c672e7473ull,
0x3233752e32762e6cull,0x39336472255b0920ull,0x72257b202c5d302bull,0x323172252c313031ull,
0x0a202f2f093b7d31ull,0x39325f375f744c24ull,0x2f2f200a3a383936ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x333420656e696c20ull,0x2064616568202c31ull,
0x2064656c6562616cull,0x38325f375f744c24ull,0x6f6c2e090a383134ull,0x3338340938310963ull,
0x2e726162090a3009ull,0x3b300920636e7973ull,0x2020202020202020ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x203233622e646e61ull,0x202c323231722509ull,0x25202c3430317225ull,
0x2f0920203b353872ull,0x2e766f6d090a202full,0x3172250920323375ull,0x20203b30202c3332ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x2e71652e70746573ull,0x3270250920323373ull,
0x3232317225202c39ull,0x3b3332317225202cull,0x2540090a202f2f09ull,0x2061726220393270ull,
0x335f375f744c2409ull,0x2020203b30313230ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3133342065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x0a38313438325f37ull,0x383109636f6c2e09ull,
0x090a300936383409ull,0x6d617261702e646cull,0x722509203233732eull,0x5f5f5b202c343231ull,
0x6d72617061647563ull,0x64615235325a5f5full,0x66664f6464417869ull,0x53646e4173746573ull,
0x3150656c66667568ull,0x756c615679654b32ull,0x5f30537269615065ull,0x666968735f696a6aull,
0x69202f2f093b5d74ull,0x5f5f203231333a64ull,0x6d72617061647563ull,0x64615235325a5f5full,
0x66664f6464417869ull,0x53646e4173746573ull,0x3150656c66667568ull,0x756c615679654b32ull,
0x5f30537269615065ull,0x666968735f696a6aull,0x73090a3078302b74ull,0x09203233752e7268ull,
0x25202c3830317225ull,0x7225202c31303172ull,0x2f2f09203b343231ull,0x622e646e61090a20ull,
0x3031722509203233ull,0x3830317225202c39ull,0x20203b353532202cull,0x6d090a202f2f0920ull,
0x33752e6f6c2e6c75ull,0x3031317225092032ull,0x2c3930317225202cull,0x2f2f0920203b3420ull,
0x752e646461090a20ull,0x3231722509203233ull,0x2c39347225202c35ull,0x203b303131722520ull,
0x63090a202f2f0920ull,0x752e3436752e7476ull,0x3464722509203233ull,0x3532317225202c30ull,
0x2f2f09202020203bull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c31346472ull,
0x203b34202c303464ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3932647225ull,
0x647225202c316472ull,0x2f2f0920203b3134ull,0x68732e646c090a20ull,0x3233752e64657261ull,
0x2c36323172250920ull,0x2b39326472255b20ull,0x69202f2f093b5d30ull,0x5273203232333a64ull,
0x2b6d755378696461ull,0x646461090a307830ull,0x722509203233752eull,0x317225202c373231ull,
0x20203b31202c3632ull,0x0a202f2f09202020ull,0x726168732e747309ull,0x09203233752e6465ull,
0x302b39326472255bull,0x3732317225202c5dull,0x3a6469202f2f093bull,0x6461527320333233ull,
0x78302b6d75537869ull,0x09636f6c2e090a30ull,0x3009373834093831ull,0x7261702e646c090aull,
0x09203436752e6d61ull,0x5b202c3234647225ull,0x6170616475635f5full,0x5235325a5f5f6d72ull,
0x4f64644178696461ull,0x6e41737465736666ull,0x656c666675685364ull,0x615679654b323150ull,
0x537269615065756cull,0x44705f696a6a5f30ull,0x202f2f093b5d7473ull,0x5f203531333a6469ull,
0x726170616475635full,0x615235325a5f5f6dull,0x664f646441786964ull,0x646e417374657366ull,
0x50656c6666756853ull,0x6c615679654b3231ull,0x3053726961506575ull,0x7344705f696a6a5full,
0x63090a3078302b74ull,0x752e3436752e7476ull,0x3464722509203233ull,0x3632317225202c33ull,
0x2f2f09202020203bull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c34346472ull,
0x203b38202c333464ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3534647225ull,
0x7225202c32346472ull,0x2f2f09203b343464ull,0x732e766f6d090a20ull,0x3231722509203233ull,
0x3330317225202c38ull,0x202020202020203bull,0x73090a202f2f0920ull,0x6c61626f6c672e74ull,
0x203233752e32762eull,0x2b35346472255b09ull,0x3172257b202c5d30ull,0x38323172252c3130ull,
0x240a202f2f093b7dull,0x3230335f375f744cull,0x3c2f2f200a3a3031ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x31333420656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3438325f375f744cull,0x636f6c2e090a3831ull,0x0939383409383109ull,
0x732e726162090a30ull,0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,
0x61090a202f2f0920ull,0x09203233622e646eull,0x25202c3932317225ull,0x7225202c34303172ull,
0x2f2f0920203b3638ull,0x752e766f6d090a20ull,0x3331722509203233ull,0x2020203b30202c30ull,
0x2020202020202020ull,0x73090a202f2f0920ull,0x732e71652e707465ull,0x3033702509203233ull,
0x2c3932317225202cull,0x093b303331722520ull,0x702540090a202f2full,0x0920617262203033ull,
0x30335f375f744c24ull,0x202020203b323237ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c31333420ull,
0x6c6562616c206461ull,0x375f744c24206465ull,0x090a38313438325full,0x09383109636f6c2eull,
0x6c090a3009323934ull,0x2e6d617261702e64ull,0x3172250920323373ull,0x635f5f5b202c3133ull,
0x5f6d726170616475ull,0x6964615235325a5full,0x7366664f64644178ull,0x6853646e41737465ull,
0x323150656c666675ull,0x65756c615679654bull,0x6a5f305372696150ull,0x74666968735f696aull,
0x6469202f2f093b5dull,0x635f5f203231333aull,0x5f6d726170616475ull,0x6964615235325a5full,
0x7366664f64644178ull,0x6853646e41737465ull,0x323150656c666675ull,0x65756c615679654bull,
0x6a5f305372696150ull,0x74666968735f696aull,0x6873090a3078302bull,0x2509203233752e72ull,
0x7225202c38303172ull,0x317225202c313031ull,0x202f2f09203b3133ull,0x33622e646e61090aull,
0x3930317225092032ull,0x2c3830317225202cull,0x2020203b35353220ull,0x756d090a202f2f09ull,
0x3233752e6f6c2e6cull,0x2c30313172250920ull,0x202c393031722520ull,0x202f2f0920203b34ull,
0x33752e646461090aull,0x3233317225092032ull,0x202c39347225202cull,0x20203b3031317225ull,
0x7663090a202f2f09ull,0x33752e3436752e74ull,0x3634647225092032ull,0x3b3233317225202cull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c373464ull,
0x20203b34202c3634ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c39326472ull,
0x34647225202c3164ull,0x202f2f0920203b37ull,0x6168732e646c090aull,0x203233752e646572ull,
0x202c333331722509ull,0x302b39326472255bull,0x6469202f2f093b5dull,0x615273203632333aull,
0x302b6d7553786964ull,0x2e646461090a3078ull,0x3172250920323375ull,0x33317225202c3433ull,
0x2020203b31202c33ull,0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233752e64ull,
0x5d302b3932647225ull,0x3b3433317225202cull,0x333a6469202f2f09ull,0x6964615273203732ull,
0x3078302b6d755378ull,0x3109636f6c2e090aull,0x0a30093339340938ull,0x617261702e646c09ull,
0x2509203436752e6dull,0x5f5b202c38346472ull,0x726170616475635full,0x615235325a5f5f6dull,
0x664f646441786964ull,0x646e417374657366ull,0x50656c6666756853ull,0x6c615679654b3231ull,
0x3053726961506575ull,0x7344705f696a6a5full,0x69202f2f093b5d74ull,0x5f5f203531333a64ull,
0x6d72617061647563ull,0x64615235325a5f5full,0x66664f6464417869ull,0x53646e4173746573ull,
0x3150656c66667568ull,0x756c615679654b32ull,0x5f30537269615065ull,0x747344705f696a6aull,
0x7663090a3078302bull,0x33752e3436752e74ull,0x3934647225092032ull,0x3b3333317225202cull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c303564ull,
0x20203b38202c3934ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c31356472ull,
0x647225202c383464ull,0x202f2f09203b3035ull,0x33732e766f6d090aull,0x3533317225092032ull,
0x3b3330317225202cull,0x2020202020202020ull,0x7473090a202f2f09ull,0x2e6c61626f6c672eull,
0x09203233752e3276ull,0x302b31356472255bull,0x303172257b202c5dull,0x7d35333172252c31ull,
0x4c240a202f2f093bull,0x323730335f375f74ull,0x6c3c2f2f200a3a32ull,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c31333420656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x313438325f375f74ull,0x09636f6c2e090a38ull,0x3009353934093831ull,
0x79732e726162090aull,0x20203b300920636eull,0x2020202020202020ull,0x2020202020202020ull,
0x6e61090a202f2f09ull,0x2509203233622e64ull,0x7225202c36333172ull,0x387225202c343031ull,
0x202f2f0920203b37ull,0x33752e766f6d090aull,0x3733317225092032ull,0x202020203b30202cull,
0x2020202020202020ull,0x6573090a202f2f09ull,0x33732e71652e7074ull,0x2c31337025092032ull,
0x202c363331722520ull,0x2f093b3733317225ull,0x33702540090a202full,0x2409206172622031ull,
0x3231335f375f744cull,0x20202020203b3433ull,0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c313334ull,
0x656c6562616c2064ull,0x5f375f744c242064ull,0x2e090a3831343832ull,0x3409383109636f6cull,
0x646c090a30093839ull,0x732e6d617261702eull,0x3331722509203233ull,0x75635f5f5b202c38ull,
0x5f5f6d7261706164ull,0x786964615235325aull,0x657366664f646441ull,0x756853646e417374ull,
0x4b323150656c6666ull,0x5065756c61567965ull,0x6a6a5f3053726961ull,0x5d74666968735f69ull,
0x3a6469202f2f093bull,0x75635f5f20323133ull,0x5f5f6d7261706164ull,0x786964615235325aull,
0x657366664f646441ull,0x756853646e417374ull,0x4b323150656c6666ull,0x5065756c61567965ull,
0x6a6a5f3053726961ull,0x2b74666968735f69ull,0x726873090a307830ull,0x722509203233752eull,
0x317225202c383031ull,0x33317225202c3130ull,0x0a202f2f09203b38ull,0x3233622e646e6109ull,
0x2c39303172250920ull,0x202c383031722520ull,0x092020203b353532ull,0x6c756d090a202f2full,
0x203233752e6f6c2eull,0x202c303131722509ull,0x34202c3930317225ull,0x0a202f2f0920203bull,
0x3233752e64646109ull,0x2c39333172250920ull,0x25202c3934722520ull,0x0920203b30313172ull,
0x747663090a202f2full,0x3233752e3436752eull,0x2c32356472250920ull,0x203b393331722520ull,
0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x35647225202c3335ull,
0x0920203b34202c32ull,0x646461090a202f2full,0x722509203436752eull,0x647225202c393264ull,
0x3335647225202c31ull,0x0a202f2f0920203bull,0x726168732e646c09ull,0x09203233752e6465ull,
0x5b202c3034317225ull,0x5d302b3932647225ull,0x3a6469202f2f093bull,0x6461527320303333ull,
0x78302b6d75537869ull,0x752e646461090a30ull,0x3431722509203233ull,0x3034317225202c31ull,
0x202020203b31202cull,0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203233752eull,
0x2c5d302b39326472ull,0x093b313431722520ull,0x33333a6469202f2full,0x7869646152732031ull,
0x0a3078302b6d7553ull,0x383109636f6c2e09ull,0x090a300939393409ull,0x6d617261702e646cull,
0x722509203436752eull,0x5f5f5b202c343564ull,0x6d72617061647563ull,0x64615235325a5f5full,
0x66664f6464417869ull,0x53646e4173746573ull,0x3150656c66667568ull,0x756c615679654b32ull,
0x5f30537269615065ull,0x747344705f696a6aull,0x6469202f2f093b5dull,0x635f5f203531333aull,
0x5f6d726170616475ull,0x6964615235325a5full,0x7366664f64644178ull,0x6853646e41737465ull,
0x323150656c666675ull,0x65756c615679654bull,0x6a5f305372696150ull,0x2b747344705f696aull,
0x747663090a307830ull,0x3233752e3436752eull,0x2c35356472250920ull,0x203b303431722520ull,
0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x35647225202c3635ull,
0x0920203b38202c35ull,0x646461090a202f2full,0x722509203436752eull,0x647225202c373564ull,
0x35647225202c3435ull,0x0a202f2f09203b36ull,0x3233732e766f6d09ull,0x2c32343172250920ull,
0x203b333031722520ull,0x0920202020202020ull,0x2e7473090a202f2full,0x762e6c61626f6c67ull,
0x5b09203233752e32ull,0x5d302b3735647225ull,0x31303172257b202cull,0x3b7d32343172252cull,
0x744c240a202f2f09ull,0x34333231335f375full,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c31333420656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x38313438325f375full,0x3109636f6c2e090aull,0x0a30093130350938ull,
0x6e79732e72616209ull,0x2020203b30092063ull,0x2020202020202020ull,0x0920202020202020ull,
0x646e61090a202f2full,0x722509203233622eull,0x317225202c333431ull,0x38387225202c3430ull,
0x0a202f2f0920203bull,0x3233752e766f6d09ull,0x2c34343172250920ull,0x20202020203b3020ull,
0x0920202020202020ull,0x746573090a202f2full,0x3233732e71652e70ull,0x202c323370250920ull,
0x25202c3334317225ull,0x2f2f093b34343172ull,0x3233702540090a20ull,0x4c24092061726220ull,
0x343731335f375f74ull,0x2020202020203b36ull,0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3420656e696c2079ull,0x64616568202c3133ull,
0x64656c6562616c20ull,0x325f375f744c2420ull,0x6c2e090a38313438ull,0x303509383109636full,
0x2e646c090a300934ull,0x33732e6d61726170ull,0x3534317225092032ull,0x6475635f5f5b202cull,
0x5a5f5f6d72617061ull,0x4178696461523532ull,0x74657366664f6464ull,0x66756853646e4173ull,
0x654b323150656c66ull,0x615065756c615679ull,0x696a6a5f30537269ull,0x3b5d74666968735full,
0x333a6469202f2f09ull,0x6475635f5f203231ull,0x5a5f5f6d72617061ull,0x4178696461523532ull,
0x74657366664f6464ull,0x66756853646e4173ull,0x654b323150656c66ull,0x615065756c615679ull,
0x696a6a5f30537269ull,0x302b74666968735full,0x2e726873090a3078ull,0x3172250920323375ull,
0x30317225202c3830ull,0x3534317225202c31ull,0x090a202f2f09203bull,0x203233622e646e61ull,
0x202c393031722509ull,0x32202c3830317225ull,0x2f092020203b3535ull,0x2e6c756d090a202full,
0x09203233752e6f6cull,0x25202c3031317225ull,0x3b34202c39303172ull,0x090a202f2f092020ull,
0x203233752e646461ull,0x202c363431722509ull,0x7225202c39347225ull,0x2f0920203b303131ull,
0x2e747663090a202full,0x203233752e343675ull,0x202c383564722509ull,0x20203b3634317225ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3564722509203436ull,0x3835647225202c39ull,
0x2f0920203b34202cull,0x2e646461090a202full,0x6472250920343675ull,0x31647225202c3932ull,
0x3b3935647225202cull,0x090a202f2f092020ull,0x65726168732e646cull,0x2509203233752e64ull,
0x255b202c37343172ull,0x3b5d302b39326472ull,0x333a6469202f2f09ull,0x6964615273203433ull,
0x3078302b6d755378ull,0x33752e646461090aull,0x3834317225092032ull,0x2c3734317225202cull,
0x20202020203b3120ull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323375ull,
0x202c5d302b393264ull,0x2f093b3834317225ull,0x3533333a6469202full,0x5378696461527320ull,
0x090a3078302b6d75ull,0x09383109636f6c2eull,0x6c090a3009353035ull,0x2e6d617261702e64ull,
0x6472250920343675ull,0x635f5f5b202c3036ull,0x5f6d726170616475ull,0x6964615235325a5full,
0x7366664f64644178ull,0x6853646e41737465ull,0x323150656c666675ull,0x65756c615679654bull,
0x6a5f305372696150ull,0x5d747344705f696aull,0x3a6469202f2f093bull,0x75635f5f20353133ull,
0x5f5f6d7261706164ull,0x786964615235325aull,0x657366664f646441ull,0x756853646e417374ull,
0x4b323150656c6666ull,0x5065756c61567965ull,0x6a6a5f3053726961ull,0x302b747344705f69ull,
0x2e747663090a3078ull,0x203233752e343675ull,0x202c313664722509ull,0x20203b3734317225ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3664722509203436ull,0x3136647225202c32ull,
0x2f0920203b38202cull,0x2e646461090a202full,0x6472250920343675ull,0x36647225202c3336ull,
0x3236647225202c30ull,0x090a202f2f09203bull,0x203233732e766f6dull,0x202c393431722509ull,
0x20203b3330317225ull,0x2f09202020202020ull,0x672e7473090a202full,0x32762e6c61626f6cull,
0x255b09203233752eull,0x2c5d302b33366472ull,0x2c31303172257b20ull,0x093b7d3934317225ull,
0x5f744c240a202f2full,0x3a36343731335f37ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3133342065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x0a38313438325f37ull,0x383109636f6c2e09ull,0x090a300937303509ull,
0x636e79732e726162ull,0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,
0x2e646e61090a202full,0x3172250920323362ull,0x30317225202c3035ull,0x3b39387225202c34ull,
0x090a202f2f092020ull,0x203233752e766f6dull,0x202c313531722509ull,0x2020202020203b30ull,
0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,0x25202c3333702509ull,
0x7225202c30353172ull,0x202f2f093b313531ull,0x203333702540090aull,0x744c240920617262ull,
0x38353232335f375full,0x202020202020203bull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x333420656e696c20ull,0x2064616568202c31ull,
0x2064656c6562616cull,0x38325f375f744c24ull,0x6f6c2e090a383134ull,0x3031350938310963ull,
0x702e646c090a3009ull,0x3233732e6d617261ull,0x2c32353172250920ull,0x616475635f5f5b20ull,
0x325a5f5f6d726170ull,0x6441786964615235ull,0x7374657366664f64ull,0x6666756853646e41ull,
0x79654b323150656cull,0x69615065756c6156ull,0x5f696a6a5f305372ull,0x093b5d7466696873ull,
0x31333a6469202f2full,0x616475635f5f2032ull,0x325a5f5f6d726170ull,0x6441786964615235ull,
0x7374657366664f64ull,0x6666756853646e41ull,0x79654b323150656cull,0x69615065756c6156ull,
0x5f696a6a5f305372ull,0x78302b7466696873ull,0x752e726873090a30ull,0x3031722509203233ull,
0x3130317225202c38ull,0x3b3235317225202cull,0x61090a202f2f0920ull,0x09203233622e646eull,
0x25202c3930317225ull,0x3532202c38303172ull,0x2f2f092020203b35ull,0x6c2e6c756d090a20ull,
0x2509203233752e6full,0x7225202c30313172ull,0x203b34202c393031ull,0x61090a202f2f0920ull,
0x09203233752e6464ull,0x25202c3335317225ull,0x317225202c393472ull,0x2f2f0920203b3031ull,
0x752e747663090a20ull,0x09203233752e3436ull,0x25202c3436647225ull,0x2020203b33353172ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3536647225092034ull,0x2c3436647225202cull,
0x2f2f0920203b3420ull,0x752e646461090a20ull,0x3264722509203436ull,0x2c31647225202c39ull,
0x203b353664722520ull,0x6c090a202f2f0920ull,0x6465726168732e64ull,0x722509203233752eull,
0x72255b202c343531ull,0x093b5d302b393264ull,0x33333a6469202f2full,0x7869646152732038ull,
0x0a3078302b6d7553ull,0x3233752e64646109ull,0x2c35353172250920ull,0x202c343531722520ull,
0x0920202020203b31ull,0x2e7473090a202f2full,0x752e646572616873ull,0x6472255b09203233ull,
0x25202c5d302b3932ull,0x2f2f093b35353172ull,0x203933333a646920ull,0x7553786964615273ull,
0x2e090a3078302b6dull,0x3509383109636f6cull,0x646c090a30093131ull,0x752e6d617261702eull,
0x3664722509203436ull,0x75635f5f5b202c36ull,0x5f5f6d7261706164ull,0x786964615235325aull,
0x657366664f646441ull,0x756853646e417374ull,0x4b323150656c6666ull,0x5065756c61567965ull,
0x6a6a5f3053726961ull,0x3b5d747344705f69ull,0x333a6469202f2f09ull,0x6475635f5f203531ull,
0x5a5f5f6d72617061ull,0x4178696461523532ull,0x74657366664f6464ull,0x66756853646e4173ull,
0x654b323150656c66ull,0x615065756c615679ull,0x696a6a5f30537269ull,0x78302b747344705full,
0x752e747663090a30ull,0x09203233752e3436ull,0x25202c3736647225ull,0x2020203b34353172ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3836647225092034ull,0x2c3736647225202cull,
0x2f2f0920203b3820ull,0x752e646461090a20ull,0x3664722509203436ull,0x3636647225202c39ull,
0x3b3836647225202cull,0x6d090a202f2f0920ull,0x09203233732e766full,0x25202c3635317225ull,
0x2020203b33303172ull,0x2f2f092020202020ull,0x6c672e7473090a20ull,0x2e32762e6c61626full,
0x72255b0920323375ull,0x202c5d302b393664ull,0x252c31303172257bull,0x2f093b7d36353172ull,
0x375f744c240a202full,0x0a3a38353232335full,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c31333420ull,0x6c6562616c206461ull,
0x375f744c24206465ull,0x090a38313438325full,0x09383109636f6c2eull,0x62090a3009333135ull,
0x20636e79732e7261ull,0x20202020203b3009ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x622e646e61090a20ull,0x3531722509203233ull,0x3430317225202c37ull,0x203b30397225202cull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x30202c3835317225ull,0x202020202020203bull,
0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233732e7165ull,0x7225202c34337025ull,
0x317225202c373531ull,0x0a202f2f093b3835ull,0x6220343370254009ull,0x5f744c2409206172ull,
0x3b30373732335f37ull,0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x31333420656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3438325f375f744cull,0x636f6c2e090a3831ull,0x0936313509383109ull,
0x61702e646c090a30ull,0x203233732e6d6172ull,0x202c393531722509ull,0x70616475635f5f5bull,
0x35325a5f5f6d7261ull,0x6464417869646152ull,0x417374657366664full,0x6c6666756853646eull,
0x5679654b32315065ull,0x7269615065756c61ull,0x735f696a6a5f3053ull,0x2f093b5d74666968ull,
0x3231333a6469202full,0x70616475635f5f20ull,0x35325a5f5f6d7261ull,0x6464417869646152ull,
0x417374657366664full,0x6c6666756853646eull,0x5679654b32315065ull,0x7269615065756c61ull,
0x735f696a6a5f3053ull,0x3078302b74666968ull,0x33752e726873090aull,0x3830317225092032ull,
0x2c3130317225202cull,0x203b393531722520ull,0x6e61090a202f2f09ull,0x2509203233622e64ull,
0x7225202c39303172ull,0x353532202c383031ull,0x202f2f092020203bull,0x6f6c2e6c756d090aull,
0x722509203233752eull,0x317225202c303131ull,0x20203b34202c3930ull,0x6461090a202f2f09ull,
0x2509203233752e64ull,0x7225202c30363172ull,0x31317225202c3934ull,0x202f2f0920203b30ull,
0x36752e747663090aull,0x2509203233752e34ull,0x7225202c30376472ull,0x202020203b303631ull,
0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x2c31376472250920ull,0x202c303764722520ull,
0x202f2f0920203b34ull,0x36752e646461090aull,0x3932647225092034ull,0x202c31647225202cull,
0x20203b3137647225ull,0x646c090a202f2f09ull,0x2e6465726168732eull,0x3172250920323375ull,
0x6472255b202c3136ull,0x2f093b5d302b3932ull,0x3234333a6469202full,0x5378696461527320ull,
0x090a3078302b6d75ull,0x203233752e646461ull,0x202c323631722509ull,0x31202c3136317225ull,
0x2f0920202020203bull,0x732e7473090a202full,0x33752e6465726168ull,0x326472255b092032ull,
0x7225202c5d302b39ull,0x202f2f093b323631ull,0x73203334333a6469ull,0x6d75537869646152ull,
0x6c2e090a3078302bull,0x313509383109636full,0x2e646c090a300937ull,0x36752e6d61726170ull,
0x3237647225092034ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x4178696461523532ull,
0x74657366664f6464ull,0x66756853646e4173ull,0x654b323150656c66ull,0x615065756c615679ull,
0x696a6a5f30537269ull,0x093b5d747344705full,0x31333a6469202f2full,0x616475635f5f2035ull,
0x325a5f5f6d726170ull,0x6441786964615235ull,0x7374657366664f64ull,0x6666756853646e41ull,
0x79654b323150656cull,0x69615065756c6156ull,0x5f696a6a5f305372ull,0x3078302b74734470ull,
0x36752e747663090aull,0x2509203233752e34ull,0x7225202c33376472ull,0x202020203b313631ull,
0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x2c34376472250920ull,0x202c333764722520ull,
0x202f2f0920203b38ull,0x36752e646461090aull,0x3537647225092034ull,0x2c3237647225202cull,
0x203b343764722520ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x7225202c33363172ull,
0x202020203b333031ull,0x202f2f0920202020ull,0x6f6c672e7473090aull,0x752e32762e6c6162ull,
0x6472255b09203233ull,0x7b202c5d302b3537ull,0x72252c3130317225ull,0x2f2f093b7d333631ull,
0x5f375f744c240a20ull,0x200a3a3037373233ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c313334ull,0x656c6562616c2064ull,
0x5f375f744c242064ull,0x2e090a3831343832ull,0x3509383109636f6cull,0x6162090a30093931ull,
0x0920636e79732e72ull,0x2020202020203b30ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x33622e646e61090aull,0x3436317225092032ull,0x2c3430317225202cull,0x20203b3139722520ull,
0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x3b30202c35363172ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x652e70746573090aull,0x2509203233732e71ull,0x317225202c353370ull,
0x36317225202c3436ull,0x090a202f2f093b35ull,0x7262203533702540ull,0x375f744c24092061ull,
0x203b32383233335full,0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c31333420656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x313438325f375f74ull,0x09636f6c2e090a38ull,0x3009323235093831ull,
0x7261702e646c090aull,0x09203233732e6d61ull,0x5b202c3636317225ull,0x6170616475635f5full,
0x5235325a5f5f6d72ull,0x4f64644178696461ull,0x6e41737465736666ull,0x656c666675685364ull,
0x615679654b323150ull,0x537269615065756cull,0x68735f696a6a5f30ull,0x2f2f093b5d746669ull,
0x203231333a646920ull,0x6170616475635f5full,0x5235325a5f5f6d72ull,0x4f64644178696461ull,
0x6e41737465736666ull,0x656c666675685364ull,0x615679654b323150ull,0x537269615065756cull,
0x68735f696a6a5f30ull,0x0a3078302b746669ull,0x3233752e72687309ull,0x2c38303172250920ull,
0x202c313031722520ull,0x09203b3636317225ull,0x646e61090a202f2full,0x722509203233622eull,
0x317225202c393031ull,0x3b353532202c3830ull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,
0x3172250920323375ull,0x30317225202c3031ull,0x0920203b34202c39ull,0x646461090a202f2full,
0x722509203233752eull,0x347225202c373631ull,0x3031317225202c39ull,0x0a202f2f0920203bull,
0x3436752e74766309ull,0x722509203233752eull,0x317225202c363764ull,0x09202020203b3736ull,
0x6c756d090a202f2full,0x203436752e6f6c2eull,0x202c373764722509ull,0x34202c3637647225ull,
0x0a202f2f0920203bull,0x3436752e64646109ull,0x2c39326472250920ull,0x25202c3164722520ull,
0x0920203b37376472ull,0x2e646c090a202f2full,0x752e646572616873ull,0x3631722509203233ull,
0x326472255b202c38ull,0x2f2f093b5d302b39ull,0x203634333a646920ull,0x7553786964615273ull,
0x61090a3078302b6dull,0x09203233752e6464ull,0x25202c3936317225ull,0x3b31202c38363172ull,
0x2f2f092020202020ull,0x68732e7473090a20ull,0x3233752e64657261ull,0x39326472255b0920ull,
0x317225202c5d302bull,0x69202f2f093b3936ull,0x5273203734333a64ull,0x2b6d755378696461ull,
0x6f6c2e090a307830ull,0x3332350938310963ull,0x702e646c090a3009ull,0x3436752e6d617261ull,
0x2c38376472250920ull,0x616475635f5f5b20ull,0x325a5f5f6d726170ull,0x6441786964615235ull,
0x7374657366664f64ull,0x6666756853646e41ull,0x79654b323150656cull,0x69615065756c6156ull,
0x5f696a6a5f305372ull,0x2f093b5d74734470ull,0x3531333a6469202full,0x70616475635f5f20ull,
0x35325a5f5f6d7261ull,0x6464417869646152ull,0x417374657366664full,0x6c6666756853646eull,
0x5679654b32315065ull,0x7269615065756c61ull,0x705f696a6a5f3053ull,0x0a3078302b747344ull,
0x3436752e74766309ull,0x722509203233752eull,0x317225202c393764ull,0x09202020203b3836ull,
0x6c756d090a202f2full,0x203436752e6f6c2eull,0x202c303864722509ull,0x38202c3937647225ull,
0x0a202f2f0920203bull,0x3436752e64646109ull,0x2c31386472250920ull,0x202c383764722520ull,
0x09203b3038647225ull,0x766f6d090a202f2full,0x722509203233732eull,0x317225202c303731ull,
0x20202020203b3330ull,0x0a202f2f09202020ull,0x626f6c672e747309ull,0x33752e32762e6c61ull,
0x386472255b092032ull,0x257b202c5d302b31ull,0x3172252c31303172ull,0x202f2f093b7d3037ull,
0x335f375f744c240aull,0x2f200a3a32383233ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3420656e696c2079ull,0x64616568202c3133ull,0x64656c6562616c20ull,
0x325f375f744c2420ull,0x6c2e090a38313438ull,0x323509383109636full,0x726162090a300935ull,
0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x3233622e646e6109ull,0x2c31373172250920ull,0x202c343031722520ull,0x0920203b32397225ull,
0x766f6d090a202f2full,0x722509203233752eull,0x203b30202c323731ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,0x37317225202c3633ull,
0x3237317225202c31ull,0x40090a202f2f093bull,0x6172622036337025ull,0x5f375f744c240920ull,
0x20203b3439373333ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c31333420656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x38313438325f375full,0x3109636f6c2e090aull,0x0a30093832350938ull,
0x617261702e646c09ull,0x2509203233732e6dull,0x5f5b202c33373172ull,0x726170616475635full,
0x615235325a5f5f6dull,0x664f646441786964ull,0x646e417374657366ull,0x50656c6666756853ull,
0x6c615679654b3231ull,0x3053726961506575ull,0x6968735f696a6a5full,0x202f2f093b5d7466ull,
0x5f203231333a6469ull,0x726170616475635full,0x615235325a5f5f6dull,0x664f646441786964ull,
0x646e417374657366ull,0x50656c6666756853ull,0x6c615679654b3231ull,0x3053726961506575ull,
0x6968735f696a6a5full,0x090a3078302b7466ull,0x203233752e726873ull,0x202c383031722509ull,
0x25202c3130317225ull,0x2f09203b33373172ull,0x2e646e61090a202full,0x3172250920323362ull,
0x30317225202c3930ull,0x203b353532202c38ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,
0x3131722509203233ull,0x3930317225202c30ull,0x2f0920203b34202cull,0x2e646461090a202full,
0x3172250920323375ull,0x39347225202c3437ull,0x3b3031317225202cull,0x090a202f2f092020ull,
0x2e3436752e747663ull,0x6472250920323375ull,0x37317225202c3238ull,0x2f09202020203b34ull,
0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3338647225ull,0x3b34202c32386472ull,
0x090a202f2f092020ull,0x203436752e646461ull,0x202c393264722509ull,0x7225202c31647225ull,
0x2f0920203b333864ull,0x732e646c090a202full,0x33752e6465726168ull,0x3537317225092032ull,
0x39326472255b202cull,0x202f2f093b5d302bull,0x73203035333a6469ull,0x6d75537869646152ull,
0x6461090a3078302bull,0x2509203233752e64ull,0x7225202c36373172ull,0x203b31202c353731ull,
0x202f2f0920202020ull,0x6168732e7473090aull,0x203233752e646572ull,0x2b39326472255b09ull,
0x37317225202c5d30ull,0x6469202f2f093b36ull,0x615273203135333aull,0x302b6d7553786964ull,
0x636f6c2e090a3078ull,0x0939323509383109ull,0x61702e646c090a30ull,0x203436752e6d6172ull,
0x202c343864722509ull,0x70616475635f5f5bull,0x35325a5f5f6d7261ull,0x6464417869646152ull,
0x417374657366664full,0x6c6666756853646eull,0x5679654b32315065ull,0x7269615065756c61ull,
0x705f696a6a5f3053ull,0x2f2f093b5d747344ull,0x203531333a646920ull,0x6170616475635f5full,
0x5235325a5f5f6d72ull,0x4f64644178696461ull,0x6e41737465736666ull,0x656c666675685364ull,
0x615679654b323150ull,0x537269615065756cull,0x44705f696a6a5f30ull,0x090a3078302b7473ull,
0x2e3436752e747663ull,0x6472250920323375ull,0x37317225202c3538ull,0x2f09202020203b35ull,
0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3638647225ull,0x3b38202c35386472ull,
0x090a202f2f092020ull,0x203436752e646461ull,0x202c373864722509ull,0x25202c3438647225ull,
0x2f09203b36386472ull,0x2e766f6d090a202full,0x3172250920323373ull,0x30317225202c3737ull,
0x2020202020203b33ull,0x090a202f2f092020ull,0x61626f6c672e7473ull,0x3233752e32762e6cull,
0x37386472255b0920ull,0x72257b202c5d302bull,0x373172252c313031ull,0x0a202f2f093b7d37ull,
0x33335f375f744c24ull,0x2f2f200a3a343937ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x333420656e696c20ull,0x2064616568202c31ull,0x2064656c6562616cull,
0x38325f375f744c24ull,0x6f6c2e090a383134ull,0x3133350938310963ull,0x2e726162090a3009ull,
0x3b300920636e7973ull,0x2020202020202020ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x203233622e646e61ull,0x202c383731722509ull,0x25202c3430317225ull,0x2f0920203b333972ull,
0x2e766f6d090a202full,0x3172250920323375ull,0x20203b30202c3937ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e71652e70746573ull,0x3370250920323373ull,0x3837317225202c37ull,
0x3b3937317225202cull,0x2540090a202f2f09ull,0x2061726220373370ull,0x335f375f744c2409ull,
0x2020203b36303334ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3133342065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x0a38313438325f37ull,0x383109636f6c2e09ull,0x090a300934333509ull,
0x6d617261702e646cull,0x722509203233732eull,0x5f5f5b202c303831ull,0x6d72617061647563ull,
0x64615235325a5f5full,0x66664f6464417869ull,0x53646e4173746573ull,0x3150656c66667568ull,
0x756c615679654b32ull,0x5f30537269615065ull,0x666968735f696a6aull,0x69202f2f093b5d74ull,
0x5f5f203231333a64ull,0x6d72617061647563ull,0x64615235325a5f5full,0x66664f6464417869ull,
0x53646e4173746573ull,0x3150656c66667568ull,0x756c615679654b32ull,0x5f30537269615065ull,
0x666968735f696a6aull,0x73090a3078302b74ull,0x09203233752e7268ull,0x25202c3830317225ull,
0x7225202c31303172ull,0x2f2f09203b303831ull,0x622e646e61090a20ull,0x3031722509203233ull,
0x3830317225202c39ull,0x20203b353532202cull,0x6d090a202f2f0920ull,0x33752e6f6c2e6c75ull,
0x3031317225092032ull,0x2c3930317225202cull,0x2f2f0920203b3420ull,0x752e646461090a20ull,
0x3831722509203233ull,0x2c39347225202c31ull,0x203b303131722520ull,0x63090a202f2f0920ull,
0x752e3436752e7476ull,0x3864722509203233ull,0x3138317225202c38ull,0x2f2f09202020203bull,
0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c39386472ull,0x203b34202c383864ull,
0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3932647225ull,0x647225202c316472ull,
0x2f2f0920203b3938ull,0x68732e646c090a20ull,0x3233752e64657261ull,0x2c32383172250920ull,
0x2b39326472255b20ull,0x69202f2f093b5d30ull,0x5273203435333a64ull,0x2b6d755378696461ull,
0x646461090a307830ull,0x722509203233752eull,0x317225202c333831ull,0x20203b31202c3238ull,
0x0a202f2f09202020ull,0x726168732e747309ull,0x09203233752e6465ull,0x302b39326472255bull,
0x3338317225202c5dull,0x3a6469202f2f093bull,0x6461527320353533ull,0x78302b6d75537869ull,
0x09636f6c2e090a30ull,0x3009353335093831ull,0x7261702e646c090aull,0x09203436752e6d61ull,
0x5b202c3039647225ull,0x6170616475635f5full,0x5235325a5f5f6d72ull,0x4f64644178696461ull,
0x6e41737465736666ull,0x656c666675685364ull,0x615679654b323150ull,0x537269615065756cull,
0x44705f696a6a5f30ull,0x202f2f093b5d7473ull,0x5f203531333a6469ull,0x726170616475635full,
0x615235325a5f5f6dull,0x664f646441786964ull,0x646e417374657366ull,0x50656c6666756853ull,
0x6c615679654b3231ull,0x3053726961506575ull,0x7344705f696a6a5full,0x63090a3078302b74ull,
0x752e3436752e7476ull,0x3964722509203233ull,0x3238317225202c31ull,0x2f2f09202020203bull,
0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c32396472ull,0x203b38202c313964ull,
0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3339647225ull,0x7225202c30396472ull,
0x2f2f09203b323964ull,0x732e766f6d090a20ull,0x3831722509203233ull,0x3330317225202c34ull,
0x202020202020203bull,0x73090a202f2f0920ull,0x6c61626f6c672e74ull,0x203233752e32762eull,
0x2b33396472255b09ull,0x3172257b202c5d30ull,0x34383172252c3130ull,0x240a202f2f093b7dull,
0x3334335f375f744cull,0x3c2f2f200a3a3630ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x31333420656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3438325f375f744cull,0x636f6c2e090a3831ull,0x0937333509383109ull,0x732e726162090a30ull,
0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,0x61090a202f2f0920ull,
0x09203233622e646eull,0x25202c3538317225ull,0x7225202c34303172ull,0x2f2f0920203b3439ull,
0x752e766f6d090a20ull,0x3831722509203233ull,0x2020203b30202c36ull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x732e71652e707465ull,0x3833702509203233ull,0x2c3538317225202cull,
0x093b363831722520ull,0x702540090a202f2full,0x0920617262203833ull,0x34335f375f744c24ull,
0x202020203b383138ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c31333420ull,0x6c6562616c206461ull,
0x375f744c24206465ull,0x090a38313438325full,0x09383109636f6c2eull,0x6c090a3009303435ull,
0x2e6d617261702e64ull,0x3172250920323373ull,0x635f5f5b202c3738ull,0x5f6d726170616475ull,
0x6964615235325a5full,0x7366664f64644178ull,0x6853646e41737465ull,0x323150656c666675ull,
0x65756c615679654bull,0x6a5f305372696150ull,0x74666968735f696aull,0x6469202f2f093b5dull,
0x635f5f203231333aull,0x5f6d726170616475ull,0x6964615235325a5full,0x7366664f64644178ull,
0x6853646e41737465ull,0x323150656c666675ull,0x65756c615679654bull,0x6a5f305372696150ull,
0x74666968735f696aull,0x6873090a3078302bull,0x2509203233752e72ull,0x7225202c38303172ull,
0x317225202c313031ull,0x202f2f09203b3738ull,0x33622e646e61090aull,0x3930317225092032ull,
0x2c3830317225202cull,0x2020203b35353220ull,0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,
0x2c30313172250920ull,0x202c393031722520ull,0x202f2f0920203b34ull,0x33752e646461090aull,
0x3838317225092032ull,0x202c39347225202cull,0x20203b3031317225ull,0x7663090a202f2f09ull,
0x33752e3436752e74ull,0x3439647225092032ull,0x3b3838317225202cull,0x202f2f0920202020ull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c353964ull,0x20203b34202c3439ull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c39326472ull,0x39647225202c3164ull,
0x202f2f0920203b35ull,0x6168732e646c090aull,0x203233752e646572ull,0x202c393831722509ull,
0x302b39326472255bull,0x6469202f2f093b5dull,0x615273203835333aull,0x302b6d7553786964ull,
0x2e646461090a3078ull,0x3172250920323375ull,0x38317225202c3039ull,0x2020203b31202c39ull,
0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233752e64ull,0x5d302b3932647225ull,
0x3b3039317225202cull,0x333a6469202f2f09ull,0x6964615273203935ull,0x3078302b6d755378ull,
0x3109636f6c2e090aull,0x0a30093134350938ull,0x617261702e646c09ull,0x2509203436752e6dull,
0x5f5b202c36396472ull,0x726170616475635full,0x615235325a5f5f6dull,0x664f646441786964ull,
0x646e417374657366ull,0x50656c6666756853ull,0x6c615679654b3231ull,0x3053726961506575ull,
0x7344705f696a6a5full,0x69202f2f093b5d74ull,0x5f5f203531333a64ull,0x6d72617061647563ull,
0x64615235325a5f5full,0x66664f6464417869ull,0x53646e4173746573ull,0x3150656c66667568ull,
0x756c615679654b32ull,0x5f30537269615065ull,0x747344705f696a6aull,0x7663090a3078302bull,
0x33752e3436752e74ull,0x3739647225092032ull,0x3b3938317225202cull,0x202f2f0920202020ull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c383964ull,0x20203b38202c3739ull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c39396472ull,0x647225202c363964ull,
0x202f2f09203b3839ull,0x33732e766f6d090aull,0x3139317225092032ull,0x3b3330317225202cull,
0x2020202020202020ull,0x7473090a202f2f09ull,0x2e6c61626f6c672eull,0x09203233752e3276ull,
0x302b39396472255bull,0x303172257b202c5dull,0x7d31393172252c31ull,0x4c240a202f2f093bull,
0x313834335f375f74ull,0x6c3c2f2f200a3a38ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c31333420656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x313438325f375f74ull,0x09636f6c2e090a38ull,0x3009333435093831ull,0x79732e726162090aull,
0x20203b300920636eull,0x2020202020202020ull,0x2020202020202020ull,0x6e61090a202f2f09ull,
0x2509203233622e64ull,0x7225202c32393172ull,0x397225202c343031ull,0x202f2f0920203b35ull,
0x33752e766f6d090aull,0x3339317225092032ull,0x202020203b30202cull,0x2020202020202020ull,
0x6573090a202f2f09ull,0x33732e71652e7074ull,0x2c39337025092032ull,0x202c323931722520ull,
0x2f093b3339317225ull,0x33702540090a202full,0x2409206172622039ull,0x3335335f375f744cull,
0x20202020203b3033ull,0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c313334ull,0x656c6562616c2064ull,
0x5f375f744c242064ull,0x2e090a3831343832ull,0x3509383109636f6cull,0x646c090a30093634ull,
0x732e6d617261702eull,0x3931722509203233ull,0x75635f5f5b202c34ull,0x5f5f6d7261706164ull,
0x786964615235325aull,0x657366664f646441ull,0x756853646e417374ull,0x4b323150656c6666ull,
0x5065756c61567965ull,0x6a6a5f3053726961ull,0x5d74666968735f69ull,0x3a6469202f2f093bull,
0x75635f5f20323133ull,0x5f5f6d7261706164ull,0x786964615235325aull,0x657366664f646441ull,
0x756853646e417374ull,0x4b323150656c6666ull,0x5065756c61567965ull,0x6a6a5f3053726961ull,
0x2b74666968735f69ull,0x726873090a307830ull,0x722509203233752eull,0x317225202c383031ull,
0x39317225202c3130ull,0x0a202f2f09203b34ull,0x3233622e646e6109ull,0x2c39303172250920ull,
0x202c383031722520ull,0x092020203b353532ull,0x6c756d090a202f2full,0x203233752e6f6c2eull,
0x202c303131722509ull,0x34202c3930317225ull,0x0a202f2f0920203bull,0x3233752e64646109ull,
0x2c35393172250920ull,0x25202c3934722520ull,0x0920203b30313172ull,0x747663090a202f2full,
0x3233752e3436752eull,0x3030316472250920ull,0x3b3539317225202cull,0x0a202f2f09202020ull,
0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x647225202c313031ull,0x093b34202c303031ull,
0x646461090a202f2full,0x722509203436752eull,0x647225202c393264ull,0x3031647225202c31ull,
0x0a202f2f09203b31ull,0x726168732e646c09ull,0x09203233752e6465ull,0x5b202c3639317225ull,
0x5d302b3932647225ull,0x3a6469202f2f093bull,0x6461527320323633ull,0x78302b6d75537869ull,
0x752e646461090a30ull,0x3931722509203233ull,0x3639317225202c37ull,0x202020203b31202cull,
0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203233752eull,0x2c5d302b39326472ull,
0x093b373931722520ull,0x36333a6469202f2full,0x7869646152732033ull,0x0a3078302b6d7553ull,
0x383109636f6c2e09ull,0x090a300937343509ull,0x6d617261702e646cull,0x722509203436752eull,
0x5f5b202c32303164ull,0x726170616475635full,0x615235325a5f5f6dull,0x664f646441786964ull,
0x646e417374657366ull,0x50656c6666756853ull,0x6c615679654b3231ull,0x3053726961506575ull,
0x7344705f696a6a5full,0x69202f2f093b5d74ull,0x5f5f203531333a64ull,0x6d72617061647563ull,
0x64615235325a5f5full,0x66664f6464417869ull,0x53646e4173746573ull,0x3150656c66667568ull,
0x756c615679654b32ull,0x5f30537269615065ull,0x747344705f696a6aull,0x7663090a3078302bull,
0x33752e3436752e74ull,0x3031647225092032ull,0x3639317225202c33ull,0x202f2f092020203bull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x7225202c34303164ull,0x3b38202c33303164ull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x25202c3530316472ull,0x25202c3230316472ull,
0x2f093b3430316472ull,0x2e766f6d090a202full,0x3172250920323373ull,0x30317225202c3839ull,
0x2020202020203b33ull,0x090a202f2f092020ull,0x61626f6c672e7473ull,0x3233752e32762e6cull,
0x30316472255b0920ull,0x257b202c5d302b35ull,0x3172252c31303172ull,0x202f2f093b7d3839ull,
0x335f375f744c240aull,0x2f200a3a30333335ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3420656e696c2079ull,0x64616568202c3133ull,0x64656c6562616c20ull,
0x325f375f744c2420ull,0x6c2e090a38313438ull,0x343509383109636full,0x726162090a300939ull,
0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x3233622e646e6109ull,0x2c39393172250920ull,0x202c343031722520ull,0x0920203b36397225ull,
0x766f6d090a202f2full,0x722509203233752eull,0x203b30202c303032ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,0x39317225202c3034ull,
0x3030327225202c39ull,0x40090a202f2f093bull,0x6172622030347025ull,0x5f375f744c240920ull,
0x20203b3234383533ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c31333420656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x38313438325f375full,0x3109636f6c2e090aull,0x0a30093235350938ull,
0x617261702e646c09ull,0x2509203233732e6dull,0x5f5b202c31303272ull,0x726170616475635full,
0x615235325a5f5f6dull,0x664f646441786964ull,0x646e417374657366ull,0x50656c6666756853ull,
0x6c615679654b3231ull,0x3053726961506575ull,0x6968735f696a6a5full,0x202f2f093b5d7466ull,
0x5f203231333a6469ull,0x726170616475635full,0x615235325a5f5f6dull,0x664f646441786964ull,
0x646e417374657366ull,0x50656c6666756853ull,0x6c615679654b3231ull,0x3053726961506575ull,
0x6968735f696a6a5full,0x090a3078302b7466ull,0x203233752e726873ull,0x202c383031722509ull,
0x25202c3130317225ull,0x2f09203b31303272ull,0x2e646e61090a202full,0x3172250920323362ull,
0x30317225202c3930ull,0x203b353532202c38ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,
0x3131722509203233ull,0x3930317225202c30ull,0x2f0920203b34202cull,0x2e646461090a202full,
0x3272250920323375ull,0x39347225202c3230ull,0x3b3031317225202cull,0x090a202f2f092020ull,
0x2e3436752e747663ull,0x6472250920323375ull,0x327225202c363031ull,0x2f092020203b3230ull,
0x2e6c756d090a202full,0x09203436752e6f6cull,0x202c373031647225ull,0x202c363031647225ull,
0x090a202f2f093b34ull,0x203436752e646461ull,0x202c393264722509ull,0x7225202c31647225ull,
0x2f09203b37303164ull,0x732e646c090a202full,0x33752e6465726168ull,0x3330327225092032ull,
0x39326472255b202cull,0x202f2f093b5d302bull,0x73203636333a6469ull,0x6d75537869646152ull,
0x6461090a3078302bull,0x2509203233752e64ull,0x7225202c34303272ull,0x203b31202c333032ull,
0x202f2f0920202020ull,0x6168732e7473090aull,0x203233752e646572ull,0x2b39326472255b09ull,
0x30327225202c5d30ull,0x6469202f2f093b34ull,0x615273203736333aull,0x302b6d7553786964ull,
0x636f6c2e090a3078ull,0x0933353509383109ull,0x61702e646c090a30ull,0x203436752e6d6172ull,
0x2c38303164722509ull,0x616475635f5f5b20ull,0x325a5f5f6d726170ull,0x6441786964615235ull,
0x7374657366664f64ull,0x6666756853646e41ull,0x79654b323150656cull,0x69615065756c6156ull,
0x5f696a6a5f305372ull,0x2f093b5d74734470ull,0x3531333a6469202full,0x70616475635f5f20ull,
0x35325a5f5f6d7261ull,0x6464417869646152ull,0x417374657366664full,0x6c6666756853646eull,
0x5679654b32315065ull,0x7269615065756c61ull,0x705f696a6a5f3053ull,0x0a3078302b747344ull,
0x3436752e74766309ull,0x722509203233752eull,0x7225202c39303164ull,0x092020203b333032ull,
0x6c756d090a202f2full,0x203436752e6f6c2eull,0x2c30313164722509ull,0x2c39303164722520ull,
0x0a202f2f093b3820ull,0x3436752e64646109ull,0x3131316472250920ull,0x383031647225202cull,
0x303131647225202cull,0x6d090a202f2f093bull,0x09203233732e766full,0x25202c3530327225ull,
0x2020203b33303172ull,0x2f2f092020202020ull,0x6c672e7473090a20ull,0x2e32762e6c61626full,
0x72255b0920323375ull,0x2c5d302b31313164ull,0x2c31303172257b20ull,0x093b7d3530327225ull,
0x5f744c240a202f2full,0x3a32343835335f37ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3133342065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x0a38313438325f37ull,0x383109636f6c2e09ull,0x090a300935353509ull,
0x636e79732e726162ull,0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,
0x2e646e61090a202full,0x3272250920323362ull,0x30317225202c3630ull,0x3b37397225202c34ull,
0x090a202f2f092020ull,0x203233752e766f6dull,0x202c373032722509ull,0x2020202020203b30ull,
0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,0x25202c3134702509ull,
0x7225202c36303272ull,0x202f2f093b373032ull,0x203134702540090aull,0x744c240920617262ull,
0x34353336335f375full,0x202020202020203bull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x333420656e696c20ull,0x2064616568202c31ull,
0x2064656c6562616cull,0x38325f375f744c24ull,0x6f6c2e090a383134ull,0x3835350938310963ull,
0x702e646c090a3009ull,0x3233732e6d617261ull,0x2c38303272250920ull,0x616475635f5f5b20ull,
0x325a5f5f6d726170ull,0x6441786964615235ull,0x7374657366664f64ull,0x6666756853646e41ull,
0x79654b323150656cull,0x69615065756c6156ull,0x5f696a6a5f305372ull,0x093b5d7466696873ull,
0x31333a6469202f2full,0x616475635f5f2032ull,0x325a5f5f6d726170ull,0x6441786964615235ull,
0x7374657366664f64ull,0x6666756853646e41ull,0x79654b323150656cull,0x69615065756c6156ull,
0x5f696a6a5f305372ull,0x78302b7466696873ull,0x752e726873090a30ull,0x3031722509203233ull,
0x3130317225202c38ull,0x3b3830327225202cull,0x61090a202f2f0920ull,0x09203233622e646eull,
0x25202c3930317225ull,0x3532202c38303172ull,0x2f2f092020203b35ull,0x6c2e6c756d090a20ull,
0x2509203233752e6full,0x7225202c30313172ull,0x203b34202c393031ull,0x61090a202f2f0920ull,
0x09203233752e6464ull,0x25202c3930327225ull,0x317225202c393472ull,0x2f2f0920203b3031ull,
0x752e747663090a20ull,0x09203233752e3436ull,0x202c323131647225ull,0x20203b3930327225ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3131647225092034ull,0x3131647225202c33ull,
0x2f2f093b34202c32ull,0x752e646461090a20ull,0x3264722509203436ull,0x2c31647225202c39ull,
0x3b33313164722520ull,0x6c090a202f2f0920ull,0x6465726168732e64ull,0x722509203233752eull,
0x72255b202c303132ull,0x093b5d302b393264ull,0x37333a6469202f2full,0x7869646152732030ull,
0x0a3078302b6d7553ull,0x3233752e64646109ull,0x2c31313272250920ull,0x202c303132722520ull,
0x0920202020203b31ull,0x2e7473090a202f2full,0x752e646572616873ull,0x6472255b09203233ull,
0x25202c5d302b3932ull,0x2f2f093b31313272ull,0x203137333a646920ull,0x7553786964615273ull,
0x2e090a3078302b6dull,0x3509383109636f6cull,0x646c090a30093935ull,0x752e6d617261702eull,
0x3164722509203436ull,0x635f5f5b202c3431ull,0x5f6d726170616475ull,0x6964615235325a5full,
0x7366664f64644178ull,0x6853646e41737465ull,0x323150656c666675ull,0x65756c615679654bull,
0x6a5f305372696150ull,0x5d747344705f696aull,0x3a6469202f2f093bull,0x75635f5f20353133ull,
0x5f5f6d7261706164ull,0x786964615235325aull,0x657366664f646441ull,0x756853646e417374ull,
0x4b323150656c6666ull,0x5065756c61567965ull,0x6a6a5f3053726961ull,0x302b747344705f69ull,
0x2e747663090a3078ull,0x203233752e343675ull,0x2c35313164722509ull,0x203b303132722520ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3164722509203436ull,0x31647225202c3631ull,
0x2f093b38202c3531ull,0x2e646461090a202full,0x6472250920343675ull,0x647225202c373131ull,
0x647225202c343131ull,0x202f2f093b363131ull,0x33732e766f6d090aull,0x3231327225092032ull,
0x3b3330317225202cull,0x2020202020202020ull,0x7473090a202f2f09ull,0x2e6c61626f6c672eull,
0x09203233752e3276ull,0x2b3731316472255bull,0x3172257b202c5d30ull,0x32313272252c3130ull,
0x240a202f2f093b7dull,0x3336335f375f744cull,0x3c2f2f200a3a3435ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x31333420656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3438325f375f744cull,0x636f6c2e090a3831ull,0x0931363509383109ull,
0x732e726162090a30ull,0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,
0x61090a202f2f0920ull,0x09203233622e646eull,0x25202c3331327225ull,0x7225202c34303172ull,
0x2f2f0920203b3839ull,0x752e766f6d090a20ull,0x3132722509203233ull,0x2020203b30202c34ull,
0x2020202020202020ull,0x73090a202f2f0920ull,0x732e71652e707465ull,0x3234702509203233ull,
0x2c3331327225202cull,0x093b343132722520ull,0x702540090a202f2full,0x0920617262203234ull,
0x36335f375f744c24ull,0x202020203b363638ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c31333420ull,
0x6c6562616c206461ull,0x375f744c24206465ull,0x090a38313438325full,0x09383109636f6c2eull,
0x6c090a3009343635ull,0x2e6d617261702e64ull,0x3272250920323373ull,0x635f5f5b202c3531ull,
0x5f6d726170616475ull,0x6964615235325a5full,0x7366664f64644178ull,0x6853646e41737465ull,
0x323150656c666675ull,0x65756c615679654bull,0x6a5f305372696150ull,0x74666968735f696aull,
0x6469202f2f093b5dull,0x635f5f203231333aull,0x5f6d726170616475ull,0x6964615235325a5full,
0x7366664f64644178ull,0x6853646e41737465ull,0x323150656c666675ull,0x65756c615679654bull,
0x6a5f305372696150ull,0x74666968735f696aull,0x6873090a3078302bull,0x2509203233752e72ull,
0x7225202c38303172ull,0x327225202c313031ull,0x202f2f09203b3531ull,0x33622e646e61090aull,
0x3930317225092032ull,0x2c3830317225202cull,0x2020203b35353220ull,0x756d090a202f2f09ull,
0x3233752e6f6c2e6cull,0x2c30313172250920ull,0x202c393031722520ull,0x202f2f0920203b34ull,
0x33752e646461090aull,0x3631327225092032ull,0x202c39347225202cull,0x20203b3031317225ull,
0x7663090a202f2f09ull,0x33752e3436752e74ull,0x3131647225092032ull,0x3631327225202c38ull,
0x202f2f092020203bull,0x6f6c2e6c756d090aull,0x722509203436752eull,0x7225202c39313164ull,
0x3b34202c38313164ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c39326472ull,
0x31647225202c3164ull,0x202f2f09203b3931ull,0x6168732e646c090aull,0x203233752e646572ull,
0x202c373132722509ull,0x302b39326472255bull,0x6469202f2f093b5dull,0x615273203437333aull,
0x302b6d7553786964ull,0x2e646461090a3078ull,0x3272250920323375ull,0x31327225202c3831ull,
0x2020203b31202c37ull,0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233752e64ull,
0x5d302b3932647225ull,0x3b3831327225202cull,0x333a6469202f2f09ull,0x6964615273203537ull,
0x3078302b6d755378ull,0x3109636f6c2e090aull,0x0a30093536350938ull,0x617261702e646c09ull,
0x2509203436752e6dull,0x5b202c3032316472ull,0x6170616475635f5full,0x5235325a5f5f6d72ull,
0x4f64644178696461ull,0x6e41737465736666ull,0x656c666675685364ull,0x615679654b323150ull,
0x537269615065756cull,0x44705f696a6a5f30ull,0x202f2f093b5d7473ull,0x5f203531333a6469ull,
0x726170616475635full,0x615235325a5f5f6dull,0x664f646441786964ull,0x646e417374657366ull,
0x50656c6666756853ull,0x6c615679654b3231ull,0x3053726961506575ull,0x7344705f696a6a5full,
0x63090a3078302b74ull,0x752e3436752e7476ull,0x3164722509203233ull,0x31327225202c3132ull,
0x2f2f092020203b37ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x25202c3232316472ull,
0x38202c3132316472ull,0x61090a202f2f093bull,0x09203436752e6464ull,0x202c333231647225ull,
0x202c303231647225ull,0x093b323231647225ull,0x766f6d090a202f2full,0x722509203233732eull,
0x317225202c393132ull,0x20202020203b3330ull,0x0a202f2f09202020ull,0x626f6c672e747309ull,
0x33752e32762e6c61ull,0x316472255b092032ull,0x7b202c5d302b3332ull,0x72252c3130317225ull,
0x2f2f093b7d393132ull,0x5f375f744c240a20ull,0x200a3a3636383633ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c313334ull,
0x656c6562616c2064ull,0x5f375f744c242064ull,0x2e090a3831343832ull,0x3509383109636f6cull,
0x6162090a30093736ull,0x0920636e79732e72ull,0x2020202020203b30ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x33732e646461090aull,0x2c38357225092032ull,0x31202c3835722520ull,
0x2020202020203b36ull,0x6573090a202f2f09ull,0x33752e746c2e7074ull,0x2c33347025092032ull,
0x25202c3835722520ull,0x202f2f093b393572ull,0x203334702540090aull,0x744c240920617262ull,
0x38313438325f375full,0x202020202020203bull,0x744c240a202f2f09ull,0x36303937325f375full,
0x09636f6c2e090a3aull,0x3009333735093831ull,0x203b74697865090aull,0x2020202020202020ull,
0x2020202020202020ull,0x2020202020202020ull,0x444c240a202f2f09ull,0x325a5f5f646e6557ull,
0x6441786964615235ull,0x7374657366664f64ull,0x6666756853646e41ull,0x79654b323150656cull,
0x69615065756c6156ull,0x3a696a6a5f305372ull,0x5f202f2f207d090aull,0x786964615235325aull,
0x657366664f646441ull,0x756853646e417374ull,0x4b323150656c6666ull,0x5065756c61567965ull,
0x6a6a5f3053726961ull,0x00000000000a0a69ull
};


}


static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_13",(char*)__deviceText_$compute_13$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{(char*)"sm_13",(char*)__deviceText_$sm_13$},{0,0}};
static __cudaFatDebugEntry __debugEntries[] = {{0,0}};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000003,0x8ecc680c,(char*)"61516805a9b9c810",(char*)"particleSystem.cu",(char*)" ",__ptxEntries,__cubinEntries,__debugEntries,0,0,0,0,0,0x6292234c};
# 5 "/tmp/tmpxft_000062f6_00000000-1_particleSystem.cudafe1.stub.c" 2
# 1 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 1
# 85 "/home/normal/cuda/bin/../include/crt/host_runtime.h"
# 1 "/home/normal/cuda/bin/../include/host_defines.h" 1
# 86 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2
# 111 "/home/normal/cuda/bin/../include/crt/host_runtime.h"
extern "C" {


extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterShared(
  void **fatCubinHandle,
  void **devicePtr
);

extern void __cudaRegisterSharedVar(
  void **fatCubinHandle,
  void **devicePtr,
  size_t size,
  size_t alignment,
  int storage
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);


}




extern int atexit(void(*)(void)) throw();







static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}
# 226 "/home/normal/cuda/bin/../include/crt/host_runtime.h"
# 1 "/home/normal/cuda/bin/../include/common_functions.h" 1
# 68 "/home/normal/cuda/bin/../include/common_functions.h"
# 1 "/home/normal/cuda/bin/../include/crt/func_macro.h" 1 3
# 69 "/home/normal/cuda/bin/../include/common_functions.h" 2

static clock_t __cuda_clock(void)
{
  return clock();
}

static void *__cuda_memset(void *s, int c, size_t n)
{
  return memset(s, c, n);
}

static void *__cuda_memcpy(void *d, const void *s, size_t n)
{
  return memcpy(d, s, n);
}
# 93 "/home/normal/cuda/bin/../include/common_functions.h"
# 1 "/home/normal/cuda/bin/../include/math_functions.h" 1 3
# 864 "/home/normal/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) int __cuda_error_not_implememted(void); int __cuda_error_not_implememted(void);
# 920 "/home/normal/cuda/bin/../include/math_functions.h" 3
static int __cuda_abs(int a)
{
  return abs(a);
}

static float __cuda_fabsf(float a)
{
  return fabsf(a);
}

static long long int __cuda_llabs(long long int a)
{

  return ::llabs(a);



}

static float __cuda_exp2f(float a)
{
  return exp2f(a);
}

# 1 "/home/normal/cuda/bin/../include/device_functions.h" 1 3
# 426 "/home/normal/cuda/bin/../include/device_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/math_constants.h" 1 3
# 427 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 2367 "/home/normal/cuda/bin/../include/device_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/common_types.h" 1 3
# 37 "/home/normal/cuda/bin/../include/common_types.h" 3
union __cudart_FloatUintCvt {
    float f;
    unsigned int i;
};

union __cudart_FloatIntCvt {
    float f;
    int i;
};

union __cudart_DoubleUlonglongCvt {
    double d;
    unsigned long long int i;
};

union __cudart_DoubleLonglongCvt {
    double d;
    long long int i;
};

union __cudart_DoubleInthiloCvt {
    double d;
    signed int i[2];
};

struct __cudart_UintUint {
    unsigned int lo;
    unsigned int hi;
};
# 2368 "/home/normal/cuda/bin/../include/device_functions.h" 2 3

static const unsigned char __internal_rcpTab[128] =
{
  0xff, 0xfd, 0xfb, 0xf9, 0xf7, 0xf5, 0xf4, 0xf2,
  0xf0, 0xee, 0xed, 0xeb, 0xe9, 0xe8, 0xe6, 0xe4,
  0xe3, 0xe1, 0xe0, 0xde, 0xdd, 0xdb, 0xda, 0xd8,
  0xd7, 0xd5, 0xd4, 0xd3, 0xd1, 0xd0, 0xcf, 0xcd,
  0xcc, 0xcb, 0xca, 0xc8, 0xc7, 0xc6, 0xc5, 0xc4,
  0xc2, 0xc1, 0xc0, 0xbf, 0xbe, 0xbd, 0xbc, 0xbb,
  0xba, 0xb9, 0xb8, 0xb7, 0xb6, 0xb5, 0xb4, 0xb3,
  0xb2, 0xb1, 0xb0, 0xaf, 0xae, 0xad, 0xac, 0xab,
  0xaa, 0xa9, 0xa8, 0xa8, 0xa7, 0xa6, 0xa5, 0xa4,
  0xa3, 0xa3, 0xa2, 0xa1, 0xa0, 0x9f, 0x9f, 0x9e,
  0x9d, 0x9c, 0x9c, 0x9b, 0x9a, 0x99, 0x99, 0x98,
  0x97, 0x97, 0x96, 0x95, 0x95, 0x94, 0x93, 0x93,
  0x92, 0x91, 0x91, 0x90, 0x8f, 0x8f, 0x8e, 0x8e,
  0x8d, 0x8c, 0x8c, 0x8b, 0x8b, 0x8a, 0x89, 0x89,
  0x88, 0x88, 0x87, 0x87, 0x86, 0x85, 0x85, 0x84,
  0x84, 0x83, 0x83, 0x82, 0x82, 0x81, 0x81, 0x80
};

static const unsigned int __internal_invSqrtCubeTab[96] =
{
  0xfa0bf8fe, 0xee6b28fa, 0xe5f024f7, 0xdaf268f3,
  0xd2f000f0, 0xc890c0ec, 0xc10378e9, 0xb9a758e6,
  0xb4da40e4, 0xadcea0e1, 0xa6f278de, 0xa279c0dc,
  0x9beb48d9, 0x97a5c4d7, 0x916340d4, 0x8d4fc8d2,
  0x895000d0, 0x8563b8ce, 0x818ac0cc, 0x7dc4e8ca,
  0x7a1200c8, 0x7671d8c6, 0x72e440c4, 0x6f6908c2,
  0x6db240c1, 0x6a523cbf, 0x670424bd, 0x6563c0bc,
  0x623028ba, 0x609ce8b9, 0x5d8364b7, 0x5bfd18b6,
  0x58fd40b4, 0x5783a8b3, 0x560e48b2, 0x533000b0,
  0x51c70caf, 0x506238ae, 0x4da4c0ac, 0x4c4c10ab,
  0x4af768aa, 0x49a6b8a9, 0x485a00a8, 0x471134a7,
  0x45cc58a6, 0x434e40a4, 0x4214f8a3, 0x40df88a2,
  0x3fade0a1, 0x3e8000a0, 0x3d55dc9f, 0x3c2f789e,
  0x3c2f789e, 0x3b0cc49d, 0x39edc09c, 0x38d2609b,
  0x37baa89a, 0x36a68899, 0x35960098, 0x34890497,
  0x34890497, 0x337f9896, 0x3279ac95, 0x31774094,
  0x30784893, 0x30784893, 0x2f7cc892, 0x2e84b091,
  0x2d900090, 0x2d900090, 0x2c9eac8f, 0x2bb0b88e,
  0x2bb0b88e, 0x2ac6148d, 0x29dec08c, 0x29dec08c,
  0x28fab08b, 0x2819e88a, 0x2819e88a, 0x273c5889,
  0x273c5889, 0x26620088, 0x258ad487, 0x258ad487,
  0x24b6d886, 0x24b6d886, 0x23e5fc85, 0x23184084,
  0x23184084, 0x224d9883, 0x224d9883, 0x21860882,
  0x21860882, 0x20c18081, 0x20c18081, 0x20000080
};

static float __internal_frcp_kernel (float x,enum cudaRoundMode mode)
{
  unsigned long long prod;
  volatile union __cudart_FloatUintCvt arg;
  unsigned int expo;
  unsigned int sign;
  unsigned f, y;

  arg.f = x;
  sign = arg.i & 0x80000000;
  expo = (arg.i >> 23);
  expo = expo & 0xff;
  f = expo - 1;

  if (f <= 0xFD) {
    y = (arg.i << 8);
    y = y | 0x80000000;

    arg.i = __internal_rcpTab[(y >> 24) - 128];

    f = arg.i * arg.i;
    f = f << 16;
    prod = ((unsigned long long)y) * f;
    arg.i = (arg.i << 24) - (unsigned)(prod >> 32);

    f = arg.i + arg.i;
    prod = ((unsigned long long)y) * f;
    f = (unsigned)(-(int)(prod >> 32));
    prod = ((unsigned long long)arg.i) * f;
    y = y >> 8;

    expo = (2 * 127) - expo - 2;
    arg.i = (unsigned)(prod >> 32);
    if (mode == cudaRoundNearest) {
      arg.i = arg.i >> 6;
    } else {
      arg.i = (arg.i + 32) >> 6;
    }
    if ((int)expo >= 0) {
      f = y * arg.i;
      arg.i = ((expo << 23) + arg.i) | sign;
    } else {

      expo = -(int)expo;
      arg.i = arg.i >> expo;
      f = y * arg.i;
      arg.i = arg.i | sign;
    }
    if (mode == cudaRoundNearest) {
      expo = f + y;
      if ((int)f < 0) f = (unsigned)(-(int)f);
      if ((int)expo < 0) expo = (unsigned)(-(int)expo);
      if (expo < f) arg.i++;
    } else if (mode == cudaRoundZero) {
      if ((int)f > 0) arg.i = arg.i - 1;
    } else if (mode == cudaRoundPosInf) {
      if (((int)f > 0) && sign) arg.i = arg.i - 1;
      if (((int)f < 0) && !sign) arg.i = arg.i + 1;
    } else {
      if (((int)f > 0) && !sign) arg.i = arg.i - 1;
      if (((int)f < 0) && sign) arg.i = arg.i + 1;
    }
    return arg.f;
  } else {

    if (!(arg.i << 1)) {
      arg.i = 0x7F800000 | arg.i;
      return arg.f;
    }

    if ((arg.i << 1) == 0xff000000) {
      arg.i &= 0x80000000;
      return arg.f;
    }

    if ((arg.i << 1) > 0xff000000) {
      arg.i |= 0x00400000;
      return arg.f;
    }

    f = 0;
    arg.i <<= 8;
    do {
      f++;
      arg.i <<= 1;
    } while ((int)arg.i > 0);
    arg.i >>= 8;
    arg.i |= sign;
    arg.f = __internal_frcp_kernel (arg.f, mode);
    expo = ((arg.i << 1) >> 24);
    if ((expo + f) < 255) {
      arg.i = (arg.i + (f << 23));
      return arg.f;
    }
    if (mode == cudaRoundNearest) {
      arg.i = (arg.i & 0x80000000) | 0x7f800000;
    } else if (mode == cudaRoundZero) {
      arg.i = (arg.i & 0x80000000) | 0x7f7fffff;
    } else if (mode == cudaRoundPosInf) {
      arg.i = (arg.i & 0x80000000) | ((sign) ? 0x7f7fffff : 0x7f800000);
    } else {
      arg.i = (arg.i & 0x80000000) | ((sign) ? 0x7f800000 : 0x7f7fffff);
    }
    return arg.f;
  }
}

static float __internal_fsqrt_kernel (float radicand, enum cudaRoundMode mode)

{
  unsigned long long prod;
  volatile union __cudart_FloatUintCvt arg;
  unsigned int expo;
  unsigned int s, f, x;

  arg.f = radicand;
  expo = arg.i >> 23;
  expo = expo & 0xff;
  f = expo - 1;

  if ((arg.i <= 0x80000000) && (f <= 0xFD)) {

    x = (arg.i << 8) | 0x80000000;
    x = x >> (expo & 1);

    arg.i = f = __internal_invSqrtCubeTab[((unsigned)x >> 25) - 32];

    prod = ((unsigned long long)x) * f;
    arg.i = ((arg.i * 3) << 22) - (unsigned)(prod >> 32);

    prod = ((unsigned long long)arg.i) * arg.i;
    s = (unsigned)(prod >> 32);
    prod = ((unsigned long long)x) * s;
    f = 0x30000000 - (unsigned)(prod >> 32);
    prod = ((unsigned long long)f) * arg.i;
    arg.i = (unsigned)(prod >> 32);

    prod = ((unsigned long long)x) * arg.i;
    arg.i = (unsigned)(prod >> 32);
    if (mode == cudaRoundNearest) {
      arg.i = arg.i >> 3;
    } else {
      arg.i = (arg.i + 4) >> 3;
    }
    x = (x << 16) - (arg.i * arg.i);

    if (mode == cudaRoundNearest) {
      f = x - (2 * arg.i + 1);
      if ((int)f < 0) f = (unsigned)(-(int)f);
      if ((int)x < 0) x = (unsigned)(-(int)x);
      if (f < x) arg.i ++;
    } else if ((mode == cudaRoundZero) || (mode == cudaRoundMinInf)) {
      if ((int)x < 0) arg.i--;
    } else if (mode == cudaRoundPosInf) {
      if ((int)x > 0) arg.i++;
    }
    arg.i = arg.i + (((expo + 125) & ~0x1) << 22);
    return arg.f;
  } else {

    if (!(arg.i << 1) || (arg.i == 0x7F800000)) {
      return arg.f;
    }

    if ((arg.i << 1) > 0xFF000000) {
      arg.i |= 0x00400000;
      return arg.f;
    }

    if (arg.i & 0x80000000) {
      arg.i = 0xFFC00000;
      return arg.f;
    }

    x = 0;
    arg.i <<= 8;
    do {
      x++;
      arg.i <<= 1;
    } while ((int)arg.i > 0);
    arg.i >>= 8;
    arg.i += (x & 1) << 23;
    x += (x & 1);
    arg.f = __internal_fsqrt_kernel (arg.f, mode);
    arg.i -= ((x >> 1) << 23);
    return arg.f;
  }
}

static float __internal_fdiv_kernel (float dividend, float divisor, enum cudaRoundMode mode)

{
  unsigned long long prod;
  unsigned r, f, x, y, expox, expoy, sign;
  volatile union __cudart_FloatUintCvt cvtx, cvty, res;

  cvtx.f = dividend;
  cvty.f = divisor;
  expox = ((cvtx.i >> 23) & 0xff) - 1;
  expoy = ((cvty.i >> 23) & 0xff) - 1;
  sign = ((cvtx.i ^ cvty.i) & 0x80000000);

  if ((expox <= 0xFD) && (expoy <= 0xFD)) {
divide:
    expox = expox - expoy + 127 - 1;
    expoy = expox;

    y = (cvty.i << 8) | 0x80000000;
    x = (cvtx.i & 0x00ffffff) | 0x00800000;

    r = __internal_rcpTab[(y >> 24) - 128];

    f = r * r;
    prod = ((unsigned long long)y) * (f << 16);
    r = (r << 24) - (unsigned)(prod >> 32);

    prod = ((unsigned long long)y) * (r << 1);
    f = (unsigned)-(int)(prod >> 32);
    prod = ((unsigned long long)f) * (r << 1);
    r = (unsigned)(prod >> 32);

    prod = ((unsigned long long)x) * (r << 1);

    if (((int)((prod >> 32) << 8)) > 0) {
      expox--;
      prod = prod + prod;
    }
    if (mode == cudaRoundNearest) {

      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem0, rem1, inc;

        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        rem0 = rem1 - y;
        inc = abs(rem0) < abs(rem1);

        res.i = sign | ((expox << 23) + r + inc);
        return res.f;
      } else if ((int)expox >= 254) {

        res.i = sign | 0x7f800000;
        return res.f;
      } else {

        int shift = -(int)expox;
        if (shift > 23) {

          r = (shift < 25) && ((x != y) || (r > 0x00ff0000));
          res.i = sign | r;
          return res.f;
        }
        if (x == y) {

          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          remhi = remlo - y;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if ((remhi < remlo) || ((remhi == remlo) && (r & 1))) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundZero) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if (rem1 < 0) r--;
        r = (expox << 23) + r;
        if (r == 0x7f800000) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        res.i = sign | 0x7f7fffff;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift < 31)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = 0;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) & (r != 0)) r--;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundPosInf) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if ((rem1 < 0) && (sign)) r--;
        if ((rem1 > 0) && (!sign)) r++;
        r = (expox << 23) + r;
        if ((r == 0x7f800000) && (sign)) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        r = sign ? 0x7f7fffff : 0x7f800000;
        res.i = sign | r;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift <= 24)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          if (r == 0) r = !sign;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = !sign;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) && (r != 0) && (sign)) r--;
          if ((remlo > 0) && (!sign)) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundMinInf) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if ((rem1 < 0) && (!sign)) r--;
        if ((rem1 > 0) && (sign)) r++;
        r = (expox << 23) + r;
        if ((r == 0x7f800000) && (!sign)) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        r = sign ? 0x7f800000 : 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift <= 24)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          if (r == 0) r = !!sign;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = !!sign;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) && (r != 0) && (!sign)) r--;
          if ((remlo > 0) && (sign)) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    }
  }
  {
    int xzero, yzero, xinf, yinf, xnan, ynan;

    xnan = (cvtx.i << 1) > 0xff000000;
    ynan = (cvty.i << 1) > 0xff000000;

    if (xnan) {
      res.i = cvtx.i | 0x00400000;
      return res.f;
    }
    if (ynan) {
      res.i = cvty.i | 0x00400000;
      return res.f;
    }
    xzero = (cvtx.i << 1) == 0x00000000;
    yzero = (cvty.i << 1) == 0x00000000;
    xinf = (cvtx.i << 1) == 0xff000000;
    yinf = (cvty.i << 1) == 0xff000000;

    if ((xzero & yzero) | (xinf & yinf)) {
      res.i = 0xffc00000;
      return res.f;
    }

    if (xzero | yinf) {
      res.i = sign;
      return res.f;
    }

    if (yzero | xinf) {
      res.i = sign | 0x7f800000;
      return res.f;
    }

    if ((int)expox < 0) {
      cvtx.i = cvtx.i << 9;
      while ((int)cvtx.i >= 0) {
        expox--;
        cvtx.i = cvtx.i + cvtx.i;
      }
      cvtx.i = cvtx.i >> 8;
    }
    if ((int)expoy < 0) {
      cvty.i = cvty.i << 9;
      while ((int)cvty.i >= 0) {
        expoy--;
        cvty.i = cvty.i + cvty.i;
      }
      cvty.i = cvty.i >> 8;
    }
    goto divide;
  }
}

static float __internal_fmul_kernel2 (float a, float b, enum cudaRoundMode mode)

{
  unsigned long long product;
  volatile union __cudart_FloatUintCvt xx, yy;

  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (mode == cudaRoundNearest) {
        if (yy.i < 0x80000000) return xx.f;
        xx.i += ((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31));
      } else if (mode == cudaRoundZero) {
      } else if (mode == cudaRoundPosInf) {
        xx.i += (yy.i && !expo_y);
      } else if (mode == cudaRoundMinInf) {
        xx.i += (yy.i && expo_y);
      }
      return xx.f;
    } else if ((int)expo_x >= 254) {

      if (mode == cudaRoundNearest) {
         xx.i = expo_y | 0x7F800000;
      } else if (mode == cudaRoundZero) {
         xx.i = expo_y | 0x7F7FFFFF;
      } else if (mode == cudaRoundPosInf) {
         xx.i = (expo_y ? 0xff7fffff : 0x7F800000);
      } else {
         xx.i = (expo_y ? 0xFF800000 : 0x7f7fffff);
      }
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (mode == cudaRoundNearest) {
        if (expo_x > 25) {

          xx.i = expo_y;
          return xx.f;
        } else {
          yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
          xx.i = expo_y + (xx.i >> expo_x);
          xx.i += ((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31));
          return xx.f;
        }
      } else if (mode == cudaRoundZero) {
        if (expo_x > 25) expo_x = 25;
        xx.i = expo_y + (xx.i >> expo_x);
        return xx.f;
      } else if (mode == cudaRoundPosInf) {
        if (expo_x > 25) expo_x = 25;
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (yy.i && !expo_y);
        return xx.f;
      } else {
        if (expo_x > 25) expo_x = 25;
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (yy.i && expo_y);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fmaf_kernel (float a, float b, float c, enum cudaRoundMode mode)

{
  unsigned long long product;
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;
  volatile union __cudart_FloatUintCvt cvt;

  cvt.f = a;
  xx = cvt.i;
  cvt.f = b;
  yy = cvt.i;
  cvt.f = c;
  zz = cvt.i;

  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) &&
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {




    if ((yy << 1) > 0xff000000) {
      return b + b;
    }
    if ((zz << 1) > 0xff000000) {
      return c + c;
    }
    if ((xx << 1) > 0xff000000) {
      return a + a;
    }
# 3148 "/home/normal/cuda/bin/../include/device_functions.h" 3
    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      cvt.i = 0xffc00000;
      return cvt.f;
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          cvt.i = 0xffc00000;
          return cvt.f;
        }
      }
    }




    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      cvt.i = xx;
      return cvt.f;
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      cvt.i = yy;
      return cvt.f;
    }
    if ((zz << 1) == 0xff000000) {
      cvt.i = zz;
      return cvt.f;
    }





    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          cvt.i = zz;
          return cvt.f;
        }
      }
    }



    if (((zz << 1) == 0) &&
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      if (mode == cudaRoundMinInf) {
        zz = 0x80000000 & (xx ^ yy ^ zz);
      } else {
        zz &= 0x7fffffff;
      }
      cvt.i = zz;
      return cvt.f;
    }



    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      cvt.i = zz;
      return cvt.f;
    }

    if (expo_x == (unsigned)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }

    if (expo_y == (unsigned)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }

    if ((expo_z == (unsigned)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  product = ((unsigned long long)xx) * yy;
  xx = (unsigned)(product >> 32);
  yy = (unsigned)(product & 0xffffffff);

  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;

  if (xx < 0x00800000) {
    xx = (xx << 1) | (yy >> 31);
    yy = (yy << 1);
    expo_x--;
  }
  temp = 0;

  if ((zz << 1) != 0) {
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;

    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }


    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {

      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) |
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }

    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }
    if ((int)u < 0) {

      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {

        if (mode == cudaRoundMinInf) {
          xx = 0x80000000;
        }
        cvt.i = xx;
        return cvt.f;
      }
      if ((int)xx < 0) {


        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }

      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {

      yy = yy + ww;
      s = yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {

    xx |= expo_y;
    if (mode == cudaRoundNearest) {
      s = xx & 1;
      xx += (temp == 0x80000000) ? s : (temp >> 31);
    } else if (mode == cudaRoundPosInf) {
      xx += temp && !expo_y;
    } else if (mode == cudaRoundMinInf) {
      xx += temp && expo_y;
    }
    xx = xx + (expo_x << 23);
    cvt.i = xx;
    return cvt.f;
  } else if ((int)expo_x >= 126) {

    if (mode == cudaRoundNearest) {
      xx = expo_y | 0x7f800000;
    } else if (mode == cudaRoundZero) {
      xx = expo_y | 0x7F7FFFFF;
    } else if (mode == cudaRoundPosInf) {
      xx = expo_y ? 0xFF7FFFFF : 0x7f800000;
    } else if (mode == cudaRoundMinInf) {
      xx = expo_y ? 0xff800000 : 0x7f7fffff;
    }
    cvt.i = xx;
    return cvt.f;
  }

  expo_x = (unsigned int)(-(int)expo_x);
  if (expo_x > 25) {

    xx = 0;
    if (mode == cudaRoundPosInf) {
      xx += !expo_y;
    } else if (mode == cudaRoundMinInf) {
      xx += !!expo_y;
    }
    cvt.i = expo_y | xx;
    return cvt.f;
  }
  temp = (xx << (32 - expo_x)) | ((temp) ? 1 : 0);
  xx = xx >> expo_x;
  if (mode == cudaRoundNearest) {
    xx = xx + ((temp == 0x80000000) ? (xx & 1) : (temp >> 31));
  } else if (mode == cudaRoundPosInf) {
    xx = xx + (!expo_y && temp);
  } else if (mode == cudaRoundMinInf) {
    xx = xx + (expo_y && temp);
  }
  xx = expo_y + xx;
  cvt.i = xx;
  return cvt.f;
}


static float __internal_fadd_kernel2 (float a, float b, enum cudaRoundMode mode)

{
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i + (expo_x << 23);
          if (mode == cudaRoundMinInf) {
            xx.i += (temp && (xx.i & 0x80000000));
          } else if (mode == cudaRoundPosInf) {
            xx.i += (temp && !(xx.i & 0x80000000));
          }
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          if (mode == cudaRoundMinInf) {
            xx.i = 0x80000000;
          } else if (mode == cudaRoundPosInf) {
            xx.i = 0;
          }
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i + (expo_x << 23);
          if (mode == cudaRoundMinInf) {
            xx.i += (temp && (xx.i & 0x80000000));
          } else if (mode == cudaRoundPosInf) {
            xx.i += (temp && !(xx.i & 0x80000000));
          }
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);
        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      if (mode == cudaRoundMinInf) {
        xx.i += (temp && (xx.i & 0x80000000));
      } else if (mode == cudaRoundPosInf) {
        xx.i += (temp && !(xx.i & 0x80000000));
      }
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

      temp = xx.i & 0x80000000;
      if (mode == cudaRoundMinInf) {
        xx.i = (temp ? 0xFF800000 : 0x7f7fffff);
      } else if (mode == cudaRoundPosInf) {
        xx.i = (temp ? 0xff7fffff : 0x7F800000);
      }
      return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;
    expo_x = (unsigned)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    if (mode == cudaRoundMinInf) {
      xx.i += (temp && yy.i);
    } else if (mode == cudaRoundPosInf) {
      xx.i += (temp && !yy.i);
    }
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (mode == cudaRoundMinInf) {
        if (!(xx.i << 1)) {
          xx.i = xx.i | yy.i;
        }
      } else if (mode == cudaRoundPosInf) {
        if (xx.i == 0x80000000) {
          xx.i = yy.i;
        }
      }
      if ((xx.i << 1) > 0xff000000) {
        xx.i |= 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __frcp_rn (float a)
{
  return __internal_frcp_kernel (a, cudaRoundNearest);
}

static float __frcp_rz (float a)
{
  return __internal_frcp_kernel (a, cudaRoundZero);
}

static float __frcp_rd (float a)
{
  return __internal_frcp_kernel (a, cudaRoundMinInf);
}

static float __frcp_ru (float a)
{
  return __internal_frcp_kernel (a, cudaRoundPosInf);
}

static float __fsqrt_rn (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundNearest);
}

static float __fsqrt_rz (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundZero);
}

static float __fsqrt_rd (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundMinInf);
}

static float __fsqrt_ru (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundPosInf);
}

static float __fdiv_rn (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundNearest);
}

static float __fdiv_rz (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundZero);
}

static float __fdiv_rd (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundMinInf);
}

static float __fdiv_ru (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundPosInf);
}

static float __fadd_rd (float a, float b)
{
  return __internal_fadd_kernel2 (a, b, cudaRoundMinInf);
}

static float __fadd_ru (float a, float b)
{
  return __internal_fadd_kernel2 (a, b, cudaRoundPosInf);
}

static float __fmul_rd (float a, float b)
{
  return __internal_fmul_kernel2 (a, b, cudaRoundMinInf);
}

static float __fmul_ru (float a, float b)
{
  return __internal_fmul_kernel2 (a, b, cudaRoundPosInf);
}

static float __fmaf_rn (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundNearest);
}

static float __fmaf_rz (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundZero);
}

static float __fmaf_ru (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundPosInf);
}

static float __fmaf_rd (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundMinInf);
}

static int __cuda___isnan(double a);
static int __cuda___isnanf(float a);
static int __double2int_rz(double);
static unsigned int __double2uint_rz(double);
static long long int __double2ll_rz(double);
static unsigned long long int __double2ull_rz(double);
# 3737 "/home/normal/cuda/bin/../include/device_functions.h" 3
static int __mulhi(int a, int b)
{
  long long int c = (long long int)a * (long long int)b;

  return (int)(c >> 32);
}

static unsigned int __umulhi(unsigned int a, unsigned int b)
{
  unsigned long long int c = (unsigned long long int)a * (unsigned long long int)b;

  return (unsigned int)(c >> 32);
}

static unsigned long long int __umul64hi(unsigned long long int a, unsigned long long int b)
{
  unsigned int a_lo = (unsigned int)a;
  unsigned long long int a_hi = a >> 32;
  unsigned int b_lo = (unsigned int)b;
  unsigned long long int b_hi = b >> 32;
  unsigned long long int m1 = a_lo * b_hi;
  unsigned long long int m2 = a_hi * b_lo;
  unsigned int carry;

  carry = (0ULL + __umulhi(a_lo, b_lo) + (unsigned int)m1 + (unsigned int)m2) >> 32;

  return a_hi * b_hi + (m1 >> 32) + (m2 >> 32) + carry;
}

static long long int __mul64hi(long long int a, long long int b)
{
  long long int res;
  res = __umul64hi(a, b);
  if (a < 0LL) res = res - b;
  if (b < 0LL) res = res - a;
  return res;
}

static float __saturatef(float a)
{
  if (__cuda___isnanf(a)) return 0.0f;
  return a >= 1.0f ? 1.0f : a <= 0.0f ? 0.0f : a;
}

static unsigned int __sad(int a, int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static unsigned int __usad(unsigned int a, unsigned int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static int __mul24(int a, int b)
{

  a &= 0xffffff;
  a = (a & 0x800000) != 0 ? a | ~0xffffff : a;
  b &= 0xffffff;
  b = (b & 0x800000) != 0 ? b | ~0xffffff : b;


  return a * b;
}

static unsigned int __umul24(unsigned int a, unsigned int b)
{

  a &= 0xffffff;
  b &= 0xffffff;


  return a * b;
}

static float __int_as_float(int a)
{
  volatile union __cudart_FloatIntCvt u;

  u.i = a;
  return u.f;
}

static int __float_as_int(float a)
{
  volatile union __cudart_FloatIntCvt u;

  u.f = a;
  return u.i;
}

static long long int __internal_float2ll_kernel(float a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  ia = __float_as_int(a);
  shift = 189 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)(((ia << 8) | 0x80000000) >> 1) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundMinInf && t != 0ULL && ia > 0x80000000) {
    res++;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL && (int)ia > 0) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)-(long long int)res;
  return (long long int)res;
}

static int __internal_float2int(float a, enum cudaRoundMode rndMode)
{
  return (int)__internal_float2ll_kernel(a, 2147483647LL, -2147483648LL, 0LL, rndMode);
}

static int __float2int_rz(float a)
{



  return __internal_float2int(a, cudaRoundZero);

}

static int __float2int_ru(float a)
{
  return __internal_float2int(a, cudaRoundPosInf);
}

static int __float2int_rd(float a)
{
  return __internal_float2int(a, cudaRoundMinInf);
}

static int __float2int_rn(float a)
{
  return __internal_float2int(a, cudaRoundNearest);
}

static long long int __internal_float2ll(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __float2ll_rz(float a)
{



  return __internal_float2ll(a, cudaRoundZero);

}

static long long int __float2ll_ru(float a)
{
  return __internal_float2ll(a, cudaRoundPosInf);
}

static long long int __float2ll_rd(float a)
{
  return __internal_float2ll(a, cudaRoundMinInf);
}

static long long int __float2ll_rn(float a)
{
  return __internal_float2ll(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull_kernel(float a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;
  ia = __float_as_int(a);
  shift = 190 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)((ia << 8) | 0x80000000) << 32;
  if (shift >= 64) {
    t = res >> (int)(shift > 64);
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL) {
    res++;
  }
  return res;
}

static unsigned int __internal_float2uint(float a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_float2ull_kernel(a, 4294967295U, 0U, rndMode);
}

static unsigned int __float2uint_rz(float a)
{



  return __internal_float2uint(a, cudaRoundZero);

}

static unsigned int __float2uint_ru(float a)
{
  return __internal_float2uint(a, cudaRoundPosInf);
}

static unsigned int __float2uint_rd(float a)
{
  return __internal_float2uint(a, cudaRoundMinInf);
}

static unsigned int __float2uint_rn(float a)
{
  return __internal_float2uint(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __float2ull_rz(float a)
{



  return __internal_float2ull(a, cudaRoundZero);

}

static unsigned long long int __float2ull_ru(float a)
{
  return __internal_float2ull(a, cudaRoundPosInf);
}

static unsigned long long int __float2ull_rd(float a)
{
  return __internal_float2ull(a, cudaRoundMinInf);
}

static unsigned long long int __float2ull_rn(float a)
{
  return __internal_float2ull(a, cudaRoundNearest);
}

static int __internal_normalize64(unsigned long long int *a)
{
  int lz = 0;

  if ((*a & 0xffffffff00000000ULL) == 0ULL) {
    *a <<= 32;
    lz += 32;
  }
  if ((*a & 0xffff000000000000ULL) == 0ULL) {
    *a <<= 16;
    lz += 16;
  }
  if ((*a & 0xff00000000000000ULL) == 0ULL) {
    *a <<= 8;
    lz += 8;
  }
  if ((*a & 0xf000000000000000ULL) == 0ULL) {
    *a <<= 4;
    lz += 4;
  }
  if ((*a & 0xC000000000000000ULL) == 0ULL) {
    *a <<= 2;
    lz += 2;
  }
  if ((*a & 0x8000000000000000ULL) == 0ULL) {
    *a <<= 1;
    lz += 1;
  }
  return lz;
}

static int __internal_normalize(unsigned int *a)
{
  unsigned long long int t = (unsigned long long int)*a;
  int lz = __internal_normalize64(&t);

  *a = (unsigned int)(t >> 32);

  return lz - 32;
}

static float __internal_int2float_kernel(int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_FloatUintCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  if (a < 0) res.i = (unsigned int)-a;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if (a < 0) res.i |= 0x80000000;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.f;
}

static float __int2float_rz(int a)
{
  return __internal_int2float_kernel(a, cudaRoundZero);
}

static float __int2float_ru(int a)
{
  return __internal_int2float_kernel(a, cudaRoundPosInf);
}

static float __int2float_rd(int a)
{
  return __internal_int2float_kernel(a, cudaRoundMinInf);
}

static float __int2float_rn(int a)
{



  return __internal_int2float_kernel(a, cudaRoundNearest);

}

static float __internal_uint2float_kernel(unsigned int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_FloatUintCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.f;
}

static float __uint2float_rz(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundZero);
}

static float __uint2float_ru(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundPosInf);
}

static float __uint2float_rd(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundMinInf);
}

static float __uint2float_rn(unsigned int a)
{



  return __internal_uint2float_kernel(a, cudaRoundNearest);

}

static float __ll2float_rn(long long int a)
{
  return (float)a;
}

static float __ull2float_rn(unsigned long long int a)
{



  unsigned long long int temp;
  unsigned int res, t;
  int shift;
  if (a == 0ULL) return 0.0f;
  temp = a;
  shift = __internal_normalize64(&temp);
  temp = (temp >> 8) | ((temp & 0xffULL) ? 1ULL : 0ULL);
  res = (unsigned int)(temp >> 32);
  t = (unsigned int)temp;
  res += (127 + 62 - shift) << 23;
  res += t == 0x80000000 ? res & 1 : t >> 31;
  return __int_as_float(res);

}

static float __internal_fmul_kernel(float a, float b, int rndNearest)
{
  unsigned long long product;
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (yy.i < 0x80000000) return xx.f;
      xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
               && rndNearest);
      return xx.f;
    } else if ((int)expo_x >= 254) {

      xx.i = (expo_y | 0x7F800000) - (!rndNearest);
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (expo_x > 25) {

        xx.i = expo_y;
        return xx.f;
      } else {
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
                 && rndNearest);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fadd_kernel(float a, float b, int rndNearest)
{
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {

add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned int)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i & ~0x00800000;
          xx.i = (xx.i + (expo_x << 23)) + 0x00800000;
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          xx.i = 0;
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          expo_y = xx.i & 1;
          xx.i = xx.i + (expo_x << 23);
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);

        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      expo_y = xx.i & 1;
      xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
               && rndNearest);
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

        xx.i = ((xx.i & 0x80000000) | 0x7f800000) - (!rndNearest);
        return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;

    expo_x = (unsigned int)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
             && rndNearest);
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (xx.i == 0x80000000) {
        xx.i = yy.i;
      }
      if ((xx.i << 1) > 0xff000000) {
        xx.i |= 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __fadd_rz(float a, float b)
{
  return __internal_fadd_kernel(a, b, 0);
}

static float __fmul_rz(float a, float b)
{
  return __internal_fmul_kernel(a, b, 0);
}

static float __fadd_rn(float a, float b)
{
  return __internal_fadd_kernel(a, b, 1);
}

static float __fmul_rn(float a, float b)
{
  return __internal_fmul_kernel(a, b, 1);
}

static void __brkpt(int c)
{

}
# 4518 "/home/normal/cuda/bin/../include/device_functions.h" 3
extern int __cudaSynchronizeThreads(void**, void*);



static inline __attribute__((always_inline)) void __syncthreads(void)
{
  volatile int _ = 0;
  L: if (__cudaSynchronizeThreads((void**)&&L, (void*)&_)) goto L;
}
# 4537 "/home/normal/cuda/bin/../include/device_functions.h" 3
static void __prof_trigger(int a)
{
}

static void __threadfence(void)
{
}

static void __threadfence_block(void)
{
}



static void __trap(void)
{
  __builtin_trap();
}
# 4573 "/home/normal/cuda/bin/../include/device_functions.h" 3
static float __fdividef(float a, float b)
{






  if (__cuda_fabsf(b) > 8.507059173e37f) {
    if (__cuda_fabsf(a) <= 3.402823466e38f) {
      return ((a / b) / 3.402823466e38f) / 3.402823466e38f;
    } else {
      return __int_as_float(0xffc00000);
    }
  } else {
    return a / b;
  }

}

static float __sinf(float a)
{
  return sinf(a);
}

static float __cosf(float a)
{
  return cosf(a);
}

static float __log2f(float a)
{
  return log2f(a);
}







static float __internal_accurate_fdividef(float a, float b)
{
  if (__cuda_fabsf(b) > 8.507059173e37f) {
    a *= .25f;
    b *= .25f;
  }
  return __fdividef(a, b);
}

static float __tanf(float a)
{



  return __fdividef (__sinf(a), __cosf(a));

}

static void __sincosf(float a, float *sptr, float *cptr)
{



  *sptr = __sinf(a);
  *cptr = __cosf(a);

}

static float __expf(float a)
{



  return __cuda_exp2f(a * 1.442695041f);

}

static float __exp10f(float a)
{



  return __cuda_exp2f(a * 3.321928094f);

}

static float __log10f(float a)
{



  return 0.301029996f * __log2f(a);

}

static float __logf(float a)
{



  return 0.693147181f * __log2f(a);

}

static float __powf(float a, float b)
{



  return __cuda_exp2f(b * __log2f(a));

}

static float fdividef(float a, float b)
{





  return __internal_accurate_fdividef(a, b);

}

static int __clz(int a)
{
  return (a)?(158-(__float_as_int(__uint2float_rz((unsigned int)a))>>23)):32;
}

static int __clzll(long long int a)
{
  int ahi = ((int)((unsigned long long)a >> 32));
  int alo = ((int)((unsigned long long)a & 0xffffffffULL));
  int res;
  if (ahi) {
    res = 0;
  } else {
    res = 32;
    ahi = alo;
  }
  res = res + __clz(ahi);
  return res;
}

static int __popc(unsigned int a)
{
  a = a - ((a >> 1) & 0x55555555);
  a = (a & 0x33333333) + ((a >> 2) & 0x33333333);
  a = (a + (a >> 4)) & 0x0f0f0f0f;
  a = ((__umul24(a, 0x808080) << 1) + a) >> 24;
  return a;
}

static int __popcll(unsigned long long int a)
{
  unsigned int ahi = ((unsigned int)(a >> 32));
  unsigned int alo = ((unsigned int)(a & 0xffffffffULL));
  alo = alo - ((alo >> 1) & 0x55555555);
  alo = (alo & 0x33333333) + ((alo >> 2) & 0x33333333);
  ahi = ahi - ((ahi >> 1) & 0x55555555);
  ahi = (ahi & 0x33333333) + ((ahi >> 2) & 0x33333333);
  alo = alo + ahi;
  alo = (alo & 0x0f0f0f0f) + ((alo >> 4) & 0x0f0f0f0f);
  alo = ((__umul24(alo, 0x808080) << 1) + alo) >> 24;
  return alo;
}

static unsigned int __brev(unsigned int a)
{
  a = ((a >> 1) & 0x55555555) + ((a & 0x55555555) << 1);
  a = ((a >> 2) & 0x33333333) + ((a & 0x33333333) << 2);
  a = ((a >> 4) & 0x0F0F0F0F) + ((a & 0x0F0F0F0F) << 4);
  a = ((a >> 8) & 0x00FF00FF) + ((a & 0x00FF00FF) << 8);
  a = ( a >> 16 ) + ( a << 16);
  return a;
}

static unsigned long long int __brevll(unsigned long long int a)
{
  unsigned int hi = (unsigned int)(a >> 32);
  unsigned int lo = (unsigned int)(a & 0xffffffffULL);
  unsigned int t;
  t = __brev(lo);
  lo = __brev(hi);
  return ((unsigned long long int)t << 32) + (unsigned long long int)lo;
}

static int __ffs(int a)
{
  return 32 - __clz (a & -a);
}

static int __ffsll(long long int a)
{
  return 64 - __clzll (a & -a);
}
# 4812 "/home/normal/cuda/bin/../include/device_functions.h" 3
static double fdivide(double a, double b)
{
  return a / b;
}



static int __internal_double2int(double a, enum cudaRoundMode rndMode);
static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode);
static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode);
static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode);

static int __double2int_rz(double a)
{
  return __internal_double2int(a, cudaRoundZero);
}

static unsigned int __double2uint_rz(double a)
{
  return __internal_double2uint(a, cudaRoundZero);
}

static long long int __double2ll_rz(double a)
{
  return __internal_double2ll(a, cudaRoundZero);
}

static unsigned long long int __double2ull_rz(double a)
{
  return __internal_double2ull(a, cudaRoundZero);
}
# 4856 "/home/normal/cuda/bin/../include/device_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/sm_11_atomic_functions.h" 1 3
# 257 "/home/normal/cuda/bin/../include/sm_11_atomic_functions.h" 3
extern void __cudaMutexOperation(int lock);






static int __iAtomicAdd(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);



  return old;
}

static unsigned int __uAtomicAdd(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicExch(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicExch(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static float __fAtomicExch(float *address, float val)
{
  float old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicMin(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old < val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicMin(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old < val ? old : val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicMax(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old > val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicMax(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old > val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicInc(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = (old >= val) ? 0 : old + 1; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicDec(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = ((old == 0) | (old > val)) ? val : (old - 1); __cudaMutexOperation(0);




  return old;
}

static int __iAtomicAnd(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old & val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicAnd(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old & val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicOr(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old | val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicOr(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old | val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicXor(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old ^ val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicXor(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old ^ val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicCAS(int *address, int compare, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicCAS(unsigned int *address, unsigned int compare, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);




  return old;
}
# 4857 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 1 "/home/normal/cuda/bin/../include/sm_12_atomic_functions.h" 1 3
# 118 "/home/normal/cuda/bin/../include/sm_12_atomic_functions.h" 3
extern void __cudaMutexOperation(int lock);






static unsigned long long int __ullAtomicAdd(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);



  return old;
}

static unsigned long long int __ullAtomicExch(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);



  return old;
}

static unsigned long long int __ullAtomicCAS(unsigned long long int *address, unsigned long long int compare, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);



  return old;
}





static int __any(int cond)
{
  return cond;
}

static int __all(int cond)
{
  return cond;
}
# 4858 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 1 "/home/normal/cuda/bin/../include/sm_13_double_functions.h" 1 3
# 267 "/home/normal/cuda/bin/../include/sm_13_double_functions.h" 3
static double __longlong_as_double(long long int a)
{
  volatile union __cudart_DoubleLonglongCvt u;
  u.i = a;
  return u.d;
}

static long long int __double_as_longlong(double a)
{
  volatile union __cudart_DoubleLonglongCvt u;
  u.d = a;
  return u.i;
}

static float __internal_double2float_kernel(double a)
{
  volatile union __cudart_DoubleUlonglongCvt xx;
  volatile union __cudart_FloatUintCvt res;

  int shift;
  xx.d = a;
  if (xx.i == 0) return 0.0f;
  res.i = (((unsigned int) (xx.i >> 32)) & 0x80000000);
  if ((xx.i & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL) {
    if ((xx.i & 0x7fffffffffffffffULL) > 0x7ff0000000000000ULL) {

      res.i = 0x7f8fffff;
    } else {

      res.i |= 0x7f800000;
    }
    return res.f;
  }
  shift = ((int) ((xx.i >> 52) & 0x7ff)) - 1023;

  xx.i = (xx.i & 0x000fffffffffffffULL);
  if (shift >= 128) {
    res.i |= 0x7f7fffff;
    return res.f;
  }
  if (shift <= -127) {
    if (shift < -180) {

      xx.i = 0;
    } else {
      xx.i |= 0x0010000000000000ULL;
      xx.i >>= 127 + shift;
    }
  } else {
    res.i |= (unsigned int) (127 + shift) << 23;
  }
  res.i |= ((unsigned int) (xx.i >> 29)) & 0x007fffff;
  xx.i &= 0x1fffffff;
  return res.f;
}

static double __internal_ll2double_kernel(long long int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  if (a < 0) res.i = (unsigned long long int)-a;
  shift = __internal_normalize64((unsigned long long int*)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if (a < 0) res.i |= 0x8000000000000000ULL;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.d;
}

static double __internal_ull2double_kernel(unsigned long long int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  shift = __internal_normalize64((unsigned long long int *)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.d;
}

static long long int __internal_double2ll_kernel(double a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  shift = (int) (1023 + 62 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL) >> 1;
  if (shift >= 64) {
    t = res.i;
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t &&
          (xx.i > 0x8000000000000000ULL)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && ((long long int)xx.i > 0)) {
    res.i++;
  }
  if ((long long int)xx.i < 0) {
    res.i = (unsigned long long int)(-(long long int)res.i);
  }
  return res.i;
}

static unsigned long long int __internal_double2ull_kernel(double a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;

  if (a == 0.0) return 0LL;
  shift = (int) (1023 + 63 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL);
  if (shift >= 64) {
    t = res.i >> (int)(shift > 64);
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.i;
}

static int __double2hiint(double a)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.d = a;
  return cvt.i[1];
}

static int __double2loint(double a)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.d = a;
  return cvt.i[0];
}

static double __hiloint2double(int a, int b)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.i[0] = b;
  cvt.i[1] = a;
  return cvt.d;
}

static float __double2float_rn(double a)
{
  return (float)a;
}

static float __double2float_rz(double a)
{
  return __internal_double2float_kernel(a);
}

static int __internal_double2int(double a, enum cudaRoundMode rndMode)
{
  return (int)__internal_double2ll_kernel(a, 2147483647LL, -2147483648LL, -2147483648LL, rndMode);
}

static int __double2int_rn(double a)
{
  return __internal_double2int(a, cudaRoundNearest);
}

static int __double2int_ru(double a)
{
  return __internal_double2int(a, cudaRoundPosInf);
}

static int __double2int_rd(double a)
{
  return __internal_double2int(a, cudaRoundMinInf);
}

static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_double2ull_kernel(a, 4294967295ULL, 2147483648ULL, rndMode);
}

static unsigned int __double2uint_rn(double a)
{
  return __internal_double2uint(a, cudaRoundNearest);
}

static unsigned int __double2uint_ru(double a)
{
  return __internal_double2uint(a, cudaRoundPosInf);
}

static unsigned int __double2uint_rd(double a)
{
  return __internal_double2uint(a, cudaRoundMinInf);
}

static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __double2ll_rn(double a)
{
  return __internal_double2ll(a, cudaRoundNearest);
}

static long long int __double2ll_ru(double a)
{
  return __internal_double2ll(a, cudaRoundPosInf);
}

static long long int __double2ll_rd(double a)
{
  return __internal_double2ll(a, cudaRoundMinInf);
}

static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __double2ull_rn(double a)
{
  return __internal_double2ull(a, cudaRoundNearest);
}

static unsigned long long int __double2ull_ru(double a)
{
  return __internal_double2ull(a, cudaRoundPosInf);
}

static unsigned long long int __double2ull_rd(double a)
{
  return __internal_double2ull(a, cudaRoundMinInf);
}

static double __int2double_rn(int a)
{
  return (double)a;
}

static double __uint2double_rn(unsigned int a)
{
  return (double)a;
}

static double __ll2double_rn(long long int a)
{
  return (double)a;
}

static double __ll2double_rz(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundZero);
}

static double __ll2double_rd(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundMinInf);
}

static double __ll2double_ru(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundPosInf);
}

static double __ull2double_rn(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundNearest);
}

static double __ull2double_rz(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundZero);
}

static double __ull2double_rd(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundMinInf);
}

static double __ull2double_ru(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundPosInf);
}





static double __internal_fma_kernel(double x, double y, double z, enum cudaRoundMode rndMode)
{



  struct __cudart_UintUint xx, yy, zz, ww;
  unsigned int s, t, u, prod0, prod1, prod2, prod3, expo_x, expo_y, expo_z;

  xx.hi = __double2hiint(x);
  xx.lo = __double2loint(x);
  yy.hi = __double2hiint(y);
  yy.lo = __double2loint(y);
  zz.hi = __double2hiint(z);
  zz.lo = __double2loint(z);

  expo_z = 0x7FF;
  t = xx.hi >> 20;
  expo_x = expo_z & t;
  expo_x = expo_x - 1;
  t = yy.hi >> 20;
  expo_y = expo_z & t;
  expo_y = expo_y - 1;
  t = zz.hi >> 20;
  expo_z = expo_z & t;
  expo_z = expo_z - 1;

  if (!((expo_x <= 0x7FD) &&
        (expo_y <= 0x7FD) &&
        (expo_z <= 0x7FD))) {





    if (((yy.hi << 1) | (yy.lo != 0)) > 0xffe00000) {
      yy.hi |= 0x00080000;
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) > 0xffe00000) {
      zz.hi |= 0x00080000;
      return __hiloint2double(zz.hi, zz.lo);
    }
    if (((xx.hi << 1) | (xx.lo != 0)) > 0xffe00000) {
      xx.hi |= 0x00080000;
      return __hiloint2double(xx.hi, xx.lo);
    }
# 656 "/home/normal/cuda/bin/../include/sm_13_double_functions.h" 3
    if (((((xx.hi << 1) | xx.lo) == 0) &&
         (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000)) ||
        ((((yy.hi << 1) | yy.lo) == 0) &&
         (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000))) {
      xx.hi = 0xfff80000;
      xx.lo = 0x00000000;
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      if ((((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) ||
          (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000)) {
        if ((int)(xx.hi ^ yy.hi ^ zz.hi) < 0) {
          xx.hi = 0xfff80000;
          xx.lo = 0x00000000;
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
    }




    if (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000) {
      xx.hi = xx.hi ^ (yy.hi & 0x80000000);
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) {
      yy.hi = yy.hi ^ (xx.hi & 0x80000000);
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      return __hiloint2double(zz.hi, zz.lo);
    }





    if ((zz.hi == 0x80000000) && (zz.lo == 0)) {
      if ((((xx.hi << 1) | xx.lo) == 0) ||
          (((yy.hi << 1) | yy.lo) == 0)) {
        if ((int)(xx.hi ^ yy.hi) < 0) {
          return __hiloint2double(zz.hi, zz.lo);
        }
      }
    }



    if ((((zz.hi << 1) | zz.lo) == 0) &&
        ((((xx.hi << 1) | xx.lo) == 0) ||
         (((yy.hi << 1) | yy.lo) == 0))) {
      if (rndMode == cudaRoundMinInf) {
        return __hiloint2double((xx.hi ^ yy.hi ^ zz.hi) & 0x80000000, zz.lo);
      } else {
        zz.hi &= 0x7fffffff;
        return __hiloint2double(zz.hi, zz.lo);
      }
    }




    if ((((xx.hi << 1) | xx.lo) == 0) ||
        (((yy.hi << 1) | yy.lo) == 0)) {
      return __hiloint2double(zz.hi, zz.lo);
    }

    if (expo_x == 0xffffffff) {
      expo_x++;
      t = xx.hi & 0x80000000;
      s = xx.lo >> 21;
      xx.lo = xx.lo << 11;
      xx.hi = xx.hi << 11;
      xx.hi = xx.hi | s;
      if (!xx.hi) {
        xx.hi = xx.lo;
        xx.lo = 0;
        expo_x -= 32;
      }
      while ((int)xx.hi > 0) {
        s = xx.lo >> 31;
        xx.lo = xx.lo + xx.lo;
        xx.hi = xx.hi + xx.hi;
        xx.hi = xx.hi | s;
        expo_x--;
      }
      xx.lo = (xx.lo >> 11);
      xx.lo |= (xx.hi << 21);
      xx.hi = (xx.hi >> 11) | t;
    }
    if (expo_y == 0xffffffff) {
      expo_y++;
      t = yy.hi & 0x80000000;
      s = yy.lo >> 21;
      yy.lo = yy.lo << 11;
      yy.hi = yy.hi << 11;
      yy.hi = yy.hi | s;
      if (!yy.hi) {
        yy.hi = yy.lo;
        yy.lo = 0;
        expo_y -= 32;
      }
      while ((int)yy.hi > 0) {
        s = yy.lo >> 31;
        yy.lo = yy.lo + yy.lo;
        yy.hi = yy.hi + yy.hi;
        yy.hi = yy.hi | s;
        expo_y--;
      }
      yy.lo = (yy.lo >> 11);
      yy.lo |= (yy.hi << 21);
      yy.hi = (yy.hi >> 11) | t;
    }
    if (expo_z == 0xffffffff) {
      expo_z++;
      t = zz.hi & 0x80000000;
      s = zz.lo >> 21;
      zz.lo = zz.lo << 11;
      zz.hi = zz.hi << 11;
      zz.hi = zz.hi | s;
      if (!zz.hi) {
        zz.hi = zz.lo;
        zz.lo = 0;
        expo_z -= 32;
      }
      while ((int)zz.hi > 0) {
        s = zz.lo >> 31;
        zz.lo = zz.lo + zz.lo;
        zz.hi = zz.hi + zz.hi;
        zz.hi = zz.hi | s;
        expo_z--;
      }
      zz.lo = (zz.lo >> 11);
      zz.lo |= (zz.hi << 21);
      zz.hi = (zz.hi >> 11) | t;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx.hi ^ yy.hi;
  t = xx.lo >> 21;
  xx.lo = xx.lo << 11;
  xx.hi = xx.hi << 11;
  xx.hi = xx.hi | t;
  yy.hi = yy.hi & 0x000fffff;
  xx.hi = xx.hi | 0x80000000;
  yy.hi = yy.hi | 0x00100000;

  prod0 = xx.lo * yy.lo;
  prod1 = __umulhi (xx.lo, yy.lo);
  prod2 = xx.hi * yy.lo;
  prod3 = xx.lo * yy.hi;
  prod1 += prod2;
  t = prod1 < prod2;
  prod1 += prod3;
  t += prod1 < prod3;
  prod2 = __umulhi (xx.hi, yy.lo);
  prod3 = __umulhi (xx.lo, yy.hi);
  prod2 += prod3;
  s = prod2 < prod3;
  prod3 = xx.hi * yy.hi;
  prod2 += prod3;
  s += prod2 < prod3;
  prod2 += t;
  s += prod2 < t;
  prod3 = __umulhi (xx.hi, yy.hi) + s;

  yy.lo = prod0;
  yy.hi = prod1;
  xx.lo = prod2;
  xx.hi = prod3;
  expo_x = expo_x - (1023 - 2);
  expo_y = expo_y & 0x80000000;

  if (xx.hi < 0x00100000) {
    s = xx.lo >> 31;
    s = (xx.hi << 1) + s;
    xx.hi = s;
    s = yy.hi >> 31;
    s = (xx.lo << 1) + s;
    xx.lo = s;
    s = yy.lo >> 31;
    s = (yy.hi << 1) + s;
    yy.hi = s;
    s = yy.lo << 1;
    yy.lo = s;
    expo_x--;
  }

  t = 0;
  if (((zz.hi << 1) | zz.lo) != 0) {

    s = zz.hi & 0x80000000;

    zz.hi &= 0x000fffff;
    zz.hi |= 0x00100000;
    ww.hi = 0;
    ww.lo = 0;


    if ((int)expo_z > (int)expo_x) {
      t = expo_z;
      expo_z = expo_x;
      expo_x = t;
      t = zz.hi;
      zz.hi = xx.hi;
      xx.hi = t;
      t = zz.lo;
      zz.lo = xx.lo;
      xx.lo = t;
      t = ww.hi;
      ww.hi = yy.hi;
      yy.hi = t;
      t = ww.lo;
      ww.lo = yy.lo;
      yy.lo = t;
      t = expo_y;
      expo_y = s;
      s = t;
    }



    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 107) {

      t = 0;
      while (expo_z >= 32) {
        t = ww.lo | (t != 0);
        ww.lo = ww.hi;
        ww.hi = zz.lo;
        zz.lo = zz.hi;
        zz.hi = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        t = (t >> expo_z) | (ww.lo << (32 - expo_z)) |
                ((t << (32 - expo_z)) != 0);
        ww.lo = (ww.lo >> expo_z) | (ww.hi << (32 - expo_z));
        ww.hi = (ww.hi >> expo_z) | (zz.lo << (32 - expo_z));
        zz.lo = (zz.lo >> expo_z) | (zz.hi << (32 - expo_z));
        zz.hi = (zz.hi >> expo_z);
      }
    } else {
      t = 1;
      ww.lo = 0;
      ww.hi = 0;
      zz.lo = 0;
      zz.hi = 0;
    }
    if ((int)u < 0) {

      t = (unsigned)(-(int)t);
      s = (t != 0);
      u = yy.lo - s;
      s = u > yy.lo;
      yy.lo = u - ww.lo;
      s += yy.lo > u;
      u = yy.hi - s;
      s = u > yy.hi;
      yy.hi = u - ww.hi;
      s += yy.hi > u;
      u = xx.lo - s;
      s = u > xx.lo;
      xx.lo = u - zz.lo;
      s += xx.lo > u;
      xx.hi = (xx.hi - zz.hi) - s;
      if (!(xx.hi | xx.lo | yy.hi | yy.lo | t)) {

        if (rndMode == cudaRoundMinInf) {
          return __hiloint2double(0x80000000, xx.lo);
        } else {
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
      if ((int)xx.hi < 0) {



        t = ~t;
        yy.lo = ~yy.lo;
        yy.hi = ~yy.hi;
        xx.lo = ~xx.lo;
        xx.hi = ~xx.hi;
        if (++t == 0) {
          if (++yy.lo == 0) {
            if (++yy.hi == 0) {
              if (++xx.lo == 0) {
              ++xx.hi;
              }
            }
          }
        }
        expo_y ^= 0x80000000;
      }


      while (!(xx.hi & 0x00100000)) {
        xx.hi = (xx.hi << 1) | (xx.lo >> 31);
        xx.lo = (xx.lo << 1) | (yy.hi >> 31);
        yy.hi = (yy.hi << 1) | (yy.lo >> 31);
        yy.lo = (yy.lo << 1);
        expo_x--;
      }
    } else {

      yy.lo = yy.lo + ww.lo;
      s = yy.lo < ww.lo;
      yy.hi = yy.hi + s;
      u = yy.hi < s;
      yy.hi = yy.hi + ww.hi;
      u += yy.hi < ww.hi;
      xx.lo = xx.lo + u;
      s = xx.lo < u;
      xx.lo = xx.lo + zz.lo;
      s += xx.lo < zz.lo;
      xx.hi = xx.hi + zz.hi + s;
      if (xx.hi & 0x00200000) {
        t = t | (yy.lo << 31);
        yy.lo = (yy.lo >> 1) | (yy.hi << 31);
        yy.hi = (yy.hi >> 1) | (xx.lo << 31);
        xx.lo = (xx.lo >> 1) | (xx.hi << 31);
        xx.hi = ((xx.hi & 0x80000000) | (xx.hi >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  t = yy.lo | (t != 0);
  t = yy.hi | (t != 0);

  xx.hi |= expo_y;
  if (expo_x <= 0x7FD) {

    xx.hi = xx.hi & ~0x00100000;
    s = xx.lo & 1;
    u = xx.lo;
    if (rndMode == cudaRoundNearest) {
      xx.lo += (t == 0x80000000) ? s : (t >> 31);
    } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
               ((rndMode == cudaRoundMinInf) && t && expo_y)) {
      xx.lo += 1;
    }
    xx.hi += (u > xx.lo);
    xx.hi += ((expo_x + 1) << 20);
    return __hiloint2double(xx.hi, xx.lo);
  } else if ((int)expo_x >= 2046) {

    if ((rndMode == cudaRoundNearest) ||
        ((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      xx.hi = (xx.hi & 0x80000000) | 0x7ff00000;
      xx.lo = 0;
    } else {
      xx.hi = (xx.hi & 0x80000000) | 0x7fefffff;
      xx.lo = 0xffffffff;
    }
    return __hiloint2double(xx.hi, xx.lo);
  }

  expo_x = (unsigned)(-(int)expo_x);
  if (expo_x > 54) {

    if (((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      return __hiloint2double(xx.hi & 0x80000000, 1);
    } else {
      return __hiloint2double(xx.hi & 0x80000000, 0);
    }
  }
  yy.hi = xx.hi & 0x80000000;
  xx.hi = xx.hi & ~0xffe00000;
  if (expo_x >= 32) {
    t = xx.lo | (t != 0);
    xx.lo = xx.hi;
    xx.hi = 0;
    expo_x -= 32;
  }
  if (expo_x) {
    t = (t >> expo_x) | (xx.lo << (32 - expo_x)) | (t != 0);
    xx.lo = (xx.lo >> expo_x) | (xx.hi << (32 - expo_x));
    xx.hi = (xx.hi >> expo_x);
  }
  expo_x = xx.lo & 1;
  u = xx.lo;
  if (rndMode == cudaRoundNearest) {
    xx.lo += (t == 0x80000000) ? expo_x : (t >> 31);
  } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
             ((rndMode == cudaRoundMinInf) && t && expo_y)) {
    xx.lo += 1;
  }
  xx.hi += (u > xx.lo);
  xx.hi |= yy.hi;
  return __hiloint2double(xx.hi, xx.lo);
}

static double __fma_rn(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundNearest);
}

static double __fma_rd(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundMinInf);
}

static double __fma_ru(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundPosInf);
}

static double __fma_rz(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundZero);
}

static double __dadd_rz(double a, double b)
{
  return __fma_rz(a, 1.0, b);
}

static double __dadd_ru(double a, double b)
{
  return __fma_ru(a, 1.0, b);
}

static double __dadd_rd(double a, double b)
{
  return __fma_rd(a, 1.0, b);
}

static double __dmul_rz(double a, double b)
{
  return __fma_rz(a, b, __longlong_as_double(0x8000000000000000ULL));
}

static double __dmul_ru(double a, double b)
{
  return __fma_ru(a, b, __longlong_as_double(0x8000000000000000ULL));
}

static double __dmul_rd(double a, double b)
{
  return __fma_rd(a, b, 0.0);
}

static double __dadd_rn(double a, double b)
{
  return __fma_rn(a, 1.0, b);
}

static double __dmul_rn(double a, double b)
{
  return __fma_rn(a, b, __longlong_as_double(0x8000000000000000ULL));
}
# 4859 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 1 "/home/normal/cuda/bin/../include/texture_fetch_functions.h" 1 3
# 1910 "/home/normal/cuda/bin/../include/texture_fetch_functions.h" 3
extern void __cudaTextureFetch(const void *tex, void *index, int integer, void *val);

static int4 __itexfetchi(const void *tex, int4 index)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static uint4 __utexfetchi(const void *tex, int4 index)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static float4 __ftexfetchi(const void *tex, int4 index)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static int4 __itexfetch(const void *tex, float4 index, int dim)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static uint4 __utexfetch(const void *tex, float4 index, int dim)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static float4 __ftexfetch(const void *tex, float4 index, int dim)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}
# 4860 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 945 "/home/normal/cuda/bin/../include/math_functions.h" 2 3


static int __cuda___signbitf(float a)
{
  return (int)((unsigned int)__float_as_int(a) >> 31);
}




static float __cuda_copysignf(float a, float b)
{
  return __int_as_float((__float_as_int(b) & 0x80000000) |
                        (__float_as_int(a) & ~0x80000000));
}
# 969 "/home/normal/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}
# 1055 "/home/normal/cuda/bin/../include/math_functions.h" 3
static float __internal_nearbyintf(float a)
{
  float fa = fabsf(a);

  if (fa >= 8388608.0f) {
    return a;
  } else {
    volatile float u = 8388608.0f + fa;

    u = u - 8388608.0f;
    return copysignf(u, a);
  }
}

static float __internal_fminf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;
  int nana, nanb;

  cvta.f = a;
  cvtb.f = b;
  nana = ((cvta.i << 1) > 0xff000000);
  nanb = ((cvtb.i << 1) > 0xff000000);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.i | cvtb.i) == 0x80000000) {
    return __int_as_float(0x80000000);
  }
  return a < b ? a : b;
}

static float __internal_fmaxf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;
  int nana, nanb;

  cvta.f = a;
  cvtb.f = b;
  nana = ((cvta.i << 1) > 0xff000000);
  nanb = ((cvtb.i << 1) > 0xff000000);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.f == 0.0f) && (cvtb.f == 0.0f)) {
    cvta.i &= cvtb.i;
    return cvta.f;
  }
  return a > b ? a : b;
}
# 1151 "/home/normal/cuda/bin/../include/math_functions.h" 3
static long int __cuda_labs(long int a)
{
  return labs(a);
}

static float __cuda_ceilf(float a)
{
  return ceilf(a);
}

static float __cuda_floorf(float a)
{
  return floorf(a);
}

static float __cuda_sqrtf(float a)
{
  return sqrtf(a);
}

static float __cuda_rsqrtf(float a)
{
  return 1.0f / sqrtf(a);
}

static float __cuda_truncf(float a)
{
  return truncf(a);
}

static int __cuda_max(int a, int b)
{
  return max(a, b);
}

static int __cuda_min(int a, int b)
{
  return min(a, b);
}

static unsigned int __cuda_umax(unsigned int a, unsigned int b)
{
  return umax(a, b);
}

static unsigned int __cuda_umin(unsigned int a, unsigned int b)
{
  return umin(a, b);
}

static long long int __cuda_llrintf(float a)
{



  return __float2ll_rn(a);

}

static long int __cuda_lrintf(float a)
{




  return (long int)__cuda_llrintf(a);




}

static float __cuda_nearbyintf(float a)
{





  return __internal_nearbyintf(a);

}

static float __cuda_fmaxf(float a, float b)
{





  return __internal_fmaxf(a, b);

}

static float __cuda_fminf(float a, float b)
{





  return __internal_fminf(a, b);

}
# 1272 "/home/normal/cuda/bin/../include/math_functions.h" 3
static int __cuda___finitef(float a)
{
  return __cuda_fabsf(a) < __int_as_float(0x7f800000);
}
# 1286 "/home/normal/cuda/bin/../include/math_functions.h" 3
static int __cuda___isinff(float a)
{
  return __cuda_fabsf(a) == __int_as_float(0x7f800000);
}

static int __cuda___isnanf(float a)
{
  return !(__cuda_fabsf(a) <= __int_as_float(0x7f800000));
}

static float __cuda_nextafterf(float a, float b)
{
  unsigned int ia;
  unsigned int ib;
  ia = __float_as_int(a);
  ib = __float_as_int(b);




  if (__cuda___isnanf(a) || __cuda___isnanf(b)) return a + b;
  if (__int_as_float (ia | ib) == 0.0f) return __int_as_float(ib);





  if (__int_as_float(ia) == 0.0f) {
    return __cuda_copysignf(__int_as_float(0x00000001), b);
  }

  if ((a < b) && (a < 0.0f)) ia--;
  if ((a < b) && (a > 0.0f)) ia++;
  if ((a > b) && (a < 0.0f)) ia++;
  if ((a > b) && (a > 0.0f)) ia--;
  a = __int_as_float(ia);





  return a;
}

static float __cuda_nanf(const char *tagp)
{

  return __int_as_float(0x7fffffff);
}

static float __internal_fmad(float a, float b, float c)
{
  return a * b + c;
}


static float __internal_atanhf_kernel(float a_1, float a_2)
{
  float a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 1.566305595598990E-001f/64.0f;
  t = __internal_fmad (t, a2, 1.995081856004762E-001f/16.0f);
  t = __internal_fmad (t, a2, 3.333382699617026E-001f/4.0f);
  t = t * a2;
  t = __internal_fmad (t, a, a_2);
  t = t + a_1;
  return t;
}




static float __internal_atanf_kernel(float a)
{
  float t4, t0, t1;

  t4 = a * a;
  t0 = -5.674867153f;
  t0 = __internal_fmad (t4, -0.823362947f, t0);
  t0 = __internal_fmad (t0, t4, -6.565555096f);
  t0 = t0 * t4;
  t0 = t0 * a;
  t1 = t4 + 11.33538818f;
  t1 = __internal_fmad (t1, t4, 28.84246826f);
  t1 = __internal_fmad (t1, t4, 19.69667053f);
  t1 = 1.0f / t1;
  a = __internal_fmad (t0, t1, a);
  return a;
}


static float __internal_tan_kernel(float a)
{
  float a2, s, t;

  a2 = a * a;
  t = __internal_fmad (4.114678393115178E-003f, a2, -8.231194034909670E-001f);
  s = a2 - 2.469348886157666E+000f;
  s = 1.0f / s;
  t = t * s;
  t = t * a2;
  t = __internal_fmad (t, a, a);
  return t;
}

static float __internal_accurate_logf(float a)
{
  float t;
  float z;
  float m;
  int ia, e;
  ia = __float_as_int(a);

  if ((ia < 0x00800000) || (ia > 0x7f7fffff)) {
    return __logf(a);
  }

  m = __int_as_float((ia & 0x807fffff) | 0x3f800000);
  e = ((unsigned)ia >> 23) - 127;
  if (m > 1.414213562f) {
    m = m * 0.5f;
    e = e + 1;
  }
  t = m - 1.0f;
  z = m + 1.0f;
  z = __fdividef (t, z);
  z = -t * z;
  z = __internal_atanhf_kernel(t, z);
  z = __internal_fmad ((float)e, 0.693147181f, z);
  return z;
}

static float2 __internal_log_ep(float a)
{
  float2 res;
  int expo;
  float m;
  float log_hi, log_lo;
  float t_hi, t_lo;
  float f, g, u, v, q;



  float r, s, e;

  expo = (__float_as_int(a) >> 23) & 0xff;


  if (expo == 0) {
    a *= 16777216.0f;
    expo = (__float_as_int(a) >> 23) & 0xff;
    expo -= 24;
  }

  expo -= 127;
  m = __int_as_float((__float_as_int(a) & 0x807fffff) | 0x3f800000);
  if (m > 1.414213562f) {
    m = m * 0.5f;
    expo = expo + 1;
  }






  f = m - 1.0f;
  g = m + 1.0f;
  g = 1.0f / g;
  u = 2.0f * f * g;
  v = u * u;
  q = 1.49356810919559350E-001f/64.0f;
  q = __internal_fmad (q, v, 1.99887797540072460E-001f/16.0f);
  q = __internal_fmad (q, v, 3.33333880955515580E-001f/4.0f);
  q = q * v;
  q = q * u;
  log_hi = __int_as_float(__float_as_int(u) & 0xfffff000);
  v = __int_as_float(__float_as_int(f) & 0xfffff000);
  u = 2.0f * (f - log_hi);
  f = f - v;
  u = __internal_fmad (-log_hi, v, u);
  u = __internal_fmad (-log_hi, f, u);
  u = g * u;



  r = log_hi + u;
  s = u - (r - log_hi);
  log_hi = r;
  log_lo = s;

  r = log_hi + q;
  s = ((log_hi - r) + q) + log_lo;
  log_hi = e = r + s;
  log_lo = (r - e) + s;


  t_hi = expo * 0.6931457519f;
  t_lo = expo * 1.4286067653e-6f;


  r = t_hi + log_hi;
  s = (((t_hi - r) + log_hi) + log_lo) + t_lo;
  res.y = e = r + s;
  res.x = (r - e) + s;
  return res;
}

static float __internal_accurate_log2f(float a)
{
  return 1.442695041f * __internal_accurate_logf(a);
}




static float2 __internal_dsmul (float2 x, float2 y)
{
    float2 z;

    volatile float up, vp, u1, u2, v1, v2, mh, ml;



    up = x.y * 4097.0f;
    u1 = (x.y - up) + up;
    u2 = x.y - u1;
    vp = y.y * 4097.0f;
    v1 = (y.y - vp) + vp;
    v2 = y.y - v1;
    mh = __fmul_rn(x.y,y.y);
    ml = (((u1 * v1 - mh) + u1 * v2) + u2 * v1) + u2 * v2;
    ml = (__fmul_rn(x.y,y.x) + __fmul_rn(x.x,y.y)) + ml;
    z.y = up = mh + ml;
    z.x = (mh - up) + ml;
    return z;
}


static unsigned int __cudart_i2opi_f [] = {
  0x3c439041,
  0xdb629599,
  0xf534ddc0,
  0xfc2757d1,
  0x4e441529,
  0xa2f9836e,
};


static float __internal_trig_reduction_kernel(float a, int *quadrant)
{
  float j;
  int q;
  if (__cuda_fabsf(a) > 48039.0f) {

    unsigned int ia = __float_as_int(a);
    unsigned int s = ia & 0x80000000;
    unsigned int result[7];
    unsigned int phi, plo;
    unsigned int hi, lo;
    unsigned int e;
    int idx;
    e = ((ia >> 23) & 0xff) - 128;
    ia = (ia << 8) | 0x80000000;

    idx = 4 - (e >> 5);
    hi = 0;



    for (q = 0; q < 6; q++) {
      plo = __cudart_i2opi_f[q] * ia;
      phi = __umulhi (__cudart_i2opi_f[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q] = lo;
    }
    result[q] = hi;
    e = e & 31;



    hi = result[idx+2];
    lo = result[idx+1];
    if (e) {
      q = 32 - e;
      hi = (hi << e) + (lo >> q);
      lo = (lo << e) + (result[idx] >> q);
    }
    q = hi >> 30;

    hi = (hi << 2) + (lo >> 30);
    lo = (lo << 2);
    e = (hi + (lo > 0)) > 0x80000000;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned int t;
      hi = ~hi;
      lo = -(int)lo;
      t = (lo == 0);
      hi += t;
      s = s ^ 0x80000000;
    }
    *quadrant = q;

    e = 0;
    while ((int)hi > 0) {
      hi = (hi << 1) + (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xc90fdaa2;
    hi = __umulhi(hi, 0xc90fdaa2);
    if ((int)hi > 0) {
      hi = (hi << 1) + (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | (((e + 126) << 23) + (hi >> 8) + ((hi << 24) >= 0x80000000));
    return __int_as_float(ia);
  }
  q = __float2int_rn (a * 0.636619772f);
  j = (float)q;
  a = __internal_fmad (-j, 1.5703125000000000e+000f, a);
  a = __internal_fmad (-j, 4.8351287841796875e-004f, a);
  a = __internal_fmad (-j, 3.1385570764541626e-007f, a);
  a = __internal_fmad (-j, 6.0771005065061922e-011f, a);
  *quadrant = q;
  return a;
}
# 1630 "/home/normal/cuda/bin/../include/math_functions.h" 3
static float __internal_expf_kernel(float a, float scale)
{
  float j, z;

  j = __cuda_truncf(a * 1.442695041f);
  z = __internal_fmad (j, -0.6931457519f, a);
  z = __internal_fmad (j, -1.4286067653e-6f, z);
  z = z * 1.442695041f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j + scale);
  return z;
}

static float __internal_accurate_expf(float a)
{
  float z;

  z = __internal_expf_kernel(a, 0.0f);
  if (a < -105.0f) z = 0.0f;
  if (a > 105.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_accurate_exp10f(float a)
{
  float j, z;

  j = __cuda_truncf(a * 3.321928094f);
  z = __internal_fmad (j, -3.0102920532226563e-001f, a);
  z = __internal_fmad (j, -7.9034171557301747e-007f, z);
  z = z * 3.321928094f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j);
  if (a < -46.0f) z = 0.0f;
  if (a > 46.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_lgammaf_pos(float a)
{
  float sum;
  float s, t;

  if (a == __int_as_float(0x7f800000)) {
    return a;
  }
  if (a >= 3.0f) {
    if (a >= 7.8f) {



      s = 1.0f / a;
      t = s * s;
      sum = 0.77783067e-3f;
      sum = __internal_fmad (sum, t, -0.2777655457e-2f);
      sum = __internal_fmad (sum, t, 0.83333273853e-1f);
      sum = __internal_fmad (sum, s, 0.918938533204672f);
      s = 0.5f * __internal_accurate_logf(a);
      t = a - 0.5f;
      s = s * t;
      t = s - a;
      s = __fadd_rn(s, sum);
      t = t + s;
      return t;
    } else {
      a = a - 3.0f;
      s = -7.488903254816711E+002f;
      s = __internal_fmad (s, a, -1.234974215949363E+004f);
      s = __internal_fmad (s, a, -4.106137688064877E+004f);
      s = __internal_fmad (s, a, -4.831066242492429E+004f);
      s = __internal_fmad (s, a, -1.430333998207429E+005f);
      t = a - 2.592509840117874E+002f;
      t = __internal_fmad (t, a, -1.077717972228532E+004f);
      t = __internal_fmad (t, a, -9.268505031444956E+004f);
      t = __internal_fmad (t, a, -2.063535768623558E+005f);
      t = __fdividef (s, t);
      t = t + a;
      return t;
    }
  } else if (a >= 1.5f) {
    a = a - 2.0f;
    t = 4.959849168282574E-005f;
    t = __internal_fmad (t, a, -2.208948403848352E-004f);
    t = __internal_fmad (t, a, 5.413142447864599E-004f);
    t = __internal_fmad (t, a, -1.204516976842832E-003f);
    t = __internal_fmad (t, a, 2.884251838546602E-003f);
    t = __internal_fmad (t, a, -7.382757963931180E-003f);
    t = __internal_fmad (t, a, 2.058131963026755E-002f);
    t = __internal_fmad (t, a, -6.735248600734503E-002f);
    t = __internal_fmad (t, a, 3.224670187176319E-001f);
    t = __internal_fmad (t, a, 4.227843368636472E-001f);
    t = t * a;
    return t;
  } else if (a >= 0.7f) {
    a = 1.0f - a;
    t = 4.588266515364258E-002f;
    t = __internal_fmad (t, a, 1.037396712740616E-001f);
    t = __internal_fmad (t, a, 1.228036339653591E-001f);
    t = __internal_fmad (t, a, 1.275242157462838E-001f);
    t = __internal_fmad (t, a, 1.432166835245778E-001f);
    t = __internal_fmad (t, a, 1.693435824224152E-001f);
    t = __internal_fmad (t, a, 2.074079329483975E-001f);
    t = __internal_fmad (t, a, 2.705875136435339E-001f);
    t = __internal_fmad (t, a, 4.006854436743395E-001f);
    t = __internal_fmad (t, a, 8.224669796332661E-001f);
    t = __internal_fmad (t, a, 5.772156651487230E-001f);
    t = t * a;
    return t;
  } else {
    t = 3.587515669447039E-003f;
    t = __internal_fmad (t, a, -5.471285428060787E-003f);
    t = __internal_fmad (t, a, -4.462712795343244E-002f);
    t = __internal_fmad (t, a, 1.673177015593242E-001f);
    t = __internal_fmad (t, a, -4.213597883575600E-002f);
    t = __internal_fmad (t, a, -6.558672843439567E-001f);
    t = __internal_fmad (t, a, 5.772153712885004E-001f);
    t = t * a;
    t = __internal_fmad (t, a, a);
    return -__internal_accurate_logf(t);
  }
}


static float __internal_sin_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = -1.95152959e-4f;
  z = __internal_fmad (z, x2, 8.33216087e-3f);
  z = __internal_fmad (z, x2, -1.66666546e-1f);
  z = z * x2;
  z = __internal_fmad (z, x, x);
  return z;
}


static float __internal_cos_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = 2.44331571e-5f;
  z = __internal_fmad (z, x2, -1.38873163e-3f);
  z = __internal_fmad (z, x2, 4.16666457e-2f);
  z = __internal_fmad (z, x2, -5.00000000e-1f);
  z = __internal_fmad (z, x2, 1.00000000e+0f);
  return z;
}

static float __internal_accurate_sinf(float a)
{
  float z;
  int i;

  if ((__cuda___isinff(a)) || (a == 0.0f)) {
    return __fmul_rn (a, 0.0f);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}







static float __cuda_rintf(float a)
{



  return __cuda_nearbyintf(a);

}

static float __cuda_sinf(float a)
{





  return __internal_accurate_sinf(a);

}

static float __cuda_cosf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __fadd_rn (a, -a);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;

}

static float __cuda_tanf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __int_as_float(0x7fffffff);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  z = __internal_tan_kernel(z);
  if (i & 1) {
    z = - (1.0f / z);
  }
  return z;

}

static float __cuda_log2f(float a)
{





  return __internal_accurate_log2f(a);

}

static float __cuda_expf(float a)
{





  return __internal_accurate_expf(a);

}

static float __cuda_exp10f(float a)
{





  return __internal_accurate_exp10f(a);

}

static float __cuda_coshf(float a)
{
  float z;

  a = __cuda_fabsf(a);
  z = __internal_expf_kernel(a, -2.0f);
  z = __internal_fmad (2.0f, z, __fdividef (0.125f, z));
  if (a >= 90.0f) {
    z = __int_as_float(0x7f800000);
  }
  return z;
}

static float __cuda_sinhf(float a)
{
  float s, z;

  s = a;
  a = __cuda_fabsf(a);
  if (a < 1.0f) {
    float a2 = a * a;

    z = 2.816951222e-6f;
    z = __internal_fmad (z, a2, 1.983615978e-4f);
    z = __internal_fmad (z, a2, 8.333350058e-3f);
    z = __internal_fmad (z, a2, 1.666666650e-1f);
    z = z * a2;
    z = __internal_fmad (z, a, a);
  } else {
    z = __internal_expf_kernel(a, -2.0f);
    z = __internal_fmad (2.0f, z, -__fdividef (0.125f, z));
    if (a >= 90.0f) {
      z = __int_as_float(0x7f800000);
    }
  }
  return __cuda_copysignf(z, s);
}

static float __cuda_tanhf(float a)
{
  float s, t;

  t = __cuda_fabsf(a);
  if (t < 0.55f) {
    float z, z2;
    z = t;
    z2 = z * z;
    t = 1.643758066599993e-2f;
    t = __internal_fmad (t, z2, -5.267181327760551e-2f);
    t = __internal_fmad (t, z2, 1.332072505223051e-1f);
    t = __internal_fmad (t, z2, -3.333294663641083e-1f);
    t = t * z2;
    s = __internal_fmad (t, z, z);
  } else {
    s = 1.0f - __fdividef(2.0f,(__internal_expf_kernel(2.0f * t, 0.0f)+1.0f));
    if (t >= 88.0f) {
      s = 1.0f;
    }
  }
  return __cuda_copysignf(s, a);
}

static float __cuda_atan2f(float a, float b)
{



  float t0, t1, t3, fa, fb;



  fb = __cuda_fabsf(b);
  fa = __cuda_fabsf(a);

  if (fa == 0.0f && fb == 0.0f) {
    t3 = __cuda___signbitf(b) ? 3.141592654f : 0;
  } else if ((fa == __int_as_float(0x7f800000)) && (fb == __int_as_float(0x7f800000))) {
    t3 = __cuda___signbitf(b) ? 2.356194490f : 0.785398163f;
  } else {

    if (fb < fa) {
      t0 = fa;
      t1 = fb;
    } else {
      t0 = fb;
      t1 = fa;
    }
    t3 = __internal_accurate_fdividef(t1, t0);
    t3 = __internal_atanf_kernel(t3);

    if (fa > fb) t3 = 1.570796327f - t3;
    if (b < 0.0f) t3 = 3.141592654f - t3;
  }
  t3 = __cuda_copysignf(t3, a);

  return t3;

}

static float __cuda_atanf(float a)
{
  float t0, t1;


  t0 = __cuda_fabsf(a);
  t1 = t0;
  if (t0 > 1.0f) {
    t1 = 1.0f / t1;
  }

  t1 = __internal_atanf_kernel(t1);

  if (t0 > 1.0f) {
    t1 = 1.570796327f - t1;
  }
  return __cuda_copysignf(t1, a);
}


static float __internal_asinf_kernel(float a)
{
  float t2, t3, t4;

  t2 = a * a;
  t3 = -0.501162291f;
  t3 = __internal_fmad (t3, t2, 0.915201485f);
  t3 = t3 * t2;
  t3 = t3 * a;
  t4 = t2 - 5.478654385f;
  t4 = __internal_fmad (t4, t2, 5.491230488f);
  t4 = 1.0f / t4;
  a = __internal_fmad (t3, t4, a);
  return a;
}

static float __cuda_asinf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t2 = __internal_fmad (-2.0f, t1, 1.570796327f);
  if (t0 > 0.575f) {
    t1 = t2;
  }
  return __cuda_copysignf(t1, a);
}

static float __cuda_acosf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t1 = t0 > 0.575f ? 2.0f * t1 : 1.570796327f - t1;
  if (__cuda___signbitf(a)) {
    t1 = 3.141592654f - t1;
  }
  return t1;
}

static float __cuda_logf(float a)
{





  return __internal_accurate_logf(a);

}

static float __cuda_log10f(float a)
{





  return 0.434294482f * __internal_accurate_logf(a);

}

static float __cuda_log1pf(float a)
{



  float t;




  if (a >= -0.394f && a <= 0.65f) {

    t = a + 2.0f;
    t = __fdividef (a, t);
    t = -a * t;
    t = __internal_atanhf_kernel (a, t);
  } else {
    t = __internal_accurate_logf (1.0f + a);
  }
  return t;

}

static float __cuda_acoshf(float a)
{



  float t;

  t = a - 1.0f;
  if (__cuda_fabsf(t) > 8388608.0f) {

    return 0.693147181f + __internal_accurate_logf(a);
  } else {
    t = t + __cuda_sqrtf(__internal_fmad (a, t, t));
    return __cuda_log1pf(t);
  }

}

static float __cuda_asinhf(float a)
{



  float fa, oofa, t;

  fa = __cuda_fabsf(a);
  if (fa > 8.507059173e37f) {
    t = 0.693147181f + __logf(fa);
  } else {
    oofa = 1.0f / fa;
    t =fa+__fdividef (fa,(oofa+__cuda_sqrtf(__internal_fmad(oofa,oofa,1.0f))));
    t = __cuda_log1pf(t);
  }
  return __cuda_copysignf(t, a);

}

static float __cuda_atanhf(float a)
{



  float fa, t;

  fa = __cuda_fabsf(a);
  t = __fdividef ((2.0f * fa), (1.0f - fa));
  t = 0.5f * __cuda_log1pf(t);
  return __cuda_copysignf(t, a);

}

static float __cuda_expm1f(float a)
{
  float t, z, j, u;

  t = __cuda_rintf (a * 1.442695041f);
  z = __internal_fmad (-t, 0.6931457519f, a);
  z = __internal_fmad (-t, 1.4286067653e-6f, z);

  if (__cuda_fabsf(a) < 0.41f) {
    z = a;
    t = 0.0f;
  }

  j = t;
  if (t == 128.0f) j = j - 1.0f;

  u = 1.38795078474044430E-003f;
  u = __internal_fmad (u, z, 8.38241261853264930E-003f);
  u = __internal_fmad (u, z, 4.16678317762833940E-002f);
  u = __internal_fmad (u, z, 1.66663978874356580E-001f);
  u = __internal_fmad (u, z, 4.99999940395997040E-001f);
  u = u * z;
  u = __internal_fmad (u, z, z);
  if (a == 0.0f) u = a;

  z = __cuda_exp2f (j);
  a = z - 1.0f;
  if (a != 0.0f) u = __internal_fmad (u, z, a);
  if (t == 128.0f) u = u + u;

  if (j > 128.0f) u = __int_as_float(0x7f800000);
  if (j < -25.0f) u = -1.0f;
  return u;
}

static float __cuda_hypotf(float a, float b)
{



  float v, w, t;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);

  if (a > b) {
    v = a;
    w = b;
  } else {
    v = b;
    w = a;
  }
  t = __internal_accurate_fdividef(w, v);
  t = __internal_fmad (t, t, 1.0f);
  t = v * __cuda_sqrtf(t);
  if (v == 0.0f) {
    t = v + w;
  }
  if ((v == __int_as_float(0x7f800000)) || (w == __int_as_float(0x7f800000))) {
    t = __int_as_float(0x7f800000);
  }
  return t;

}

static float __cuda_cbrtf(float a)
{



  float s, t;

  s = __cuda_fabsf(a);
  if ((a == 0.0f) || (s == __int_as_float(0x7f800000))) {
    return a;
  }
  t = __cuda_exp2f(0.333333333f * __log2f(s));
  t = t-(t-(__fdividef(s,(t*t))))*0.333333333f;
  if (__cuda___signbitf(a)) {
    t = -t;
  }
  return t;

}

static float __cuda_erff(float a)
{
  float t, r, q;

  t = __cuda_fabsf(a);
  if (t < 1.0f) {
    t = t * t;
    r = -5.58510127926029810E-004f;
    r = __internal_fmad (r, t, 4.90688891415893070E-003f);
    r = __internal_fmad (r, t, -2.67027980930150640E-002f);
    r = __internal_fmad (r, t, 1.12799056505903940E-001f);
    r = __internal_fmad (r, t, -3.76122956138427440E-001f);
    r = __internal_fmad (r, t, 1.12837911712623450E+000f);
    a = a * r;
  } else if (t <= __int_as_float(0x7f800000)) {



    q = __internal_fmad (t, 0.3275911f, 1.0f);
    q = 1.0f / q;
    r = 1.061405429f;
    r = __internal_fmad (r, q, -1.453152027f);
    r = __internal_fmad (r, q, 1.421413741f);
    r = __internal_fmad (r, q, -0.284496736f);
    r = __internal_fmad (r, q, 0.254829592f);
    r = r * q;
    q = __internal_expf_kernel(-a * a, 0.0f);
    r = __internal_fmad (-q, r, 1.0f);
    if (t >= 5.5f) {
      r = 1.0f;
    }
    a = __int_as_float (__float_as_int(r) | (__float_as_int(a) & 0x80000000));
  }
  return a;
}

static float __cuda_erfinvf (float a)
{
  float fa, t;

  fa = fabsf(a);
  if (fa >= 1.0f) {
    t = __cuda_rsqrtf (__int_as_float (0xffc00000));
    if (fa == 1.0f) {
      t = a * __int_as_float(0x7f800000);
    }
  } else if (fa > 0.9375f) {




    float p, q;

    t = __cuda_log1pf(-fa);
    t = __cuda_rsqrtf(-t);
    p = -1.64441567910e-1f;
    p = __internal_fmad (p, t, 6.80544246825e-1f);
    p = __internal_fmad (p, t, -1.12808139162e+0f);
    p = __internal_fmad (p, t, 6.90969348887e-1f);
    p = __internal_fmad (p, t, 1.38271964963e+0f);
    p = __internal_fmad (p, t, 1.55047000312e-1f);
    q = t + 1.38522814199e+0f;
    q = __internal_fmad (q, t, 1.55024849822e-1f);
    q = q * t;
    t = __fdividef (p, q);
    if (a < 0.0f) t = -t;
  } else if (fa > 0.75f) {




    float p, q;

    t = __internal_fmad (a, a, -0.87890625f);
    p = -7.1986748896e+0f;
    p = __internal_fmad (p, t, +1.3411974175e+1f);
    p = __internal_fmad (p, t, -5.1381573203e+0f);
    p = __internal_fmad (p, t, 4.9633374831e-1f);
    q = t -1.1436535838e+1f;
    q = __internal_fmad (q, t, 1.3568885572e+1f);
    q = __internal_fmad (q, t, -4.1747509256e+0f);
    q = __internal_fmad (q, t, 3.5327242323e-1f);
    p = __fdividef (p, q);
    t = a * p;
  } else {
    float a2;

    a2 = a * a;
    t = 6.1046168794766742E-001f;
    t = __internal_fmad (t, a2, -8.9504882462753121E-001f);
    t = __internal_fmad (t, a2, 7.0224162369928511E-001f);
    t = __internal_fmad (t, a2, -1.9993784895823222E-001f);
    t = __internal_fmad (t, a2, 1.1920613463949599E-001f);
    t = __internal_fmad (t, a2, 8.0131492246997685E-002f);
    t = __internal_fmad (t, a2, 1.2793154958377403E-001f);
    t = __internal_fmad (t, a2, 2.3200529172828793E-001f);
    t = __internal_fmad (t, a2, 8.8622695604694379E-001f);
    t = t * a;
  }
  return t;
}

static float __cuda_erfcf(float a)
{
  if (a <= 0.55f) {
    return 1.0f - __cuda_erff(a);
  } else if (a > 10.0f) {
    return 0.0f;
  } else {
    float p;
    float q;
    float h;
    float l;




    p = 4.014893410762552E-006f;
    p = __internal_fmad (p, a, 5.640401259462436E-001f);
    p = __internal_fmad (p, a, 2.626649872281140E+000f);
    p = __internal_fmad (p, a, 5.486372652389673E+000f);
    p = __internal_fmad (p, a, 5.250714831459401E+000f);
    q = a + 4.651376250488319E+000f;
    q = __internal_fmad (q, a, 1.026302828878470E+001f);
    q = __internal_fmad (q, a, 1.140762166021288E+001f);
    q = __internal_fmad (q, a, 5.251211619089947E+000f);

    h = 1.0f / q;
    q = __internal_fmad (-q * h, h, 2.0f * h);
    p = p * q;

    h = __int_as_float(__float_as_int(a) & 0xfffff000);
    l = __fadd_rn (a, -h);
    q = __fmul_rn (-h, h);
    q = __internal_expf_kernel(q, 0.0f);
    a = a + h;
    l = l * a;
    h = __internal_expf_kernel(-l, 0.0f);
    q = q * h;
    p = p * q;
    return p;
  }
}

static float __cuda_erfcinvf (float a)
{
  float t;
  if (a <= 0.0f) {
    t = __int_as_float(0x7fffffff);
    if (a == 0.0f) {
      t = (1.0f - a) * __int_as_float(0x7f800000);
    }
  }
  else if (a >= 0.0625f) {
    t = __cuda_erfinvf (1.0f - a);
  }
  else {
    float p, q;
    t = __cuda_logf(a);
    t = __cuda_rsqrtf(-t);
    p = -1.64441567910e-1f;
    p = __internal_fmad (p, t, 6.80544246825e-1f);
    p = __internal_fmad (p, t, -1.12808139162e+0f);
    p = __internal_fmad (p, t, 6.90969348887e-1f);
    p = __internal_fmad (p, t, 1.38271964963e+0f);
    p = __internal_fmad (p, t, 1.55047000312e-1f);
    q = t + 1.38522814199e+0f;
    q = __internal_fmad (q, t, 1.55024849822e-1f);
    q = q * t;
    t = __fdividef (p, q);
  }
  return t;
}

static float __cuda_lgammaf(float a)
{
  float t;
  float i;
  int quot;
  t = __internal_lgammaf_pos(__cuda_fabsf(a));
  if (a >= 0.0f) return t;
  a = __cuda_fabsf(a);
  i = __cuda_floorf(a);
  if (a == i) return __int_as_float(0x7f800000);
  if (a < 1e-19f) return -__internal_accurate_logf(a);
  i = __cuda_rintf (2.0f * a);
  quot = (int)i;
  i = __internal_fmad (-i, 0.5f, a);
  i = i * 3.141592654f;
  if (quot & 1) {
    i = __internal_cos_kernel(i);
  } else {
    i = __internal_sin_kernel(i);
  }
  i = __cuda_fabsf(i);
  t = 1.144729886f - __internal_accurate_logf(i * a) - t;
  return t;
}

static float __cuda_ldexpf(float a, int b)
{



  float fa = __cuda_fabsf(a);

  if ((fa == 0.0f) || (fa == __int_as_float(0x7f800000)) || (b == 0)) {
    if (!(fa > 0.0f)) a = a + a;
    return a;
  } else if (__cuda_abs(b) < 126) {
    return a * __cuda_exp2f((float)b);
  } else if (__cuda_abs(b) < 252) {
    int bhalf = b / 2;
    return a * __cuda_exp2f((float)bhalf) * __cuda_exp2f((float)(b - bhalf));
  } else {
    int bquarter = b / 4;
    float t = __cuda_exp2f((float)bquarter);
    return a * t * t * t * __cuda_exp2f((float)(b - 3 * bquarter));
  }

}

static float __cuda_scalbnf(float a, int b)
{




  return __cuda_ldexpf(a, b);

}

static float __cuda_scalblnf(float a, long int b)
{



  int t;
  if (b > 2147483647L) {
    t = 2147483647;
  } else if (b < (-2147483647 - 1)) {
    t = (-2147483647 - 1);
  } else {
    t = (int)b;
  }
  return __cuda_scalbnf(a, t);

}

static float __cuda_frexpf(float a, int *b)
{
  float fa = __cuda_fabsf(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 1.175494351e-38f) {
    a *= 16777216.0f;
    denorm = 24;
  } else {
    denorm = 0;
  }
  expo = ((__float_as_int(a) >> 23) & 0xff);
  if ((fa == 0.0f) || (expo == 0xff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 126;
    a = __int_as_float(((__float_as_int(a) & 0x807fffff) | 0x3f000000));
  }
  *b = expo;
  return a;
}

static float __cuda_modff(float a, float *b)
{



  float t;
  if (__cuda___finitef(a)) {
    t = __cuda_truncf(a);
    *b = t;
    t = a - t;
    return __cuda_copysignf(t, a);
  } else if (__cuda___isinff(a)) {
    t = 0.0f;
    *b = a;
    return __cuda_copysignf(t, a);
  } else {
    *b = a;
    return a;
  }

}

static float __cuda_fmodf(float a, float b)
{



  float orig_a = a;
  float orig_b = b;
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }







    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5f;
    }
    return __cuda_copysignf(a, orig_a);
  } else {
    if (!(a > 0.0f)) orig_a = orig_a + orig_a;
    return orig_a;
  }

}

static float __cuda_remainderf(float a, float b)
{

  float twoa = 0.0f;
  unsigned int quot0 = 0;
  float orig_a = a;
  float orig_b = b;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {

    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2638 "/home/normal/cuda/bin/../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2670 "/home/normal/cuda/bin/../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  return a;
}

static float __cuda_remquof(float a, float b, int* quo)
{
  float twoa = 0.0f;
  unsigned int quot = 0;
  unsigned int sign;
  float orig_a = a;
  float orig_b = b;


  sign = 0 - (__cuda___signbitf(a) != __cuda___signbitf(b));
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    *quo = quot;
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    *quo = quot;
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2723 "/home/normal/cuda/bin/../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2758 "/home/normal/cuda/bin/../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *quo = quot;
  return a;
}

static float __cuda_fmaf(float a, float b, float c)
{
  return __fmaf_rn(a, b, c);
}

static float __internal_accurate_powf(float a, float b)
{
  float2 loga, prod;



  float t;



  loga = __internal_log_ep(a);


  if (__cuda_fabsf(b) > 1.0e34f) b *= 1.220703125e-4f;
  prod.y = b;
  prod.x = 0.0f;
  prod = __internal_dsmul (prod, loga);


  if (__float_as_int(prod.y) == 0x42b17218) {
    prod.y = __int_as_float(__float_as_int(prod.y) - 1);
    prod.x = prod.x + __int_as_float(0x37000000);
  }


  t = __cuda_expf(prod.y);

  if (t != __int_as_float(0x7f800000)) {



    t = __internal_fmad (t, prod.x, t);
  }
  return t;
}

static float __cuda_powif(float a, int b)
{
  unsigned int e = __cuda_abs(b);
  float r = 1.0f;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0f / r : r;
    }
    a = a * a;
  }
}

static double __cuda_powi(double a, int b)
{
  unsigned int e = __cuda_abs(b);
  double r = 1.0;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0 / r : r;
    }
    a = a * a;
  }
}

static float __cuda_powf(float a, float b)
{





  int bIsOddInteger;
  float t;
  if (a == 1.0f || b == 0.0f) {
    return 1.0f;
  }
  if (__cuda___isnanf(a) || __cuda___isnanf(b)) {
    return a + b;
  }
  if (a == __int_as_float(0x7f800000)) {
    return __cuda___signbitf(b) ? 0.0f : __int_as_float(0x7f800000);
  }
  if (__cuda___isinff(b)) {
    if (a == -1.0f) {
      return 1.0f;
    }
    t = (__cuda_fabsf(a) > 1.0f) ? __int_as_float(0x7f800000) : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0f * floorf(0.5f * b))) == 1.0f;
  if (a == 0.0f) {
    t = bIsOddInteger ? a : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  if (a == -__int_as_float(0x7f800000)) {
    t = - ((b < 0.0f) ? (1.0f / a) : a);
    if (bIsOddInteger) {
      t = __int_as_float(__float_as_int(t) ^ 0x80000000);
    }
    return t;
  }
  if ((a < 0.0f) && (b != __cuda_truncf(b))) {
    return __cuda_rsqrtf(__int_as_float(0xffc00000));
  }
  t = __cuda_fabsf(a);
  t = __internal_accurate_powf(t, b);
  if ((a < 0.0f) && bIsOddInteger) {
    t = __int_as_float(__float_as_int(t) ^ 0x80000000);
  }
  return t;

}


static float __internal_tgammaf_kernel(float a)
{
  float t;
  t = -1.05767296987211380E-003f;
  t = __internal_fmad (t, a, 7.09279059435508670E-003f);
  t = __internal_fmad (t, a, -9.65347121958557050E-003f);
  t = __internal_fmad (t, a, -4.21736613253687960E-002f);
  t = __internal_fmad (t, a, 1.66542401247154280E-001f);
  t = __internal_fmad (t, a, -4.20043267827838460E-002f);
  t = __internal_fmad (t, a, -6.55878234051332940E-001f);
  t = __internal_fmad (t, a, 5.77215696929794240E-001f);
  t = __internal_fmad (t, a, 1.00000000000000000E+000f);
  return t;
}





static float __cuda_tgammaf(float a)
{
  float s, xx, x=a;
  if (x >= 0.0f) {
    if (x > 36.0f) x = 36.0f;
    s = 1.0f;
    xx = x;
    if (x > 34.03f) {
      xx -= 1.0f;
    }
    while (xx > 1.5f) {
      xx = xx - 1.0f;
      s = s * xx;
    }
    if (x >= 0.5f) {
      xx = xx - 1.0f;
    }
    xx = __internal_tgammaf_kernel(xx);
    if (x < 0.5f) {
      xx = xx * x;
    }
    s = __fdividef(s, xx);
    if (x > 34.03f) {

      xx = x - 1.0f;
      s = s * xx;
    }
    return s;
  } else {
    if (x == __cuda_floorf(x)) {
      x = __int_as_float(0x7fffffff);

      return x;

    }
    if (x < -41.1f) x = -41.1f;
    xx = x;
    if (x < -34.03f) {
      xx += 6.0f;
    }
    s = xx;
    while (xx < -0.5f) {
      xx = xx + 1.0f;
      s = s * xx;
    }
    xx = __internal_tgammaf_kernel(xx);
    s = s * xx;
    s = 1.0f / s;
    if (x < -34.03f) {
      xx = x;
      xx *= (x + 1.0f);
      xx *= (x + 2.0f);
      xx *= (x + 3.0f);
      xx *= (x + 4.0f);
      xx *= (x + 5.0f);
      xx = 1.0f / xx;
      s = s * xx;
      if ((a < -42.0f) && !(((int)a)&1)) {
        s = __int_as_float(0x80000000);
      }
    }
    return s;
  }
}

static float __cuda_roundf(float a)
{



  float fa = __cuda_fabsf(a);
  float u = __cuda_copysignf (0.5f, a);
  u = __cuda_truncf (a + u);
  if (fa > 8388608.0f) u = a;
  if (fa < 0.5f) u = __cuda_truncf (a);
  return u;

}

static long long int __internal_llroundf_kernel(float a)
{
  unsigned long long int res, t = 0LL;
  int shift;
  unsigned int ia = __float_as_int(a);
  if ((ia << 1) > 0xff000000) return 0LL;
  if ((int)ia >= 0x5f000000) return 0x7fffffffffffffffLL;
  if (ia >= 0xdf000000) return 0x8000000000000000LL;
  shift = 189 - ((ia >> 23) & 0xff);
  res = ((long long int)(((ia << 8) | 0x80000000) >> 1)) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (t >= 0x8000000000000000LL) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)(-(long long int)res);
  return (long long int)res;
}

static long long int __cuda_llroundf(float a)
{



  return __internal_llroundf_kernel(a);

}

static long int __cuda_lroundf(float a)
{




  return (long int)__cuda_llroundf(a);
# 3045 "/home/normal/cuda/bin/../include/math_functions.h" 3
}

static float __cuda_fdimf(float a, float b)
{
  float t;
  t = a - b;
  if (a <= b) {
    t = 0.0f;
  }
  return t;
}

static int __cuda_ilogbf(float a)
{
  unsigned int i;
  int expo;
  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    if ((i == 0x7f800000)) {
      expo = ((int)((unsigned int)-1 >> 1));
    }
    if ((i > 0x7f800000)) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    }
  }
  return expo;
}

static float __cuda_logbf(float a)
{



  unsigned int i;
  int expo;
  float res;

  if (__cuda___isnanf(a)) return a + a;

  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      res = -__int_as_float(0x7f800000);
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
      res = (float)expo;
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    res = (float)expo;
    if ((i >= 0x7f800000)) {

      res = a + a;
    }
  }
  return res;

}

static void __cuda_sincosf(float a, float *sptr, float *cptr)
{





  float t, u, s, c;
  int quadrant;
  if (__cuda___isinff(a)) {
    *sptr = __int_as_float(0x7fffffff);
    *cptr = __int_as_float(0x7fffffff);
    return;
  }
  if (a == 0.0f) {
    *sptr = a;
    *cptr = 1.0f;
    return;
  }
  t = __internal_trig_reduction_kernel(a, &quadrant);
  u = __internal_cos_kernel(t);
  t = __internal_sin_kernel(t);
  if (quadrant & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (quadrant & 2) {
    s = -s;
  }
  quadrant++;
  if (quadrant & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;

}
# 3176 "/home/normal/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}
# 3734 "/home/normal/cuda/bin/../include/math_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/math_functions_dbl_ptx3.h" 1 3
# 61 "/home/normal/cuda/bin/../include/math_functions_dbl_ptx3.h" 3
static double __cuda_fabs(double a)
{
  return fabs(a);
}

static double __cuda_fmax(double a, double b)
{

  volatile union __cudart_DoubleUlonglongCvt cvta, cvtb;
  int nana, nanb;

  cvta.d = a;
  cvtb.d = b;
  nana = ((cvta.i << 1) > 0xffe0000000000000ULL);
  nanb = ((cvtb.i << 1) > 0xffe0000000000000ULL);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.d == 0.0) && (cvtb.d == 0.0)) {
    cvta.i &= cvtb.i;
    return cvta.d;
  }
  return a > b ? a : b;



}

static double __cuda_fmin(double a, double b)
{

  volatile union __cudart_DoubleUlonglongCvt cvta, cvtb;
  int nana, nanb;

  cvta.d = a;
  cvtb.d = b;
  nana = ((cvta.i << 1) > 0xffe0000000000000ULL);
  nanb = ((cvtb.i << 1) > 0xffe0000000000000ULL);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.i | cvtb.i) == 0x8000000000000000ULL) {
    return __longlong_as_double(0x8000000000000000ULL) ;
  }
  return a < b ? a : b;



}

static double __cuda_ceil(double a)
{
  return ceil(a);
}

static double __cuda_floor(double a)
{
  return floor(a);
}

static double __cuda_trunc(double a)
{
  return trunc(a);
}

static double __cuda_nearbyint(double a)
{



  double res = nearbyint(a);





  return res;

}







static double __cuda_rint(double a)
{
  return __cuda_nearbyint(a);
}

static long int __cuda_lrint(double a)
{

  return (long int)__double2ll_rn(a);



}

static long long int __cuda_llrint(double a)
{
  return __double2ll_rn(a);
}

static int __cuda___signbit(double a)
{
  return (int)((unsigned int)__double2hiint(a) >> 31);
}

static int __cuda___finite(double a)
{
  return __cuda_fabs(a) < __longlong_as_double(0x7ff0000000000000ULL);
}

static int __cuda___isinf(double a)
{
  return __cuda_fabs(a) == __longlong_as_double(0x7ff0000000000000ULL);
}

static int __cuda___isnan(double a)
{
  return !(__cuda_fabs(a) <= __longlong_as_double(0x7ff0000000000000ULL));
}

static double __cuda_copysign(double a, double b)
{
  int alo, ahi, bhi;

  bhi = __double2hiint(b);
  alo = __double2loint(a);
  ahi = __double2hiint(a);
  ahi = (bhi & 0x80000000) | (ahi & ~0x80000000);
  return __hiloint2double(ahi, alo);
}


static unsigned long long int __cudart_i2opi_d [] = {
  0x6bfb5fb11f8d5d08ULL,
  0x3d0739f78a5292eaULL,
  0x7527bac7ebe5f17bULL,
  0x4f463f669e5fea2dULL,
  0x6d367ecf27cb09b7ULL,
  0xef2f118b5a0a6d1fULL,
  0x1ff897ffde05980fULL,
  0x9c845f8bbdf9283bULL,
  0x3991d639835339f4ULL,
  0xe99c7026b45f7e41ULL,
  0xe88235f52ebb4484ULL,
  0xfe1deb1cb129a73eULL,
  0x06492eea09d1921cULL,
  0xb7246e3a424dd2e0ULL,
  0xfe5163abdebbc561ULL,
  0xdb6295993c439041ULL,
  0xfc2757d1f534ddc0ULL,
  0xa2f9836e4e441529ULL,
};

static double __internal_trig_reduction_kerneld(double a, int *quadrant)
{
  double j;
  int q;
  if (__cuda_fabs(a) > 2147483648.0) {

    unsigned long long int ia;
    unsigned long long int s;
    unsigned long long int result[5];
    unsigned long long int phi, plo;
    unsigned long long int hi, lo;
    unsigned int e;
    int idx;

    ia = __double_as_longlong(a);
    s = ia & 0x8000000000000000ULL;
    e = (unsigned int)(((ia >> 52) & 0x7ff) - 1024);
    ia = (ia << 11) | 0x8000000000000000ULL;

    idx = 16 - (e >> 6);
    hi = 0;



    for (q = (idx-1); q < min(18,idx+3); q++) {
      plo = __cudart_i2opi_d[q] * ia;
      phi = __umul64hi (__cudart_i2opi_d[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q-(idx-1)] = lo;
    }
    result[q-(idx-1)] = hi;
    e = e & 63;



    hi = result[3];
    lo = result[2];
    if (e) {
      q = 64 - e;
      hi = (hi << e) | (lo >> q);
      lo = (lo << e) | (result[1] >> q);
    }
    q = (int)(hi >> 62);

    hi = (hi << 2) | (lo >> 62);
    lo = (lo << 2);
    e = (hi | (lo > 0)) > 0x8000000000000000ULL;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned long long int t;
      hi = ~hi;
      lo = -(long long int)lo;
      t = (lo == 0ULL);
      hi += t;
      s = s ^ 0x8000000000000000ULL;
    }
    *quadrant = q;

    e = 0;
    while ((long long int)hi > 0) {
      hi = (hi << 1) | (lo >> 63);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xC90FDAA22168C235ULL;
    hi = __umul64hi (hi, 0xC90FDAA22168C235ULL);
    if ((long long int)hi > 0) {
      hi = (hi << 1) | (lo >> 63);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | ((((unsigned long long int)(e + 1022)) << 52) + (hi >> 11) +
              ((hi << 53) >= 0x8000000000000000ULL));
    return __longlong_as_double(ia);
  }

  q = __double2int_rn (a * 6.3661977236758138e-1);
  j = (double)q;




  a = __fma_rn (-j, 1.5707963267948966e+000, a);
  a = __fma_rn (-j, 6.1232339957367574e-017, a);
  a = __fma_rn (-j, 8.4784276603688985e-032, a);
  *quadrant = q;
  return a;
}


static double __internal_sin_kerneld(double x)
{
  double x2, z;
  x2 = x * x;
  z = 1.5896230157221844E-010;
  z = __fma_rn (z, x2, -2.5050747762850355E-008);
  z = __fma_rn (z, x2, 2.7557313621385676E-006);
  z = __fma_rn (z, x2, -1.9841269829589539E-004);
  z = __fma_rn (z, x2, 8.3333333333221182E-003);
  z = __fma_rn (z, x2, -1.6666666666666630E-001);
  z = z * x2;
  z = __fma_rn (z, x, x);
  return z;
}


static double __internal_cos_kerneld(double x)
{
  double x2, z;
  x2 = x * x;
  z = -1.136788825395985E-011;
  z = __fma_rn (z, x2, 2.087588480545065E-009);
  z = __fma_rn (z, x2, -2.755731555403950E-007);
  z = __fma_rn (z, x2, 2.480158729365970E-005);
  z = __fma_rn (z, x2, -1.388888888888074E-003);
  z = __fma_rn (z, x2, 4.166666666666664E-002);
  z = __fma_rn (z, x2, -5.000000000000000E-001);
  z = __fma_rn (z, x2, 1.000000000000000E+000);
  return z;
}


static double __internal_tan_kerneld(double x, int i)
{
  double x2, z, q;
  x2 = x * x;
  z = 9.8006287203286300E-006;
  z = __fma_rn (z, x2, -2.4279526494179897E-005);
  z = __fma_rn (z, x2, 4.8644173130937162E-005);
  z = __fma_rn (z, x2, -2.5640012693782273E-005);
  z = __fma_rn (z, x2, 6.7223984330880073E-005);
  z = __fma_rn (z, x2, 8.3559287318211639E-005);
  z = __fma_rn (z, x2, 2.4375039850848564E-004);
  z = __fma_rn (z, x2, 5.8886487754856672E-004);
  z = __fma_rn (z, x2, 1.4560454844672040E-003);
  z = __fma_rn (z, x2, 3.5921008885857180E-003);
  z = __fma_rn (z, x2, 8.8632379218613715E-003);
  z = __fma_rn (z, x2, 2.1869488399337889E-002);
  z = __fma_rn (z, x2, 5.3968253972902704E-002);
  z = __fma_rn (z, x2, 1.3333333333325342E-001);
  z = __fma_rn (z, x2, 3.3333333333333381E-001);
  z = z * x2;
  q = __fma_rn (z, x, x);
  if (i) {
    double s = q - x;
    double w = __fma_rn (z, x, -s);
    z = 1.0 / q;
    z = -z;
    s = __fma_rn (q, z, 1.0);
    q = __fma_rn (z, __fma_rn (z, w, s), z);
  }
  return q;
}

static double __cuda_sqrt(double a)
{
  return sqrt(a);
}

static double __cuda_rsqrt(double a)
{

    return 1.0 / sqrt(a);



}


static double __internal_expm1_kernel (double a)
{
  double t;
  t = 2.08842685477913050E-009;
  t = __fma_rn (t, a, 2.51366409033551950E-008);
  t = __fma_rn (t, a, 2.75574612072447230E-007);
  t = __fma_rn (t, a, 2.75571539284473460E-006);
  t = __fma_rn (t, a, 2.48015869443077950E-005);
  t = __fma_rn (t, a, 1.98412699878799470E-004);
  t = __fma_rn (t, a, 1.38888888892029890E-003);
  t = __fma_rn (t, a, 8.33333333327662860E-003);
  t = __fma_rn (t, a, 4.16666666666656370E-002);
  t = __fma_rn (t, a, 1.66666666666667380E-001);
  t = __fma_rn (t, a, 5.00000000000000000E-001);
  t = t * a;
  t = __fma_rn (t, a, a);
  return t;
}


static double __internal_atanh_kernel (double a_1, double a_2)
{
  double a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 7.597322383488143E-002/65536.0;
  t = __fma_rn (t, a2, 6.457518383364042E-002/16384.0);
  t = __fma_rn (t, a2, 7.705685707267146E-002/4096.0);
  t = __fma_rn (t, a2, 9.090417561104036E-002/1024.0);
  t = __fma_rn (t, a2, 1.111112158368149E-001/256.0);
  t = __fma_rn (t, a2, 1.428571416261528E-001/64.0);
  t = __fma_rn (t, a2, 2.000000000069858E-001/16.0);
  t = __fma_rn (t, a2, 3.333333333333198E-001/4.0);
  t = t * a2;
  t = __fma_rn (t, a, a_2);
  t = t + a_1;
  return t;
}

static double __internal_exp2i_kernel(int b)
{
  return __hiloint2double((b + 1023) << 20, 0);
}

static double __internal_half(double a)
{
  unsigned int ihi, ilo;
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  return __hiloint2double(ihi - 0x00100000, ilo);
}

static double __internal_twice(double a)
{
  unsigned int ihi, ilo;
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  return __hiloint2double(ihi + 0x00100000, ilo);
}

static double __cuda_sin(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a) || (a == 0.0)) {
    return __dmul_rn(a, 0.0);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  if (i & 1) {
    z = __internal_cos_kerneld(z);
  } else {
    z = __internal_sin_kerneld(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}

static double __cuda_cos(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a)) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kerneld(z);
  } else {
    z = __internal_sin_kerneld(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}

static void __cuda_sincos(double a, double *sptr, double *cptr)
{
  double t, u, s, c;
  int i;
  if (__cuda___isinf(a)) {
    *sptr = __longlong_as_double(0xfff8000000000000ULL);
    *cptr = __longlong_as_double(0xfff8000000000000ULL);
    return;
  }
  if (a == 0.0) {
    *sptr = a;
    *cptr = 1.0;
    return;
  }
  t = __internal_trig_reduction_kerneld(a, &i);
  u = __internal_cos_kerneld(t);
  t = __internal_sin_kerneld(t);
  if (i & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (i & 2) {
    s = -s;
  }
  i++;
  if (i & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;
}

static double __cuda_tan(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a)) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  z = __internal_tan_kerneld(z, i & 1);
  return z;
}

static double __cuda_log(double a)
{
  double m, f, g, u, v, tmp, q, ulo, log_lo, log_hi;
  int ihi, ilo;

  ihi = __double2hiint(a);
  ilo = __double2loint(a);

  if ((a > 0.0) && (a < __longlong_as_double(0x7ff0000000000000ULL))) {
    int e = -1023;

    if ((unsigned)ihi < (unsigned)0x00100000) {
      a = a * 18014398509481984.0;
      e -= 54;
      ihi = __double2hiint(a);
      ilo = __double2loint(a);
    }



    e += ((ihi >> 20) & 0x7ff);
    ihi = (ihi & 0x800fffff) | 0x3ff00000;
    m = __hiloint2double (ihi, ilo);
    if ((unsigned)ihi > (unsigned)0x3ff6a09e) {
      m = __internal_half(m);
      e = e + 1;
    }

    f = m - 1.0;
    g = m + 1.0;
    g = 1.0 / g;
    u = f * g;
    u = u + u;

    v = u * u;
    q = 6.7261411553826339E-2/65536.0;
    q = __fma_rn (q, v, 6.6133829643643394E-2/16384.0);
    q = __fma_rn (q, v, 7.6940931149150890E-2/4096.0);
    q = __fma_rn (q, v, 9.0908745692137444E-2/1024.0);
    q = __fma_rn (q, v, 1.1111111499059706E-1/256.0);
    q = __fma_rn (q, v, 1.4285714283305975E-1/64.0);
    q = __fma_rn (q, v, 2.0000000000007223E-1/16.0);
    q = __fma_rn (q, v, 3.3333333333333326E-1/4.0);
    tmp = __internal_twice (f - u);
    tmp = __fma_rn (-u, f, tmp);
    ulo = g * tmp;

    q = q * v;
    q = q * u;

    log_hi = u;
    log_lo = ulo + q;

    q = __fma_rn ( e, 6.9314718055994529e-1, log_hi);
    tmp = __fma_rn (-e, 6.9314718055994529e-1, q);
    tmp = tmp - log_hi;
    log_hi = q;
    log_lo = log_lo - tmp;
    log_lo = __fma_rn (e, 2.3190468138462996e-17, log_lo);
    return log_hi + log_lo;
  } else {
    if (__cuda___isnan(a)) {
      return a + a;
    }

    if (a == 0) {
      return -__longlong_as_double(0x7ff0000000000000ULL);
    }

    if (a == __longlong_as_double(0x7ff0000000000000ULL)) {
      return a;
    }

    return __longlong_as_double(0xfff8000000000000ULL);
  }
}


static double2 __internal_ddadd_xgty (double2 x, double2 y)
{
  double2 z;

  volatile

  double r, s, e;
  r = x.y + y.y;
  e = x.y - r;
  s = ((e + y.y) + y.x) + x.x;
  z.y = e = r + s;
  z.x = (r - e) + s;
  return z;
}


static double2 __internal_ddmul (double2 x, double2 y)
{

  volatile

  double e;
  double2 t, z;
  t.y = x.y * y.y;
  t.x = __fma_rn (x.y, y.y, -t.y);
  t.x = __fma_rn (x.x, y.x, t.x);
  t.x = __fma_rn (x.y, y.x, t.x);
  t.x = __fma_rn (x.x, y.y, t.x);
  z.y = e = t.y + t.x;
  z.x = (t.y - e) + t.x;
  return z;
}

static double2 __internal_log_ext_prec(double a)
{
  double2 res;
  double2 qq, cc, uu, tt;
  double f, g, u, v, q, ulo, tmp, m;
  int ilo, ihi, expo;

  ihi = __double2hiint(a);
  ilo = __double2loint(a);
  expo = (ihi >> 20) & 0x7ff;

  if (expo == 0) {
    a *= 18014398509481984.0;
    ihi = __double2hiint(a);
    ilo = __double2loint(a);
    expo = (ihi >> 20) & 0x7ff;
    expo -= 54;
  }
  expo -= 1023;




  ihi = (ihi & 0x800fffff) | 0x3ff00000;
  m = __hiloint2double (ihi, ilo);
  if ((unsigned)ihi > (unsigned)0x3ff6a09e) {
    m = __internal_half(m);
    expo = expo + 1;
  }





  f = m - 1.0;
  g = m + 1.0;
  g = 1.0 / g;
  u = f * g;
  u = u + u;

  v = u * u;
  q = 6.6253631649203309E-2/65536.0;
  q = __fma_rn (q, v, 6.6250935587260612E-2/16384.0);
  q = __fma_rn (q, v, 7.6935437806732829E-2/4096.0);
  q = __fma_rn (q, v, 9.0908878711093280E-2/1024.0);
  q = __fma_rn (q, v, 1.1111111322892790E-1/256.0);
  q = __fma_rn (q, v, 1.4285714284546502E-1/64.0);
  q = __fma_rn (q, v, 2.0000000000003113E-1/16.0);
  q = q * v;

  tmp = __internal_twice (f - u);
  tmp = __fma_rn (-u, f, tmp);
  ulo = g * tmp;

  qq.y = q;
  qq.x = 0.0;
  uu.y = u;
  uu.x = ulo;
  cc.y = 3.3333333333333331E-1/4.0;
  cc.x = -9.8201492846582465E-18/4.0;
  qq = __internal_ddadd_xgty (cc, qq);

  qq = __internal_ddmul(qq, uu);
  qq = __internal_ddmul(qq, uu);
  qq = __internal_ddmul(qq, uu);
  uu = __internal_ddadd_xgty (uu, qq);
  u = uu.y;
  ulo = uu.x;

  tt.y = expo * 6.9314718055966296e-001;
  tt.x = expo * 2.8235290563031577e-013;

  res = __internal_ddadd_xgty (tt, uu);
  return res;
}

static double __cuda_log2(double a)
{
  double t;
  t = __cuda_log(a);
  return __fma_rn (t, 1.4426950408889634e+0, t * 2.0355273740931033e-17);
}

static double __cuda_log10(double a)
{
  double t;
  t = __cuda_log(a);
  return __fma_rn (t, 4.3429448190325182e-1, t * 1.09831965021676510e-17);
}

static double __cuda_log1p(double a)
{
  double t;
  int i;

  i = __double2hiint(a);
  if (((unsigned)i < (unsigned)0x3fe55555) || ((int)i < (int)0xbfd99999)) {

    t = a + 2.0;
    t = a / t;
    t = -a * t;
    t = __internal_atanh_kernel(a, t);
    return t;
  }
  return __cuda_log (a + 1.0);
}

static double __internal_exp_kernel(double a, int scale)
{
  double t, fac, z;
  int i;

  t = __cuda_rint (a * 1.4426950408889634e+0);
  i = (int)t;
  z = __fma_rn (t, -6.9314718055994529e-1, a);
  z = __fma_rn (t, -2.3190468138462996e-17, z);
  fac = 2.0;
  if (i <= -1021) {
    i += 55;
    fac = 5.5511151231257827e-17;
  }

  t = __internal_expm1_kernel(z);
  z = __internal_exp2i_kernel(i + scale - 1);
  t = __fma_rn (t, z, z);
  t = t * fac;
  return t;
}

static double __cuda_exp(double a)
{
  double t;
  int i;
  i = __double2hiint(a);
  if (((unsigned)i < (unsigned)0x40862e43) || ((int)i < (int)0xC0874911)) {
    t = __internal_exp_kernel(a, 0);
    return t;
  }
  t = ((unsigned int)i >> 31) ? 0.0 : __longlong_as_double(0x7ff0000000000000ULL);
  if (__cuda___isnan(a)) {
    t = a + a;
  }
  return t;
}

static double __cuda_exp2(double a)
{
  double z;
  double t;
  double fac;
  int i;

  i = __double2hiint(a);
  if (((unsigned)i < (unsigned)0x40900000) || ((int)i < (int)0xc090cc00)) {
    t = __cuda_rint (a);
    z = a - t;
    i = (int)t;
    fac = 2.0;
    if (i <= -1021) {
      i += 55;
      fac = 5.5511151231257827e-17;
    }

    z = __fma_rn (z, 6.9314718055994529e-1, z * 2.3190468138462996e-17);
    t = __internal_expm1_kernel(z);
    z = __internal_exp2i_kernel(i - 1);
    t = __fma_rn (t, z, z);
    t = t * fac;
    return t;
  }
  t = ((unsigned int)i >> 31) ? 0.0 : __longlong_as_double(0x7ff0000000000000ULL);
  if (__cuda___isnan(a)) {
    t = a + a;
  }
  return t;
}

static double __cuda_exp10(double a)
{
  double z;
  double t;
  double fac;
  int i;

  i = __double2hiint(a);
  if (((unsigned)i < (unsigned)0x40734414) || ((int)i < (int)0xc07439b8)) {
    t = __cuda_rint (a * 3.3219280948873622e+0);
    i = (int)t;
    z = __fma_rn (t, -3.0102999566398120e-1, a);
    z = __fma_rn (t, -(-2.8037281277851704e-18), z);
    fac = 2.0;
    if (i <= -1021) {
      i += 55;
      fac = 5.5511151231257827e-17;
    }

    z = __fma_rn (z, 2.3025850929940459e+0, z * (-2.1707562233822494e-16));
    t = __internal_expm1_kernel(z);
    z = __internal_exp2i_kernel(i - 1);
    t = __fma_rn (t, z, z);
    t = t * fac;
    return t;
  }
  t = ((unsigned int)i >> 31) ? 0.0 : __longlong_as_double(0x7ff0000000000000ULL);
  if (__cuda___isnan(a)) {
    t = a + a;
  }
  return t;
}

static double __cuda_expm1(double a)
{
  double t, z, u;
  int i, j, k;

  k = __double2hiint(a);
  if (((unsigned)k < (unsigned)0x40862e43) || ((int)k < (int)0xc04a8000)) {
    t = __cuda_rint (a * 1.4426950408889634e+0);
    i = (int)t;
    z = __fma_rn (t, -6.9314718055994529e-1, a);
    z = __fma_rn (t, -2.3190468138462996e-17, z);
    k = k + k;
    if ((unsigned)k < (unsigned)0x7fb3e647) {
      z = a;
      i = 0;
    }
    t = __internal_expm1_kernel(z);
    j = i;
    if (i == 1024) j--;
    u = __internal_exp2i_kernel(j);
    a = u - 1.0;
    t = __fma_rn (t, u, a);
    if (i == 1024) t = t + t;
    if (k == 0) t = z;
    return t;
  }
  t = ((unsigned int)k >> 31) ? -1.0 : __longlong_as_double(0x7ff0000000000000ULL);
  if (__cuda___isnan(a)) {
    t = a + a;
  }
  return t;
}

static double __cuda_cosh(double a)
{
  double z;
  int i;

  z = __cuda_fabs(a);
  i = __double2hiint(z);
  if ((unsigned)i < (unsigned)0x408633cf) {
    z = __internal_exp_kernel(z, -2);
    z = __fma_rn(2.0, z, 0.125 / z);
    return z;
  } else {
    if (z > 0.0) a = __int_as_float(0x7f800000);
    return a + a;
  }
}

static double __cuda_sinh(double a)
{
  double s, z;
  s = a;
  a = __cuda_fabs(a);
  if (a < 1.0) {
    double a2 = a * a;

    z = 1.632386098183803E-010;
    z = __fma_rn (z, a2, 2.504854501385687E-008);
    z = __fma_rn (z, a2, 2.755734274788706E-006);
    z = __fma_rn (z, a2, 1.984126976294102E-004);
    z = __fma_rn (z, a2, 8.333333333452911E-003);
    z = __fma_rn (z, a2, 1.666666666666606E-001);
    z = z * a2;
    z = __fma_rn (z, a, a);
  } else if (a < 2.0) {
    z = __cuda_expm1(a);
    z = __internal_half (z + z / (z + 1.0));
  } else {
    z = __internal_exp_kernel(a, -1);
    z = z + (1.0 / (-4.0 * z));
    if (a >= 7.1047586007394398e+2) {
      z = __longlong_as_double(0x7ff0000000000000ULL);
    }
  }
  z = __cuda_copysign(z, s);
  return z;
}

static double __cuda_tanh(double a)
{
  double t;
  t = __cuda_fabs(a);
  if (t >= 0.55) {
    double s;
    s = 1.0 - 2.0 / (__internal_exp_kernel(2.0 * t, 0) + 1.0);
    if (t > 350.0) {
      s = 1.0;
    }
    a = __cuda_copysign(s, a);
  } else {
    double a2;
    a2 = a * a;
    t = 5.102147717274194E-005;
    t = __fma_rn (t, a2, -2.103023983278533E-004);
    t = __fma_rn (t, a2, 5.791370145050539E-004);
    t = __fma_rn (t, a2, -1.453216755611004E-003);
    t = __fma_rn (t, a2, 3.591719696944118E-003);
    t = __fma_rn (t, a2, -8.863194503940334E-003);
    t = __fma_rn (t, a2, 2.186948597477980E-002);
    t = __fma_rn (t, a2, -5.396825387607743E-002);
    t = __fma_rn (t, a2, 1.333333333316870E-001);
    t = __fma_rn (t, a2, -3.333333333333232E-001);
    t = t * a2;
    t = __fma_rn (t, a, a);
    a = __cuda_copysign(t, a);
  }
  return a;
}

static double __internal_atan_kernel(double a)
{
  double t, a2;
  a2 = a * a;
  t = -2.0258553044438358E-005 ;
  t = __fma_rn (t, a2, 2.2302240345758510E-004);
  t = __fma_rn (t, a2, -1.1640717779930576E-003);
  t = __fma_rn (t, a2, 3.8559749383629918E-003);
  t = __fma_rn (t, a2, -9.1845592187165485E-003);
  t = __fma_rn (t, a2, 1.6978035834597331E-002);
  t = __fma_rn (t, a2, -2.5826796814495994E-002);
  t = __fma_rn (t, a2, 3.4067811082715123E-002);
  t = __fma_rn (t, a2, -4.0926382420509971E-002);
  t = __fma_rn (t, a2, 4.6739496199157994E-002);
  t = __fma_rn (t, a2, -5.2392330054601317E-002);
  t = __fma_rn (t, a2, 5.8773077721790849E-002);
  t = __fma_rn (t, a2, -6.6658603633512573E-002);
  t = __fma_rn (t, a2, 7.6922129305867837E-002);
  t = __fma_rn (t, a2, -9.0909012354005225E-002);
  t = __fma_rn (t, a2, 1.1111110678749424E-001);
  t = __fma_rn (t, a2, -1.4285714271334815E-001);
  t = __fma_rn (t, a2, 1.9999999999755019E-001);
  t = __fma_rn (t, a2, -3.3333333333331860E-001);
  t = t * a2;
  t = __fma_rn (t, a, a);
  return t;
}

static double __cuda_atan2(double a, double b)
{
  double t0, t1, t3;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }


  t3 = __cuda_fabs(b);
  t1 = __cuda_fabs(a);
  if (t3 == 0.0 && t1 == 0.0) {
    t3 = __cuda___signbit(b) ? 3.1415926535897931e+0 : 0;
  } else if (__cuda___isinf(t3) && __cuda___isinf(t1)) {
    t3 = __cuda___signbit(b) ? 2.3561944901923448e+0 : 7.8539816339744828e-1;
  } else {
    t0 = __cuda_fmax (t1, t3);
    t1 = __cuda_fmin (t1, t3);
    t3 = t1 / t0;
    t3 = __internal_atan_kernel(t3);

    if (__cuda_fabs(a) > __cuda_fabs(b)) t3 = 1.5707963267948966e+0 - t3;
    if (b < 0.0) t3 = 3.1415926535897931e+0 - t3;
  }
  t3 = __cuda_copysign(t3, a);
  return t3;
}

static double __cuda_atan(double a)
{
  double t0, t1;

  t0 = __cuda_fabs(a);
  t1 = t0;
  if (t0 > 1.0) {
    t1 = 1.0 / t1;
  }

  t1 = __internal_atan_kernel(t1);

  if (t0 > 1.0) {
    t1 = 1.5707963267948966e+0 - t1;
  }
  return __cuda_copysign (t1, a);
}


static double __internal_asin_kernel(double a, double b)
{
  double r;
  r = 6.259798167646803E-002;
  r = __fma_rn (r, b, -7.620591484676952E-002);
  r = __fma_rn (r, b, 6.686894879337643E-002);
  r = __fma_rn (r, b, -1.787828218369301E-002);
  r = __fma_rn (r, b, 1.745227928732326E-002);
  r = __fma_rn (r, b, 1.000422754245580E-002);
  r = __fma_rn (r, b, 1.418108777515123E-002);
  r = __fma_rn (r, b, 1.733194598980628E-002);
  r = __fma_rn (r, b, 2.237350511593569E-002);
  r = __fma_rn (r, b, 3.038188875134962E-002);
  r = __fma_rn (r, b, 4.464285849810986E-002);
  r = __fma_rn (r, b, 7.499999998342270E-002);
  r = __fma_rn (r, b, 1.666666666667375E-001);
  r = r * b;
  return r;
}

static double __cuda_asin(double a)
{
  double fa, t0, t1;
  int ihi, ahi;
  ahi = __double2hiint(a);
  fa = __cuda_fabs(a);
  ihi = __double2hiint(fa);
  if (ihi < 0x3fe26666) {
    t1 = fa * fa;
    t1 = __internal_asin_kernel (fa, t1);
    t1 = __fma_rn (t1, fa, fa);
    t1 = __cuda_copysign(t1, a);
  } else {
    t1 = __fma_rn (-0.5, fa, 0.5);
    t0 = __cuda_sqrt (t1);
    t1 = __internal_asin_kernel (t0, t1);
    t0 = -2.0 * t0;
    t1 = __fma_rn (t0, t1, 6.1232339957367660e-17);
    t0 = t0 + 7.8539816339744828e-1;
    t1 = t0 + t1;
    t1 = t1 + 7.8539816339744828e-1;
    if (ahi < 0x3ff00000) {
      t1 = __cuda_copysign(t1, a);
    }
  }
  return t1;
}

static double __cuda_acos(double a)
{
  double t0, t1;
  int ihi, ahi;


  if (__cuda___isnan(a)) {
    return a + a;
  }

  ahi = __double2hiint(a);
  t0 = __cuda_fabs (a);
  ihi = __double2hiint(t0);
  if (ihi < 0x3fe26666) {
    t1 = t0 * t0;
    t1 = __internal_asin_kernel (t0, t1);
    t0 = __fma_rn (t1, t0, t0);
    if ((unsigned)ahi >= (unsigned)0x80000000) {
      t0 = __fma_rn (1.0, t0, +6.1232339957367660e-17);
      t0 = 1.5707963267948966e+0 + t0;
    } else {
      t0 = __fma_rn (1.0, t0, -6.1232339957367660e-17);
      t0 = 1.5707963267948966e+0 - t0;
    }
  } else {
    t1 = __fma_rn (-0.5, t0, 0.5);
    t0 = __cuda_sqrt(t1);
    t1 = __internal_asin_kernel (t0, t1);
    t0 = __fma_rn (t1, t0, t0);
    t0 = 2.0 * t0;
    if ((unsigned)ahi >= (unsigned)0x80000000) {
      t0 = __fma_rn (1.0, t0, -1.2246467991473532e-16);
      t0 = 3.1415926535897931e+0 - t0;
    }
  }
  return t0;
}

static double __cuda_acosh(double a)
{
  double t;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  t = a - 1.0;
  if (__cuda_fabs(t) > 4503599627370496.0) {

    return 6.9314718055994529e-1 + __cuda_log(a);
  } else {
    t = t + __cuda_sqrt(__fma_rn(a, t, t));
    return __cuda_log1p(t);
  }
}

static double __cuda_asinh(double a)
{
# 1164 "/home/normal/cuda/bin/../include/math_functions_dbl_ptx3.h" 3
  double fa, t;
  fa = __cuda_fabs(a);
  if (fa > 1.0e153) {
    t = 6.9314718055994529e-1 + __cuda_log(fa);
  } else {
    t = fa * fa;
    t = __cuda_log1p (fa + t / (1.0 + __cuda_sqrt(1.0 + t)));
  }

  return __cuda_copysign(t, a);
}

static double __cuda_atanh(double a)
{
  double fa, t;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  fa = __cuda_fabs(a);
  t = (2.0 * fa) / (1.0 - fa);
  t = 0.5 * __cuda_log1p(t);

  if (__cuda___isnan(t)) {
    return t;
  }

  if (__cuda___signbit(a)) {
    t = -t;
  }
  return t;
}

static double __cuda_hypot(double a, double b)
{
  double v, w, t;
  if (__cuda___isinf(a) || __cuda___isinf(b)) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  v = __cuda_fmax(a, b);
  w = __cuda_fmin(a, b);
  t = w / v;
  t = __fma_rn (t, t, 1.0);
  t = v * __cuda_sqrt(t);
  if (v == 0.0) {
    t = v + w;
  }
  return t;
}

static double __cuda_cbrt(double a)
{
  float s;
  double t, r;
  int ilo, ihi, expo, nexpo, denorm;
  if ((a == 0.0) || !(__cuda___finite(a))) {
    return a + a;
  }
  t = __cuda_fabs(a);
  ilo = __double2loint(t);
  ihi = __double2hiint(t);
  expo = ((int)((unsigned int)ihi >> 20) & 0x7ff);
  denorm = 0;
  if (expo == 0) {

    t = t * 18014398509481984.0;
    denorm = 18;
    ilo = __double2loint(t);
    ihi = __double2hiint(t);
    expo = ((int)((unsigned int)ihi >> 20) & 0x7ff);
  }

  nexpo = __float2int_rn(0.333333333f * (float)(expo - 1022));
  ihi -= (3 * nexpo) << 20;
  r = __hiloint2double(ihi, ilo);

  s = (float)r;
  t = __cuda_exp2f(0.333333333f * __log2f(s));

  t = t - (t - (r / (t * t))) * 3.3333333333333333e-1;
  t = t - (t - (r / (t * t))) * 3.3333333333333333e-1;

  ilo = __double2loint(t);
  ihi = __double2hiint(t);
  ihi += (nexpo - denorm) << 20;
  t = __hiloint2double(ihi, ilo);
  if (__cuda___signbit(a)) {
     t = -t;
  }
  return t;
}

static double __internal_accurate_pow(double a, double b)
{
  double2 loga;
  double2 prod;
  double t_hi, t_lo;
  double tmp;



  double e;



  loga = __internal_log_ext_prec(a);


  if (__cuda_fabs(b) > 1e304) b *= 1.220703125e-4;

  t_hi = loga.y * b;
  t_lo = __fma_rn (loga.y, b, -t_hi);
  t_lo = __fma_rn (loga.x, b, t_lo);
  prod.y = e = t_hi + t_lo;
  prod.x = (t_hi - e) + t_lo;


  tmp = __cuda_exp(prod.y);

  if (!__cuda___isinf(tmp)) {



    tmp = __fma_rn (tmp, prod.x, tmp);
  }
  return tmp;
}

static double __cuda_pow(double a, double b)
{
  int bIsOddInteger;
  double t;
  if (a == 1.0 || b == 0.0) {
    return 1.0;
  }
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  if (a == __longlong_as_double(0x7ff0000000000000ULL)) {
    return __cuda___signbit(b) ? 0.0 : __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (__cuda___isinf(b)) {
    if (a == -1.0) {
      return 1.0;
    }
    t = __cuda_fabs(a) > 1.0 ? __longlong_as_double(0x7ff0000000000000ULL) : 0.0;
    if (b < 0.0) {
      t = 1.0 / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0 * __cuda_floor(0.5 * b))) == 1.0;
  if (a == 0.0) {
    t = bIsOddInteger ? a : 0.0;
    if (b < 0.0) {
      t = 1.0 / t;
    }
    return t;
  }
  if (a == -__longlong_as_double(0x7ff0000000000000ULL)) {
    t = (b < 0.0) ? -1.0/a : -a;
    if (bIsOddInteger) {
      t = __longlong_as_double(__double_as_longlong(t)^0x8000000000000000ULL);
    }
    return t;
  }
  if ((a < 0.0) && (b != __cuda_trunc(b))) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  t = __cuda_fabs(a);
  t = __internal_accurate_pow(t, b);
  if ((a < 0.0) && bIsOddInteger) {
    t = __longlong_as_double(__double_as_longlong(t) ^ 0x8000000000000000ULL);
  }
  return t;
}

static double __cuda_erf(double a)
{
  double t, r, q;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  t = __cuda_fabs(a);
  if (t >= 1.0) {
    r = -1.28836351230756500E-019;
    r = __fma_rn (r, t, 1.30597472161093370E-017);
    r = __fma_rn (r, t, -6.33924401259620500E-016);
    r = __fma_rn (r, t, 1.96231865908940140E-014);
    r = __fma_rn (r, t, -4.35272243559990750E-013);
    r = __fma_rn (r, t, 7.37083927929352150E-012);
    r = __fma_rn (r, t, -9.91402142550461630E-011);
    r = __fma_rn (r, t, 1.08817017167760820E-009);
    r = __fma_rn (r, t, -9.93918713097634620E-009);
    r = __fma_rn (r, t, 7.66739923255145500E-008);
    r = __fma_rn (r, t, -5.05440278302806720E-007);
    r = __fma_rn (r, t, 2.87474157099000620E-006);
    r = __fma_rn (r, t, -1.42246725399722510E-005);
    r = __fma_rn (r, t, 6.16994555079419460E-005);
    r = __fma_rn (r, t, -2.36305221938908790E-004);
    r = __fma_rn (r, t, 8.05032844055371070E-004);
    r = __fma_rn (r, t, -2.45833366629108140E-003);
    r = __fma_rn (r, t, 6.78340988296706120E-003);
    r = __fma_rn (r, t, -1.70509103597554640E-002);
    r = __fma_rn (r, t, 3.93322852515666300E-002);
    r = __fma_rn (r, t, -8.37271292613764040E-002);
    r = __fma_rn (r, t, 1.64870423707623280E-001);
    r = __fma_rn (r, t, -2.99729521787681470E-001);
    r = __fma_rn (r, t, 4.99394435612628580E-001);
    r = __fma_rn (r, t, -7.52014596480123030E-001);
    r = __fma_rn (r, t, 9.99933138314926250E-001);
    r = __fma_rn (r, t, -1.12836725321102670E+000);
    r = __fma_rn (r, t, 9.99998988715182450E-001);
    q = __internal_exp_kernel(-t * t, 0);
    r = __fma_rn (r, -q, 1.0);
    if (t >= 6.5) {
      r = 1.0;
    }
    a = __cuda_copysign (r, a);
  } else {
    q = t * t;
    r = -7.77946848895991420E-010;
    r = __fma_rn (r, q, 1.37109803980285950E-008);
    r = __fma_rn (r, q, -1.62063137584932240E-007);
    r = __fma_rn (r, q, 1.64471315712790040E-006);
    r = __fma_rn (r, q, -1.49247123020098620E-005);
    r = __fma_rn (r, q, 1.20552935769006260E-004);
    r = __fma_rn (r, q, -8.54832592931448980E-004);
    r = __fma_rn (r, q, 5.22397760611847340E-003);
    r = __fma_rn (r, q, -2.68661706431114690E-002);
    r = __fma_rn (r, q, 1.12837916709441850E-001);
    r = __fma_rn (r, q, -3.76126389031835210E-001);
    r = __fma_rn (r, q, 1.12837916709551260E+000);
    a = r * a;
  }
  return a;
}

static double __cuda_erfinv(double a)
{
  double fa, t;

  fa = fabs(a);
  if (fa >= 1.0) {
    t = __longlong_as_double(0xfff8000000000000ULL);
    if (fa == 1.0) {
      t = a * __longlong_as_double(0x7ff0000000000000ULL);
    }
  } else if (fa >= 0.9375) {




    double p, q;

    t = __cuda_log1p(-fa);
    t = __cuda_rsqrt(-t);
    p = 2.7834010353747001060e-3;
    p = __fma_rn (p, t, 8.6030097526280260580e-1);
    p = __fma_rn (p, t, 2.1371214997265515515e+0);
    p = __fma_rn (p, t, 3.1598519601132090206e+0);
    p = __fma_rn (p, t, 3.5780402569085996758e+0);
    p = __fma_rn (p, t, 1.5335297523989890804e+0);
    p = __fma_rn (p, t, 3.4839207139657522572e-1);
    p = __fma_rn (p, t, 5.3644861147153648366e-2);
    p = __fma_rn (p, t, 4.3836709877126095665e-3);
    p = __fma_rn (p, t, 1.3858518113496718808e-4);
    p = __fma_rn (p, t, 1.1738352509991666680e-6);
    q = t+ 2.2859981272422905412e+0;
    q = __fma_rn (q, t, 4.3859045256449554654e+0);
    q = __fma_rn (q, t, 4.6632960348736635331e+0);
    q = __fma_rn (q, t, 3.9846608184671757296e+0);
    q = __fma_rn (q, t, 1.6068377709719017609e+0);
    q = __fma_rn (q, t, 3.5609087305900265560e-1);
    q = __fma_rn (q, t, 5.3963550303200816744e-2);
    q = __fma_rn (q, t, 4.3873424022706935023e-3);
    q = __fma_rn (q, t, 1.3858762165532246059e-4);
    q = __fma_rn (q, t, 1.1738313872397777529e-6);
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    double p, q;

    t = __fma_rn (a, a, -.87890625);
    p = .21489185007307062000e+0;
    p = __fma_rn (p, t, -.64200071507209448655e+1);
    p = __fma_rn (p, t, .29631331505876308123e+2);
    p = __fma_rn (p, t, -.47644367129787181803e+2);
    p = __fma_rn (p, t, .34810057749357500873e+2);
    p = __fma_rn (p, t, -.12954198980646771502e+2);
    p = __fma_rn (p, t, .25349389220714893917e+1);
    p = __fma_rn (p, t, -.24758242362823355486e+0);
    p = __fma_rn (p, t, .94897362808681080020e-2);
    q = t -.12831383833953226499e+2;
    q = __fma_rn (q, t, .41409991778428888716e+2);
    q = __fma_rn (q, t, -.53715373448862143349e+2);
    q = __fma_rn (q, t, .33880176779595142685e+2);
    q = __fma_rn (q, t, -.11315360624238054876e+2);
    q = __fma_rn (q, t, .20369295047216351160e+1);
    q = __fma_rn (q, t, -.18611650627372178511e+0);
    q = __fma_rn (q, t, .67544512778850945940e-2);
    p = p / q;
    t = a * p;
  } else {




    double p, q;

    t = __fma_rn (a, a, -.5625);
    p = -.23886240104308755900e+2;
    p = __fma_rn (p, t, .45560204272689128170e+3);
    p = __fma_rn (p, t, -.22977467176607144887e+4);
    p = __fma_rn (p, t, .46631433533434331287e+4);
    p = __fma_rn (p, t, -.43799652308386926161e+4);
    p = __fma_rn (p, t, .19007153590528134753e+4);
    p = __fma_rn (p, t, -.30786872642313695280e+3);
    q = t -.83288327901936570000e+2;
    q = __fma_rn (q, t, .92741319160935318800e+3);
    q = __fma_rn (q, t, -.35088976383877264098e+4);
    q = __fma_rn (q, t, .59039348134843665626e+4);
    q = __fma_rn (q, t, -.48481635430048872102e+4);
    q = __fma_rn (q, t, .18997769186453057810e+4);
    q = __fma_rn (q, t, -.28386514725366621129e+3);
    p = p / q;
    t = a * p;
  }
  return t;
}

static double __cuda_erfcinv(double a)
{
  double t;

  if (__cuda___isnan(a)) return a + a;

  if (a <= 0.0) {
    t = __longlong_as_double(0xfff8000000000000ULL);
    if (a == 0.0) {
      t = (1.0 - a) * __longlong_as_double(0x7ff0000000000000ULL);
    }
  }
  else if (a >= 0.0625) {
    t = __cuda_erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = __cuda_log(a);
    t = __cuda_rsqrt(-t);
    p = 2.7834010353747001060e-3;
    p = __fma_rn (p, t, 8.6030097526280260580e-1);
    p = __fma_rn (p, t, 2.1371214997265515515e+0);
    p = __fma_rn (p, t, 3.1598519601132090206e+0);
    p = __fma_rn (p, t, 3.5780402569085996758e+0);
    p = __fma_rn (p, t, 1.5335297523989890804e+0);
    p = __fma_rn (p, t, 3.4839207139657522572e-1);
    p = __fma_rn (p, t, 5.3644861147153648366e-2);
    p = __fma_rn (p, t, 4.3836709877126095665e-3);
    p = __fma_rn (p, t, 1.3858518113496718808e-4);
    p = __fma_rn (p, t, 1.1738352509991666680e-6);
    q = t+ 2.2859981272422905412e+0;
    q = __fma_rn (q, t, 4.3859045256449554654e+0);
    q = __fma_rn (q, t, 4.6632960348736635331e+0);
    q = __fma_rn (q, t, 3.9846608184671757296e+0);
    q = __fma_rn (q, t, 1.6068377709719017609e+0);
    q = __fma_rn (q, t, 3.5609087305900265560e-1);
    q = __fma_rn (q, t, 5.3963550303200816744e-2);
    q = __fma_rn (q, t, 4.3873424022706935023e-3);
    q = __fma_rn (q, t, 1.3858762165532246059e-4);
    q = __fma_rn (q, t, 1.1738313872397777529e-6);
    t = p / (q * t);
  }
  else {




    double p, q;
    t = __cuda_log(a);
    t = __cuda_rsqrt(-t);
    p = 6.9952990607058154858e-1;
    p = __fma_rn (p, t, 1.9507620287580568829e+0);
    p = __fma_rn (p, t, 8.2810030904462690216e-1);
    p = __fma_rn (p, t, 1.1279046353630280005e-1);
    p = __fma_rn (p, t, 6.0537914739162189689e-3);
    p = __fma_rn (p, t, 1.3714329569665128933e-4);
    p = __fma_rn (p, t, 1.2964481560643197452e-6);
    p = __fma_rn (p, t, 4.6156006321345332510e-9);
    p = __fma_rn (p, t, 4.5344689563209398450e-12);
    q = t+ 1.5771922386662040546e+0;
    q = __fma_rn (q, t, 2.1238242087454993542e+0);
    q = __fma_rn (q, t, 8.4001814918178042919e-1);
    q = __fma_rn (q, t, 1.1311889334355782065e-1);
    q = __fma_rn (q, t, 6.0574830550097140404e-3);
    q = __fma_rn (q, t, 1.3715891988350205065e-4);
    q = __fma_rn (q, t, 1.2964671850944981713e-6);
    q = __fma_rn (q, t, 4.6156017600933592558e-9);
    q = __fma_rn (q, t, 4.5344687377088206783e-12);
    t = p / (q * t);
  }
  return t;
}

static double __cuda_erfc(double a)
{
  double p, q, h, l;
  int ahi;

  ahi = __double2hiint(a);
  if (ahi < (int)0x3fe80000) {
    return 1.0 - __cuda_erf(a);
  }
  if (a > 27.3) {
    return 0.0;
  }
  if (ahi < (int)0x40140000) {
    p = 5.64189549785304440E-001;
    p = __fma_rn (p, a, 8.17405083437083490E+000);
    p = __fma_rn (p, a, 5.68958722557864720E+001);
    p = __fma_rn (p, a, 2.42568747802647010E+002);
    p = __fma_rn (p, a, 6.80381374390412930E+002);
    p = __fma_rn (p, a, 1.25873132236024590E+003);
    p = __fma_rn (p, a, 1.43925353963809330E+003);
    p = __fma_rn (p, a, 8.15949420587659230E+002);
    q = a+ 1.44881247113239940E+001;
    q = __fma_rn (q, a, 1.01345387970210510E+002);
    q = __fma_rn (q, a, 4.37184684964009650E+002);
    q = __fma_rn (q, a, 1.25588209225251330E+003);
    q = __fma_rn (q, a, 2.43864015012647630E+003);
    q = __fma_rn (q, a, 3.10570469008816280E+003);
    q = __fma_rn (q, a, 2.35995386578953550E+003);
    q = __fma_rn (q, a, 8.15949420692539320E+002);
  } else {
    p = 5.64189583545675280E-001;
    p = __fma_rn (p, a, 2.04728556066513970E+000);
    p = __fma_rn (p, a, 6.75128409662943610E+000);
    p = __fma_rn (p, a, 1.10459345071747900E+001);
    p = __fma_rn (p, a, 1.22570382896313600E+001);
    p = __fma_rn (p, a, 6.01884641114116460E+000);
    q = a+ 3.62871917534986780E+000;
    q = __fma_rn (q, a, 1.24663395327043550E+001);
    q = __fma_rn (q, a, 2.13927672803974790E+001);
    q = __fma_rn (q, a, 2.72082423532866070E+001);
    q = __fma_rn (q, a, 1.86422906830006700E+001);
    q = __fma_rn (q, a, 6.13809834548870550E+000);
  }
  p = p / q;
  h = a * a;
  l = __fma_rn (a, a, -h);
  q = __internal_exp_kernel(-h, 0);
  q = __fma_rn (l, -q, q);
  p = p * q;
  return p;
}


static double __internal_tgamma_kernel(double a)
{
  double t;
  t = -4.42689340712524750E-010;
  t = __fma_rn (t, a, -2.02665918466589540E-007);
  t = __fma_rn (t, a, 1.13812117211195270E-006);
  t = __fma_rn (t, a, -1.25077348166307480E-006);
  t = __fma_rn (t, a, -2.01365017404087710E-005);
  t = __fma_rn (t, a, 1.28050126073544860E-004);
  t = __fma_rn (t, a, -2.15241408115274180E-004);
  t = __fma_rn (t, a, -1.16516754597046040E-003);
  t = __fma_rn (t, a, 7.21894322484663810E-003);
  t = __fma_rn (t, a, -9.62197153268626320E-003);
  t = __fma_rn (t, a, -4.21977345547223940E-002);
  t = __fma_rn (t, a, 1.66538611382503560E-001);
  t = __fma_rn (t, a, -4.20026350341054440E-002);
  t = __fma_rn (t, a, -6.55878071520257120E-001);
  t = __fma_rn (t, a, 5.77215664901532870E-001);
  t = __fma_rn (t, a, 1.00000000000000000E+000);
  return t;
}


static double __internal_stirling_poly(double a)
{
  double x = 1.0 / a;
  double z = 0.0;
  z = __fma_rn (z, x, 8.3949872067208726e-004);
  z = __fma_rn (z, x, -5.1717909082605919e-005);
  z = __fma_rn (z, x, -5.9216643735369393e-004);
  z = __fma_rn (z, x, 6.9728137583658571e-005);
  z = __fma_rn (z, x, 7.8403922172006662e-004);
  z = __fma_rn (z, x, -2.2947209362139917e-004);
  z = __fma_rn (z, x, -2.6813271604938273e-003);
  z = __fma_rn (z, x, 3.4722222222222220e-003);
  z = __fma_rn (z, x, 8.3333333333333329e-002);
  z = __fma_rn (z, x, 1.0000000000000000e+000);
  return z;
}

static double __internal_tgamma_stirling(double a)
{
  if (a < 1.7162437695630274e+002) {

    volatile double t_hi, t_lo, e;



    double2 loga, prod;
    double z = __internal_stirling_poly (a);
    double b = a - 0.5;


    loga = __internal_log_ext_prec(a);


    t_hi = loga.y * b;
    t_lo = __fma_rn (loga.y, b, -t_hi);
    t_lo = __fma_rn (loga.x, b, t_lo);
    prod.y = e = t_hi + t_lo;
    prod.x = (t_hi - e) + t_lo;


    loga.y = -a;
    loga.x = 0.0;
    prod = __internal_ddadd_xgty (prod, loga);


    a = __cuda_exp(prod.y);

    if (!__cuda___isinf(a)) {



      a = __fma_rn (a, prod.x, a);
    }
    a = __fma_rn (a, 2.5066282746310007e+0, a * (-1.8328579980459167e-16));
    return a * z;
  } else {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
}

static double __cuda_tgamma(double a)
{
  double s, xx, x = a;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  if (__cuda_fabs(x) < 15.0) {




    if (x >= 0.0) {
      s = 1.0;
      xx = x;
      while (xx > 1.5) {
        s = __fma_rn(s, xx, -s);
        xx = xx - 1.0;
      }
      if (x >= 0.5) {
        xx = xx - 1.0;
      }
      xx = __internal_tgamma_kernel (xx);
      if (x < 0.5) {
        xx = xx * x;
      }
      s = s / xx;
    } else {
      xx = x;
      s = xx;
      if (x == __cuda_floor(x)) {
        return __longlong_as_double(0xfff8000000000000ULL);
      }
      while (xx < -0.5) {
        s = __fma_rn (s, xx, s);
        xx = xx + 1.0;
      }
      xx = __internal_tgamma_kernel (xx);
      s = s * xx;
      s = 1.0 / s;
    }
    return s;
  } else {
    if (x >= 0.0) {
      return __internal_tgamma_stirling (x);
    } else {
      double t;
      int quot;
      if (x == __cuda_floor(x)) {
        return __longlong_as_double(0xfff8000000000000ULL);
      }
      if (x < -185.0) {
        int negative;
        x = __cuda_floor(x);
        negative = ((x - (2.0 * __cuda_floor(0.5 * x))) == 1.0);
        return negative ? __longlong_as_double(0x8000000000000000ULL) : 0.0;
      }

      xx = __cuda_rint (__internal_twice(x));
      quot = (int)xx;
      xx = __fma_rn (-0.5, xx, x);
      xx = xx * 3.1415926535897931e+0;
      if (quot & 1) {
        xx = __internal_cos_kerneld (xx);
      } else {
        xx = __internal_sin_kerneld (xx);
      }
      if (quot & 2) {
        xx = -xx;
      }
      x = __cuda_fabs (x);
      s = __cuda_exp (-x);
      t = x - 0.5;
      if (x > 140.0) t = __internal_half(t);
      t = __cuda_pow (x, t);
      if (x > 140.0) s = s * t;
      s = s * __internal_stirling_poly (x);
      s = s * x;
      s = s * xx;
      s = 1.0 / s;
      s = __fma_rn (s, 1.2533141373155003e+0, (-9.1642899902295834e-17) * s);
      s = s / t;
      return s;
    }
  }
}

static double __internal_lgamma_pos(double a)
{
  double sum;
  double s, t;

  if (a == __longlong_as_double(0x7ff0000000000000ULL)) {
    return a;
  }
  if (a >= 3.0) {
    if (a >= 8.0) {



      s = 1.0 / a;
      t = s * s;
      sum = -0.1633436431e-2;
      sum = __fma_rn (sum, t, 0.83645878922e-3);
      sum = __fma_rn (sum, t, -0.5951896861197e-3);
      sum = __fma_rn (sum, t, 0.793650576493454e-3);
      sum = __fma_rn (sum, t, -0.277777777735865004e-2);
      sum = __fma_rn (sum, t, 0.833333333333331018375e-1);
      sum = __fma_rn (sum, s, 0.918938533204672);
      s = __internal_half(__cuda_log (a));
      t = a - 0.5;
      s = s * t;
      t = s - a;
      s = s + sum;
      t = t + s;
      return t;
    } else {
      a = a - 3.0;
      s = -4.02412642744125560E+003;
      s = __fma_rn (s, a, -2.97693796998962000E+005);
      s = __fma_rn (s, a, -6.38367087682528790E+006);
      s = __fma_rn (s, a, -5.57807214576539320E+007);
      s = __fma_rn (s, a, -2.24585140671479230E+008);
      s = __fma_rn (s, a, -4.70690608529125090E+008);
      s = __fma_rn (s, a, -7.62587065363263010E+008);
      s = __fma_rn (s, a, -9.71405112477113250E+008);
      t = a -1.02277248359873170E+003;
      t = __fma_rn (t, a, -1.34815350617954480E+005);
      t = __fma_rn (t, a, -4.64321188814343610E+006);
      t = __fma_rn (t, a, -6.48011106025542540E+007);
      t = __fma_rn (t, a, -4.19763847787431360E+008);
      t = __fma_rn (t, a, -1.25629926018000720E+009);
      t = __fma_rn (t, a, -1.40144133846491690E+009);
      t = s / t;
      t = t + a;
      return t;
    }
  } else if (a >= 1.5) {
    a = a - 2.0;
    t = 9.84839283076310610E-009;
    t = __fma_rn (t, a, -6.69743850483466500E-008);
    t = __fma_rn (t, a, 2.16565148880011450E-007);
    t = __fma_rn (t, a, -4.86170275781575260E-007);
    t = __fma_rn (t, a, 9.77962097401114400E-007);
    t = __fma_rn (t, a, -2.03041287574791810E-006);
    t = __fma_rn (t, a, 4.36119725805364580E-006);
    t = __fma_rn (t, a, -9.43829310866446590E-006);
    t = __fma_rn (t, a, 2.05106878496644220E-005);
    t = __fma_rn (t, a, -4.49271383742108440E-005);
    t = __fma_rn (t, a, 9.94570466342226000E-005);
    t = __fma_rn (t, a, -2.23154589559238440E-004);
    t = __fma_rn (t, a, 5.09669559149637430E-004);
    t = __fma_rn (t, a, -1.19275392649162300E-003);
    t = __fma_rn (t, a, 2.89051032936815490E-003);
    t = __fma_rn (t, a, -7.38555102806811700E-003);
    t = __fma_rn (t, a, 2.05808084278121250E-002);
    t = __fma_rn (t, a, -6.73523010532073720E-002);
    t = __fma_rn (t, a, 3.22467033424113040E-001);
    t = __fma_rn (t, a, 4.22784335098467190E-001);
    t = t * a;
    return t;
  } else if (a >= 0.7) {
    a = 1.0 - a;
    t = 1.17786911519331130E-002;
    t = __fma_rn (t, a, 3.89046747413522300E-002);
    t = __fma_rn (t, a, 5.90045711362049900E-002);
    t = __fma_rn (t, a, 6.02143305254344420E-002);
    t = __fma_rn (t, a, 5.61652708964839180E-002);
    t = __fma_rn (t, a, 5.75052755193461370E-002);
    t = __fma_rn (t, a, 6.21061973447320710E-002);
    t = __fma_rn (t, a, 6.67614724532521880E-002);
    t = __fma_rn (t, a, 7.14856037245421020E-002);
    t = __fma_rn (t, a, 7.69311251313347100E-002);
    t = __fma_rn (t, a, 8.33503129714946310E-002);
    t = __fma_rn (t, a, 9.09538288991182800E-002);
    t = __fma_rn (t, a, 1.00099591546322310E-001);
    t = __fma_rn (t, a, 1.11334278141734510E-001);
    t = __fma_rn (t, a, 1.25509666613462880E-001);
    t = __fma_rn (t, a, 1.44049896457704160E-001);
    t = __fma_rn (t, a, 1.69557177031481600E-001);
    t = __fma_rn (t, a, 2.07385551032182120E-001);
    t = __fma_rn (t, a, 2.70580808427600350E-001);
    t = __fma_rn (t, a, 4.00685634386517050E-001);
    t = __fma_rn (t, a, 8.22467033424113540E-001);
    t = __fma_rn (t, a, 5.77215664901532870E-001);
    t = t * a;
    return t;
  } else {
    t= -9.04051686831357990E-008;
    t = __fma_rn (t, a, 7.06814224969349250E-007);
    t = __fma_rn (t, a, -3.80702154637902830E-007);
    t = __fma_rn (t, a, -2.12880892189316100E-005);
    t = __fma_rn (t, a, 1.29108470307156190E-004);
    t = __fma_rn (t, a, -2.15932815215386580E-004);
    t = __fma_rn (t, a, -1.16484324388538480E-003);
    t = __fma_rn (t, a, 7.21883433044470670E-003);
    t = __fma_rn (t, a, -9.62194579514229560E-003);
    t = __fma_rn (t, a, -4.21977386992884450E-002);
    t = __fma_rn (t, a, 1.66538611813682460E-001);
    t = __fma_rn (t, a, -4.20026350606819980E-002);
    t = __fma_rn (t, a, -6.55878071519427450E-001);
    t = __fma_rn (t, a, 5.77215664901523870E-001);
    t = t * a;
    t = __fma_rn (t, a, a);
    return -__cuda_log (t);
  }
}

static double __cuda_lgamma(double a)
{
  double t;
  double i;
  long long int quot;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  t = __internal_lgamma_pos(__cuda_fabs(a));
  if (a >= 0.0) return t;
  a = __cuda_fabs(a);
  i = __cuda_floor(a);
  if (a == i) return __longlong_as_double(0x7ff0000000000000ULL);
  if (a < 1e-19) return -__cuda_log(a);
  i = __cuda_rint (2.0 * a);
  quot = (long long int)i;
  i = __fma_rn (-0.5, i, a);
  i = i * 3.1415926535897931e+0;
  if (quot & 1) {
    i = __internal_cos_kerneld(i);
  } else {
    i = __internal_sin_kerneld(i);
  }
  i = __cuda_fabs(i);
  t = __cuda_log(3.1415926535897931e+0 / (i * a)) - t;
  return t;
}

static double __cuda_ldexp(double a, int b)
{
  double fa = __cuda_fabs (a);
  if ((fa == 0.0) || (fa == __longlong_as_double(0x7ff0000000000000ULL)) || (!(fa <= __longlong_as_double(0x7ff0000000000000ULL)))) {
    return a + a;
  }
  if (b == 0) {
    return a;
  }
  if (b > 2200) b = 2200;
  if (b < -2200) b = -2200;
  if (__cuda_abs (b) < 1022) {
    return a * __internal_exp2i_kernel(b);
  }
  if (__cuda_abs (b) < 2044) {
    int bhalf = b / 2;
    return a * __internal_exp2i_kernel (bhalf) *
           __internal_exp2i_kernel (b - bhalf);
  } else {
    int bquarter = b / 4;
    double t = __internal_exp2i_kernel(bquarter);
    return a * t * t * t *__internal_exp2i_kernel (b - 3 * bquarter);
  }
}

static double __cuda_scalbn(double a, int b)
{

  return __cuda_ldexp(a, b);
}

static double __cuda_scalbln(double a, long int b)
{


  if (b < -2147483648L) b = -2147483648L;
  if (b > 2147483647L) b = 2147483647L;

  return __cuda_scalbn(a, (int)b);
}

static double __cuda_frexp(double a, int *b)
{
  double fa = __cuda_fabs(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 2.22507385850720140e-308) {
    a *= 18014398509481984.0;
    denorm = 54;
  } else {
    denorm = 0;
  }
  expo = (__double2hiint(a) >> 20) & 0x7ff;
  if ((fa == 0.0) || (expo == 0x7ff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 1022;
    a = __longlong_as_double((__double_as_longlong(a) & 0x800fffffffffffffULL)|
                              0x3fe0000000000000ULL);
  }
  *b = expo;
  return a;
}

static double __cuda_modf(double a, double *b)
{
  double t;
  if (__cuda___finite(a)) {
    t = __cuda_trunc(a);
    *b = t;
    t = a - t;
    return __cuda_copysign(t, a);
  } else if (__cuda___isinf(a)) {
    t = 0.0;
    *b = a;
    return __cuda_copysign(t, a);
  } else {
    *b = a + a;
    return a + a;
  }
}

static double __cuda_fmod(double a, double b)
{
  double orig_a = a;
  double orig_b = b;
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (!((a <= __longlong_as_double(0x7ff0000000000000ULL)) && (b <= __longlong_as_double(0x7ff0000000000000ULL)))) {
      return orig_a + orig_b;
  }
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    int bhi = __double2hiint(b);
    int blo = __double2loint(b);
    int ahi = __double2hiint(a);
    double scaled_b = 0.0;
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5;
    }
    return __cuda_copysign (a, orig_a);
  } else {
    return orig_a;
  }
}

static double __cuda_remainder(double a, double b)
{
  double orig_a;
  double twoa = 0.0;
  unsigned int quot0 = 0;
  int bhi;
  int blo;
  int ahi;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  orig_a = a;
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    double scaled_b = 0.0;
    bhi = __double2hiint(b);
    blo = __double2loint(b);
    ahi = __double2hiint(a);
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5;
    }
  }

  twoa = a + a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
  }
  bhi = __double2hiint(a);
  blo = __double2loint(a);
  ahi = __double2hiint(orig_a);
  a = __hiloint2double((ahi & 0x80000000) ^ bhi, blo);
  return a;
}

static double __cuda_remquo(double a, double b, int *c)
{
  double orig_a;
  double twoa = 0.0;
  unsigned int quot = 0;
  unsigned int sign;
  int bhi;
  int blo;
  int ahi;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    *c = quot;
    return a + b;
  }
  orig_a = a;
  sign = 0 - (__cuda___signbit(a) != __cuda___signbit(b));
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    *c = quot;
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    double scaled_b = 0.0;
    bhi = __double2hiint(b);
    blo = __double2loint(b);
    ahi = __double2hiint(a);
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5;
    }
  }

  twoa = a + a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
  }
  bhi = __double2hiint(a);
  blo = __double2loint(a);
  ahi = __double2hiint(orig_a);
  a = __hiloint2double((ahi & 0x80000000) ^ bhi, blo);
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *c = quot;
  return a;
}

static double __cuda_nextafter(double a, double b)
{
  unsigned long long int ia;
  unsigned long long int ib;
  ia = __double_as_longlong(a);
  ib = __double_as_longlong(b);
  if (__cuda___isnan(a) || __cuda___isnan(b)) return a + b;
  if (((ia | ib) << 1) == 0ULL) return b;
  if ((ia + ia) == 0ULL) {
    return __cuda_copysign (__longlong_as_double(0x0000000000000001ULL), b);
  }
  if ((a < b) && (a < 0.0)) ia--;
  if ((a < b) && (a > 0.0)) ia++;
  if ((a > b) && (a < 0.0)) ia++;
  if ((a > b) && (a > 0.0)) ia--;
  a = __longlong_as_double(ia);
  return a;
}

static double __cuda_nan(const char *s)
{
  unsigned long long i = 0;
  int c;
  int ovfl = 0;
  int invld = 0;
  if (*s == '0') {
    s++;
    if ((*s == 'x') || (*s == 'X')) {
      s++;
      while (*s == '0') s++;
      while (*s) {
        if (i > 0x0fffffffffffffffULL) {
          ovfl = 1;
        }
        c = (((*s) >= 'A') && ((*s) <= 'F')) ? (*s + 'a' - 'A') : (*s);
        if ((c >= 'a') && (c <= 'f')) {
          c = c - 'a' + 10;
          i = i * 16 + c;
        } else if ((c >= '0') && (c <= '9')) {
          c = c - '0';
          i = i * 16 + c;
        } else {
          invld = 1;
        }
        s++;
      }
    } else {
      while (*s == '0') s++;
      while (*s) {
        if (i > 0x1fffffffffffffffULL) {
          ovfl = 1;
        }
        c = *s;
        if ((c >= '0') && (c <= '7')) {
          c = c - '0';
          i = i * 8 + c;
        } else {
          invld = 1;
        }
        s++;
      }
    }
  } else {
    while (*s) {
      c = *s;
      if ((i > 1844674407370955161ULL) ||
          ((i == 1844674407370955161ULL) && (c > '5'))) {
        ovfl = 1;
      }
      if ((c >= '0') && (c <= '9')) {
        c = c - '0';
        i = i * 10 + c;
      } else {
        invld = 1;
      }
      s++;
    }
  }
  if (ovfl) {
    i = ~0ULL;
  }
  if (invld) {
    i = 0ULL;
  }
  i = (i & 0x000fffffffffffffULL) | 0x7ff8000000000000ULL;
  return __longlong_as_double(i);
}

static double __cuda_round(double a)
{
  double fa = __cuda_fabs(a);
  if (fa > 4503599627370496.0) {
    return a;
  } else {
    double u = __cuda_floor(fa + 0.5);
    if (fa < 0.5) u = 0;
    return __cuda_copysign(u, a);
  }
}

static long long int __cuda_llround(double a)
{

  if (a >= 9223372036854775807.0) return 0x7fffffffffffffffLL;
  if (a <= -9223372036854775808.0) return 0x8000000000000000LL;

  return (long long int)(__cuda_round(a));
}

static long int __cuda_lround(double a)
{

  return (long int)(__cuda_llround(a));
# 2326 "/home/normal/cuda/bin/../include/math_functions_dbl_ptx3.h" 3
}

static double __cuda_fdim(double a, double b)
{
  double t;
  t = a - b;
  if (a <= b) {
    t = 0.0;
  }
  return t;
}

static int __cuda_ilogb(double a)
{
  unsigned long long int i;
  unsigned int ihi;
  unsigned int ilo;
  if (__cuda___isnan(a)) return -((int)((unsigned int)-1 >> 1))-1;
  if (__cuda___isinf(a)) return ((int)((unsigned int)-1 >> 1));
  if (a == 0.0) return -((int)((unsigned int)-1 >> 1))-1;
  a = __cuda_fabs(a);
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  i = ((unsigned long long int)ihi) << 32 | (unsigned long long int)ilo;
  if (a >= 2.22507385850720140e-308) {
    return ((int)((ihi >> 20) & 0x7ff)) - 1023;
  } else {
    int expo = -1022;
    while (i < 0x0010000000000000ULL) {
      expo--;
      i = i + i;
    }
    return expo;
  }
}

static double __cuda_logb(double a)
{
  unsigned long long int i;
  unsigned int ihi;
  unsigned int ilo;
  if (__cuda___isnan(a)) return a + a;
  a = __cuda_fabs(a);
  if (a == __longlong_as_double(0x7ff0000000000000ULL)) return a;
  if (a == 0.0) return -__longlong_as_double(0x7ff0000000000000ULL);
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  i = ((unsigned long long int)ihi) << 32 | (unsigned long long int)ilo;
  if (a >= 2.22507385850720140e-308) {
    return (double)((int)((ihi >> 20) & 0x7ff)) - 1023;
  } else {
    int expo = -1022;
    while (i < 0x0010000000000000ULL) {
      expo--;
      i = i + i;
    }
    return (double)expo;
  }
}

static double __cuda_fma(double a, double b, double c)
{
  return __fma_rn(a, b, c);
}
# 3735 "/home/normal/cuda/bin/../include/math_functions.h" 2 3
# 94 "/home/normal/cuda/bin/../include/common_functions.h" 2
# 227 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2
# 6 "/tmp/tmpxft_000062f6_00000000-1_particleSystem.cudafe1.stub.c" 2
struct __T20 {float4 *__par0;float4 *__par1;float4 *__par2;float4 *__par3;float __par4;int __dummy_field;};
struct __T21 {float4 *__par0;uint *__par1;uint *__par2;int __dummy_field;volatile char __dummy[4];};
struct __T22 {float4 *__par0;uint2 *__par1;int __dummy_field;volatile char __dummy[4];};
struct __T23 {uint2 *__par0;float4 *__par1;float4 *__par2;float4 *__par3;float4 *__par4;uint *__par5;int __dummy_field;volatile char __dummy[4];};
struct __T24 {float4 *__par0;float4 *__par1;float4 *__par2;float4 *__par3;uint2 *__par4;uint *__par5;int __dummy_field;volatile char __dummy[4];};
struct __T25 {KeyValuePair *__par0;uint __par1;uint __par2;uint __par3;int __dummy_field;};
struct __T26 {KeyValuePair *__par0;KeyValuePair *__par1;uint __par2;uint __par3;int __par4;int __dummy_field;};
static void __sti____cudaRegisterAll_50_tmpxft_000062f6_00000000_13_particleSystem_cpp1_ii_dee98040(void) __attribute__((__constructor__));
void __device_stub__Z9integrateP6float4S0_S0_S0_f(float4 *__par0, float4 *__par1, float4 *__par2, float4 *__par3, float __par4){auto struct __T20 *__T27;
char __[256]; *(char**)&__T27 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T27->__par0 - (size_t)__T27) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T27->__par1 - (size_t)__T27) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T27->__par2 - (size_t)__T27) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T27->__par3 - (size_t)__T27) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T27->__par4 - (size_t)__T27) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float4 *, float4 *, float4 *, float4 *, float))integrate__entry)); (void)cudaLaunch(((char *)((void ( *)(float4 *, float4 *, float4 *, float4 *, float))integrate__entry))); };}

}
void integrate__entry( float4 * __cuda_0,float4 * __cuda_1,float4 * __cuda_2,float4 * __cuda_3,float __cuda_4)
{__device_stub__Z9integrateP6float4S0_S0_S0_f( __cuda_0, __cuda_1, __cuda_2, __cuda_3, __cuda_4);}
extern "C"{

void __device_stub__Z11updateGridDP6float4PjS1_(float4 *__par0, uint *__par1, uint *__par2){auto struct __T21 *__T222;
char __[256]; *(char**)&__T222 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T222->__par0 - (size_t)__T222) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T222->__par1 - (size_t)__T222) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T222->__par2 - (size_t)__T222) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float4 *, uint *, uint *))updateGridD__entry)); (void)cudaLaunch(((char *)((void ( *)(float4 *, uint *, uint *))updateGridD__entry))); };}

}
void updateGridD__entry( float4 * __cuda_0,uint * __cuda_1,uint * __cuda_2)
{__device_stub__Z11updateGridDP6float4PjS1_( __cuda_0, __cuda_1, __cuda_2);}
extern "C"{

void __device_stub__Z9calcHashDP6float4P5uint2(float4 *__par0, uint2 *__par1){auto struct __T22 *__T223;
char __[256]; *(char**)&__T223 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T223->__par0 - (size_t)__T223) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T223->__par1 - (size_t)__T223) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float4 *, uint2 *))calcHashD__entry)); (void)cudaLaunch(((char *)((void ( *)(float4 *, uint2 *))calcHashD__entry))); };}

}
void calcHashD__entry( float4 * __cuda_0,uint2 * __cuda_1)
{__device_stub__Z9calcHashDP6float4P5uint2( __cuda_0, __cuda_1);}
extern "C"{

void __device_stub__Z28reorderDataAndFindCellStartDP5uint2P6float4S2_S2_S2_Pj(uint2 *__par0, float4 *__par1, float4 *__par2, float4 *__par3, float4 *__par4, uint *__par5){auto struct __T23 *__T224;
char __[256]; *(char**)&__T224 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T224->__par0 - (size_t)__T224) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T224->__par1 - (size_t)__T224) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T224->__par2 - (size_t)__T224) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T224->__par3 - (size_t)__T224) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T224->__par4 - (size_t)__T224) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T224->__par5 - (size_t)__T224) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(uint2 *, float4 *, float4 *, float4 *, float4 *, uint *))reorderDataAndFindCellStartD__entry)); (void)cudaLaunch(((char *)((void ( *)(uint2 *, float4 *, float4 *, float4 *, float4 *, uint *))reorderDataAndFindCellStartD__entry))); };}

}
void reorderDataAndFindCellStartD__entry( uint2 * __cuda_0,float4 * __cuda_1,float4 * __cuda_2,float4 * __cuda_3,float4 * __cuda_4,uint * __cuda_5)
{__device_stub__Z28reorderDataAndFindCellStartDP5uint2P6float4S2_S2_S2_Pj( __cuda_0, __cuda_1, __cuda_2, __cuda_3, __cuda_4, __cuda_5);}
extern "C"{

void __device_stub__Z8collideDP6float4S0_S0_S0_P5uint2Pj(float4 *__par0, float4 *__par1, float4 *__par2, float4 *__par3, uint2 *__par4, uint *__par5){auto struct __T24 *__T2137;
char __[256]; *(char**)&__T2137 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T2137->__par0 - (size_t)__T2137) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T2137->__par1 - (size_t)__T2137) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T2137->__par2 - (size_t)__T2137) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T2137->__par3 - (size_t)__T2137) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T2137->__par4 - (size_t)__T2137) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T2137->__par5 - (size_t)__T2137) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float4 *, float4 *, float4 *, float4 *, uint2 *, uint *))collideD__entry)); (void)cudaLaunch(((char *)((void ( *)(float4 *, float4 *, float4 *, float4 *, uint2 *, uint *))collideD__entry))); };}

}
void collideD__entry( float4 * __cuda_0,float4 * __cuda_1,float4 * __cuda_2,float4 * __cuda_3,uint2 * __cuda_4,uint * __cuda_5)
{__device_stub__Z8collideDP6float4S0_S0_S0_P5uint2Pj( __cuda_0, __cuda_1, __cuda_2, __cuda_3, __cuda_4, __cuda_5);}
extern "C"{

void __device_stub__Z8RadixSumP12KeyValuePairjjj(KeyValuePair *__par0, uint __par1, uint __par2, uint __par3){auto struct __T25 *__T2138;
char __[256]; *(char**)&__T2138 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T2138->__par0 - (size_t)__T2138) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T2138->__par1 - (size_t)__T2138) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T2138->__par2 - (size_t)__T2138) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T2138->__par3 - (size_t)__T2138) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(KeyValuePair *, uint, uint, uint))RadixSum__entry)); (void)cudaLaunch(((char *)((void ( *)(KeyValuePair *, uint, uint, uint))RadixSum__entry))); };}

}
void RadixSum__entry( KeyValuePair * __cuda_0,uint __cuda_1,uint __cuda_2,uint __cuda_3)
{__device_stub__Z8RadixSumP12KeyValuePairjjj( __cuda_0, __cuda_1, __cuda_2, __cuda_3);}
extern "C"{

void __device_stub__Z14RadixPrefixSumv(void){auto struct __T2139 *__T2140;
char __[256]; *(char**)&__T2140 = __;{ volatile static char *__f; __f = ((char *)((void ( *)(void))RadixPrefixSum__entry)); (void)cudaLaunch(((char *)((void ( *)(void))RadixPrefixSum__entry))); };}

}
void RadixPrefixSum__entry(void)
{__device_stub__Z14RadixPrefixSumv();}
extern "C"{

void __device_stub__Z25RadixAddOffsetsAndShuffleP12KeyValuePairS0_jji(KeyValuePair *__par0, KeyValuePair *__par1, uint __par2, uint __par3, int __par4){auto struct __T26 *__T2141;
char __[256]; *(char**)&__T2141 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T2141->__par0 - (size_t)__T2141) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T2141->__par1 - (size_t)__T2141) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T2141->__par2 - (size_t)__T2141) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T2141->__par3 - (size_t)__T2141) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T2141->__par4 - (size_t)__T2141) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(KeyValuePair *, KeyValuePair *, uint, uint, int))RadixAddOffsetsAndShuffle__entry)); (void)cudaLaunch(((char *)((void ( *)(KeyValuePair *, KeyValuePair *, uint, uint, int))RadixAddOffsetsAndShuffle__entry))); };}

}
void RadixAddOffsetsAndShuffle__entry( KeyValuePair * __cuda_0,KeyValuePair * __cuda_1,uint __cuda_2,uint __cuda_3,int __cuda_4)
{__device_stub__Z25RadixAddOffsetsAndShuffleP12KeyValuePairS0_jji( __cuda_0, __cuda_1, __cuda_2, __cuda_3, __cuda_4);}
extern "C"{
# 102 "/tmp/tmpxft_000062f6_00000000-1_particleSystem.cudafe1.stub.c"
static void __sti____cudaRegisterAll_50_tmpxft_000062f6_00000000_13_particleSystem_cpp1_ii_dee98040(void){__cudaFatCubinHandle = __cudaRegisterFatBinary((void*)(&__fatDeviceText)); atexit(__cudaUnregisterBinaryUtil);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(KeyValuePair *, KeyValuePair *, uint, uint, int))RadixAddOffsetsAndShuffle__entry), (char*)"_Z25RadixAddOffsetsAndShuffleP12KeyValuePairS0_jji", "_Z25RadixAddOffsetsAndShuffleP12KeyValuePairS0_jji", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(void))RadixPrefixSum__entry), (char*)"_Z14RadixPrefixSumv", "_Z14RadixPrefixSumv", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(KeyValuePair *, uint, uint, uint))RadixSum__entry), (char*)"_Z8RadixSumP12KeyValuePairjjj", "_Z8RadixSumP12KeyValuePairjjj", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float4 *, float4 *, float4 *, float4 *, uint2 *, uint *))collideD__entry), (char*)"_Z8collideDP6float4S0_S0_S0_P5uint2Pj", "_Z8collideDP6float4S0_S0_S0_P5uint2Pj", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(uint2 *, float4 *, float4 *, float4 *, float4 *, uint *))reorderDataAndFindCellStartD__entry), (char*)"_Z28reorderDataAndFindCellStartDP5uint2P6float4S2_S2_S2_Pj", "_Z28reorderDataAndFindCellStartDP5uint2P6float4S2_S2_S2_Pj", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float4 *, uint2 *))calcHashD__entry), (char*)"_Z9calcHashDP6float4P5uint2", "_Z9calcHashDP6float4P5uint2", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float4 *, uint *, uint *))updateGridD__entry), (char*)"_Z11updateGridDP6float4PjS1_", "_Z11updateGridDP6float4PjS1_", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float4 *, float4 *, float4 *, float4 *, float))integrate__entry), (char*)"_Z9integrateP6float4S0_S0_S0_f", "_Z9integrateP6float4S0_S0_S0_f", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&oldPosTex, 0, "oldPosTex", 1, 0, 0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&oldVelTex, 0, "oldVelTex", 1, 0, 0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&particleHashTex, 0, "particleHashTex", 1, 0, 0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&cellStartTex, 0, "cellStartTex", 1, 0, 0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&gridCountersTex, 0, "gridCountersTex", 1, 0, 0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&gridCellsTex, 0, "gridCellsTex", 1, 0, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_params, (char*)"params", "params", 0, 112, 1, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_dRadixSum, (char*)"dRadixSum", "dRadixSum", 0, 196608, 0, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_dRadixBlockSum, (char*)"dRadixBlockSum", "dRadixBlockSum", 0, 64, 0, 0);__cudaRegisterShared(__cudaFatCubinHandle, (void**)"sRadixSum");}

}
# 306 "particleSystem.cu" 2
