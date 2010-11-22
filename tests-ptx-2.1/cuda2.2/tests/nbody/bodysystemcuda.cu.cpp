# 1 "/tmp/tmpxft_0000206f_00000000-1_bodysystemcuda.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_0000206f_00000000-1_bodysystemcuda.cudafe1.cpp"
# 1 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
# 46 "/usr/local/cuda/bin/../include/device_types.h"
# 149 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/device_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/driver_types.h" 1 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h" 3
enum cudaError
{





  cudaSuccess = 0,





  cudaErrorMissingConfiguration = 1,





  cudaErrorMemoryAllocation = 2,





  cudaErrorInitializationError = 3,
# 131 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchFailure = 4,
# 140 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorPriorLaunchFailure = 5,
# 150 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchTimeout = 6,
# 159 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchOutOfResources = 7,





  cudaErrorInvalidDeviceFunction = 8,
# 174 "/usr/local/cuda/bin/../include/driver_types.h" 3
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
# 255 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorAddressOfConstant = 22,
# 264 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureFetchFailed = 23,
# 273 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureNotBound = 24,
# 282 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSynchronizationError = 25,





  cudaErrorInvalidFilterSetting = 26,





  cudaErrorInvalidNormSetting = 27,







  cudaErrorMixedDeviceExecution = 28,







  cudaErrorCudartUnloading = 29,




  cudaErrorUnknown = 30,





  cudaErrorNotYetImplemented = 31,
# 330 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorMemoryValueTooLarge = 32,






  cudaErrorInvalidResourceHandle = 33,







  cudaErrorNotReady = 34,






  cudaErrorInsufficientDriver = 35,
# 365 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSetOnActiveProcess = 36,





  cudaErrorInvalidSurface = 37,





  cudaErrorNoDevice = 38,





  cudaErrorECCUncorrectable = 39,




  cudaErrorSharedObjectSymbolNotFound = 40,




  cudaErrorSharedObjectInitFailed = 41,





  cudaErrorUnsupportedLimit = 42,





  cudaErrorDuplicateVariableName = 43,





  cudaErrorDuplicateTextureName = 44,





  cudaErrorDuplicateSurfaceName = 45,
# 426 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorDevicesUnavailable = 46,




  cudaErrorInvalidKernelImage = 47,







  cudaErrorNoKernelImageForDevice = 48,
# 448 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorIncompatibleDriverContext = 49,




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





struct cudaGraphicsResource;





enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone = 0
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone = 0,
  cudaGraphicsMapFlagsReadOnly = 1,
  cudaGraphicsMapFlagsWriteDiscard = 2
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00,
  cudaGraphicsCubeFaceNegativeX = 0x01,
  cudaGraphicsCubeFacePositiveY = 0x02,
  cudaGraphicsCubeFaceNegativeY = 0x03,
  cudaGraphicsCubeFacePositiveZ = 0x04,
  cudaGraphicsCubeFaceNegativeZ = 0x05
};





struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;

   int __cudaReserved[6];
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone = 0,
  cudaFuncCachePreferShared = 1,
  cudaFuncCachePreferL1 = 2
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};





enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
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
  int maxTexture1D;
  int maxTexture2D[2];
  int maxTexture3D[3];
  int maxTexture2DArray[3];
  size_t surfaceAlignment;
  int concurrentKernels;
  int ECCEnabled;
  int pciBusID;
  int pciDeviceID;
  int tccDriver;
  int __cudaReserved[21];
};
# 768 "/usr/local/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct cudaGraphicsResource *cudaGraphicsResource_t;





typedef struct CUuuid_st cudaUUID_t;
# 44 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/surface_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};





enum cudaSurfaceFormatMode
{
  cudaFormatModeForced = 0,
  cudaFormatModeAuto = 1
};





struct surfaceReference
{



  struct cudaChannelFormatDesc channelDesc;
};
# 45 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap = 0,
  cudaAddressModeClamp = 1,
  cudaAddressModeMirror = 2,
  cudaAddressModeBorder = 3
};





enum cudaTextureFilterMode
{
  cudaFilterModePoint = 0,
  cudaFilterModeLinear = 1
};





enum cudaTextureReadMode
{
  cudaReadModeElementType = 0,
  cudaReadModeNormalizedFloat = 1
};





struct textureReference
{



  int normalized;



  enum cudaTextureFilterMode filterMode;



  enum cudaTextureAddressMode addressMode[3];



  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 45 "/usr/local/cuda/bin/../include/vector_types.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 46 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 47 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 75 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
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


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
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


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
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


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
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
# 229 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct __attribute__((aligned(2*sizeof(long int)))) long2
{
  long int x, y;
};


struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
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


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
{
  double x, y, z, w;
};
# 366 "/usr/local/cuda/bin/../include/vector_types.h" 3
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

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;
# 469 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};


typedef struct dim3 dim3;
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 70 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 2 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h"
# 466 "/usr/local/cuda/bin/../include/driver_types.h"
# 478 "/usr/local/cuda/bin/../include/driver_types.h"
# 491 "/usr/local/cuda/bin/../include/driver_types.h"
# 497 "/usr/local/cuda/bin/../include/driver_types.h"
# 510 "/usr/local/cuda/bin/../include/driver_types.h"
# 523 "/usr/local/cuda/bin/../include/driver_types.h"
# 535 "/usr/local/cuda/bin/../include/driver_types.h"
# 546 "/usr/local/cuda/bin/../include/driver_types.h"
# 564 "/usr/local/cuda/bin/../include/driver_types.h"
# 570 "/usr/local/cuda/bin/../include/driver_types.h"
# 579 "/usr/local/cuda/bin/../include/driver_types.h"
# 590 "/usr/local/cuda/bin/../include/driver_types.h"
# 603 "/usr/local/cuda/bin/../include/driver_types.h"
# 656 "/usr/local/cuda/bin/../include/driver_types.h"
# 667 "/usr/local/cuda/bin/../include/driver_types.h"
# 678 "/usr/local/cuda/bin/../include/driver_types.h"
# 689 "/usr/local/cuda/bin/../include/driver_types.h"
# 768 "/usr/local/cuda/bin/../include/driver_types.h"
# 774 "/usr/local/cuda/bin/../include/driver_types.h"
# 780 "/usr/local/cuda/bin/../include/driver_types.h"
# 786 "/usr/local/cuda/bin/../include/driver_types.h"
# 792 "/usr/local/cuda/bin/../include/driver_types.h"
# 63 "/usr/local/cuda/bin/../include/surface_types.h"
# 74 "/usr/local/cuda/bin/../include/surface_types.h"
# 84 "/usr/local/cuda/bin/../include/surface_types.h"
# 63 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/texture_types.h"
# 85 "/usr/local/cuda/bin/../include/texture_types.h"
# 95 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/vector_types.h"
# 81 "/usr/local/cuda/bin/../include/vector_types.h"
# 87 "/usr/local/cuda/bin/../include/vector_types.h"
# 93 "/usr/local/cuda/bin/../include/vector_types.h"
# 99 "/usr/local/cuda/bin/../include/vector_types.h"
# 105 "/usr/local/cuda/bin/../include/vector_types.h"
# 111 "/usr/local/cuda/bin/../include/vector_types.h"
# 117 "/usr/local/cuda/bin/../include/vector_types.h"
# 123 "/usr/local/cuda/bin/../include/vector_types.h"
# 129 "/usr/local/cuda/bin/../include/vector_types.h"
# 135 "/usr/local/cuda/bin/../include/vector_types.h"
# 141 "/usr/local/cuda/bin/../include/vector_types.h"
# 147 "/usr/local/cuda/bin/../include/vector_types.h"
# 153 "/usr/local/cuda/bin/../include/vector_types.h"
# 159 "/usr/local/cuda/bin/../include/vector_types.h"
# 162 "/usr/local/cuda/bin/../include/vector_types.h"
# 165 "/usr/local/cuda/bin/../include/vector_types.h"
# 171 "/usr/local/cuda/bin/../include/vector_types.h"
# 177 "/usr/local/cuda/bin/../include/vector_types.h"
# 180 "/usr/local/cuda/bin/../include/vector_types.h"
# 183 "/usr/local/cuda/bin/../include/vector_types.h"
# 189 "/usr/local/cuda/bin/../include/vector_types.h"
# 195 "/usr/local/cuda/bin/../include/vector_types.h"
# 201 "/usr/local/cuda/bin/../include/vector_types.h"
# 207 "/usr/local/cuda/bin/../include/vector_types.h"
# 213 "/usr/local/cuda/bin/../include/vector_types.h"
# 229 "/usr/local/cuda/bin/../include/vector_types.h"
# 235 "/usr/local/cuda/bin/../include/vector_types.h"
# 243 "/usr/local/cuda/bin/../include/vector_types.h"
# 249 "/usr/local/cuda/bin/../include/vector_types.h"
# 255 "/usr/local/cuda/bin/../include/vector_types.h"
# 261 "/usr/local/cuda/bin/../include/vector_types.h"
# 267 "/usr/local/cuda/bin/../include/vector_types.h"
# 273 "/usr/local/cuda/bin/../include/vector_types.h"
# 276 "/usr/local/cuda/bin/../include/vector_types.h"
# 282 "/usr/local/cuda/bin/../include/vector_types.h"
# 288 "/usr/local/cuda/bin/../include/vector_types.h"
# 294 "/usr/local/cuda/bin/../include/vector_types.h"
# 300 "/usr/local/cuda/bin/../include/vector_types.h"
# 306 "/usr/local/cuda/bin/../include/vector_types.h"
# 312 "/usr/local/cuda/bin/../include/vector_types.h"
# 318 "/usr/local/cuda/bin/../include/vector_types.h"
# 324 "/usr/local/cuda/bin/../include/vector_types.h"
# 330 "/usr/local/cuda/bin/../include/vector_types.h"
# 336 "/usr/local/cuda/bin/../include/vector_types.h"
# 342 "/usr/local/cuda/bin/../include/vector_types.h"
# 348 "/usr/local/cuda/bin/../include/vector_types.h"
# 354 "/usr/local/cuda/bin/../include/vector_types.h"
# 366 "/usr/local/cuda/bin/../include/vector_types.h"
# 368 "/usr/local/cuda/bin/../include/vector_types.h"
# 370 "/usr/local/cuda/bin/../include/vector_types.h"
# 372 "/usr/local/cuda/bin/../include/vector_types.h"
# 374 "/usr/local/cuda/bin/../include/vector_types.h"
# 376 "/usr/local/cuda/bin/../include/vector_types.h"
# 378 "/usr/local/cuda/bin/../include/vector_types.h"
# 380 "/usr/local/cuda/bin/../include/vector_types.h"
# 382 "/usr/local/cuda/bin/../include/vector_types.h"
# 384 "/usr/local/cuda/bin/../include/vector_types.h"
# 386 "/usr/local/cuda/bin/../include/vector_types.h"
# 388 "/usr/local/cuda/bin/../include/vector_types.h"
# 390 "/usr/local/cuda/bin/../include/vector_types.h"
# 392 "/usr/local/cuda/bin/../include/vector_types.h"
# 394 "/usr/local/cuda/bin/../include/vector_types.h"
# 396 "/usr/local/cuda/bin/../include/vector_types.h"
# 398 "/usr/local/cuda/bin/../include/vector_types.h"
# 400 "/usr/local/cuda/bin/../include/vector_types.h"
# 402 "/usr/local/cuda/bin/../include/vector_types.h"
# 404 "/usr/local/cuda/bin/../include/vector_types.h"
# 406 "/usr/local/cuda/bin/../include/vector_types.h"
# 408 "/usr/local/cuda/bin/../include/vector_types.h"
# 410 "/usr/local/cuda/bin/../include/vector_types.h"
# 412 "/usr/local/cuda/bin/../include/vector_types.h"
# 414 "/usr/local/cuda/bin/../include/vector_types.h"
# 416 "/usr/local/cuda/bin/../include/vector_types.h"
# 418 "/usr/local/cuda/bin/../include/vector_types.h"
# 420 "/usr/local/cuda/bin/../include/vector_types.h"
# 422 "/usr/local/cuda/bin/../include/vector_types.h"
# 424 "/usr/local/cuda/bin/../include/vector_types.h"
# 426 "/usr/local/cuda/bin/../include/vector_types.h"
# 428 "/usr/local/cuda/bin/../include/vector_types.h"
# 430 "/usr/local/cuda/bin/../include/vector_types.h"
# 432 "/usr/local/cuda/bin/../include/vector_types.h"
# 434 "/usr/local/cuda/bin/../include/vector_types.h"
# 436 "/usr/local/cuda/bin/../include/vector_types.h"
# 438 "/usr/local/cuda/bin/../include/vector_types.h"
# 440 "/usr/local/cuda/bin/../include/vector_types.h"
# 442 "/usr/local/cuda/bin/../include/vector_types.h"
# 444 "/usr/local/cuda/bin/../include/vector_types.h"
# 446 "/usr/local/cuda/bin/../include/vector_types.h"
# 448 "/usr/local/cuda/bin/../include/vector_types.h"
# 450 "/usr/local/cuda/bin/../include/vector_types.h"
# 452 "/usr/local/cuda/bin/../include/vector_types.h"
# 454 "/usr/local/cuda/bin/../include/vector_types.h"
# 456 "/usr/local/cuda/bin/../include/vector_types.h"
# 458 "/usr/local/cuda/bin/../include/vector_types.h"
# 460 "/usr/local/cuda/bin/../include/vector_types.h"
# 469 "/usr/local/cuda/bin/../include/vector_types.h"
# 480 "/usr/local/cuda/bin/../include/vector_types.h"
# 115 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 131 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 183 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit, size_t);
# 207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t *, cudaLimit);
# 237 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache *);
# 278 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache);
# 330 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 373 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 387 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 418 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 536 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 555 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 579 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 597 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int *, int);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned);
# 703 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 719 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 753 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t, cudaEvent_t, unsigned);
# 771 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 789 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 821 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 852 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, unsigned);
# 885 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t = 0);
# 914 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 966 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 1046 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0);
# 1073 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 1119 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char *, cudaFuncCache);
# 1154 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 1187 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 1209 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 1231 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 1263 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 1292 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 1331 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 1370 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0));
# 1394 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 1414 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 1436 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 1495 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
# 1522 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 1541 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned *, void *);
# 1576 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 1626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0));
# 1723 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 1828 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0);
# 1847 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t *, size_t *);
# 1880 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 1913 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 1946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 1981 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2023 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2064 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2105 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 2144 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 2213 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 2256 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2298 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2340 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2391 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2441 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2491 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2535 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2578 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2600 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 2626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 2665 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 2692 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void *, int, size_t, cudaStream_t = 0);
# 2724 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void *, size_t, int, size_t, size_t, cudaStream_t = 0);
# 2769 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr, int, cudaExtent, cudaStream_t = 0);
# 2796 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 2819 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 2865 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t);
# 2897 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t, unsigned);
# 2932 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2963 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2992 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource_t);
# 3026 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource_t, unsigned, unsigned);
# 3059 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 3094 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 3136 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 3179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
# 3207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3228 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 3253 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 3277 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 3310 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3328 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference **, const char *);
# 3355 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
# 3372 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 3377 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void **, const cudaUUID_t *);
# 93 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 94 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 95 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 96 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 98 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 99 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 100 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 102 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 103 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 105 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 106 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 107 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 109 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 110 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 112 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 113 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 114 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 117 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 119 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 120 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 121 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 124 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 126 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 127 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 128 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 133 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 135 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 137 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 138 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 139 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 141 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 142 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 144 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 145 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 146 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 148 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 149 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 151 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 152 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 153 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 158 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 159 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 160 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 165 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 166 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 167 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 170 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 172 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 173 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 174 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 179 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 180 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 181 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 184 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 186 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 187 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 188 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 191 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 193 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 194 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 195 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 197 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 198 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 200 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 201 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 202 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 204 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 205 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 207 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 208 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 209 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 214 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 215 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 216 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 221 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 222 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 223 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 226 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 228 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 229 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 230 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 235 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 236 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 237 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 240 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 242 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 243 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 244 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 247 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 249 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 250 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 251 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 253 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 254 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 256 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 257 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 258 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 260 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 261 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 263 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 264 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 265 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 270 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 271 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 272 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 277 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 278 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 279 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 282 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 284 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 285 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 286 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 291 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 292 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 293 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 296 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 298 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 299 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 300 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 303 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 365 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 366 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 367 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 369 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 370 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 372 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 373 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 374 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 376 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 377 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 379 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 380 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 381 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 384 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 386 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 387 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 388 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 391 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 65 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 66 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPitchedPtr s;
# 69 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ptr) = d;
# 70 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.pitch) = p;
# 71 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.xsize) = xsz;
# 72 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ysize) = ysz;
# 74 "/usr/local/cuda/bin/../include/driver_functions.h"
return s;
# 75 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 92 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 93 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 94 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPos p;
# 96 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.x) = x;
# 97 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.y) = y;
# 98 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.z) = z;
# 100 "/usr/local/cuda/bin/../include/driver_functions.h"
return p;
# 101 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 118 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 119 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 120 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaExtent e;
# 122 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.width) = w;
# 123 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.height) = h;
# 124 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.depth) = d;
# 126 "/usr/local/cuda/bin/../include/driver_functions.h"
return e;
# 127 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 55 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 56 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 57 "/usr/local/cuda/bin/../include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 58 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 61 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 62 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 63 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 65 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 66 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 68 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 70 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 71 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 72 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 73 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 75 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 76 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 77 "/usr/local/cuda/bin/../include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 78 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 80 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 81 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 82 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 83 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 85 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 86 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 87 "/usr/local/cuda/bin/../include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 88 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 90 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 91 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 92 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 93 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 95 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short1 make_short1(short x)
# 96 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 97 "/usr/local/cuda/bin/../include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 98 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 100 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 101 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 102 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 103 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 105 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 106 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 107 "/usr/local/cuda/bin/../include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 108 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 110 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 111 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 112 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 113 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 115 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 116 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 117 "/usr/local/cuda/bin/../include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 118 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 120 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 121 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 122 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 123 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 125 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 126 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 127 "/usr/local/cuda/bin/../include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 128 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 130 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 131 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 132 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 133 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 135 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int1 make_int1(int x)
# 136 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 137 "/usr/local/cuda/bin/../include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 138 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 140 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 141 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 142 "/usr/local/cuda/bin/../include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 143 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 145 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 146 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 147 "/usr/local/cuda/bin/../include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 148 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 150 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 151 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 152 "/usr/local/cuda/bin/../include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 153 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 155 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 156 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 157 "/usr/local/cuda/bin/../include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 158 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 160 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 161 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 162 "/usr/local/cuda/bin/../include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 163 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 165 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 166 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 167 "/usr/local/cuda/bin/../include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 168 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 170 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 171 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 172 "/usr/local/cuda/bin/../include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 173 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 175 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long1 make_long1(long x)
# 176 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 177 "/usr/local/cuda/bin/../include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 178 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 180 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 181 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 182 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 183 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 185 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 186 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 187 "/usr/local/cuda/bin/../include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 188 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 190 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 191 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 192 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 193 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 195 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 196 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 197 "/usr/local/cuda/bin/../include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 198 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 200 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 201 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 202 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 203 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 205 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 206 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 207 "/usr/local/cuda/bin/../include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 208 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 210 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 211 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 212 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 213 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 215 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
# 216 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 217 "/usr/local/cuda/bin/../include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 218 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 220 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 221 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 222 "/usr/local/cuda/bin/../include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 223 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 225 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 226 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 227 "/usr/local/cuda/bin/../include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 228 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 230 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 231 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 232 "/usr/local/cuda/bin/../include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 233 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 235 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 236 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 237 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 238 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 240 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 241 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 242 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 243 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 245 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 246 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 247 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 248 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 250 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 251 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 252 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 253 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 255 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 256 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 257 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 258 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 260 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 261 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 262 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 263 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 265 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 266 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 267 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 268 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 270 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 271 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 272 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 273 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 275 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double1 make_double1(double x)
# 276 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 277 "/usr/local/cuda/bin/../include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 278 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 280 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 281 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 282 "/usr/local/cuda/bin/../include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 283 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 285 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 286 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 287 "/usr/local/cuda/bin/../include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 288 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 290 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 291 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 292 "/usr/local/cuda/bin/../include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 293 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 44 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 49 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 57 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 65 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 68 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 75 "/usr/include/string.h" 3
extern void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 77 "/usr/include/string.h" 3
extern const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 104 "/usr/include/string.h" 3
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 106 "/usr/include/string.h" 3
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 115 "/usr/include/string.h" 3
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 117 "/usr/include/string.h" 3
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 128 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 131 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 139 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 143 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 146 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 150 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 153 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 43 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 168 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 175 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 183 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 215 "/usr/include/string.h" 3
extern char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 217 "/usr/include/string.h" 3
extern const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 242 "/usr/include/string.h" 3
extern char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 244 "/usr/include/string.h" 3
extern const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 271 "/usr/include/string.h" 3
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 273 "/usr/include/string.h" 3
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 288 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 294 "/usr/include/string.h" 3
extern char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 296 "/usr/include/string.h" 3
extern const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 321 "/usr/include/string.h" 3
extern char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 323 "/usr/include/string.h" 3
extern const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 391 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 455 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 469 "/usr/include/string.h" 3
extern char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 471 "/usr/include/string.h" 3
extern const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 497 "/usr/include/string.h" 3
extern char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 499 "/usr/include/string.h" 3
extern const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 530 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 536 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 540 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 547 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 551 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 566 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 569 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 571 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 576 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 579 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 586 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 590 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1)));
# 593 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1)));
# 601 "/usr/include/string.h" 3
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 603 "/usr/include/string.h" 3
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 60 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 76 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 92 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 104 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
long tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 183 "/usr/include/time.h" 3
extern "C" __attribute__((weak)) clock_t clock() throw();
# 186 "/usr/include/time.h" 3
extern "C" time_t time(time_t *) throw();
# 189 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));
# 193 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) throw();
# 199 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 207 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();
# 224 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 233 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();
# 237 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 248 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 255 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();
# 258 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *) throw();
# 266 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();
# 270 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 276 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 277 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 278 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 283 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 287 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 291 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 292 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 298 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();
# 316 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *) throw();
# 319 "/usr/include/time.h" 3
extern "C" int dysize(int) throw() __attribute__((__const__));
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);
# 333 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t, timespec *) throw();
# 336 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t, timespec *) throw();
# 339 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 347 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);
# 352 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();
# 357 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();
# 362 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t) throw();
# 365 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();
# 370 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t, itimerspec *) throw();
# 374 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t) throw();
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 57 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) clock_t clock() throw();
# 59 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 61 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memcpy(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 66 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 68 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 70 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 72 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__));
# 74 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__));
# 77 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int min(int, int);
# 79 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umin(unsigned, unsigned);
# 81 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmin(long long, long long);
# 83 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmin(unsigned long long, unsigned long long);
# 85 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fminf(float, float) throw();
# 87 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmin(double, double) throw();
# 90 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int max(int, int);
# 92 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umax(unsigned, unsigned);
# 94 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmax(long long, long long);
# 96 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmax(unsigned long long, unsigned long long);
# 98 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaxf(float, float) throw();
# 100 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmax(double, double) throw();
# 103 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sin(double) throw();
# 105 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinf(float) throw();
# 108 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cos(double) throw();
# 110 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cosf(float) throw();
# 113 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw();
# 115 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 118 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tan(double) throw();
# 120 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanf(float) throw();
# 123 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sqrt(double) throw();
# 125 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sqrtf(float) throw();
# 128 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rsqrt(double);
# 130 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rsqrtf(float);
# 133 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp2(double) throw();
# 135 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp2f(float) throw();
# 138 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp10(double) throw();
# 140 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 143 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double expm1(double) throw();
# 145 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expm1f(float) throw();
# 148 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log2(double) throw();
# 150 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log2f(float) throw();
# 153 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log10(double) throw();
# 155 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log10f(float) throw();
# 158 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log(double) throw();
# 160 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logf(float) throw();
# 163 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log1p(double) throw();
# 165 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log1pf(float) throw();
# 168 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__));
# 170 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__));
# 173 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp(double) throw();
# 175 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expf(float) throw();
# 178 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cosh(double) throw();
# 180 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float coshf(float) throw();
# 183 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinh(double) throw();
# 185 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinhf(float) throw();
# 188 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tanh(double) throw();
# 190 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanhf(float) throw();
# 193 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acosh(double) throw();
# 195 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acoshf(float) throw();
# 198 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asinh(double) throw();
# 200 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinhf(float) throw();
# 203 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atanh(double) throw();
# 205 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanhf(float) throw();
# 208 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ldexp(double, int) throw();
# 210 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ldexpf(float, int) throw();
# 213 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double logb(double) throw();
# 215 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logbf(float) throw();
# 218 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogb(double) throw();
# 220 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogbf(float) throw();
# 223 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbn(double, int) throw();
# 225 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalbnf(float, int) throw();
# 228 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbln(double, long) throw();
# 230 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalblnf(float, long) throw();
# 233 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double frexp(double, int *) throw();
# 235 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float frexpf(float, int *) throw();
# 238 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__));
# 240 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__));
# 243 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lround(double) throw();
# 245 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lroundf(float) throw();
# 248 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llround(double) throw();
# 250 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llroundf(float) throw();
# 253 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rint(double) throw();
# 255 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rintf(float) throw();
# 258 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrint(double) throw();
# 260 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrintf(float) throw();
# 263 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrint(double) throw();
# 265 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrintf(float) throw();
# 268 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nearbyint(double) throw();
# 270 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nearbyintf(float) throw();
# 273 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__));
# 275 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__));
# 278 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__));
# 280 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__));
# 283 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fdim(double, double) throw();
# 285 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fdimf(float, float) throw();
# 288 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan2(double, double) throw();
# 290 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atan2f(float, float) throw();
# 293 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan(double) throw();
# 295 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanf(float) throw();
# 298 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asin(double) throw();
# 300 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinf(float) throw();
# 303 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acos(double) throw();
# 305 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acosf(float) throw();
# 308 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double hypot(double, double) throw();
# 310 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float hypotf(float, float) throw();
# 313 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cbrt(double) throw();
# 315 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cbrtf(float) throw();
# 318 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rcbrt(double);
# 320 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rcbrtf(float);
# 323 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinpi(double);
# 325 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinpif(float);
# 328 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double pow(double, double) throw();
# 330 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 333 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double modf(double, double *) throw();
# 335 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float modff(float, float *) throw();
# 338 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmod(double, double) throw();
# 340 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmodf(float, float) throw();
# 343 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remainder(double, double) throw();
# 345 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remainderf(float, float) throw();
# 348 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw();
# 350 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw();
# 353 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erf(double) throw();
# 355 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erff(float) throw();
# 358 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfinv(double);
# 360 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfinvf(float);
# 363 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfc(double) throw();
# 365 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcf(float) throw();
# 368 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfcinv(double);
# 370 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcinvf(float);
# 373 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double lgamma(double) throw();
# 375 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float lgammaf(float) throw();
# 378 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tgamma(double) throw();
# 380 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tgammaf(float) throw();
# 383 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__));
# 385 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__));
# 388 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__));
# 390 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__));
# 393 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__));
# 395 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__));
# 398 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 400 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 403 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 405 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 419 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 421 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 423 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 428 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 431 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fma(double, double, double) throw();
# 433 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw();
# 441 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 443 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 445 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 455 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cosf(float) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinf(float) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanf(float) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expf(float) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logf(float) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log10f(float) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 203 "/usr/include/math.h" 3
enum {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL
# 214 "/usr/include/math.h" 3
};
# 302 "/usr/include/math.h" 3
extern "C" { typedef
# 296 "/usr/include/math.h" 3
enum {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_ = 0,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_
# 302 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 307 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 318 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 323 "/usr/include/math.h" 3
int type;
# 324 "/usr/include/math.h" 3
char *name;
# 325 "/usr/include/math.h" 3
double arg1;
# 326 "/usr/include/math.h" 3
double arg2;
# 327 "/usr/include/math.h" 3
double retval;
# 328 "/usr/include/math.h" 3
}; }
# 331 "/usr/include/math.h" 3
extern "C" int matherr(__exception *) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 34 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 45 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 49 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 56 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 61 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 66 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 71 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 76 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 81 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 87 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 94 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t; }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t; }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 77 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 79 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))];
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
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 229 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union {
# 154 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw() __attribute__((nonnull(2)));
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char *) throw() __attribute__((nonnull(1)));
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned, random_data *) throw() __attribute__((nonnull(2)));
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute__((nonnull(1)));
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw() __attribute__((nonnull(2)));
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw() __attribute__((__warn_unused_result__));
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void *) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));
# 508 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((nonnull(1)));
# 514 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 518 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1)));
# 525 "/usr/include/stdlib.h" 3
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1)));
# 536 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1)));
# 544 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 552 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__));
# 560 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 567 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw() __attribute__((nonnull(1)));
# 572 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char *) throw() __attribute__((nonnull(1)));
# 579 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw() __attribute__((nonnull(1)));
# 585 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2)));
# 589 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw() __attribute__((nonnull(1)));
# 596 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *) __attribute__((nonnull(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((nonnull(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char *, int) __attribute__((nonnull(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((nonnull(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw() __attribute__((nonnull(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int) __attribute__((nonnull(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((nonnull(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char *, int, int) __attribute__((nonnull(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((nonnull(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((nonnull(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5)));
# 761 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 771 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 772 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 776 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 785 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));
# 787 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 793 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw() __attribute__((nonnull(3)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((nonnull(3)));
# 838 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 860 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 863 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 867 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t) throw();
# 871 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 874 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 885 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw() __attribute__((nonnull(1)));
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 905 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1)));
# 913 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 921 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 925 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 930 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw();
# 937 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 941 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 948 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw() __attribute__((nonnull(1)));
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 71 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 74 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace std __attribute__((visibility("default"))) {
# 78 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 95 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.4/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 40 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(__type1() + __type2()) __type;
# 175 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2()) + __type3()) __type;
# 187 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3()) + __type4()) __type;
# 200 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 81 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.4/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.4/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.4/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.4/cmath" 3
using ::acos;
# 108 "/usr/include/c++/4.4/cmath" 3
inline float acos(float __x)
# 109 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosf(__x); }
# 112 "/usr/include/c++/4.4/cmath" 3
inline long double acos(long double __x)
# 113 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosl(__x); }
# 115 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 121 "/usr/include/c++/4.4/cmath" 3
using ::asin;
# 124 "/usr/include/c++/4.4/cmath" 3
inline float asin(float __x)
# 125 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinf(__x); }
# 128 "/usr/include/c++/4.4/cmath" 3
inline long double asin(long double __x)
# 129 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinl(__x); }
# 131 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 137 "/usr/include/c++/4.4/cmath" 3
using ::atan;
# 140 "/usr/include/c++/4.4/cmath" 3
inline float atan(float __x)
# 141 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanf(__x); }
# 144 "/usr/include/c++/4.4/cmath" 3
inline long double atan(long double __x)
# 145 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanl(__x); }
# 147 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 153 "/usr/include/c++/4.4/cmath" 3
using ::atan2;
# 156 "/usr/include/c++/4.4/cmath" 3
inline float atan2(float __y, float __x)
# 157 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 160 "/usr/include/c++/4.4/cmath" 3
inline long double atan2(long double __y, long double __x)
# 161 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 163 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 175 "/usr/include/c++/4.4/cmath" 3
using ::ceil;
# 178 "/usr/include/c++/4.4/cmath" 3
inline float ceil(float __x)
# 179 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceilf(__x); }
# 182 "/usr/include/c++/4.4/cmath" 3
inline long double ceil(long double __x)
# 183 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceill(__x); }
# 185 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 191 "/usr/include/c++/4.4/cmath" 3
using ::cos;
# 194 "/usr/include/c++/4.4/cmath" 3
inline float cos(float __x)
# 195 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosf(__x); }
# 198 "/usr/include/c++/4.4/cmath" 3
inline long double cos(long double __x)
# 199 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosl(__x); }
# 201 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 207 "/usr/include/c++/4.4/cmath" 3
using ::cosh;
# 210 "/usr/include/c++/4.4/cmath" 3
inline float cosh(float __x)
# 211 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshf(__x); }
# 214 "/usr/include/c++/4.4/cmath" 3
inline long double cosh(long double __x)
# 215 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshl(__x); }
# 217 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 223 "/usr/include/c++/4.4/cmath" 3
using ::exp;
# 226 "/usr/include/c++/4.4/cmath" 3
inline float exp(float __x)
# 227 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expf(__x); }
# 230 "/usr/include/c++/4.4/cmath" 3
inline long double exp(long double __x)
# 231 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expl(__x); }
# 233 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 239 "/usr/include/c++/4.4/cmath" 3
using ::fabs;
# 242 "/usr/include/c++/4.4/cmath" 3
inline float fabs(float __x)
# 243 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 246 "/usr/include/c++/4.4/cmath" 3
inline long double fabs(long double __x)
# 247 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 249 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 255 "/usr/include/c++/4.4/cmath" 3
using ::floor;
# 258 "/usr/include/c++/4.4/cmath" 3
inline float floor(float __x)
# 259 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorf(__x); }
# 262 "/usr/include/c++/4.4/cmath" 3
inline long double floor(long double __x)
# 263 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorl(__x); }
# 265 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 271 "/usr/include/c++/4.4/cmath" 3
using ::fmod;
# 274 "/usr/include/c++/4.4/cmath" 3
inline float fmod(float __x, float __y)
# 275 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 278 "/usr/include/c++/4.4/cmath" 3
inline long double fmod(long double __x, long double __y)
# 279 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 281 "/usr/include/c++/4.4/cmath" 3
using ::frexp;
# 284 "/usr/include/c++/4.4/cmath" 3
inline float frexp(float __x, int *__exp)
# 285 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 288 "/usr/include/c++/4.4/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 289 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 291 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 297 "/usr/include/c++/4.4/cmath" 3
using ::ldexp;
# 300 "/usr/include/c++/4.4/cmath" 3
inline float ldexp(float __x, int __exp)
# 301 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 304 "/usr/include/c++/4.4/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 305 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 307 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 313 "/usr/include/c++/4.4/cmath" 3
using ::log;
# 316 "/usr/include/c++/4.4/cmath" 3
inline float log(float __x)
# 317 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logf(__x); }
# 320 "/usr/include/c++/4.4/cmath" 3
inline long double log(long double __x)
# 321 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logl(__x); }
# 323 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 329 "/usr/include/c++/4.4/cmath" 3
using ::log10;
# 332 "/usr/include/c++/4.4/cmath" 3
inline float log10(float __x)
# 333 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10f(__x); }
# 336 "/usr/include/c++/4.4/cmath" 3
inline long double log10(long double __x)
# 337 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10l(__x); }
# 339 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 345 "/usr/include/c++/4.4/cmath" 3
using ::modf;
# 348 "/usr/include/c++/4.4/cmath" 3
inline float modf(float __x, float *__iptr)
# 349 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 352 "/usr/include/c++/4.4/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 353 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 355 "/usr/include/c++/4.4/cmath" 3
using ::pow;
# 358 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, float __y)
# 359 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powf(__x, __y); }
# 362 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, long double __y)
# 363 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powl(__x, __y); }
# 369 "/usr/include/c++/4.4/cmath" 3
inline double pow(double __x, int __i)
# 370 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powi(__x, __i); }
# 373 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, int __n)
# 374 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powif(__x, __n); }
# 377 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, int __n)
# 378 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powil(__x, __n); }
# 381 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 393 "/usr/include/c++/4.4/cmath" 3
using ::sin;
# 396 "/usr/include/c++/4.4/cmath" 3
inline float sin(float __x)
# 397 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinf(__x); }
# 400 "/usr/include/c++/4.4/cmath" 3
inline long double sin(long double __x)
# 401 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinl(__x); }
# 403 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 409 "/usr/include/c++/4.4/cmath" 3
using ::sinh;
# 412 "/usr/include/c++/4.4/cmath" 3
inline float sinh(float __x)
# 413 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhf(__x); }
# 416 "/usr/include/c++/4.4/cmath" 3
inline long double sinh(long double __x)
# 417 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhl(__x); }
# 419 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 425 "/usr/include/c++/4.4/cmath" 3
using ::sqrt;
# 428 "/usr/include/c++/4.4/cmath" 3
inline float sqrt(float __x)
# 429 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtf(__x); }
# 432 "/usr/include/c++/4.4/cmath" 3
inline long double sqrt(long double __x)
# 433 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtl(__x); }
# 435 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 441 "/usr/include/c++/4.4/cmath" 3
using ::tan;
# 444 "/usr/include/c++/4.4/cmath" 3
inline float tan(float __x)
# 445 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanf(__x); }
# 448 "/usr/include/c++/4.4/cmath" 3
inline long double tan(long double __x)
# 449 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanl(__x); }
# 451 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 457 "/usr/include/c++/4.4/cmath" 3
using ::tanh;
# 460 "/usr/include/c++/4.4/cmath" 3
inline float tanh(float __x)
# 461 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhf(__x); }
# 464 "/usr/include/c++/4.4/cmath" 3
inline long double tanh(long double __x)
# 465 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhl(__x); }
# 467 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 473 "/usr/include/c++/4.4/cmath" 3
}
# 492 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 494 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 504 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 513 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 522 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 531 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 540 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 549 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 558 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 567 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 576 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 585 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 594 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 603 "/usr/include/c++/4.4/cmath" 3
}
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {
# 37 "/usr/include/c++/4.4/bits/cmath.tcc" 3
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
# 53 "/usr/include/c++/4.4/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.4/cstddef" 3
namespace std __attribute__((visibility("default"))) {
# 51 "/usr/include/c++/4.4/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.4/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.4/cstddef" 3
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 102 "/usr/include/c++/4.4/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.4/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.4/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.4/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.4/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.4/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.4/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.4/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.4/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.4/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.4/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.4/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.4/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.4/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.4/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.4/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.4/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.4/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.4/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.4/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.4/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.4/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.4/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.4/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.4/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.4/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.4/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.4/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.4/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.4/cstdlib" 3
}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 160 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.4/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.4/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.4/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.4/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.4/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.4/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.4/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.4/cstdlib" 3
}
# 199 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 202 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.4/cstdlib" 3
}
# 497 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {
# 499 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long long abs(long long) __attribute__((visibility("default")));
# 500 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 502 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 504 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 505 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 506 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 508 "/usr/local/cuda/bin/../include/math_functions.h"
using std::abs;
# 509 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fabs;
# 510 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ceil;
# 511 "/usr/local/cuda/bin/../include/math_functions.h"
using std::floor;
# 512 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sqrt;
# 513 "/usr/local/cuda/bin/../include/math_functions.h"
using std::pow;
# 514 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log;
# 515 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log10;
# 516 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fmod;
# 517 "/usr/local/cuda/bin/../include/math_functions.h"
using std::modf;
# 518 "/usr/local/cuda/bin/../include/math_functions.h"
using std::exp;
# 519 "/usr/local/cuda/bin/../include/math_functions.h"
using std::frexp;
# 520 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ldexp;
# 521 "/usr/local/cuda/bin/../include/math_functions.h"
using std::asin;
# 522 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sin;
# 523 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sinh;
# 524 "/usr/local/cuda/bin/../include/math_functions.h"
using std::acos;
# 525 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cos;
# 526 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cosh;
# 527 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan;
# 528 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan2;
# 529 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tan;
# 530 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tanh;
# 584 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 587 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long abs(long) __attribute__((visibility("default")));
# 588 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float abs(float) __attribute__((visibility("default")));
# 589 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double abs(double) __attribute__((visibility("default")));
# 590 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fabs(float) __attribute__((visibility("default")));
# 591 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ceil(float) __attribute__((visibility("default")));
# 592 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float floor(float) __attribute__((visibility("default")));
# 593 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sqrt(float) __attribute__((visibility("default")));
# 594 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, float) __attribute__((visibility("default")));
# 595 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, int) __attribute__((visibility("default")));
# 596 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double pow(double, int) __attribute__((visibility("default")));
# 597 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log(float) __attribute__((visibility("default")));
# 598 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log10(float) __attribute__((visibility("default")));
# 599 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fmod(float, float) __attribute__((visibility("default")));
# 600 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float modf(float, float *) __attribute__((visibility("default")));
# 601 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float exp(float) __attribute__((visibility("default")));
# 602 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float frexp(float, int *) __attribute__((visibility("default")));
# 603 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ldexp(float, int) __attribute__((visibility("default")));
# 604 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float asin(float) __attribute__((visibility("default")));
# 605 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sin(float) __attribute__((visibility("default")));
# 606 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sinh(float) __attribute__((visibility("default")));
# 607 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float acos(float) __attribute__((visibility("default")));
# 608 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cos(float) __attribute__((visibility("default")));
# 609 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cosh(float) __attribute__((visibility("default")));
# 610 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan(float) __attribute__((visibility("default")));
# 611 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan2(float, float) __attribute__((visibility("default")));
# 612 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tan(float) __attribute__((visibility("default")));
# 613 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tanh(float) __attribute__((visibility("default")));
# 616 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 619 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float logb(float a)
# 620 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 621 "/usr/local/cuda/bin/../include/math_functions.h"
return logbf(a);
# 622 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 624 "/usr/local/cuda/bin/../include/math_functions.h"
static inline int ilogb(float a)
# 625 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 626 "/usr/local/cuda/bin/../include/math_functions.h"
return ilogbf(a);
# 627 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 629 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbn(float a, int b)
# 630 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 631 "/usr/local/cuda/bin/../include/math_functions.h"
return scalbnf(a, b);
# 632 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 634 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbln(float a, long b)
# 635 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 636 "/usr/local/cuda/bin/../include/math_functions.h"
return scalblnf(a, b);
# 637 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 639 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp2(float a)
# 640 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 641 "/usr/local/cuda/bin/../include/math_functions.h"
return exp2f(a);
# 642 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 644 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp10(float a)
# 645 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 646 "/usr/local/cuda/bin/../include/math_functions.h"
return exp10f(a);
# 647 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 649 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float expm1(float a)
# 650 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 651 "/usr/local/cuda/bin/../include/math_functions.h"
return expm1f(a);
# 652 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 654 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log2(float a)
# 655 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 656 "/usr/local/cuda/bin/../include/math_functions.h"
return log2f(a);
# 657 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 659 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log1p(float a)
# 660 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 661 "/usr/local/cuda/bin/../include/math_functions.h"
return log1pf(a);
# 662 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 664 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rsqrt(float a)
# 665 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 666 "/usr/local/cuda/bin/../include/math_functions.h"
return rsqrtf(a);
# 667 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 669 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float acosh(float a)
# 670 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 671 "/usr/local/cuda/bin/../include/math_functions.h"
return acoshf(a);
# 672 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 674 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float asinh(float a)
# 675 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 676 "/usr/local/cuda/bin/../include/math_functions.h"
return asinhf(a);
# 677 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 679 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float atanh(float a)
# 680 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 681 "/usr/local/cuda/bin/../include/math_functions.h"
return atanhf(a);
# 682 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 684 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float hypot(float a, float b)
# 685 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 686 "/usr/local/cuda/bin/../include/math_functions.h"
return hypotf(a, b);
# 687 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 689 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float cbrt(float a)
# 690 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 691 "/usr/local/cuda/bin/../include/math_functions.h"
return cbrtf(a);
# 692 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 694 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rcbrt(float a)
# 695 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 696 "/usr/local/cuda/bin/../include/math_functions.h"
return rcbrtf(a);
# 697 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 699 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float sinpi(float a)
# 700 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 701 "/usr/local/cuda/bin/../include/math_functions.h"
return sinpif(a);
# 702 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 704 "/usr/local/cuda/bin/../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 705 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 706 "/usr/local/cuda/bin/../include/math_functions.h"
sincosf(a, sptr, cptr);
# 707 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 709 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erf(float a)
# 710 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 711 "/usr/local/cuda/bin/../include/math_functions.h"
return erff(a);
# 712 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 714 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfinv(float a)
# 715 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 716 "/usr/local/cuda/bin/../include/math_functions.h"
return erfinvf(a);
# 717 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 719 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfc(float a)
# 720 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 721 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcf(a);
# 722 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 724 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfcinv(float a)
# 725 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 726 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcinvf(a);
# 727 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 729 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float lgamma(float a)
# 730 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 731 "/usr/local/cuda/bin/../include/math_functions.h"
return lgammaf(a);
# 732 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 734 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float tgamma(float a)
# 735 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 736 "/usr/local/cuda/bin/../include/math_functions.h"
return tgammaf(a);
# 737 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 739 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, float b)
# 740 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 741 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, b);
# 742 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 744 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double copysign(double a, float b)
# 745 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 746 "/usr/local/cuda/bin/../include/math_functions.h"
return copysign(a, (double)b);
# 747 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 749 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, double b)
# 750 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 751 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, (float)b);
# 752 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 754 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nextafter(float a, float b)
# 755 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 756 "/usr/local/cuda/bin/../include/math_functions.h"
return nextafterf(a, b);
# 757 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 759 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remainder(float a, float b)
# 760 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 761 "/usr/local/cuda/bin/../include/math_functions.h"
return remainderf(a, b);
# 762 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 764 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 765 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 766 "/usr/local/cuda/bin/../include/math_functions.h"
return remquof(a, b, quo);
# 767 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 769 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float round(float a)
# 770 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 771 "/usr/local/cuda/bin/../include/math_functions.h"
return roundf(a);
# 772 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 774 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lround(float a)
# 775 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 776 "/usr/local/cuda/bin/../include/math_functions.h"
return lroundf(a);
# 777 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 779 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llround(float a)
# 780 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 781 "/usr/local/cuda/bin/../include/math_functions.h"
return llroundf(a);
# 782 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 784 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float trunc(float a)
# 785 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 786 "/usr/local/cuda/bin/../include/math_functions.h"
return truncf(a);
# 787 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 789 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rint(float a)
# 790 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 791 "/usr/local/cuda/bin/../include/math_functions.h"
return rintf(a);
# 792 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 794 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lrint(float a)
# 795 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 796 "/usr/local/cuda/bin/../include/math_functions.h"
return lrintf(a);
# 797 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 799 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llrint(float a)
# 800 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 801 "/usr/local/cuda/bin/../include/math_functions.h"
return llrintf(a);
# 802 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 804 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nearbyint(float a)
# 805 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 806 "/usr/local/cuda/bin/../include/math_functions.h"
return nearbyintf(a);
# 807 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 809 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fdim(float a, float b)
# 810 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 811 "/usr/local/cuda/bin/../include/math_functions.h"
return fdimf(a, b);
# 812 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 814 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 815 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 816 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaf(a, b, c);
# 817 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 819 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmax(float a, float b)
# 820 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 821 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 822 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 824 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmin(float a, float b)
# 825 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 826 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 827 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 829 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 830 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 831 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, b);
# 832 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 834 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 835 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 836 "/usr/local/cuda/bin/../include/math_functions.h"
return umin((unsigned)a, b);
# 837 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 839 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 840 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 841 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, (unsigned)b);
# 842 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 844 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long min(long long a, long long b)
# 845 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 846 "/usr/local/cuda/bin/../include/math_functions.h"
return llmin(a, b);
# 847 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 849 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 850 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 851 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, b);
# 852 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 854 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 855 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 856 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 857 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 859 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 860 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 861 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 862 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 864 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float min(float a, float b)
# 865 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 866 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 867 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 869 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, double b)
# 870 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 871 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, b);
# 872 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 874 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(float a, double b)
# 875 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 876 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin((double)a, b);
# 877 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 879 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, float b)
# 880 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 881 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, (double)b);
# 882 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 884 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 885 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 886 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, b);
# 887 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 889 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 890 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 891 "/usr/local/cuda/bin/../include/math_functions.h"
return umax((unsigned)a, b);
# 892 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 894 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 895 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 896 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, (unsigned)b);
# 897 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 899 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long max(long long a, long long b)
# 900 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 901 "/usr/local/cuda/bin/../include/math_functions.h"
return llmax(a, b);
# 902 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 904 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 905 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 906 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, b);
# 907 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 909 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 910 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 911 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 912 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 914 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 915 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 916 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 917 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 919 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float max(float a, float b)
# 920 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 921 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 922 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 924 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, double b)
# 925 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 926 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, b);
# 927 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 929 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(float a, double b)
# 930 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 931 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax((double)a, b);
# 932 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 934 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, float b)
# 935 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 936 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, (double)b);
# 937 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1>
# 61 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 63 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 64 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 65 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 66 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 68 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 69 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 70 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = desc;
# 71 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 72 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 75 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< int dim>
# 76 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 78 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 79 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 81 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 82 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 60 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
template< class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 61 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
struct texture : public textureReference {
# 63 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 64 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 65 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 66 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 67 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 68 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 69 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 70 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 71 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 72 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 73 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 75 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 76 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 77 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 78 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
desc)
# 79 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 81 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 82 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 83 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 84 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 85 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = desc;
# 86 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 87 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
};
# 324 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 325 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 327 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 329 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 330 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 332 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 334 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 335 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 337 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 339 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 340 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 342 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 344 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 345 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 347 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 349 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 350 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 352 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 354 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 355 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 357 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 359 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 360 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 365 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 367 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 369 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 370 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 372 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 374 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 375 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 377 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 379 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 380 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 382 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 384 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 385 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 390 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 392 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 394 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c)
# 395 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 397 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 399 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 400 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 404 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 405 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 422 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 424 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 425 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 430 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 438 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 446 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 453 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 454 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 459 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 102 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 103 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 105 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 107 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 108 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 113 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 115 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 117 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 118 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 120 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 122 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 123 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 125 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 127 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 128 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 130 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 132 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 133 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 135 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 138 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 142 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 143 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 147 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 148 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 150 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 152 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 153 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 155 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 157 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 158 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 162 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 163 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 168 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 170 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 172 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 173 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 175 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 178 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 182 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 183 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 185 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 187 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 188 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 190 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 192 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 193 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 195 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 197 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 198 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 203 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 205 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 75 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 76 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 78 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 80 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 81 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 83 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 85 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 86 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 88 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 90 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 91 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 93 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 95 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 96 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 98 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 170 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 171 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 176 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 178 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 179 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 184 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 186 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 187 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 194 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 195 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 203 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 208 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 210 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 211 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 216 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 218 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 219 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 224 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 226 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 227 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 234 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 235 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 240 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 242 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 243 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 245 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 248 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 252 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 253 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 66 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 67 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
{int volatile ___ = 1;
# 69 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
exit(___);}
# 124 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 125 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 127 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 129 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 130 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 132 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 134 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 135 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 137 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 139 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 140 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 142 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 97 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 98 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 99 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 106 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 108 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 109 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 110 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 116 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 118 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 119 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 120 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 122 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 125 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 126 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 128 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 131 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 132 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 134 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 138 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 143 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 144 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 146 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 149 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 155 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 156 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 163 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 164 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 166 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 169 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 174 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 178 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 183 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 184 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 189 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 196 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 198 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 201 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 202 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 204 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 207 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 208 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 216 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 218 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 221 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 222 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 226 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 235 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 236 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 238 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 241 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 242 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 244 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 248 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 253 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 254 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 256 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 259 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 264 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 267 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 268 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 270 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 273 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 274 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 278 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 281 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 282 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 284 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 287 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 288 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 290 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 293 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 294 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 296 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 299 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 300 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 302 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 305 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 306 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 308 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 311 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 312 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 316 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 319 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 320 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 322 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 385 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 386 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 388 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 391 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 392 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 394 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 398 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 406 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 410 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 457 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 458 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 459 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 466 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 468 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 469 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 470 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 476 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 478 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 479 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 480 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 482 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 485 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 486 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 488 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 492 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 494 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 497 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 498 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 500 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 503 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 504 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 506 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 509 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 510 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 512 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 516 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 520 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 523 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 524 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 526 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 530 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 534 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 537 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 538 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 540 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 543 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 544 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 546 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 549 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 550 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 555 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 556 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 558 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 562 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 564 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 567 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 568 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 572 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 576 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 578 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 581 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 582 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 586 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 590 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 592 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 595 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 596 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 598 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 601 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 602 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 604 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 607 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 608 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 610 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 613 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 614 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 616 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 619 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 620 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 624 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 627 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 628 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 630 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 633 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 634 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 638 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 641 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 642 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 644 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 647 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 648 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 650 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 653 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 654 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 659 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 660 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 662 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 665 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 666 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 668 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 672 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 679 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 680 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 682 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 745 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 746 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 748 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 751 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 752 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 754 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 757 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 758 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 762 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 765 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 766 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 770 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 817 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 818 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 819 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 837 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 839 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 840 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 841 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 843 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 846 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 847 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 849 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 851 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 852 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 854 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 856 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 857 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 859 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 861 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 862 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 864 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 866 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 867 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 869 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 871 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 872 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 877 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 879 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 881 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 882 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 884 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 886 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 887 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 889 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 891 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 892 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 894 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 896 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 897 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 899 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 901 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 902 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 904 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 906 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 907 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 909 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 911 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 912 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 914 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 916 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 917 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 919 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 921 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 922 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 924 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 926 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 927 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 929 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 931 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 932 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 934 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 936 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 937 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 939 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 941 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 942 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 947 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 949 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 951 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 952 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 954 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 956 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 957 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 959 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 961 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 962 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 964 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 966 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 967 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 969 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 971 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 972 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 974 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 976 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 977 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 979 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 981 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 982 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 984 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 986 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 987 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 989 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 991 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 992 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 994 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 996 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 997 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 999 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1045 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1046 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1048 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1050 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1051 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1053 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1055 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1056 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1058 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1060 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1061 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1063 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1110 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1111 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1112 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1130 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1132 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1133 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1134 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1136 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1139 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1140 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1142 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1144 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1145 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1147 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1149 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1155 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1157 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1159 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1160 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1162 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1164 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1165 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1167 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1169 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1172 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1174 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1175 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1177 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1179 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1180 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1182 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1184 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1185 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1187 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1189 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1194 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1195 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1197 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1199 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1200 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1202 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1204 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1205 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1207 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1209 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1210 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1214 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1215 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1217 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1219 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1220 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1222 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1224 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1225 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1227 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1229 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1234 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1235 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1237 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1239 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1240 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1242 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1244 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1245 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1247 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1249 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1250 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1255 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1257 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1259 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1262 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1264 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1265 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1267 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1269 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1270 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1272 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1274 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1275 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1277 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1279 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1280 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1282 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1284 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1285 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1287 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1289 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1290 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1292 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1338 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1339 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1341 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1343 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1344 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1346 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1348 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1349 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1351 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1353 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1354 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1356 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 61 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4);
# 63 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4);
# 65 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4);
# 68 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int = dim);
# 70 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, dim, readMode> , float4, int = dim);
# 72 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int = dim);
# 80 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 81 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 89 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 91 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 92 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 96 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 98 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 99 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 103 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 113 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 153 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 158 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 160 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 172 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 174 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 175 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 179 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 181 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 182 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 188 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 189 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 193 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 196 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 203 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 207 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 216 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 220 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 222 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 223 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 227 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 230 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 234 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 236 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 237 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 241 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 243 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 244 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 250 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 251 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 257 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 258 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 264 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 265 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 343 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 344 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 348 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 351 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 357 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 358 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 365 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 378 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 390 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 398 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 406 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 413 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 414 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 421 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 422 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 430 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 438 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 446 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 460 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 467 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 468 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 475 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 476 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 481 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 483 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 489 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 492 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 497 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 499 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 500 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 505 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 508 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 516 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 530 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 538 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 540 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 545 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 547 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 554 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 559 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 562 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 566 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 602 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 607 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 609 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 614 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 616 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 621 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 623 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 624 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 628 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 630 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 631 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 635 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 637 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 638 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 642 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 644 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 645 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 649 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 651 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 652 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 664 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 665 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 669 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 672 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 678 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 679 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 683 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 685 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 686 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 690 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 692 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 693 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 699 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 700 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 706 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 707 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 713 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 714 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 803 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 805 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 806 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 810 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 817 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 819 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 824 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 832 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 833 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 877 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 882 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 884 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 885 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 890 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 892 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 893 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 898 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 900 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 901 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 906 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 914 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 915 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 920 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 922 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 923 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 928 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 931 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 936 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 938 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 939 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 947 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 952 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 963 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 968 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 971 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 976 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 993 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 996 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1003 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1016 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1021 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1023 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1028 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1031 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1038 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1058 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1071 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1076 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1078 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1083 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1086 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1093 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1111 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1147 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1148 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1155 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1159 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1162 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1166 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1169 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1173 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1247 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1259 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1261 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1266 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1268 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1273 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1281 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1282 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1291 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1293 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1294 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1299 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1301 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1302 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1307 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1309 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1310 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1315 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1317 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1318 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1323 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1325 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1326 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1331 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1333 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1334 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1339 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1341 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1342 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1347 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1349 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1363 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1371 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1372 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1379 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1380 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1385 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1388 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1393 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1396 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1401 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1404 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1409 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1412 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1417 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1420 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1425 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1433 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1434 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1442 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1444 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1449 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1452 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1456 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1458 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1463 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1466 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1470 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1472 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1477 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1479 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1480 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1486 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1487 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1493 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1494 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1498 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1506 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1511 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1514 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1518 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1520 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1525 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1527 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1528 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1532 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1534 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1535 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1539 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1542 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1546 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1549 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1553 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1556 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1560 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1596 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1597 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1601 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1604 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1608 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1611 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1615 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1618 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1622 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1696 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1701 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1703 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1708 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1710 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1715 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1717 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1722 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1730 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1731 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1740 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1742 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1743 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1748 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1750 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1751 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1756 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1758 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1759 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1764 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1766 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1767 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1772 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1774 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1775 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1780 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1782 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1783 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1788 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1790 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1791 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1796 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1804 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1818 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1821 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1826 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1828 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1829 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1834 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1836 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1837 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern int4 __itex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1932 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern uint4 __utex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1934 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern float4 __ftex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1957 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1959 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1964 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1965 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1967 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1969 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1972 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1974 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1975 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1977 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1979 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1980 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1982 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1987 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1989 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1990 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1992 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1994 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1997 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1999 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2004 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2005 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2012 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2015 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2019 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2020 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2022 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2025 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2027 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2029 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2032 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2034 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2039 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2040 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2047 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2050 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2052 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2054 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2055 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2059 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2060 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2067 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2070 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2074 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2075 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2077 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2080 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2082 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2084 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2087 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2089 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2094 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2095 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2102 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2109 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2114 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2115 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2122 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2125 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2129 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2130 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2132 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 53 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 55 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 57 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 59 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 61 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 106 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 107 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaSetupArgument(T
# 108 "/usr/local/cuda/bin/../include/cuda_runtime.h"
arg, size_t
# 109 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset)
# 111 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 112 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 113 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 145 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 146 "/usr/local/cuda/bin/../include/cuda_runtime.h"
event, unsigned
# 147 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 149 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 150 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, 0);
# 151 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 208 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 209 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 210 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 211 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 213 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 214 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 215 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 217 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 218 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostAlloc(T **
# 219 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 220 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 221 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 223 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 224 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 225 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 227 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 228 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 229 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pDevice, void *
# 230 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pHost, unsigned
# 231 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 233 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 234 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 235 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 237 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 238 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMalloc(T **
# 239 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 240 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size)
# 242 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 243 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 244 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 246 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 247 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocHost(T **
# 248 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 249 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 250 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags = (0))
# 252 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 253 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 254 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 256 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 257 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocPitch(T **
# 258 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t *
# 259 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch, size_t
# 260 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 261 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height)
# 263 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 264 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 265 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 275 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 276 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 277 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 278 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 279 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 280 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 282 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 283 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 284 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 286 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 287 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 288 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 289 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 290 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 291 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 292 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 294 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 295 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 296 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 298 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 299 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 300 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 301 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 302 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 303 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 304 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 306 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 307 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 308 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 310 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 311 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 312 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 313 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 314 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 315 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 316 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 317 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 319 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 320 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 321 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 329 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 330 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 331 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 332 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 333 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 334 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 336 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 337 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 338 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 340 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 341 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 342 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 343 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 344 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 345 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 346 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 348 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 349 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 350 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 352 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 353 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 354 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 355 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 356 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 357 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 358 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 360 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 361 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 362 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 364 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 365 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 366 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 367 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 368 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 369 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 370 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 371 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 373 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 374 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 375 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 377 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 378 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, char *
# 379 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 381 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 382 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 383 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 410 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 411 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 412 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const T &
# 413 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 415 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 416 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 417 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 425 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 426 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, char *
# 427 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 429 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 430 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 431 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 458 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 459 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 460 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, const T &
# 461 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 463 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 464 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 465 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 507 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 508 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 509 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 510 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 511 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 512 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 513 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 515 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 516 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 517 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 552 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 553 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 554 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 555 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 556 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 557 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 559 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 560 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 561 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 608 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 609 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 610 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 611 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 612 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 613 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 614 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 615 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 616 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 618 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 619 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 620 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 666 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 667 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 668 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 669 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 670 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 671 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 672 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 673 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 675 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 676 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 708 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 709 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 710 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 711 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 712 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 714 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 715 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 716 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 746 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 747 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 748 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 749 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 751 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 752 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 753 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 755 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 756 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 785 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 786 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 787 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 789 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 790 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 791 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 825 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 826 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 827 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 828 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 830 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 831 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 832 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 886 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 887 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 888 "/usr/local/cuda/bin/../include/cuda_runtime.h"
func, cudaFuncCache
# 889 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cacheConfig)
# 891 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 892 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 893 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 930 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 931 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaLaunch(T *
# 932 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 934 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 935 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 936 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 970 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 971 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 972 "/usr/local/cuda/bin/../include/cuda_runtime.h"
attr, T *
# 973 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 975 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 976 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 977 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 999 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1000 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1001 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1002 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1003 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 1005 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1006 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 1028 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1029 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1030 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1031 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 1033 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1034 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1035 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1037 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1038 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 43 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
static float softeningSquared;
# 52 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
__attribute__((unused)) float3 bodyBodyInteraction(float3 ai, float4 bi, float4 bj)
# 53 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
{int volatile ___ = 1;
# 81 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
exit(___);}
# 85 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
__attribute__((unused)) float3 gravitation(float4 myPos, float3 accel)
# 86 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
{int volatile ___ = 1;
# 131 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
exit(___);}
# 139 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
template< bool multithreadBodies> __attribute__((unused)) float3
# 141 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
computeBodyAccel(float4 bodyPos, float4 *positions, int numBodies)
# 142 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
{int volatile ___ = 1;
# 200 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
exit(___);}
# 202 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
template< bool multithreadBodies> static void
# 204 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
__wrapper__device_stub_integrateBodies(float4 *&newPos, float4 *&newVel, float4 *&
# 205 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
oldPos, float4 *&oldVel, float &
# 206 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
deltaTime, float &damping, int &
# 207 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
numBodies) ;
# 202 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
template< bool multithreadBodies> void
# 204 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
integrateBodies(float4 *newPos, float4 *newVel, float4 *
# 205 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
oldPos, float4 *oldVel, float
# 206 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
deltaTime, float damping, int
# 207 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
numBodies)
# 208 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
{__wrapper__device_stub_integrateBodies<multithreadBodies>(newPos,newVel,oldPos,oldVel,deltaTime,damping,numBodies);
# 236 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/nbody_kernel.cu"
}
# 128 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef unsigned long long CUdeviceptr; }
# 135 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef int CUdevice; }
# 136 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUctx_st *CUcontext; }
# 137 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUmod_st *CUmodule; }
# 138 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUfunc_st *CUfunction; }
# 139 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUarray_st *CUarray; }
# 140 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUtexref_st *CUtexref; }
# 141 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUsurfref_st *CUsurfref; }
# 142 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef CUevent_st *CUevent; }
# 143 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef CUstream_st *CUstream; }
# 144 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUgraphicsResource_st *CUgraphicsResource; }
# 148 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 146 "/usr/local/cuda/bin/../include/cuda.h"
struct CUuuid_st {
# 147 "/usr/local/cuda/bin/../include/cuda.h"
char bytes[16];
# 148 "/usr/local/cuda/bin/../include/cuda.h"
} CUuuid; }
# 162 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 153 "/usr/local/cuda/bin/../include/cuda.h"
enum CUctx_flags_enum {
# 154 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_AUTO,
# 155 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_SPIN,
# 156 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_YIELD,
# 157 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_MASK,
# 158 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_BLOCKING_SYNC,
# 159 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_MAP_HOST = 8,
# 160 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_LMEM_RESIZE_TO_MAX = 16,
# 161 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_FLAGS_MASK = 31
# 162 "/usr/local/cuda/bin/../include/cuda.h"
} CUctx_flags; }
# 171 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 167 "/usr/local/cuda/bin/../include/cuda.h"
enum CUevent_flags_enum {
# 168 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_DEFAULT,
# 169 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_BLOCKING_SYNC,
# 170 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_DISABLE_TIMING
# 171 "/usr/local/cuda/bin/../include/cuda.h"
} CUevent_flags; }
# 185 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 176 "/usr/local/cuda/bin/../include/cuda.h"
enum CUarray_format_enum {
# 177 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
# 178 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT16,
# 179 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT32,
# 180 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT8 = 8,
# 181 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT16,
# 182 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT32,
# 183 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_HALF = 16,
# 184 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_FLOAT = 32
# 185 "/usr/local/cuda/bin/../include/cuda.h"
} CUarray_format; }
# 195 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 190 "/usr/local/cuda/bin/../include/cuda.h"
enum CUaddress_mode_enum {
# 191 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_WRAP,
# 192 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_CLAMP,
# 193 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_MIRROR,
# 194 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_BORDER
# 195 "/usr/local/cuda/bin/../include/cuda.h"
} CUaddress_mode; }
# 203 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 200 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfilter_mode_enum {
# 201 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_FILTER_MODE_POINT,
# 202 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_FILTER_MODE_LINEAR
# 203 "/usr/local/cuda/bin/../include/cuda.h"
} CUfilter_mode; }
# 246 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 208 "/usr/local/cuda/bin/../include/cuda.h"
enum CUdevice_attribute_enum {
# 209 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
# 210 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
# 211 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
# 212 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
# 213 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
# 214 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
# 215 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
# 216 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
# 217 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
# 218 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
# 219 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
# 220 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
# 221 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
# 222 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
# 223 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
# 224 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
# 225 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
# 226 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
# 227 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
# 228 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_INTEGRATED,
# 229 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
# 230 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE,
# 231 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH,
# 232 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH,
# 233 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT,
# 234 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH,
# 235 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT,
# 236 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH,
# 237 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH,
# 238 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT,
# 239 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES,
# 240 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT,
# 241 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS,
# 242 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_ECC_ENABLED,
# 243 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID,
# 244 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID,
# 245 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TCC_DRIVER
# 246 "/usr/local/cuda/bin/../include/cuda.h"
} CUdevice_attribute; }
# 262 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 251 "/usr/local/cuda/bin/../include/cuda.h"
struct CUdevprop_st {
# 252 "/usr/local/cuda/bin/../include/cuda.h"
int maxThreadsPerBlock;
# 253 "/usr/local/cuda/bin/../include/cuda.h"
int maxThreadsDim[3];
# 254 "/usr/local/cuda/bin/../include/cuda.h"
int maxGridSize[3];
# 255 "/usr/local/cuda/bin/../include/cuda.h"
int sharedMemPerBlock;
# 256 "/usr/local/cuda/bin/../include/cuda.h"
int totalConstantMemory;
# 257 "/usr/local/cuda/bin/../include/cuda.h"
int SIMDWidth;
# 258 "/usr/local/cuda/bin/../include/cuda.h"
int memPitch;
# 259 "/usr/local/cuda/bin/../include/cuda.h"
int regsPerBlock;
# 260 "/usr/local/cuda/bin/../include/cuda.h"
int clockRate;
# 261 "/usr/local/cuda/bin/../include/cuda.h"
int textureAlign;
# 262 "/usr/local/cuda/bin/../include/cuda.h"
} CUdevprop; }
# 317 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 267 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfunction_attribute_enum {
# 273 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 280 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 286 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,
# 291 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,
# 296 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_NUM_REGS,
# 305 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_PTX_VERSION,
# 314 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_BINARY_VERSION,
# 316 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX
# 317 "/usr/local/cuda/bin/../include/cuda.h"
} CUfunction_attribute; }
# 326 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 322 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfunc_cache_enum {
# 323 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_NONE,
# 324 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_SHARED,
# 325 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_L1
# 326 "/usr/local/cuda/bin/../include/cuda.h"
} CUfunc_cache; }
# 335 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 331 "/usr/local/cuda/bin/../include/cuda.h"
enum CUmemorytype_enum {
# 332 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_HOST = 1,
# 333 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_DEVICE,
# 334 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_ARRAY
# 335 "/usr/local/cuda/bin/../include/cuda.h"
} CUmemorytype; }
# 344 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 340 "/usr/local/cuda/bin/../include/cuda.h"
enum CUcomputemode_enum {
# 341 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_DEFAULT,
# 342 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_EXCLUSIVE,
# 343 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_PROHIBITED
# 344 "/usr/local/cuda/bin/../include/cuda.h"
} CUcomputemode; }
# 436 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 349 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_option_enum {
# 355 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_MAX_REGISTERS,
# 368 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 375 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_WALL_TIME,
# 383 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 391 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 399 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 407 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 414 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 421 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,
# 427 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_TARGET,
# 434 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY
# 436 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_option; }
# 449 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 441 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_target_enum {
# 443 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_10,
# 444 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_11,
# 445 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_12,
# 446 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_13,
# 447 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_20,
# 448 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_21
# 449 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_target; }
# 460 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 454 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_fallback_enum {
# 456 "/usr/local/cuda/bin/../include/cuda.h"
CU_PREFER_PTX,
# 458 "/usr/local/cuda/bin/../include/cuda.h"
CU_PREFER_BINARY
# 460 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_fallback; }
# 467 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 465 "/usr/local/cuda/bin/../include/cuda.h"
enum CUgraphicsRegisterFlags_enum {
# 466 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_NONE
# 467 "/usr/local/cuda/bin/../include/cuda.h"
} CUgraphicsRegisterFlags; }
# 476 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 472 "/usr/local/cuda/bin/../include/cuda.h"
enum CUgraphicsMapResourceFlags_enum {
# 473 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE,
# 474 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY,
# 475 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD
# 476 "/usr/local/cuda/bin/../include/cuda.h"
} CUgraphicsMapResourceFlags; }
# 488 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 481 "/usr/local/cuda/bin/../include/cuda.h"
enum CUarray_cubemap_face_enum {
# 482 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_X,
# 483 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_X,
# 484 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Y,
# 485 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Y,
# 486 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Z,
# 487 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Z
# 488 "/usr/local/cuda/bin/../include/cuda.h"
} CUarray_cubemap_face; }
# 497 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 493 "/usr/local/cuda/bin/../include/cuda.h"
enum CUlimit_enum {
# 494 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_STACK_SIZE,
# 495 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_PRINTF_FIFO_SIZE,
# 496 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_MALLOC_HEAP_SIZE
# 497 "/usr/local/cuda/bin/../include/cuda.h"
} CUlimit; }
# 728 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 502 "/usr/local/cuda/bin/../include/cuda.h"
enum cudaError_enum {
# 508 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_SUCCESS,
# 514 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_VALUE,
# 520 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_OUT_OF_MEMORY,
# 526 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_INITIALIZED,
# 531 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_DEINITIALIZED,
# 538 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NO_DEVICE = 100,
# 544 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 551 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 561 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 570 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
# 575 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_MAP_FAILED = 205,
# 580 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNMAP_FAILED,
# 586 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,
# 591 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ALREADY_MAPPED,
# 599 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,
# 604 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ALREADY_ACQUIRED,
# 609 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED,
# 615 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_ARRAY,
# 621 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_POINTER,
# 627 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ECC_UNCORRECTABLE,
# 633 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNSUPPORTED_LIMIT,
# 639 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_SOURCE = 300,
# 644 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_FILE_NOT_FOUND,
# 649 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND,
# 654 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED,
# 659 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_OPERATING_SYSTEM,
# 666 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_HANDLE = 400,
# 673 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_FOUND = 500,
# 682 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_READY = 600,
# 693 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED = 700,
# 704 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
# 715 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT,
# 721 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,
# 727 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNKNOWN = 999
# 728 "/usr/local/cuda/bin/../include/cuda.h"
} CUresult; }
# 777 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 756 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY2D_st {
# 757 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 758 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcY;
# 760 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 761 "/usr/local/cuda/bin/../include/cuda.h"
const void *srcHost;
# 762 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 763 "/usr/local/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 764 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 766 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 767 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstY;
# 769 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 770 "/usr/local/cuda/bin/../include/cuda.h"
void *dstHost;
# 771 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 772 "/usr/local/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 773 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 775 "/usr/local/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 776 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 777 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY2D; }
# 810 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 782 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY3D_st {
# 783 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 784 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcY;
# 785 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcZ;
# 786 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcLOD;
# 787 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 788 "/usr/local/cuda/bin/../include/cuda.h"
const void *srcHost;
# 789 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 790 "/usr/local/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 791 "/usr/local/cuda/bin/../include/cuda.h"
void *reserved0;
# 792 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 793 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcHeight;
# 795 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 796 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstY;
# 797 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstZ;
# 798 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstLOD;
# 799 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 800 "/usr/local/cuda/bin/../include/cuda.h"
void *dstHost;
# 801 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 802 "/usr/local/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 803 "/usr/local/cuda/bin/../include/cuda.h"
void *reserved1;
# 804 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 805 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstHeight;
# 807 "/usr/local/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 808 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 809 "/usr/local/cuda/bin/../include/cuda.h"
size_t Depth;
# 810 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY3D; }
# 822 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 815 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR_st {
# 817 "/usr/local/cuda/bin/../include/cuda.h"
size_t Width;
# 818 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 820 "/usr/local/cuda/bin/../include/cuda.h"
CUarray_format Format;
# 821 "/usr/local/cuda/bin/../include/cuda.h"
unsigned NumChannels;
# 822 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_ARRAY_DESCRIPTOR; }
# 836 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 827 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR_st {
# 829 "/usr/local/cuda/bin/../include/cuda.h"
size_t Width;
# 830 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 831 "/usr/local/cuda/bin/../include/cuda.h"
size_t Depth;
# 833 "/usr/local/cuda/bin/../include/cuda.h"
CUarray_format Format;
# 834 "/usr/local/cuda/bin/../include/cuda.h"
unsigned NumChannels;
# 835 "/usr/local/cuda/bin/../include/cuda.h"
unsigned Flags;
# 836 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_ARRAY3D_DESCRIPTOR; }
# 917 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuInit(unsigned);
# 944 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDriverGetVersion(int *);
# 982 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice *, int);
# 1008 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetCount(int *);
# 1037 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetName(char *, int, CUdevice);
# 1066 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceComputeCapability(int *, int *, CUdevice);
# 1094 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceTotalMem_v2(size_t *, CUdevice);
# 1154 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetProperties(CUdevprop *, CUdevice);
# 1235 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetAttribute(int *, CUdevice_attribute, CUdevice);
# 1333 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxCreate_v2(CUcontext *, unsigned, CUdevice);
# 1367 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDestroy(CUcontext);
# 1403 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxAttach(CUcontext *, unsigned);
# 1435 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDetach(CUcontext);
# 1473 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxPushCurrent(CUcontext);
# 1515 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxPopCurrent(CUcontext *);
# 1545 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetDevice(CUdevice *);
# 1575 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSynchronize();
# 1638 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetLimit(CUlimit, size_t);
# 1673 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetLimit(size_t *, CUlimit);
# 1716 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetCacheConfig(CUfunc_cache *);
# 1766 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetCacheConfig(CUfunc_cache);
# 1803 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetApiVersion(CUcontext, unsigned *);
# 1851 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule *, const char *);
# 1885 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadData(CUmodule *, const void *);
# 1963 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadDataEx(CUmodule *, const void *, unsigned, CUjit_option *, void **);
# 2000 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadFatBinary(CUmodule *, const void *);
# 2025 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleUnload(CUmodule);
# 2055 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetFunction(CUfunction *, CUmodule, const char *);
# 2089 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetGlobal_v2(CUdeviceptr *, size_t *, CUmodule, const char *);
# 2123 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetTexRef(CUtexref *, CUmodule, const char *);
# 2154 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetSurfRef(CUsurfref *, CUmodule, const char *);
# 2197 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetInfo_v2(size_t *, size_t *);
# 2230 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAlloc_v2(CUdeviceptr *, size_t);
# 2291 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAllocPitch_v2(CUdeviceptr *, size_t *, size_t, size_t, unsigned);
# 2320 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFree_v2(CUdeviceptr);
# 2353 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetAddressRange_v2(CUdeviceptr *, size_t *, CUdeviceptr);
# 2392 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAllocHost_v2(void **, size_t);
# 2422 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFreeHost(void *);
# 2494 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostAlloc(void **, size_t, unsigned);
# 2532 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostGetDevicePointer_v2(CUdeviceptr *, void *, unsigned);
# 2557 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostGetFlags(unsigned *, void *);
# 2591 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD_v2(CUdeviceptr, const void *, size_t);
# 2624 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoH_v2(void *, CUdeviceptr, size_t);
# 2657 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoD_v2(CUdeviceptr, CUdeviceptr, size_t);
# 2691 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoA_v2(CUarray, size_t, CUdeviceptr, size_t);
# 2727 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoD_v2(CUdeviceptr, CUarray, size_t, size_t);
# 2761 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoA_v2(CUarray, size_t, const void *, size_t);
# 2795 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoH_v2(void *, CUarray, size_t, size_t);
# 2833 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoA_v2(CUarray, size_t, CUarray, size_t, size_t);
# 2978 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2D_v2(const CUDA_MEMCPY2D *);
# 3121 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2DUnaligned_v2(const CUDA_MEMCPY2D *);
# 3273 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3D_v2(const CUDA_MEMCPY3D *);
# 3313 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync_v2(CUdeviceptr, const void *, size_t, CUstream);
# 3353 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoHAsync_v2(void *, CUdeviceptr, size_t, CUstream);
# 3390 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoDAsync_v2(CUdeviceptr, CUdeviceptr, size_t, CUstream);
# 3432 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoAAsync_v2(CUarray, size_t, const void *, size_t, CUstream);
# 3474 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoHAsync_v2(void *, CUarray, size_t, size_t, CUstream);
# 3630 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2DAsync_v2(const CUDA_MEMCPY2D *, CUstream);
# 3790 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3DAsync_v2(const CUDA_MEMCPY3D *, CUstream);
# 3823 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8_v2(CUdeviceptr, unsigned char, size_t);
# 3856 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD16_v2(CUdeviceptr, unsigned short, size_t);
# 3889 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD32_v2(CUdeviceptr, unsigned, size_t);
# 3927 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D8_v2(CUdeviceptr, size_t, unsigned char, size_t, size_t);
# 3965 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D16_v2(CUdeviceptr, size_t, unsigned short, size_t, size_t);
# 4003 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D32_v2(CUdeviceptr, size_t, unsigned, size_t, size_t);
# 4040 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8Async(CUdeviceptr, unsigned char, size_t, CUstream);
# 4077 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD16Async(CUdeviceptr, unsigned short, size_t, CUstream);
# 4113 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD32Async(CUdeviceptr, unsigned, size_t, CUstream);
# 4155 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D8Async(CUdeviceptr, size_t, unsigned char, size_t, size_t, CUstream);
# 4197 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D16Async(CUdeviceptr, size_t, unsigned short, size_t, size_t, CUstream);
# 4239 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D32Async(CUdeviceptr, size_t, unsigned, size_t, size_t, CUstream);
# 4342 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayCreate_v2(CUarray *, const CUDA_ARRAY_DESCRIPTOR *);
# 4375 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayGetDescriptor_v2(CUDA_ARRAY_DESCRIPTOR *, CUarray);
# 4406 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayDestroy(CUarray);
# 4508 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArray3DCreate_v2(CUarray *, const CUDA_ARRAY3D_DESCRIPTOR *);
# 4544 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArray3DGetDescriptor_v2(CUDA_ARRAY3D_DESCRIPTOR *, CUarray);
# 4582 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream *, unsigned);
# 4622 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamWaitEvent(CUstream, CUevent, unsigned);
# 4646 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamQuery(CUstream);
# 4671 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamSynchronize(CUstream);
# 4693 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamDestroy(CUstream);
# 4741 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent *, unsigned);
# 4777 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventRecord(CUevent, CUstream);
# 4809 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventQuery(CUevent);
# 4843 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventSynchronize(CUevent);
# 4866 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventDestroy(CUevent);
# 4909 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventElapsedTime(float *, CUevent, CUevent);
# 4954 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction, int, int, int);
# 4985 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetSharedSize(CUfunction, unsigned);
# 5042 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncGetAttribute(int *, CUfunction_attribute, CUfunction);
# 5090 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetCacheConfig(CUfunction, CUfunc_cache);
# 5119 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction, unsigned);
# 5149 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSeti(CUfunction, int, unsigned);
# 5179 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetf(CUfunction, int, float);
# 5211 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetv(CUfunction, int, void *, unsigned);
# 5245 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction);
# 5281 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchGrid(CUfunction, int, int);
# 5321 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchGridAsync(CUfunction, int, int, CUstream);
# 5354 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetTexRef(CUfunction, int, CUtexref);
# 5395 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetArray(CUtexref, CUarray, unsigned);
# 5433 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress_v2(size_t *, CUtexref, CUdeviceptr, size_t);
# 5474 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress2D_v2(CUtexref, const CUDA_ARRAY_DESCRIPTOR *, CUdeviceptr, size_t);
# 5503 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFormat(CUtexref, CUarray_format, int);
# 5541 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddressMode(CUtexref, int, CUaddress_mode);
# 5574 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFilterMode(CUtexref, CUfilter_mode);
# 5606 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFlags(CUtexref, unsigned);
# 5632 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetAddress_v2(CUdeviceptr *, CUtexref);
# 5658 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetArray(CUarray *, CUtexref);
# 5684 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode *, CUtexref, int);
# 5708 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode *, CUtexref);
# 5734 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFormat(CUarray_format *, int *, CUtexref);
# 5757 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFlags(unsigned *, CUtexref);
# 5791 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref *);
# 5811 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefDestroy(CUtexref);
# 5849 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuSurfRefSetArray(CUsurfref, CUarray, unsigned);
# 5870 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuSurfRefGetArray(CUarray *, CUsurfref);
# 5911 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsUnregisterResource(CUgraphicsResource);
# 5949 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsSubResourceGetMappedArray(CUarray *, CUgraphicsResource, unsigned, unsigned);
# 5983 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsResourceGetMappedPointer_v2(CUdeviceptr *, size_t *, CUgraphicsResource);
# 6024 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsResourceSetMapFlags(CUgraphicsResource, unsigned);
# 6062 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsMapResources(unsigned, CUgraphicsResource *, CUstream);
# 6097 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsUnmapResources(unsigned, CUgraphicsResource *, CUstream);
# 6101 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGetExportTable(const void **, const CUuuid *);
# 64 "sdk/cutil.h"
enum CUTBoolean {
# 66 "sdk/cutil.h"
CUTFalse,
# 67 "sdk/cutil.h"
CUTTrue
# 68 "sdk/cutil.h"
};
# 76 "sdk/cutil.h"
extern "C" void cutFree(void *);
# 94 "sdk/cutil.h"
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int);
# 107 "sdk/cutil.h"
extern "C" char *cutFindFilePath(const char *, const char *);
# 122 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false);
# 138 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false);
# 154 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false);
# 169 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false);
# 185 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false);
# 201 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false);
# 215 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false);
# 229 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false);
# 241 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false);
# 253 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false);
# 265 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false);
# 277 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false);
# 293 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *);
# 306 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *);
# 320 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *);
# 336 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *);
# 352 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *);
# 367 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *);
# 379 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned);
# 391 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned);
# 404 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned);
# 416 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned);
# 428 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned);
# 440 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned);
# 461 "sdk/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *);
# 475 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *);
# 489 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *);
# 503 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **);
# 518 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *);
# 532 "sdk/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int);
# 544 "sdk/cutil.h"
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned);
# 557 "sdk/cutil.h"
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned);
# 571 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareuit(const unsigned *, const unsigned *, const unsigned, const float, const float);
# 584 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned);
# 599 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareubt(const unsigned char *, const unsigned char *, const unsigned, const float, const float);
# 613 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const float);
# 627 "sdk/cutil.h"
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float);
# 642 "sdk/cutil.h"
extern "C" CUTBoolean cutComparefet(const float *, const float *, const unsigned, const float, const float);
# 657 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float);
# 672 "sdk/cutil.h"
extern "C" CUTBoolean cutComparePPM(const char *, const char *, const float, const float, bool = false);
# 685 "sdk/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned *);
# 694 "sdk/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned);
# 702 "sdk/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned);
# 710 "sdk/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned);
# 718 "sdk/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned);
# 727 "sdk/cutil.h"
extern "C" float cutGetTimerValue(const unsigned);
# 738 "sdk/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned);
# 19 "sdk/cutil_inline_bankchecker.h"
inline void __cutilBankChecker(unsigned tidx, unsigned tidy, unsigned tidz, unsigned
# 20 "sdk/cutil_inline_bankchecker.h"
bdimx, unsigned bdimy, unsigned bdimz, char *
# 21 "sdk/cutil_inline_bankchecker.h"
aname, int index, char *file, int line)
# 22 "sdk/cutil_inline_bankchecker.h"
{
# 23 "sdk/cutil_inline_bankchecker.h"
cutCheckBankAccess(tidx, tidy, tidz, bdimx, bdimy, bdimz, file, line, aname, index);
# 24 "sdk/cutil_inline_bankchecker.h"
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 95 "/usr/include/wchar.h" 3
extern "C" { typedef
# 84 "/usr/include/wchar.h" 3
struct {
# 85 "/usr/include/wchar.h" 3
int __count;
# 87 "/usr/include/wchar.h" 3
union {
# 89 "/usr/include/wchar.h" 3
unsigned __wch;
# 93 "/usr/include/wchar.h" 3
char __wchb[4];
# 94 "/usr/include/wchar.h" 3
} __value;
# 95 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t; }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t; }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t; }
# 40 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/va.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void *); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int, _IO_FILE *);
# 462 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE *) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE *) throw();
# 465 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE *);
# 471 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 472 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 473 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 492 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 494 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 495 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 497 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 498 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 500 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 111 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 117 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 165 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 166 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 167 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 175 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();
# 177 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *) throw();
# 182 "/usr/include/stdio.h" 3
extern "C" int renameat(int, const char *, int, const char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 206 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *) throw();
# 212 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 224 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 234 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 249 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 259 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 269 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 275 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);
# 296 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 303 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 309 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();
# 316 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 329 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();
# 333 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 340 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();
# 344 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE *) throw();
# 353 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 359 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);
# 361 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 368 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 374 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);
# 376 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 383 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();
# 387 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 396 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 399 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 402 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 414 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);
# 417 "/usr/include/stdio.h" 3
extern "C" int dprintf(int, const char *__restrict__, ...);
# 427 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 433 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);
# 435 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 481 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);
# 485 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 534 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 540 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 552 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
# 553 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 563 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 575 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 576 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 582 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 596 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 604 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
# 605 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int);
# 612 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 615 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 624 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 632 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 642 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 661 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 671 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 682 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 688 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 695 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 702 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 719 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 730 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 732 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 747 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 752 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 766 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);
# 771 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE *);
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);
# 796 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
# 812 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE *);
# 813 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
# 814 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE *, const fpos64_t *);
# 819 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *) throw();
# 821 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *) throw();
# 823 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *) throw();
# 828 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE *) throw();
# 829 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE *) throw();
# 830 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE *) throw();
# 839 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();
# 856 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE *) throw();
# 866 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 872 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 878 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 884 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);
# 889 "/usr/include/stdio.h" 3
struct obstack;
# 892 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();
# 895 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 906 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();
# 910 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *) throw();
# 913 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *) throw();
# 46 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { typedef float2 cuFloatComplex; }
# 48 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCrealf(cuFloatComplex x)
# 49 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 50 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.x;
# 51 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 53 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCimagf(cuFloatComplex x)
# 54 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 55 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.y;
# 56 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 58 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex make_cuFloatComplex(float
# 59 "/usr/local/cuda/bin/../include/cuComplex.h"
r, float i)
# 60 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 61 "/usr/local/cuda/bin/../include/cuComplex.h"
cuFloatComplex res;
# 62 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.x) = r;
# 63 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.y) = i;
# 64 "/usr/local/cuda/bin/../include/cuComplex.h"
return res;
# 65 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 67 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuConjf(cuFloatComplex x)
# 68 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 69 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x));
# 70 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 71 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex
# 72 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 73 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 74 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y));
# 76 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 78 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex
# 79 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 80 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 81 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y));
# 83 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 90 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex
# 91 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 92 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 93 "/usr/local/cuda/bin/../include/cuComplex.h"
cuFloatComplex prod;
# 94 "/usr/local/cuda/bin/../include/cuComplex.h"
prod = make_cuFloatComplex((cuCrealf(x) * cuCrealf(y)) - (cuCimagf(x) * cuCimagf(y)), (cuCrealf(x) * cuCimagf(y)) + (cuCimagf(x) * cuCrealf(y)));
# 98 "/usr/local/cuda/bin/../include/cuComplex.h"
return prod;
# 99 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 106 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex
# 107 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 108 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 109 "/usr/local/cuda/bin/../include/cuComplex.h"
cuFloatComplex quot;
# 110 "/usr/local/cuda/bin/../include/cuComplex.h"
float s = (fabsf(cuCrealf(y)) + fabsf(cuCimagf(y)));
# 111 "/usr/local/cuda/bin/../include/cuComplex.h"
float oos = ((1.0F) / s);
# 112 "/usr/local/cuda/bin/../include/cuComplex.h"
float ars = (cuCrealf(x) * oos);
# 113 "/usr/local/cuda/bin/../include/cuComplex.h"
float ais = (cuCimagf(x) * oos);
# 114 "/usr/local/cuda/bin/../include/cuComplex.h"
float brs = (cuCrealf(y) * oos);
# 115 "/usr/local/cuda/bin/../include/cuComplex.h"
float bis = (cuCimagf(y) * oos);
# 116 "/usr/local/cuda/bin/../include/cuComplex.h"
s = ((brs * brs) + (bis * bis));
# 117 "/usr/local/cuda/bin/../include/cuComplex.h"
oos = ((1.0F) / s);
# 118 "/usr/local/cuda/bin/../include/cuComplex.h"
quot = make_cuFloatComplex(((ars * brs) + (ais * bis)) * oos, ((ais * brs) - (ars * bis)) * oos);
# 120 "/usr/local/cuda/bin/../include/cuComplex.h"
return quot;
# 121 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 131 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCabsf(cuFloatComplex x)
# 132 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 133 "/usr/local/cuda/bin/../include/cuComplex.h"
float a = cuCrealf(x);
# 134 "/usr/local/cuda/bin/../include/cuComplex.h"
float b = cuCimagf(x);
# 135 "/usr/local/cuda/bin/../include/cuComplex.h"
float v, w, t;
# 136 "/usr/local/cuda/bin/../include/cuComplex.h"
a = fabsf(a);
# 137 "/usr/local/cuda/bin/../include/cuComplex.h"
b = fabsf(b);
# 138 "/usr/local/cuda/bin/../include/cuComplex.h"
if (a > b) {
# 139 "/usr/local/cuda/bin/../include/cuComplex.h"
v = a;
# 140 "/usr/local/cuda/bin/../include/cuComplex.h"
w = b;
# 141 "/usr/local/cuda/bin/../include/cuComplex.h"
} else {
# 142 "/usr/local/cuda/bin/../include/cuComplex.h"
v = b;
# 143 "/usr/local/cuda/bin/../include/cuComplex.h"
w = a;
# 144 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 145 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (w / v);
# 146 "/usr/local/cuda/bin/../include/cuComplex.h"
t = ((1.0F) + (t * t));
# 147 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v * sqrtf(t));
# 148 "/usr/local/cuda/bin/../include/cuComplex.h"
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) {
# 149 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v + w);
# 150 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 151 "/usr/local/cuda/bin/../include/cuComplex.h"
return t;
# 152 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 155 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { typedef double2 cuDoubleComplex; }
# 157 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCreal(cuDoubleComplex x)
# 158 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 159 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.x;
# 160 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 162 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCimag(cuDoubleComplex x)
# 163 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 164 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.y;
# 165 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 167 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex make_cuDoubleComplex(double
# 168 "/usr/local/cuda/bin/../include/cuComplex.h"
r, double i)
# 169 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 170 "/usr/local/cuda/bin/../include/cuComplex.h"
cuDoubleComplex res;
# 171 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.x) = r;
# 172 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.y) = i;
# 173 "/usr/local/cuda/bin/../include/cuComplex.h"
return res;
# 174 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 176 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuConj(cuDoubleComplex x)
# 177 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 178 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x));
# 179 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 181 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex
# 182 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 183 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 184 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y));
# 186 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 188 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex
# 189 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 190 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 191 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y));
# 193 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 200 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex
# 201 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 202 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 203 "/usr/local/cuda/bin/../include/cuComplex.h"
cuDoubleComplex prod;
# 204 "/usr/local/cuda/bin/../include/cuComplex.h"
prod = make_cuDoubleComplex((cuCreal(x) * cuCreal(y)) - (cuCimag(x) * cuCimag(y)), (cuCreal(x) * cuCimag(y)) + (cuCimag(x) * cuCreal(y)));
# 208 "/usr/local/cuda/bin/../include/cuComplex.h"
return prod;
# 209 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 216 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex
# 217 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 218 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 219 "/usr/local/cuda/bin/../include/cuComplex.h"
cuDoubleComplex quot;
# 220 "/usr/local/cuda/bin/../include/cuComplex.h"
double s = (fabs(cuCreal(y)) + fabs(cuCimag(y)));
# 221 "/usr/local/cuda/bin/../include/cuComplex.h"
double oos = ((1.0) / s);
# 222 "/usr/local/cuda/bin/../include/cuComplex.h"
double ars = (cuCreal(x) * oos);
# 223 "/usr/local/cuda/bin/../include/cuComplex.h"
double ais = (cuCimag(x) * oos);
# 224 "/usr/local/cuda/bin/../include/cuComplex.h"
double brs = (cuCreal(y) * oos);
# 225 "/usr/local/cuda/bin/../include/cuComplex.h"
double bis = (cuCimag(y) * oos);
# 226 "/usr/local/cuda/bin/../include/cuComplex.h"
s = ((brs * brs) + (bis * bis));
# 227 "/usr/local/cuda/bin/../include/cuComplex.h"
oos = ((1.0) / s);
# 228 "/usr/local/cuda/bin/../include/cuComplex.h"
quot = make_cuDoubleComplex(((ars * brs) + (ais * bis)) * oos, ((ais * brs) - (ars * bis)) * oos);
# 230 "/usr/local/cuda/bin/../include/cuComplex.h"
return quot;
# 231 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 239 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCabs(cuDoubleComplex x)
# 240 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 241 "/usr/local/cuda/bin/../include/cuComplex.h"
double a = cuCreal(x);
# 242 "/usr/local/cuda/bin/../include/cuComplex.h"
double b = cuCimag(x);
# 243 "/usr/local/cuda/bin/../include/cuComplex.h"
double v, w, t;
# 244 "/usr/local/cuda/bin/../include/cuComplex.h"
a = fabs(a);
# 245 "/usr/local/cuda/bin/../include/cuComplex.h"
b = fabs(b);
# 246 "/usr/local/cuda/bin/../include/cuComplex.h"
if (a > b) {
# 247 "/usr/local/cuda/bin/../include/cuComplex.h"
v = a;
# 248 "/usr/local/cuda/bin/../include/cuComplex.h"
w = b;
# 249 "/usr/local/cuda/bin/../include/cuComplex.h"
} else {
# 250 "/usr/local/cuda/bin/../include/cuComplex.h"
v = b;
# 251 "/usr/local/cuda/bin/../include/cuComplex.h"
w = a;
# 252 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 253 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (w / v);
# 254 "/usr/local/cuda/bin/../include/cuComplex.h"
t = ((1.0) + (t * t));
# 255 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v * sqrt(t));
# 256 "/usr/local/cuda/bin/../include/cuComplex.h"
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308)))
# 257 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 258 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v + w);
# 259 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 260 "/usr/local/cuda/bin/../include/cuComplex.h"
return t;
# 261 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 268 "/usr/local/cuda/bin/../include/cuComplex.h"
typedef cuFloatComplex cuComplex;
# 269 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuComplex make_cuComplex(float x, float
# 270 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 271 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 272 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(x, y);
# 273 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 276 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex
# 277 "/usr/local/cuda/bin/../include/cuComplex.h"
c)
# 278 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 279 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c));
# 280 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 282 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex
# 283 "/usr/local/cuda/bin/../include/cuComplex.h"
c)
# 284 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 285 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c));
# 286 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 289 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuComplex cuCfmaf(cuComplex x, cuComplex y, cuComplex d)
# 290 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 291 "/usr/local/cuda/bin/../include/cuComplex.h"
float real_res;
# 292 "/usr/local/cuda/bin/../include/cuComplex.h"
float imag_res;
# 294 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((cuCrealf(x) * cuCrealf(y)) + cuCrealf(d));
# 295 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCrealf(x) * cuCimagf(y)) + cuCimagf(d));
# 297 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((-(cuCimagf(x) * cuCimagf(y))) + real_res);
# 298 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCimagf(x) * cuCrealf(y)) + imag_res);
# 300 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuComplex(real_res, imag_res);
# 301 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 303 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuDoubleComplex cuCfma(cuDoubleComplex x, cuDoubleComplex y, cuDoubleComplex d)
# 304 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 305 "/usr/local/cuda/bin/../include/cuComplex.h"
double real_res;
# 306 "/usr/local/cuda/bin/../include/cuComplex.h"
double imag_res;
# 308 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((cuCreal(x) * cuCreal(y)) + cuCreal(d));
# 309 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCreal(x) * cuCimag(y)) + cuCimag(d));
# 311 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((-(cuCimag(x) * cuCimag(y))) + real_res);
# 312 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCimag(x) * cuCreal(y)) + imag_res);
# 314 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(real_res, imag_res);
# 315 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 72 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 61 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftResult_t {
# 62 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_SUCCESS,
# 63 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_PLAN,
# 64 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_ALLOC_FAILED,
# 65 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_TYPE,
# 66 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_VALUE,
# 67 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INTERNAL_ERROR,
# 68 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_EXEC_FAILED,
# 69 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_SETUP_FAILED,
# 70 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_SIZE,
# 71 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_UNALIGNED_DATA
# 72 "/usr/local/cuda/bin/../include/cufft.h"
} cufftResult; }
# 77 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef unsigned cufftHandle; }
# 81 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef float cufftReal; }
# 82 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef double cufftDoubleReal; }
# 87 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef cuComplex cufftComplex; }
# 88 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef cuDoubleComplex cufftDoubleComplex; }
# 102 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 95 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftType_t {
# 96 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_R2C = 42,
# 97 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_C2R = 44,
# 98 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_C2C = 41,
# 99 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_D2Z = 106,
# 100 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_Z2D = 108,
# 101 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_Z2Z = 105
# 102 "/usr/local/cuda/bin/../include/cufft.h"
} cufftType; }
# 131 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 126 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftCompatibility_t {
# 127 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_NATIVE,
# 128 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_PADDING,
# 129 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_ASYMMETRIC,
# 130 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_ALL
# 131 "/usr/local/cuda/bin/../include/cufft.h"
} cufftCompatibility; }
# 135 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlan1d(cufftHandle *, int, cufftType, int);
# 140 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlan2d(cufftHandle *, int, int, cufftType);
# 144 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlan3d(cufftHandle *, int, int, int, cufftType);
# 148 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlanMany(cufftHandle *, int, int *, int *, int, int, int *, int, int, cufftType, int);
# 156 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftDestroy(cufftHandle);
# 158 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecC2C(cufftHandle, cufftComplex *, cufftComplex *, int);
# 163 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecR2C(cufftHandle, cufftReal *, cufftComplex *);
# 167 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecC2R(cufftHandle, cufftComplex *, cufftReal *);
# 171 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecZ2Z(cufftHandle, cufftDoubleComplex *, cufftDoubleComplex *, int);
# 176 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecD2Z(cufftHandle, cufftDoubleReal *, cufftDoubleComplex *);
# 180 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecZ2D(cufftHandle, cufftDoubleComplex *, cufftDoubleReal *);
# 184 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftSetStream(cufftHandle, cudaStream_t);
# 187 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftSetCompatibilityMode(cufftHandle, cufftCompatibility);
# 22 "sdk/cutil_inline_runtime.h"
inline void __cutilCondition(int val, char *file, int line)
# 23 "sdk/cutil_inline_runtime.h"
{
# 24 "sdk/cutil_inline_runtime.h"
if ((CUTFalse) == (cutCheckCondition(val, file, line))) {
# 25 "sdk/cutil_inline_runtime.h"
exit(1);
# 26 "sdk/cutil_inline_runtime.h"
}
# 27 "sdk/cutil_inline_runtime.h"
}
# 29 "sdk/cutil_inline_runtime.h"
inline void __cutilExit(int argc, char **argv)
# 30 "sdk/cutil_inline_runtime.h"
{
# 31 "sdk/cutil_inline_runtime.h"
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) {
# 32 "sdk/cutil_inline_runtime.h"
printf("\nPress ENTER to exit...\n");
# 33 "sdk/cutil_inline_runtime.h"
fflush(stdout);
# 34 "sdk/cutil_inline_runtime.h"
fflush(stderr);
# 35 "sdk/cutil_inline_runtime.h"
getchar();
# 36 "sdk/cutil_inline_runtime.h"
}
# 37 "sdk/cutil_inline_runtime.h"
exit(0);
# 38 "sdk/cutil_inline_runtime.h"
}
# 41 "sdk/cutil_inline_runtime.h"
inline int cutGetMaxGflopsDeviceId()
# 42 "sdk/cutil_inline_runtime.h"
{
# 43 "sdk/cutil_inline_runtime.h"
int device_count = 0;
# 44 "sdk/cutil_inline_runtime.h"
cudaGetDeviceCount(&device_count);
# 46 "sdk/cutil_inline_runtime.h"
cudaDeviceProp device_properties;
# 47 "sdk/cutil_inline_runtime.h"
int max_gflops_device = 0;
# 48 "sdk/cutil_inline_runtime.h"
int max_gflops = 0;
# 50 "sdk/cutil_inline_runtime.h"
int current_device = 0;
# 51 "sdk/cutil_inline_runtime.h"
cudaGetDeviceProperties(&device_properties, current_device);
# 52 "sdk/cutil_inline_runtime.h"
max_gflops = ((device_properties.multiProcessorCount) * (device_properties.clockRate));
# 53 "sdk/cutil_inline_runtime.h"
++current_device;
# 55 "sdk/cutil_inline_runtime.h"
while (current_device < device_count)
# 56 "sdk/cutil_inline_runtime.h"
{
# 57 "sdk/cutil_inline_runtime.h"
cudaGetDeviceProperties(&device_properties, current_device);
# 58 "sdk/cutil_inline_runtime.h"
int gflops = ((device_properties.multiProcessorCount) * (device_properties.clockRate));
# 59 "sdk/cutil_inline_runtime.h"
if (gflops > max_gflops)
# 60 "sdk/cutil_inline_runtime.h"
{
# 61 "sdk/cutil_inline_runtime.h"
max_gflops = gflops;
# 62 "sdk/cutil_inline_runtime.h"
max_gflops_device = current_device;
# 63 "sdk/cutil_inline_runtime.h"
}
# 64 "sdk/cutil_inline_runtime.h"
++current_device;
# 65 "sdk/cutil_inline_runtime.h"
}
# 67 "sdk/cutil_inline_runtime.h"
return max_gflops_device;
# 68 "sdk/cutil_inline_runtime.h"
}
# 70 "sdk/cutil_inline_runtime.h"
inline void __cudaSafeCallNoSync(cudaError err, const char *file, const int line)
# 71 "sdk/cutil_inline_runtime.h"
{
# 72 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 73 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cudaSafeCallNoSync() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));
# 75 "sdk/cutil_inline_runtime.h"
exit(-1);
# 76 "sdk/cutil_inline_runtime.h"
}
# 77 "sdk/cutil_inline_runtime.h"
}
# 79 "sdk/cutil_inline_runtime.h"
inline void __cudaSafeCall(cudaError err, const char *file, const int line)
# 80 "sdk/cutil_inline_runtime.h"
{
# 81 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 82 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cudaSafeCall() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));
# 84 "sdk/cutil_inline_runtime.h"
exit(-1);
# 85 "sdk/cutil_inline_runtime.h"
}
# 86 "sdk/cutil_inline_runtime.h"
}
# 88 "sdk/cutil_inline_runtime.h"
inline void __cudaSafeThreadSync(const char *file, const int line)
# 89 "sdk/cutil_inline_runtime.h"
{
# 90 "sdk/cutil_inline_runtime.h"
cudaError err = cudaThreadSynchronize();
# 91 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 92 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cudaThreadSynchronize() Driver API error in file \'%s\' in line %i : %s.\n", file, line, cudaGetErrorString(err));
# 94 "sdk/cutil_inline_runtime.h"
exit(-1);
# 95 "sdk/cutil_inline_runtime.h"
}
# 96 "sdk/cutil_inline_runtime.h"
}
# 98 "sdk/cutil_inline_runtime.h"
inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
# 99 "sdk/cutil_inline_runtime.h"
{
# 100 "sdk/cutil_inline_runtime.h"
if ((CUFFT_SUCCESS) != err) {
# 101 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cufftSafeCall() CUFFT error in file <%s>, line %i.\n", file, line);
# 103 "sdk/cutil_inline_runtime.h"
exit(-1);
# 104 "sdk/cutil_inline_runtime.h"
}
# 105 "sdk/cutil_inline_runtime.h"
}
# 107 "sdk/cutil_inline_runtime.h"
inline void __cutilCheckError(CUTBoolean err, const char *file, const int line)
# 108 "sdk/cutil_inline_runtime.h"
{
# 109 "sdk/cutil_inline_runtime.h"
if ((CUTTrue) != err) {
# 110 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error in file <%s>, line %i.\n", file, line);
# 112 "sdk/cutil_inline_runtime.h"
exit(-1);
# 113 "sdk/cutil_inline_runtime.h"
}
# 114 "sdk/cutil_inline_runtime.h"
}
# 116 "sdk/cutil_inline_runtime.h"
inline void __cutilCheckMsg(const char *errorMessage, const char *file, const int line)
# 117 "sdk/cutil_inline_runtime.h"
{
# 118 "sdk/cutil_inline_runtime.h"
cudaError_t err = cudaGetLastError();
# 119 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 120 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cutilCheckMsg() CUTIL CUDA error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 122 "sdk/cutil_inline_runtime.h"
exit(-1);
# 123 "sdk/cutil_inline_runtime.h"
}
# 132 "sdk/cutil_inline_runtime.h"
}
# 133 "sdk/cutil_inline_runtime.h"
inline void __cutilSafeMalloc(void *pointer, const char *file, const int line)
# 134 "sdk/cutil_inline_runtime.h"
{
# 135 "sdk/cutil_inline_runtime.h"
if (!(pointer)) {
# 136 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cutilSafeMalloc host malloc failure in file <%s>, line %i\n", file, line);
# 138 "sdk/cutil_inline_runtime.h"
exit(-1);
# 139 "sdk/cutil_inline_runtime.h"
}
# 140 "sdk/cutil_inline_runtime.h"
}
# 145 "sdk/cutil_inline_runtime.h"
inline void cutilDeviceInit(int ARGC, char **ARGV)
# 146 "sdk/cutil_inline_runtime.h"
{
# 147 "sdk/cutil_inline_runtime.h"
int deviceCount;
# 148 "sdk/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceCount(&deviceCount), "sdk/cutil_inline_runtime.h", 148);
# 149 "sdk/cutil_inline_runtime.h"
if (deviceCount == 0) {
# 150 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error: no devices supporting CUDA.\n");
# 151 "sdk/cutil_inline_runtime.h"
exit(-1);
# 152 "sdk/cutil_inline_runtime.h"
}
# 153 "sdk/cutil_inline_runtime.h"
int dev = 0;
# 154 "sdk/cutil_inline_runtime.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 155 "sdk/cutil_inline_runtime.h"
if (dev < 0) { dev = 0; } if (dev > (deviceCount - 1)) { dev = (deviceCount - 1); }
# 157 "sdk/cutil_inline_runtime.h"
cudaDeviceProp deviceProp;
# 158 "sdk/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceProperties(&deviceProp, dev), "sdk/cutil_inline_runtime.h", 158);
# 159 "sdk/cutil_inline_runtime.h"
if ((deviceProp.major) < 1) {
# 160 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cutil error: device does not support CUDA.\n");
# 161 "sdk/cutil_inline_runtime.h"
exit(-1); }
# 163 "sdk/cutil_inline_runtime.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 164 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "Using device %d: %s\n", dev, deviceProp.name); }
# 165 "sdk/cutil_inline_runtime.h"
__cudaSafeCall(cudaSetDevice(dev), "sdk/cutil_inline_runtime.h", 165);
# 166 "sdk/cutil_inline_runtime.h"
}
# 171 "sdk/cutil_inline_runtime.h"
inline void cutilCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 172 "sdk/cutil_inline_runtime.h"
{
# 173 "sdk/cutil_inline_runtime.h"
cudaError_t err = cudaGetLastError();
# 174 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 175 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 177 "sdk/cutil_inline_runtime.h"
exit(-1);
# 178 "sdk/cutil_inline_runtime.h"
}
# 179 "sdk/cutil_inline_runtime.h"
err = cudaThreadSynchronize();
# 180 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 181 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CCUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 183 "sdk/cutil_inline_runtime.h"
exit(-1);
# 184 "sdk/cutil_inline_runtime.h"
}
# 185 "sdk/cutil_inline_runtime.h"
}
# 16 "sdk/cutil_inline_drvapi.h"
inline void __cuSafeCallNoSync(CUresult err, const char *file, const int line)
# 17 "sdk/cutil_inline_drvapi.h"
{
# 18 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 19 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cuSafeCallNoSync() Driver API error = %04d from file <%s>, line %i.\n", err, file, line);
# 21 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 22 "sdk/cutil_inline_drvapi.h"
}
# 23 "sdk/cutil_inline_drvapi.h"
}
# 24 "sdk/cutil_inline_drvapi.h"
inline void __cuSafeCall(CUresult err, const char *file, const int line)
# 25 "sdk/cutil_inline_drvapi.h"
{
# 26 "sdk/cutil_inline_drvapi.h"
__cuSafeCallNoSync(err, file, line);
# 27 "sdk/cutil_inline_drvapi.h"
}
# 29 "sdk/cutil_inline_drvapi.h"
inline void __cuCtxSync(const char *file, const int line)
# 30 "sdk/cutil_inline_drvapi.h"
{
# 31 "sdk/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 32 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 33 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cuCtxSynchronize() API error = %04d in file <%s>, line %i.\n", err, file, line);
# 35 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 36 "sdk/cutil_inline_drvapi.h"
}
# 37 "sdk/cutil_inline_drvapi.h"
}
# 39 "sdk/cutil_inline_drvapi.h"
inline void __cuCheckMsg(const char *msg, const char *file, const int line)
# 40 "sdk/cutil_inline_drvapi.h"
{
# 41 "sdk/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 42 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 43 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> %s", msg);
# 44 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> cuCtxSynchronize API error = %04d in file <%s>, line %i.\n", err, file, line);
# 46 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 47 "sdk/cutil_inline_drvapi.h"
}
# 48 "sdk/cutil_inline_drvapi.h"
}
# 54 "sdk/cutil_inline_drvapi.h"
inline void cutilDeviceInitDrv(int cuDevice, int ARGC, char **ARGV)
# 55 "sdk/cutil_inline_drvapi.h"
{
# 56 "sdk/cutil_inline_drvapi.h"
cuDevice = 0;
# 57 "sdk/cutil_inline_drvapi.h"
int deviceCount = 0;
# 58 "sdk/cutil_inline_drvapi.h"
CUresult err = cuInit(0);
# 59 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) == err) {
# 60 "sdk/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetCount(&deviceCount), "sdk/cutil_inline_drvapi.h", 60); }
# 61 "sdk/cutil_inline_drvapi.h"
if (deviceCount == 0) {
# 62 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "CUTIL DeviceInitDrv error: no devices supporting CUDA\n");
# 63 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 64 "sdk/cutil_inline_drvapi.h"
}
# 65 "sdk/cutil_inline_drvapi.h"
int dev = 0;
# 66 "sdk/cutil_inline_drvapi.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 67 "sdk/cutil_inline_drvapi.h"
if (dev < 0) { dev = 0; }
# 68 "sdk/cutil_inline_drvapi.h"
if (dev > (deviceCount - 1)) { dev = (deviceCount - 1); }
# 69 "sdk/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGet(&cuDevice, dev), "sdk/cutil_inline_drvapi.h", 69);
# 70 "sdk/cutil_inline_drvapi.h"
char name[100];
# 71 "sdk/cutil_inline_drvapi.h"
cuDeviceGetName(name, 100, cuDevice);
# 72 "sdk/cutil_inline_drvapi.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 73 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "Using device %d: %s\n", dev, name); }
# 74 "sdk/cutil_inline_drvapi.h"
}
# 78 "sdk/cutil_inline_drvapi.h"
inline void cutilDrvCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 79 "sdk/cutil_inline_drvapi.h"
{
# 80 "sdk/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 81 "sdk/cutil_inline_drvapi.h"
if ((CUDA_ERROR_INVALID_CONTEXT) != err) {
# 82 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 84 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 85 "sdk/cutil_inline_drvapi.h"
}
# 86 "sdk/cutil_inline_drvapi.h"
err = cuCtxSynchronize();
# 87 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 88 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 90 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 91 "sdk/cutil_inline_drvapi.h"
}
# 92 "sdk/cutil_inline_drvapi.h"
}
# 12 "sdk/cutil_inline.h"
inline void print_NVCC_min_spec(const char *sSDKsample, const char *sNVCCReq, const char *sDriverReq)
# 13 "sdk/cutil_inline.h"
{
# 14 "sdk/cutil_inline.h"
printf("CUDA %d.%02d Toolkit built this project.\n", 3020 / 1000, 3020 % 100);
# 15 "sdk/cutil_inline.h"
printf("  [ %s ] requirements:\n", sSDKsample);
# 16 "sdk/cutil_inline.h"
printf(" -> CUDA %s Toolkit\n", sNVCCReq);
# 17 "sdk/cutil_inline.h"
printf(" -> %s NVIDIA Display Driver.\n", sDriverReq);
# 18 "sdk/cutil_inline.h"
}
# 93 "/usr/include/c++/4.4/cstdio" 3
namespace std __attribute__((visibility("default"))) {
# 95 "/usr/include/c++/4.4/cstdio" 3
using ::FILE;
# 96 "/usr/include/c++/4.4/cstdio" 3
using ::fpos_t;
# 98 "/usr/include/c++/4.4/cstdio" 3
using ::clearerr;
# 99 "/usr/include/c++/4.4/cstdio" 3
using ::fclose;
# 100 "/usr/include/c++/4.4/cstdio" 3
using ::feof;
# 101 "/usr/include/c++/4.4/cstdio" 3
using ::ferror;
# 102 "/usr/include/c++/4.4/cstdio" 3
using ::fflush;
# 103 "/usr/include/c++/4.4/cstdio" 3
using ::fgetc;
# 104 "/usr/include/c++/4.4/cstdio" 3
using ::fgetpos;
# 105 "/usr/include/c++/4.4/cstdio" 3
using ::fgets;
# 106 "/usr/include/c++/4.4/cstdio" 3
using ::fopen;
# 107 "/usr/include/c++/4.4/cstdio" 3
using ::fprintf;
# 108 "/usr/include/c++/4.4/cstdio" 3
using ::fputc;
# 109 "/usr/include/c++/4.4/cstdio" 3
using ::fputs;
# 110 "/usr/include/c++/4.4/cstdio" 3
using ::fread;
# 111 "/usr/include/c++/4.4/cstdio" 3
using ::freopen;
# 112 "/usr/include/c++/4.4/cstdio" 3
using ::fscanf;
# 113 "/usr/include/c++/4.4/cstdio" 3
using ::fseek;
# 114 "/usr/include/c++/4.4/cstdio" 3
using ::fsetpos;
# 115 "/usr/include/c++/4.4/cstdio" 3
using ::ftell;
# 116 "/usr/include/c++/4.4/cstdio" 3
using ::fwrite;
# 117 "/usr/include/c++/4.4/cstdio" 3
using ::getc;
# 118 "/usr/include/c++/4.4/cstdio" 3
using ::getchar;
# 119 "/usr/include/c++/4.4/cstdio" 3
using ::gets;
# 120 "/usr/include/c++/4.4/cstdio" 3
using ::perror;
# 121 "/usr/include/c++/4.4/cstdio" 3
using ::printf;
# 122 "/usr/include/c++/4.4/cstdio" 3
using ::putc;
# 123 "/usr/include/c++/4.4/cstdio" 3
using ::putchar;
# 124 "/usr/include/c++/4.4/cstdio" 3
using ::puts;
# 125 "/usr/include/c++/4.4/cstdio" 3
using ::remove;
# 126 "/usr/include/c++/4.4/cstdio" 3
using ::rename;
# 127 "/usr/include/c++/4.4/cstdio" 3
using ::rewind;
# 128 "/usr/include/c++/4.4/cstdio" 3
using ::scanf;
# 129 "/usr/include/c++/4.4/cstdio" 3
using ::setbuf;
# 130 "/usr/include/c++/4.4/cstdio" 3
using ::setvbuf;
# 131 "/usr/include/c++/4.4/cstdio" 3
using ::sprintf;
# 132 "/usr/include/c++/4.4/cstdio" 3
using ::sscanf;
# 133 "/usr/include/c++/4.4/cstdio" 3
using ::tmpfile;
# 134 "/usr/include/c++/4.4/cstdio" 3
using ::tmpnam;
# 135 "/usr/include/c++/4.4/cstdio" 3
using ::ungetc;
# 136 "/usr/include/c++/4.4/cstdio" 3
using ::vfprintf;
# 137 "/usr/include/c++/4.4/cstdio" 3
using ::vprintf;
# 138 "/usr/include/c++/4.4/cstdio" 3
using ::vsprintf;
# 140 "/usr/include/c++/4.4/cstdio" 3
}
# 150 "/usr/include/c++/4.4/cstdio" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 165 "/usr/include/c++/4.4/cstdio" 3
using ::snprintf;
# 166 "/usr/include/c++/4.4/cstdio" 3
using ::vfscanf;
# 167 "/usr/include/c++/4.4/cstdio" 3
using ::vscanf;
# 168 "/usr/include/c++/4.4/cstdio" 3
using ::vsnprintf;
# 169 "/usr/include/c++/4.4/cstdio" 3
using ::vsscanf;
# 172 "/usr/include/c++/4.4/cstdio" 3
}
# 174 "/usr/include/c++/4.4/cstdio" 3
namespace std __attribute__((visibility("default"))) {
# 176 "/usr/include/c++/4.4/cstdio" 3
using __gnu_cxx::snprintf;
# 177 "/usr/include/c++/4.4/cstdio" 3
using __gnu_cxx::vfscanf;
# 178 "/usr/include/c++/4.4/cstdio" 3
using __gnu_cxx::vscanf;
# 179 "/usr/include/c++/4.4/cstdio" 3
using __gnu_cxx::vsnprintf;
# 180 "/usr/include/c++/4.4/cstdio" 3
using __gnu_cxx::vsscanf;
# 182 "/usr/include/c++/4.4/cstdio" 3
}
# 155 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned GLenum; }
# 156 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned char GLboolean; }
# 157 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned GLbitfield; }
# 158 "/usr/include/GL/gl.h" 3
extern "C" { typedef void GLvoid; }
# 159 "/usr/include/GL/gl.h" 3
extern "C" { typedef signed char GLbyte; }
# 160 "/usr/include/GL/gl.h" 3
extern "C" { typedef short GLshort; }
# 161 "/usr/include/GL/gl.h" 3
extern "C" { typedef int GLint; }
# 162 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned char GLubyte; }
# 163 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned short GLushort; }
# 164 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned GLuint; }
# 165 "/usr/include/GL/gl.h" 3
extern "C" { typedef int GLsizei; }
# 166 "/usr/include/GL/gl.h" 3
extern "C" { typedef float GLfloat; }
# 167 "/usr/include/GL/gl.h" 3
extern "C" { typedef float GLclampf; }
# 168 "/usr/include/GL/gl.h" 3
extern "C" { typedef double GLdouble; }
# 169 "/usr/include/GL/gl.h" 3
extern "C" { typedef double GLclampd; }
# 782 "/usr/include/GL/gl.h" 3
extern "C" void glClearIndex(GLfloat) __attribute__((visibility("default")));
# 784 "/usr/include/GL/gl.h" 3
extern "C" void glClearColor(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((visibility("default")));
# 786 "/usr/include/GL/gl.h" 3
extern "C" void glClear(GLbitfield) __attribute__((visibility("default")));
# 788 "/usr/include/GL/gl.h" 3
extern "C" void glIndexMask(GLuint) __attribute__((visibility("default")));
# 790 "/usr/include/GL/gl.h" 3
extern "C" void glColorMask(GLboolean, GLboolean, GLboolean, GLboolean) __attribute__((visibility("default")));
# 792 "/usr/include/GL/gl.h" 3
extern "C" void glAlphaFunc(GLenum, GLclampf) __attribute__((visibility("default")));
# 794 "/usr/include/GL/gl.h" 3
extern "C" void glBlendFunc(GLenum, GLenum) __attribute__((visibility("default")));
# 796 "/usr/include/GL/gl.h" 3
extern "C" void glLogicOp(GLenum) __attribute__((visibility("default")));
# 798 "/usr/include/GL/gl.h" 3
extern "C" void glCullFace(GLenum) __attribute__((visibility("default")));
# 800 "/usr/include/GL/gl.h" 3
extern "C" void glFrontFace(GLenum) __attribute__((visibility("default")));
# 802 "/usr/include/GL/gl.h" 3
extern "C" void glPointSize(GLfloat) __attribute__((visibility("default")));
# 804 "/usr/include/GL/gl.h" 3
extern "C" void glLineWidth(GLfloat) __attribute__((visibility("default")));
# 806 "/usr/include/GL/gl.h" 3
extern "C" void glLineStipple(GLint, GLushort) __attribute__((visibility("default")));
# 808 "/usr/include/GL/gl.h" 3
extern "C" void glPolygonMode(GLenum, GLenum) __attribute__((visibility("default")));
# 810 "/usr/include/GL/gl.h" 3
extern "C" void glPolygonOffset(GLfloat, GLfloat) __attribute__((visibility("default")));
# 812 "/usr/include/GL/gl.h" 3
extern "C" void glPolygonStipple(const GLubyte *) __attribute__((visibility("default")));
# 814 "/usr/include/GL/gl.h" 3
extern "C" void glGetPolygonStipple(GLubyte *) __attribute__((visibility("default")));
# 816 "/usr/include/GL/gl.h" 3
extern "C" void glEdgeFlag(GLboolean) __attribute__((visibility("default")));
# 818 "/usr/include/GL/gl.h" 3
extern "C" void glEdgeFlagv(const GLboolean *) __attribute__((visibility("default")));
# 820 "/usr/include/GL/gl.h" 3
extern "C" void glScissor(GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 822 "/usr/include/GL/gl.h" 3
extern "C" void glClipPlane(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 824 "/usr/include/GL/gl.h" 3
extern "C" void glGetClipPlane(GLenum, GLdouble *) __attribute__((visibility("default")));
# 826 "/usr/include/GL/gl.h" 3
extern "C" void glDrawBuffer(GLenum) __attribute__((visibility("default")));
# 828 "/usr/include/GL/gl.h" 3
extern "C" void glReadBuffer(GLenum) __attribute__((visibility("default")));
# 830 "/usr/include/GL/gl.h" 3
extern "C" void glEnable(GLenum) __attribute__((visibility("default")));
# 832 "/usr/include/GL/gl.h" 3
extern "C" void glDisable(GLenum) __attribute__((visibility("default")));
# 834 "/usr/include/GL/gl.h" 3
extern "C" GLboolean glIsEnabled(GLenum) __attribute__((visibility("default")));
# 837 "/usr/include/GL/gl.h" 3
extern "C" void glEnableClientState(GLenum) __attribute__((visibility("default")));
# 839 "/usr/include/GL/gl.h" 3
extern "C" void glDisableClientState(GLenum) __attribute__((visibility("default")));
# 842 "/usr/include/GL/gl.h" 3
extern "C" void glGetBooleanv(GLenum, GLboolean *) __attribute__((visibility("default")));
# 844 "/usr/include/GL/gl.h" 3
extern "C" void glGetDoublev(GLenum, GLdouble *) __attribute__((visibility("default")));
# 846 "/usr/include/GL/gl.h" 3
extern "C" void glGetFloatv(GLenum, GLfloat *) __attribute__((visibility("default")));
# 848 "/usr/include/GL/gl.h" 3
extern "C" void glGetIntegerv(GLenum, GLint *) __attribute__((visibility("default")));
# 851 "/usr/include/GL/gl.h" 3
extern "C" void glPushAttrib(GLbitfield) __attribute__((visibility("default")));
# 853 "/usr/include/GL/gl.h" 3
extern "C" void glPopAttrib() __attribute__((visibility("default")));
# 856 "/usr/include/GL/gl.h" 3
extern "C" void glPushClientAttrib(GLbitfield) __attribute__((visibility("default")));
# 858 "/usr/include/GL/gl.h" 3
extern "C" void glPopClientAttrib() __attribute__((visibility("default")));
# 861 "/usr/include/GL/gl.h" 3
extern "C" GLint glRenderMode(GLenum) __attribute__((visibility("default")));
# 863 "/usr/include/GL/gl.h" 3
extern "C" GLenum glGetError() __attribute__((visibility("default")));
# 865 "/usr/include/GL/gl.h" 3
extern "C" const GLubyte *glGetString(GLenum) __attribute__((visibility("default")));
# 867 "/usr/include/GL/gl.h" 3
extern "C" void glFinish() __attribute__((visibility("default")));
# 869 "/usr/include/GL/gl.h" 3
extern "C" void glFlush() __attribute__((visibility("default")));
# 871 "/usr/include/GL/gl.h" 3
extern "C" void glHint(GLenum, GLenum) __attribute__((visibility("default")));
# 878 "/usr/include/GL/gl.h" 3
extern "C" void glClearDepth(GLclampd) __attribute__((visibility("default")));
# 880 "/usr/include/GL/gl.h" 3
extern "C" void glDepthFunc(GLenum) __attribute__((visibility("default")));
# 882 "/usr/include/GL/gl.h" 3
extern "C" void glDepthMask(GLboolean) __attribute__((visibility("default")));
# 884 "/usr/include/GL/gl.h" 3
extern "C" void glDepthRange(GLclampd, GLclampd) __attribute__((visibility("default")));
# 891 "/usr/include/GL/gl.h" 3
extern "C" void glClearAccum(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 893 "/usr/include/GL/gl.h" 3
extern "C" void glAccum(GLenum, GLfloat) __attribute__((visibility("default")));
# 900 "/usr/include/GL/gl.h" 3
extern "C" void glMatrixMode(GLenum) __attribute__((visibility("default")));
# 902 "/usr/include/GL/gl.h" 3
extern "C" void glOrtho(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 906 "/usr/include/GL/gl.h" 3
extern "C" void glFrustum(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 910 "/usr/include/GL/gl.h" 3
extern "C" void glViewport(GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 913 "/usr/include/GL/gl.h" 3
extern "C" void glPushMatrix() __attribute__((visibility("default")));
# 915 "/usr/include/GL/gl.h" 3
extern "C" void glPopMatrix() __attribute__((visibility("default")));
# 917 "/usr/include/GL/gl.h" 3
extern "C" void glLoadIdentity() __attribute__((visibility("default")));
# 919 "/usr/include/GL/gl.h" 3
extern "C" void glLoadMatrixd(const GLdouble *) __attribute__((visibility("default")));
# 920 "/usr/include/GL/gl.h" 3
extern "C" void glLoadMatrixf(const GLfloat *) __attribute__((visibility("default")));
# 922 "/usr/include/GL/gl.h" 3
extern "C" void glMultMatrixd(const GLdouble *) __attribute__((visibility("default")));
# 923 "/usr/include/GL/gl.h" 3
extern "C" void glMultMatrixf(const GLfloat *) __attribute__((visibility("default")));
# 925 "/usr/include/GL/gl.h" 3
extern "C" void glRotated(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 927 "/usr/include/GL/gl.h" 3
extern "C" void glRotatef(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 930 "/usr/include/GL/gl.h" 3
extern "C" void glScaled(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 931 "/usr/include/GL/gl.h" 3
extern "C" void glScalef(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 933 "/usr/include/GL/gl.h" 3
extern "C" void glTranslated(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 934 "/usr/include/GL/gl.h" 3
extern "C" void glTranslatef(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 941 "/usr/include/GL/gl.h" 3
extern "C" GLboolean glIsList(GLuint) __attribute__((visibility("default")));
# 943 "/usr/include/GL/gl.h" 3
extern "C" void glDeleteLists(GLuint, GLsizei) __attribute__((visibility("default")));
# 945 "/usr/include/GL/gl.h" 3
extern "C" GLuint glGenLists(GLsizei) __attribute__((visibility("default")));
# 947 "/usr/include/GL/gl.h" 3
extern "C" void glNewList(GLuint, GLenum) __attribute__((visibility("default")));
# 949 "/usr/include/GL/gl.h" 3
extern "C" void glEndList() __attribute__((visibility("default")));
# 951 "/usr/include/GL/gl.h" 3
extern "C" void glCallList(GLuint) __attribute__((visibility("default")));
# 953 "/usr/include/GL/gl.h" 3
extern "C" void glCallLists(GLsizei, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 956 "/usr/include/GL/gl.h" 3
extern "C" void glListBase(GLuint) __attribute__((visibility("default")));
# 963 "/usr/include/GL/gl.h" 3
extern "C" void glBegin(GLenum) __attribute__((visibility("default")));
# 965 "/usr/include/GL/gl.h" 3
extern "C" void glEnd() __attribute__((visibility("default")));
# 968 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2d(GLdouble, GLdouble) __attribute__((visibility("default")));
# 969 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2f(GLfloat, GLfloat) __attribute__((visibility("default")));
# 970 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2i(GLint, GLint) __attribute__((visibility("default")));
# 971 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2s(GLshort, GLshort) __attribute__((visibility("default")));
# 973 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 974 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 975 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3i(GLint, GLint, GLint) __attribute__((visibility("default")));
# 976 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 978 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 979 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 980 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 981 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 983 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2dv(const GLdouble *) __attribute__((visibility("default")));
# 984 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2fv(const GLfloat *) __attribute__((visibility("default")));
# 985 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2iv(const GLint *) __attribute__((visibility("default")));
# 986 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2sv(const GLshort *) __attribute__((visibility("default")));
# 988 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3dv(const GLdouble *) __attribute__((visibility("default")));
# 989 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3fv(const GLfloat *) __attribute__((visibility("default")));
# 990 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3iv(const GLint *) __attribute__((visibility("default")));
# 991 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3sv(const GLshort *) __attribute__((visibility("default")));
# 993 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4dv(const GLdouble *) __attribute__((visibility("default")));
# 994 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4fv(const GLfloat *) __attribute__((visibility("default")));
# 995 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4iv(const GLint *) __attribute__((visibility("default")));
# 996 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4sv(const GLshort *) __attribute__((visibility("default")));
# 999 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3b(GLbyte, GLbyte, GLbyte) __attribute__((visibility("default")));
# 1000 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1001 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1002 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3i(GLint, GLint, GLint) __attribute__((visibility("default")));
# 1003 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1005 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3bv(const GLbyte *) __attribute__((visibility("default")));
# 1006 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3dv(const GLdouble *) __attribute__((visibility("default")));
# 1007 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3fv(const GLfloat *) __attribute__((visibility("default")));
# 1008 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3iv(const GLint *) __attribute__((visibility("default")));
# 1009 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3sv(const GLshort *) __attribute__((visibility("default")));
# 1012 "/usr/include/GL/gl.h" 3
extern "C" void glIndexd(GLdouble) __attribute__((visibility("default")));
# 1013 "/usr/include/GL/gl.h" 3
extern "C" void glIndexf(GLfloat) __attribute__((visibility("default")));
# 1014 "/usr/include/GL/gl.h" 3
extern "C" void glIndexi(GLint) __attribute__((visibility("default")));
# 1015 "/usr/include/GL/gl.h" 3
extern "C" void glIndexs(GLshort) __attribute__((visibility("default")));
# 1016 "/usr/include/GL/gl.h" 3
extern "C" void glIndexub(GLubyte) __attribute__((visibility("default")));
# 1018 "/usr/include/GL/gl.h" 3
extern "C" void glIndexdv(const GLdouble *) __attribute__((visibility("default")));
# 1019 "/usr/include/GL/gl.h" 3
extern "C" void glIndexfv(const GLfloat *) __attribute__((visibility("default")));
# 1020 "/usr/include/GL/gl.h" 3
extern "C" void glIndexiv(const GLint *) __attribute__((visibility("default")));
# 1021 "/usr/include/GL/gl.h" 3
extern "C" void glIndexsv(const GLshort *) __attribute__((visibility("default")));
# 1022 "/usr/include/GL/gl.h" 3
extern "C" void glIndexubv(const GLubyte *) __attribute__((visibility("default")));
# 1024 "/usr/include/GL/gl.h" 3
extern "C" void glColor3b(GLbyte, GLbyte, GLbyte) __attribute__((visibility("default")));
# 1025 "/usr/include/GL/gl.h" 3
extern "C" void glColor3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1026 "/usr/include/GL/gl.h" 3
extern "C" void glColor3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1027 "/usr/include/GL/gl.h" 3
extern "C" void glColor3i(GLint, GLint, GLint) __attribute__((visibility("default")));
# 1028 "/usr/include/GL/gl.h" 3
extern "C" void glColor3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1029 "/usr/include/GL/gl.h" 3
extern "C" void glColor3ub(GLubyte, GLubyte, GLubyte) __attribute__((visibility("default")));
# 1030 "/usr/include/GL/gl.h" 3
extern "C" void glColor3ui(GLuint, GLuint, GLuint) __attribute__((visibility("default")));
# 1031 "/usr/include/GL/gl.h" 3
extern "C" void glColor3us(GLushort, GLushort, GLushort) __attribute__((visibility("default")));
# 1033 "/usr/include/GL/gl.h" 3
extern "C" void glColor4b(GLbyte, GLbyte, GLbyte, GLbyte) __attribute__((visibility("default")));
# 1035 "/usr/include/GL/gl.h" 3
extern "C" void glColor4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1037 "/usr/include/GL/gl.h" 3
extern "C" void glColor4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1039 "/usr/include/GL/gl.h" 3
extern "C" void glColor4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1041 "/usr/include/GL/gl.h" 3
extern "C" void glColor4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1043 "/usr/include/GL/gl.h" 3
extern "C" void glColor4ub(GLubyte, GLubyte, GLubyte, GLubyte) __attribute__((visibility("default")));
# 1045 "/usr/include/GL/gl.h" 3
extern "C" void glColor4ui(GLuint, GLuint, GLuint, GLuint) __attribute__((visibility("default")));
# 1047 "/usr/include/GL/gl.h" 3
extern "C" void glColor4us(GLushort, GLushort, GLushort, GLushort) __attribute__((visibility("default")));
# 1051 "/usr/include/GL/gl.h" 3
extern "C" void glColor3bv(const GLbyte *) __attribute__((visibility("default")));
# 1052 "/usr/include/GL/gl.h" 3
extern "C" void glColor3dv(const GLdouble *) __attribute__((visibility("default")));
# 1053 "/usr/include/GL/gl.h" 3
extern "C" void glColor3fv(const GLfloat *) __attribute__((visibility("default")));
# 1054 "/usr/include/GL/gl.h" 3
extern "C" void glColor3iv(const GLint *) __attribute__((visibility("default")));
# 1055 "/usr/include/GL/gl.h" 3
extern "C" void glColor3sv(const GLshort *) __attribute__((visibility("default")));
# 1056 "/usr/include/GL/gl.h" 3
extern "C" void glColor3ubv(const GLubyte *) __attribute__((visibility("default")));
# 1057 "/usr/include/GL/gl.h" 3
extern "C" void glColor3uiv(const GLuint *) __attribute__((visibility("default")));
# 1058 "/usr/include/GL/gl.h" 3
extern "C" void glColor3usv(const GLushort *) __attribute__((visibility("default")));
# 1060 "/usr/include/GL/gl.h" 3
extern "C" void glColor4bv(const GLbyte *) __attribute__((visibility("default")));
# 1061 "/usr/include/GL/gl.h" 3
extern "C" void glColor4dv(const GLdouble *) __attribute__((visibility("default")));
# 1062 "/usr/include/GL/gl.h" 3
extern "C" void glColor4fv(const GLfloat *) __attribute__((visibility("default")));
# 1063 "/usr/include/GL/gl.h" 3
extern "C" void glColor4iv(const GLint *) __attribute__((visibility("default")));
# 1064 "/usr/include/GL/gl.h" 3
extern "C" void glColor4sv(const GLshort *) __attribute__((visibility("default")));
# 1065 "/usr/include/GL/gl.h" 3
extern "C" void glColor4ubv(const GLubyte *) __attribute__((visibility("default")));
# 1066 "/usr/include/GL/gl.h" 3
extern "C" void glColor4uiv(const GLuint *) __attribute__((visibility("default")));
# 1067 "/usr/include/GL/gl.h" 3
extern "C" void glColor4usv(const GLushort *) __attribute__((visibility("default")));
# 1070 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1d(GLdouble) __attribute__((visibility("default")));
# 1071 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1f(GLfloat) __attribute__((visibility("default")));
# 1072 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1i(GLint) __attribute__((visibility("default")));
# 1073 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1s(GLshort) __attribute__((visibility("default")));
# 1075 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2d(GLdouble, GLdouble) __attribute__((visibility("default")));
# 1076 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2f(GLfloat, GLfloat) __attribute__((visibility("default")));
# 1077 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2i(GLint, GLint) __attribute__((visibility("default")));
# 1078 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2s(GLshort, GLshort) __attribute__((visibility("default")));
# 1080 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1081 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1082 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3i(GLint, GLint, GLint) __attribute__((visibility("default")));
# 1083 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1085 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1086 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1087 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1088 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1090 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1dv(const GLdouble *) __attribute__((visibility("default")));
# 1091 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1fv(const GLfloat *) __attribute__((visibility("default")));
# 1092 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1iv(const GLint *) __attribute__((visibility("default")));
# 1093 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1sv(const GLshort *) __attribute__((visibility("default")));
# 1095 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2dv(const GLdouble *) __attribute__((visibility("default")));
# 1096 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2fv(const GLfloat *) __attribute__((visibility("default")));
# 1097 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2iv(const GLint *) __attribute__((visibility("default")));
# 1098 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2sv(const GLshort *) __attribute__((visibility("default")));
# 1100 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3dv(const GLdouble *) __attribute__((visibility("default")));
# 1101 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3fv(const GLfloat *) __attribute__((visibility("default")));
# 1102 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3iv(const GLint *) __attribute__((visibility("default")));
# 1103 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3sv(const GLshort *) __attribute__((visibility("default")));
# 1105 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4dv(const GLdouble *) __attribute__((visibility("default")));
# 1106 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4fv(const GLfloat *) __attribute__((visibility("default")));
# 1107 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4iv(const GLint *) __attribute__((visibility("default")));
# 1108 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4sv(const GLshort *) __attribute__((visibility("default")));
# 1111 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2d(GLdouble, GLdouble) __attribute__((visibility("default")));
# 1112 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2f(GLfloat, GLfloat) __attribute__((visibility("default")));
# 1113 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2i(GLint, GLint) __attribute__((visibility("default")));
# 1114 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2s(GLshort, GLshort) __attribute__((visibility("default")));
# 1116 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1117 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1118 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3i(GLint, GLint, GLint) __attribute__((visibility("default")));
# 1119 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1121 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1122 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1123 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1124 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1126 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2dv(const GLdouble *) __attribute__((visibility("default")));
# 1127 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2fv(const GLfloat *) __attribute__((visibility("default")));
# 1128 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2iv(const GLint *) __attribute__((visibility("default")));
# 1129 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2sv(const GLshort *) __attribute__((visibility("default")));
# 1131 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3dv(const GLdouble *) __attribute__((visibility("default")));
# 1132 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3fv(const GLfloat *) __attribute__((visibility("default")));
# 1133 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3iv(const GLint *) __attribute__((visibility("default")));
# 1134 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3sv(const GLshort *) __attribute__((visibility("default")));
# 1136 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4dv(const GLdouble *) __attribute__((visibility("default")));
# 1137 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4fv(const GLfloat *) __attribute__((visibility("default")));
# 1138 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4iv(const GLint *) __attribute__((visibility("default")));
# 1139 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4sv(const GLshort *) __attribute__((visibility("default")));
# 1142 "/usr/include/GL/gl.h" 3
extern "C" void glRectd(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1143 "/usr/include/GL/gl.h" 3
extern "C" void glRectf(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1144 "/usr/include/GL/gl.h" 3
extern "C" void glRecti(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1145 "/usr/include/GL/gl.h" 3
extern "C" void glRects(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1148 "/usr/include/GL/gl.h" 3
extern "C" void glRectdv(const GLdouble *, const GLdouble *) __attribute__((visibility("default")));
# 1149 "/usr/include/GL/gl.h" 3
extern "C" void glRectfv(const GLfloat *, const GLfloat *) __attribute__((visibility("default")));
# 1150 "/usr/include/GL/gl.h" 3
extern "C" void glRectiv(const GLint *, const GLint *) __attribute__((visibility("default")));
# 1151 "/usr/include/GL/gl.h" 3
extern "C" void glRectsv(const GLshort *, const GLshort *) __attribute__((visibility("default")));
# 1158 "/usr/include/GL/gl.h" 3
extern "C" void glVertexPointer(GLint, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1161 "/usr/include/GL/gl.h" 3
extern "C" void glNormalPointer(GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1164 "/usr/include/GL/gl.h" 3
extern "C" void glColorPointer(GLint, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1167 "/usr/include/GL/gl.h" 3
extern "C" void glIndexPointer(GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1170 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoordPointer(GLint, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1173 "/usr/include/GL/gl.h" 3
extern "C" void glEdgeFlagPointer(GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1175 "/usr/include/GL/gl.h" 3
extern "C" void glGetPointerv(GLenum, GLvoid **) __attribute__((visibility("default")));
# 1177 "/usr/include/GL/gl.h" 3
extern "C" void glArrayElement(GLint) __attribute__((visibility("default")));
# 1179 "/usr/include/GL/gl.h" 3
extern "C" void glDrawArrays(GLenum, GLint, GLsizei) __attribute__((visibility("default")));
# 1181 "/usr/include/GL/gl.h" 3
extern "C" void glDrawElements(GLenum, GLsizei, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1184 "/usr/include/GL/gl.h" 3
extern "C" void glInterleavedArrays(GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1191 "/usr/include/GL/gl.h" 3
extern "C" void glShadeModel(GLenum) __attribute__((visibility("default")));
# 1193 "/usr/include/GL/gl.h" 3
extern "C" void glLightf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1194 "/usr/include/GL/gl.h" 3
extern "C" void glLighti(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1195 "/usr/include/GL/gl.h" 3
extern "C" void glLightfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1197 "/usr/include/GL/gl.h" 3
extern "C" void glLightiv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1200 "/usr/include/GL/gl.h" 3
extern "C" void glGetLightfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1202 "/usr/include/GL/gl.h" 3
extern "C" void glGetLightiv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1205 "/usr/include/GL/gl.h" 3
extern "C" void glLightModelf(GLenum, GLfloat) __attribute__((visibility("default")));
# 1206 "/usr/include/GL/gl.h" 3
extern "C" void glLightModeli(GLenum, GLint) __attribute__((visibility("default")));
# 1207 "/usr/include/GL/gl.h" 3
extern "C" void glLightModelfv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1208 "/usr/include/GL/gl.h" 3
extern "C" void glLightModeliv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1210 "/usr/include/GL/gl.h" 3
extern "C" void glMaterialf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1211 "/usr/include/GL/gl.h" 3
extern "C" void glMateriali(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1212 "/usr/include/GL/gl.h" 3
extern "C" void glMaterialfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1213 "/usr/include/GL/gl.h" 3
extern "C" void glMaterialiv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1215 "/usr/include/GL/gl.h" 3
extern "C" void glGetMaterialfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1216 "/usr/include/GL/gl.h" 3
extern "C" void glGetMaterialiv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1218 "/usr/include/GL/gl.h" 3
extern "C" void glColorMaterial(GLenum, GLenum) __attribute__((visibility("default")));
# 1225 "/usr/include/GL/gl.h" 3
extern "C" void glPixelZoom(GLfloat, GLfloat) __attribute__((visibility("default")));
# 1227 "/usr/include/GL/gl.h" 3
extern "C" void glPixelStoref(GLenum, GLfloat) __attribute__((visibility("default")));
# 1228 "/usr/include/GL/gl.h" 3
extern "C" void glPixelStorei(GLenum, GLint) __attribute__((visibility("default")));
# 1230 "/usr/include/GL/gl.h" 3
extern "C" void glPixelTransferf(GLenum, GLfloat) __attribute__((visibility("default")));
# 1231 "/usr/include/GL/gl.h" 3
extern "C" void glPixelTransferi(GLenum, GLint) __attribute__((visibility("default")));
# 1233 "/usr/include/GL/gl.h" 3
extern "C" void glPixelMapfv(GLenum, GLsizei, const GLfloat *) __attribute__((visibility("default")));
# 1235 "/usr/include/GL/gl.h" 3
extern "C" void glPixelMapuiv(GLenum, GLsizei, const GLuint *) __attribute__((visibility("default")));
# 1237 "/usr/include/GL/gl.h" 3
extern "C" void glPixelMapusv(GLenum, GLsizei, const GLushort *) __attribute__((visibility("default")));
# 1240 "/usr/include/GL/gl.h" 3
extern "C" void glGetPixelMapfv(GLenum, GLfloat *) __attribute__((visibility("default")));
# 1241 "/usr/include/GL/gl.h" 3
extern "C" void glGetPixelMapuiv(GLenum, GLuint *) __attribute__((visibility("default")));
# 1242 "/usr/include/GL/gl.h" 3
extern "C" void glGetPixelMapusv(GLenum, GLushort *) __attribute__((visibility("default")));
# 1244 "/usr/include/GL/gl.h" 3
extern "C" void glBitmap(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((visibility("default")));
# 1249 "/usr/include/GL/gl.h" 3
extern "C" void glReadPixels(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1254 "/usr/include/GL/gl.h" 3
extern "C" void glDrawPixels(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1258 "/usr/include/GL/gl.h" 3
extern "C" void glCopyPixels(GLint, GLint, GLsizei, GLsizei, GLenum) __attribute__((visibility("default")));
# 1266 "/usr/include/GL/gl.h" 3
extern "C" void glStencilFunc(GLenum, GLint, GLuint) __attribute__((visibility("default")));
# 1268 "/usr/include/GL/gl.h" 3
extern "C" void glStencilMask(GLuint) __attribute__((visibility("default")));
# 1270 "/usr/include/GL/gl.h" 3
extern "C" void glStencilOp(GLenum, GLenum, GLenum) __attribute__((visibility("default")));
# 1272 "/usr/include/GL/gl.h" 3
extern "C" void glClearStencil(GLint) __attribute__((visibility("default")));
# 1280 "/usr/include/GL/gl.h" 3
extern "C" void glTexGend(GLenum, GLenum, GLdouble) __attribute__((visibility("default")));
# 1281 "/usr/include/GL/gl.h" 3
extern "C" void glTexGenf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1282 "/usr/include/GL/gl.h" 3
extern "C" void glTexGeni(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1284 "/usr/include/GL/gl.h" 3
extern "C" void glTexGendv(GLenum, GLenum, const GLdouble *) __attribute__((visibility("default")));
# 1285 "/usr/include/GL/gl.h" 3
extern "C" void glTexGenfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1286 "/usr/include/GL/gl.h" 3
extern "C" void glTexGeniv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1288 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexGendv(GLenum, GLenum, GLdouble *) __attribute__((visibility("default")));
# 1289 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexGenfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1290 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexGeniv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1293 "/usr/include/GL/gl.h" 3
extern "C" void glTexEnvf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1294 "/usr/include/GL/gl.h" 3
extern "C" void glTexEnvi(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1296 "/usr/include/GL/gl.h" 3
extern "C" void glTexEnvfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1297 "/usr/include/GL/gl.h" 3
extern "C" void glTexEnviv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1299 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexEnvfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1300 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexEnviv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1303 "/usr/include/GL/gl.h" 3
extern "C" void glTexParameterf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1304 "/usr/include/GL/gl.h" 3
extern "C" void glTexParameteri(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1306 "/usr/include/GL/gl.h" 3
extern "C" void glTexParameterfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1308 "/usr/include/GL/gl.h" 3
extern "C" void glTexParameteriv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1311 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1313 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1316 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexLevelParameterfv(GLenum, GLint, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1318 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexLevelParameteriv(GLenum, GLint, GLenum, GLint *) __attribute__((visibility("default")));
# 1322 "/usr/include/GL/gl.h" 3
extern "C" void glTexImage1D(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1328 "/usr/include/GL/gl.h" 3
extern "C" void glTexImage2D(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1334 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexImage(GLenum, GLint, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1341 "/usr/include/GL/gl.h" 3
extern "C" void glGenTextures(GLsizei, GLuint *) __attribute__((visibility("default")));
# 1343 "/usr/include/GL/gl.h" 3
extern "C" void glDeleteTextures(GLsizei, const GLuint *) __attribute__((visibility("default")));
# 1345 "/usr/include/GL/gl.h" 3
extern "C" void glBindTexture(GLenum, GLuint) __attribute__((visibility("default")));
# 1347 "/usr/include/GL/gl.h" 3
extern "C" void glPrioritizeTextures(GLsizei, const GLuint *, const GLclampf *) __attribute__((visibility("default")));
# 1351 "/usr/include/GL/gl.h" 3
extern "C" GLboolean glAreTexturesResident(GLsizei, const GLuint *, GLboolean *) __attribute__((visibility("default")));
# 1355 "/usr/include/GL/gl.h" 3
extern "C" GLboolean glIsTexture(GLuint) __attribute__((visibility("default")));
# 1358 "/usr/include/GL/gl.h" 3
extern "C" void glTexSubImage1D(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1364 "/usr/include/GL/gl.h" 3
extern "C" void glTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1371 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexImage1D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) __attribute__((visibility("default")));
# 1377 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexImage2D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) __attribute__((visibility("default")));
# 1384 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexSubImage1D(GLenum, GLint, GLint, GLint, GLint, GLsizei) __attribute__((visibility("default")));
# 1389 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexSubImage2D(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 1399 "/usr/include/GL/gl.h" 3
extern "C" void glMap1d(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *) __attribute__((visibility("default")));
# 1402 "/usr/include/GL/gl.h" 3
extern "C" void glMap1f(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *) __attribute__((visibility("default")));
# 1406 "/usr/include/GL/gl.h" 3
extern "C" void glMap2d(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *) __attribute__((visibility("default")));
# 1410 "/usr/include/GL/gl.h" 3
extern "C" void glMap2f(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *) __attribute__((visibility("default")));
# 1415 "/usr/include/GL/gl.h" 3
extern "C" void glGetMapdv(GLenum, GLenum, GLdouble *) __attribute__((visibility("default")));
# 1416 "/usr/include/GL/gl.h" 3
extern "C" void glGetMapfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1417 "/usr/include/GL/gl.h" 3
extern "C" void glGetMapiv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1419 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord1d(GLdouble) __attribute__((visibility("default")));
# 1420 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord1f(GLfloat) __attribute__((visibility("default")));
# 1422 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord1dv(const GLdouble *) __attribute__((visibility("default")));
# 1423 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord1fv(const GLfloat *) __attribute__((visibility("default")));
# 1425 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord2d(GLdouble, GLdouble) __attribute__((visibility("default")));
# 1426 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord2f(GLfloat, GLfloat) __attribute__((visibility("default")));
# 1428 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord2dv(const GLdouble *) __attribute__((visibility("default")));
# 1429 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord2fv(const GLfloat *) __attribute__((visibility("default")));
# 1431 "/usr/include/GL/gl.h" 3
extern "C" void glMapGrid1d(GLint, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1432 "/usr/include/GL/gl.h" 3
extern "C" void glMapGrid1f(GLint, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1434 "/usr/include/GL/gl.h" 3
extern "C" void glMapGrid2d(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1436 "/usr/include/GL/gl.h" 3
extern "C" void glMapGrid2f(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1439 "/usr/include/GL/gl.h" 3
extern "C" void glEvalPoint1(GLint) __attribute__((visibility("default")));
# 1441 "/usr/include/GL/gl.h" 3
extern "C" void glEvalPoint2(GLint, GLint) __attribute__((visibility("default")));
# 1443 "/usr/include/GL/gl.h" 3
extern "C" void glEvalMesh1(GLenum, GLint, GLint) __attribute__((visibility("default")));
# 1445 "/usr/include/GL/gl.h" 3
extern "C" void glEvalMesh2(GLenum, GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1452 "/usr/include/GL/gl.h" 3
extern "C" void glFogf(GLenum, GLfloat) __attribute__((visibility("default")));
# 1454 "/usr/include/GL/gl.h" 3
extern "C" void glFogi(GLenum, GLint) __attribute__((visibility("default")));
# 1456 "/usr/include/GL/gl.h" 3
extern "C" void glFogfv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1458 "/usr/include/GL/gl.h" 3
extern "C" void glFogiv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1465 "/usr/include/GL/gl.h" 3
extern "C" void glFeedbackBuffer(GLsizei, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1467 "/usr/include/GL/gl.h" 3
extern "C" void glPassThrough(GLfloat) __attribute__((visibility("default")));
# 1469 "/usr/include/GL/gl.h" 3
extern "C" void glSelectBuffer(GLsizei, GLuint *) __attribute__((visibility("default")));
# 1471 "/usr/include/GL/gl.h" 3
extern "C" void glInitNames() __attribute__((visibility("default")));
# 1473 "/usr/include/GL/gl.h" 3
extern "C" void glLoadName(GLuint) __attribute__((visibility("default")));
# 1475 "/usr/include/GL/gl.h" 3
extern "C" void glPushName(GLuint) __attribute__((visibility("default")));
# 1477 "/usr/include/GL/gl.h" 3
extern "C" void glPopName() __attribute__((visibility("default")));
# 1527 "/usr/include/GL/gl.h" 3
extern "C" void glDrawRangeElements(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1530 "/usr/include/GL/gl.h" 3
extern "C" void glTexImage3D(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1537 "/usr/include/GL/gl.h" 3
extern "C" void glTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1544 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 1550 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTSPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *); }
# 1551 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLTEXIMAGE3DPROC)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 1552 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 1553 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 1637 "/usr/include/GL/gl.h" 3
extern "C" void glColorTable(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1641 "/usr/include/GL/gl.h" 3
extern "C" void glColorSubTable(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1646 "/usr/include/GL/gl.h" 3
extern "C" void glColorTableParameteriv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1649 "/usr/include/GL/gl.h" 3
extern "C" void glColorTableParameterfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1652 "/usr/include/GL/gl.h" 3
extern "C" void glCopyColorSubTable(GLenum, GLsizei, GLint, GLint, GLsizei) __attribute__((visibility("default")));
# 1655 "/usr/include/GL/gl.h" 3
extern "C" void glCopyColorTable(GLenum, GLenum, GLint, GLint, GLsizei) __attribute__((visibility("default")));
# 1658 "/usr/include/GL/gl.h" 3
extern "C" void glGetColorTable(GLenum, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1661 "/usr/include/GL/gl.h" 3
extern "C" void glGetColorTableParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1664 "/usr/include/GL/gl.h" 3
extern "C" void glGetColorTableParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1667 "/usr/include/GL/gl.h" 3
extern "C" void glBlendEquation(GLenum) __attribute__((visibility("default")));
# 1669 "/usr/include/GL/gl.h" 3
extern "C" void glBlendColor(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((visibility("default")));
# 1672 "/usr/include/GL/gl.h" 3
extern "C" void glHistogram(GLenum, GLsizei, GLenum, GLboolean) __attribute__((visibility("default")));
# 1675 "/usr/include/GL/gl.h" 3
extern "C" void glResetHistogram(GLenum) __attribute__((visibility("default")));
# 1677 "/usr/include/GL/gl.h" 3
extern "C" void glGetHistogram(GLenum, GLboolean, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1681 "/usr/include/GL/gl.h" 3
extern "C" void glGetHistogramParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1684 "/usr/include/GL/gl.h" 3
extern "C" void glGetHistogramParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1687 "/usr/include/GL/gl.h" 3
extern "C" void glMinmax(GLenum, GLenum, GLboolean) __attribute__((visibility("default")));
# 1690 "/usr/include/GL/gl.h" 3
extern "C" void glResetMinmax(GLenum) __attribute__((visibility("default")));
# 1692 "/usr/include/GL/gl.h" 3
extern "C" void glGetMinmax(GLenum, GLboolean, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1696 "/usr/include/GL/gl.h" 3
extern "C" void glGetMinmaxParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1699 "/usr/include/GL/gl.h" 3
extern "C" void glGetMinmaxParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1702 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionFilter1D(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1706 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionFilter2D(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1710 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionParameterf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1713 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionParameterfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1716 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionParameteri(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1719 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionParameteriv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1722 "/usr/include/GL/gl.h" 3
extern "C" void glCopyConvolutionFilter1D(GLenum, GLenum, GLint, GLint, GLsizei) __attribute__((visibility("default")));
# 1725 "/usr/include/GL/gl.h" 3
extern "C" void glCopyConvolutionFilter2D(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 1729 "/usr/include/GL/gl.h" 3
extern "C" void glGetConvolutionFilter(GLenum, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1732 "/usr/include/GL/gl.h" 3
extern "C" void glGetConvolutionParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1735 "/usr/include/GL/gl.h" 3
extern "C" void glGetConvolutionParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1738 "/usr/include/GL/gl.h" 3
extern "C" void glSeparableFilter2D(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) __attribute__((visibility("default")));
# 1742 "/usr/include/GL/gl.h" 3
extern "C" void glGetSeparableFilter(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) __attribute__((visibility("default")));
# 1745 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLBLENDCOLORPROC)(GLclampf, GLclampf, GLclampf, GLclampf); }
# 1746 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONPROC)(GLenum); }
# 1859 "/usr/include/GL/gl.h" 3
extern "C" void glActiveTexture(GLenum) __attribute__((visibility("default")));
# 1861 "/usr/include/GL/gl.h" 3
extern "C" void glClientActiveTexture(GLenum) __attribute__((visibility("default")));
# 1863 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexImage1D(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1865 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexImage2D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1867 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexImage3D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1869 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexSubImage1D(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1871 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1873 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1875 "/usr/include/GL/gl.h" 3
extern "C" void glGetCompressedTexImage(GLenum, GLint, GLvoid *) __attribute__((visibility("default")));
# 1877 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1d(GLenum, GLdouble) __attribute__((visibility("default")));
# 1879 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1dv(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 1881 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1f(GLenum, GLfloat) __attribute__((visibility("default")));
# 1883 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1fv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1885 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1i(GLenum, GLint) __attribute__((visibility("default")));
# 1887 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1iv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1889 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1s(GLenum, GLshort) __attribute__((visibility("default")));
# 1891 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1sv(GLenum, const GLshort *) __attribute__((visibility("default")));
# 1893 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2d(GLenum, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1895 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2dv(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 1897 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2f(GLenum, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1899 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2fv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1901 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2i(GLenum, GLint, GLint) __attribute__((visibility("default")));
# 1903 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2iv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1905 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2s(GLenum, GLshort, GLshort) __attribute__((visibility("default")));
# 1907 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2sv(GLenum, const GLshort *) __attribute__((visibility("default")));
# 1909 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3d(GLenum, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1911 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3dv(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 1913 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3f(GLenum, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1915 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3fv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1917 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3i(GLenum, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1919 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3iv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1921 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3s(GLenum, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1923 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3sv(GLenum, const GLshort *) __attribute__((visibility("default")));
# 1925 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4d(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1927 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4dv(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 1929 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4f(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1931 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4fv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1933 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4i(GLenum, GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1935 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4iv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1937 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4s(GLenum, GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1939 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4sv(GLenum, const GLshort *) __attribute__((visibility("default")));
# 1942 "/usr/include/GL/gl.h" 3
extern "C" void glLoadTransposeMatrixd(const GLdouble [16]) __attribute__((visibility("default")));
# 1944 "/usr/include/GL/gl.h" 3
extern "C" void glLoadTransposeMatrixf(const GLfloat [16]) __attribute__((visibility("default")));
# 1946 "/usr/include/GL/gl.h" 3
extern "C" void glMultTransposeMatrixd(const GLdouble [16]) __attribute__((visibility("default")));
# 1948 "/usr/include/GL/gl.h" 3
extern "C" void glMultTransposeMatrixf(const GLfloat [16]) __attribute__((visibility("default")));
# 1950 "/usr/include/GL/gl.h" 3
extern "C" void glSampleCoverage(GLclampf, GLboolean) __attribute__((visibility("default")));
# 1953 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLACTIVETEXTUREPROC)(GLenum); }
# 1954 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLSAMPLECOVERAGEPROC)(GLclampf, GLboolean); }
# 1955 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 1956 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 1957 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DPROC)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
# 1958 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 1959 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 1960 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 1961 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEPROC)(GLenum, GLint, GLvoid *); }
# 2007 "/usr/include/GL/gl.h" 3
extern "C" void glActiveTextureARB(GLenum) __attribute__((visibility("default")));
# 2008 "/usr/include/GL/gl.h" 3
extern "C" void glClientActiveTextureARB(GLenum) __attribute__((visibility("default")));
# 2009 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1dARB(GLenum, GLdouble) __attribute__((visibility("default")));
# 2010 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 2011 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1fARB(GLenum, GLfloat) __attribute__((visibility("default")));
# 2012 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 2013 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1iARB(GLenum, GLint) __attribute__((visibility("default")));
# 2014 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
# 2015 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1sARB(GLenum, GLshort) __attribute__((visibility("default")));
# 2016 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
# 2017 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2dARB(GLenum, GLdouble, GLdouble) __attribute__((visibility("default")));
# 2018 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 2019 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2fARB(GLenum, GLfloat, GLfloat) __attribute__((visibility("default")));
# 2020 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 2021 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2iARB(GLenum, GLint, GLint) __attribute__((visibility("default")));
# 2022 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
# 2023 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2sARB(GLenum, GLshort, GLshort) __attribute__((visibility("default")));
# 2024 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
# 2025 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3dARB(GLenum, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 2026 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 2027 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3fARB(GLenum, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 2028 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 2029 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3iARB(GLenum, GLint, GLint, GLint) __attribute__((visibility("default")));
# 2030 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
# 2031 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3sARB(GLenum, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 2032 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
# 2033 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4dARB(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 2034 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 2035 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4fARB(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 2036 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 2037 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4iARB(GLenum, GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 2038 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
# 2039 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4sARB(GLenum, GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 2040 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
# 2042 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLACTIVETEXTUREARBPROC)(GLenum); }
# 2043 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCLIENTACTIVETEXTUREARBPROC)(GLenum); }
# 2044 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DARBPROC)(GLenum, GLdouble); }
# 2045 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DVARBPROC)(GLenum, const GLdouble *); }
# 2046 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FARBPROC)(GLenum, GLfloat); }
# 2047 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FVARBPROC)(GLenum, const GLfloat *); }
# 2048 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IARBPROC)(GLenum, GLint); }
# 2049 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IVARBPROC)(GLenum, const GLint *); }
# 2050 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SARBPROC)(GLenum, GLshort); }
# 2051 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SVARBPROC)(GLenum, const GLshort *); }
# 2052 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DARBPROC)(GLenum, GLdouble, GLdouble); }
# 2053 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DVARBPROC)(GLenum, const GLdouble *); }
# 2054 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FARBPROC)(GLenum, GLfloat, GLfloat); }
# 2055 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FVARBPROC)(GLenum, const GLfloat *); }
# 2056 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IARBPROC)(GLenum, GLint, GLint); }
# 2057 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IVARBPROC)(GLenum, const GLint *); }
# 2058 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SARBPROC)(GLenum, GLshort, GLshort); }
# 2059 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SVARBPROC)(GLenum, const GLshort *); }
# 2060 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DARBPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 2061 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DVARBPROC)(GLenum, const GLdouble *); }
# 2062 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FARBPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 2063 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FVARBPROC)(GLenum, const GLfloat *); }
# 2064 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IARBPROC)(GLenum, GLint, GLint, GLint); }
# 2065 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IVARBPROC)(GLenum, const GLint *); }
# 2066 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SARBPROC)(GLenum, GLshort, GLshort, GLshort); }
# 2067 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SVARBPROC)(GLenum, const GLshort *); }
# 2068 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DARBPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
# 2069 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DVARBPROC)(GLenum, const GLdouble *); }
# 2070 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FARBPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
# 2071 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FVARBPROC)(GLenum, const GLfloat *); }
# 2072 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IARBPROC)(GLenum, GLint, GLint, GLint, GLint); }
# 2073 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IVARBPROC)(GLenum, const GLint *); }
# 2074 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SARBPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
# 2075 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SVARBPROC)(GLenum, const GLshort *); }
# 5028 "/usr/include/GL/glext.h" 3
extern "C" { typedef char GLchar; }
# 5033 "/usr/include/GL/glext.h" 3
extern "C" { typedef ptrdiff_t GLintptr; }
# 5034 "/usr/include/GL/glext.h" 3
extern "C" { typedef ptrdiff_t GLsizeiptr; }
# 5039 "/usr/include/GL/glext.h" 3
extern "C" { typedef ptrdiff_t GLintptrARB; }
# 5040 "/usr/include/GL/glext.h" 3
extern "C" { typedef ptrdiff_t GLsizeiptrARB; }
# 5045 "/usr/include/GL/glext.h" 3
extern "C" { typedef char GLcharARB; }
# 5046 "/usr/include/GL/glext.h" 3
extern "C" { typedef unsigned GLhandleARB; }
# 5051 "/usr/include/GL/glext.h" 3
extern "C" { typedef unsigned short GLhalfARB; }
# 5055 "/usr/include/GL/glext.h" 3
extern "C" { typedef unsigned short GLhalfNV; }
# 49 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned char uint8_t; }
# 50 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned short uint16_t; }
# 52 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned uint32_t; }
# 56 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned long uint64_t; }
# 66 "/usr/include/stdint.h" 3
extern "C" { typedef signed char int_least8_t; }
# 67 "/usr/include/stdint.h" 3
extern "C" { typedef short int_least16_t; }
# 68 "/usr/include/stdint.h" 3
extern "C" { typedef int int_least32_t; }
# 70 "/usr/include/stdint.h" 3
extern "C" { typedef long int_least64_t; }
# 77 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned char uint_least8_t; }
# 78 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned short uint_least16_t; }
# 79 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned uint_least32_t; }
# 81 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned long uint_least64_t; }
# 91 "/usr/include/stdint.h" 3
extern "C" { typedef signed char int_fast8_t; }
# 93 "/usr/include/stdint.h" 3
extern "C" { typedef long int_fast16_t; }
# 94 "/usr/include/stdint.h" 3
extern "C" { typedef long int_fast32_t; }
# 95 "/usr/include/stdint.h" 3
extern "C" { typedef long int_fast64_t; }
# 104 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned char uint_fast8_t; }
# 106 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned long uint_fast16_t; }
# 107 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned long uint_fast32_t; }
# 108 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned long uint_fast64_t; }
# 120 "/usr/include/stdint.h" 3
extern "C" { typedef long intptr_t; }
# 123 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned long uintptr_t; }
# 135 "/usr/include/stdint.h" 3
extern "C" { typedef long intmax_t; }
# 136 "/usr/include/stdint.h" 3
extern "C" { typedef unsigned long uintmax_t; }
# 283 "/usr/include/inttypes.h" 3
extern "C" { typedef
# 280 "/usr/include/inttypes.h" 3
struct {
# 281 "/usr/include/inttypes.h" 3
long quot;
# 282 "/usr/include/inttypes.h" 3
long rem;
# 283 "/usr/include/inttypes.h" 3
} imaxdiv_t; }
# 298 "/usr/include/inttypes.h" 3
extern "C" intmax_t imaxabs(intmax_t) throw() __attribute__((__const__));
# 301 "/usr/include/inttypes.h" 3
extern "C" imaxdiv_t imaxdiv(intmax_t, intmax_t) throw() __attribute__((__const__));
# 305 "/usr/include/inttypes.h" 3
extern "C" intmax_t strtoimax(const char *__restrict__, char **__restrict__, int) throw();
# 309 "/usr/include/inttypes.h" 3
extern "C" uintmax_t strtoumax(const char *__restrict__, char **__restrict__, int) throw();
# 313 "/usr/include/inttypes.h" 3
extern "C" intmax_t wcstoimax(const wchar_t *__restrict__, wchar_t **__restrict__, int) throw();
# 318 "/usr/include/inttypes.h" 3
extern "C" uintmax_t wcstoumax(const wchar_t *__restrict__, wchar_t **__restrict__, int) throw();
# 5097 "/usr/include/GL/glext.h" 3
extern "C" { typedef int64_t GLint64EXT; }
# 5098 "/usr/include/GL/glext.h" 3
extern "C" { typedef uint64_t GLuint64EXT; }
# 5102 "/usr/include/GL/glext.h" 3
extern "C" { typedef int64_t GLint64; }
# 5103 "/usr/include/GL/glext.h" 3
extern "C" { typedef uint64_t GLuint64; }
# 5104 "/usr/include/GL/glext.h" 3
extern "C" { typedef struct __GLsync *GLsync; }
# 5109 "/usr/include/GL/glext.h" 3
struct _cl_context;
# 5110 "/usr/include/GL/glext.h" 3
struct _cl_event;
# 5114 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*GLDEBUGPROCARB)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *, GLvoid *); }
# 5118 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*GLDEBUGPROCAMD)(GLuint, GLenum, GLenum, GLsizei, const GLchar *, GLvoid *); }
# 5122 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLintptr GLvdpauSurfaceNV; }
# 5179 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 5180 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERFVPROC)(GLenum, GLenum, const GLfloat *); }
# 5181 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERIVPROC)(GLenum, GLenum, const GLint *); }
# 5182 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCOLORTABLEPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 5183 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 5184 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 5185 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 5186 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORSUBTABLEPROC)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 5187 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCOLORSUBTABLEPROC)(GLenum, GLsizei, GLint, GLint, GLsizei); }
# 5188 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER1DPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 5189 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER2DPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 5190 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFPROC)(GLenum, GLenum, GLfloat); }
# 5191 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFVPROC)(GLenum, GLenum, const GLfloat *); }
# 5192 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIPROC)(GLenum, GLenum, GLint); }
# 5193 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIVPROC)(GLenum, GLenum, const GLint *); }
# 5194 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER1DPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 5195 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER2DPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei); }
# 5196 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONFILTERPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 5197 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 5198 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 5199 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSEPARABLEFILTERPROC)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *); }
# 5200 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSEPARABLEFILTER2DPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *); }
# 5201 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
# 5202 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 5203 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 5204 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
# 5205 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 5206 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 5207 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLHISTOGRAMPROC)(GLenum, GLsizei, GLenum, GLboolean); }
# 5208 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMINMAXPROC)(GLenum, GLenum, GLboolean); }
# 5209 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESETHISTOGRAMPROC)(GLenum); }
# 5210 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESETMINMAXPROC)(GLenum); }
# 5278 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLIENTACTIVETEXTUREPROC)(GLenum); }
# 5279 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DPROC)(GLenum, GLdouble); }
# 5280 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DVPROC)(GLenum, const GLdouble *); }
# 5281 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FPROC)(GLenum, GLfloat); }
# 5282 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FVPROC)(GLenum, const GLfloat *); }
# 5283 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IPROC)(GLenum, GLint); }
# 5284 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IVPROC)(GLenum, const GLint *); }
# 5285 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SPROC)(GLenum, GLshort); }
# 5286 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SVPROC)(GLenum, const GLshort *); }
# 5287 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DPROC)(GLenum, GLdouble, GLdouble); }
# 5288 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DVPROC)(GLenum, const GLdouble *); }
# 5289 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FPROC)(GLenum, GLfloat, GLfloat); }
# 5290 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FVPROC)(GLenum, const GLfloat *); }
# 5291 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IPROC)(GLenum, GLint, GLint); }
# 5292 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IVPROC)(GLenum, const GLint *); }
# 5293 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SPROC)(GLenum, GLshort, GLshort); }
# 5294 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SVPROC)(GLenum, const GLshort *); }
# 5295 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 5296 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DVPROC)(GLenum, const GLdouble *); }
# 5297 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 5298 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FVPROC)(GLenum, const GLfloat *); }
# 5299 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IPROC)(GLenum, GLint, GLint, GLint); }
# 5300 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IVPROC)(GLenum, const GLint *); }
# 5301 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SPROC)(GLenum, GLshort, GLshort, GLshort); }
# 5302 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SVPROC)(GLenum, const GLshort *); }
# 5303 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
# 5304 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DVPROC)(GLenum, const GLdouble *); }
# 5305 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5306 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FVPROC)(GLenum, const GLfloat *); }
# 5307 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IPROC)(GLenum, GLint, GLint, GLint, GLint); }
# 5308 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IVPROC)(GLenum, const GLint *); }
# 5309 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
# 5310 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SVPROC)(GLenum, const GLshort *); }
# 5311 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXFPROC)(const GLfloat *); }
# 5312 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXDPROC)(const GLdouble *); }
# 5313 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXFPROC)(const GLfloat *); }
# 5314 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXDPROC)(const GLdouble *); }
# 5328 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEPROC)(GLenum, GLenum, GLenum, GLenum); }
# 5329 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWARRAYSPROC)(GLenum, const GLint *, const GLsizei *, GLsizei); }
# 5330 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTSPROC)(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei); }
# 5331 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFPROC)(GLenum, GLfloat); }
# 5332 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVPROC)(GLenum, const GLfloat *); }
# 5333 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERIPROC)(GLenum, GLint); }
# 5334 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERIVPROC)(GLenum, const GLint *); }
# 5379 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDFPROC)(GLfloat); }
# 5380 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDFVPROC)(const GLfloat *); }
# 5381 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDDPROC)(GLdouble); }
# 5382 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDDVPROC)(const GLdouble *); }
# 5383 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDPOINTERPROC)(GLenum, GLsizei, const GLvoid *); }
# 5384 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BPROC)(GLbyte, GLbyte, GLbyte); }
# 5385 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BVPROC)(const GLbyte *); }
# 5386 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DPROC)(GLdouble, GLdouble, GLdouble); }
# 5387 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DVPROC)(const GLdouble *); }
# 5388 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FPROC)(GLfloat, GLfloat, GLfloat); }
# 5389 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FVPROC)(const GLfloat *); }
# 5390 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IPROC)(GLint, GLint, GLint); }
# 5391 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IVPROC)(const GLint *); }
# 5392 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SPROC)(GLshort, GLshort, GLshort); }
# 5393 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SVPROC)(const GLshort *); }
# 5394 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBPROC)(GLubyte, GLubyte, GLubyte); }
# 5395 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBVPROC)(const GLubyte *); }
# 5396 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIPROC)(GLuint, GLuint, GLuint); }
# 5397 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIVPROC)(const GLuint *); }
# 5398 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USPROC)(GLushort, GLushort, GLushort); }
# 5399 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USVPROC)(const GLushort *); }
# 5400 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTERPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
# 5401 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DPROC)(GLdouble, GLdouble); }
# 5402 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DVPROC)(const GLdouble *); }
# 5403 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FPROC)(GLfloat, GLfloat); }
# 5404 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FVPROC)(const GLfloat *); }
# 5405 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IPROC)(GLint, GLint); }
# 5406 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IVPROC)(const GLint *); }
# 5407 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SPROC)(GLshort, GLshort); }
# 5408 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SVPROC)(const GLshort *); }
# 5409 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DPROC)(GLdouble, GLdouble, GLdouble); }
# 5410 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DVPROC)(const GLdouble *); }
# 5411 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FPROC)(GLfloat, GLfloat, GLfloat); }
# 5412 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FVPROC)(const GLfloat *); }
# 5413 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IPROC)(GLint, GLint, GLint); }
# 5414 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IVPROC)(const GLint *); }
# 5415 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SPROC)(GLshort, GLshort, GLshort); }
# 5416 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SVPROC)(const GLshort *); }
# 5442 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENQUERIESPROC)(GLsizei, GLuint *); }
# 5443 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEQUERIESPROC)(GLsizei, const GLuint *); }
# 5444 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISQUERYPROC)(GLuint); }
# 5445 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINQUERYPROC)(GLenum, GLuint); }
# 5446 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDQUERYPROC)(GLenum); }
# 5447 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYIVPROC)(GLenum, GLenum, GLint *); }
# 5448 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTIVPROC)(GLuint, GLenum, GLint *); }
# 5449 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUIVPROC)(GLuint, GLenum, GLuint *); }
# 5450 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERPROC)(GLenum, GLuint); }
# 5451 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEBUFFERSPROC)(GLsizei, const GLuint *); }
# 5452 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENBUFFERSPROC)(GLsizei, GLuint *); }
# 5453 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISBUFFERPROC)(GLuint); }
# 5454 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERDATAPROC)(GLenum, GLsizeiptr, const GLvoid *, GLenum); }
# 5455 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERSUBDATAPROC)(GLenum, GLintptr, GLsizeiptr, const GLvoid *); }
# 5456 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERSUBDATAPROC)(GLenum, GLintptr, GLsizeiptr, GLvoid *); }
# 5457 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPBUFFERPROC)(GLenum, GLenum); }
# 5458 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLUNMAPBUFFERPROC)(GLenum); }
# 5459 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 5460 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERPOINTERVPROC)(GLenum, GLenum, GLvoid **); }
# 5560 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEPROC)(GLenum, GLenum); }
# 5561 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWBUFFERSPROC)(GLsizei, const GLenum *); }
# 5562 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILOPSEPARATEPROC)(GLenum, GLenum, GLenum, GLenum); }
# 5563 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILFUNCSEPARATEPROC)(GLenum, GLenum, GLint, GLuint); }
# 5564 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILMASKSEPARATEPROC)(GLenum, GLuint); }
# 5565 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLATTACHSHADERPROC)(GLuint, GLuint); }
# 5566 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDATTRIBLOCATIONPROC)(GLuint, GLuint, const GLchar *); }
# 5567 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPILESHADERPROC)(GLuint); }
# 5568 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLCREATEPROGRAMPROC)(void); }
# 5569 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLCREATESHADERPROC)(GLenum); }
# 5570 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEPROGRAMPROC)(GLuint); }
# 5571 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETESHADERPROC)(GLuint); }
# 5572 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDETACHSHADERPROC)(GLuint, GLuint); }
# 5573 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYPROC)(GLuint); }
# 5574 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLEVERTEXATTRIBARRAYPROC)(GLuint); }
# 5575 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEATTRIBPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *); }
# 5576 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *); }
# 5577 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETATTACHEDSHADERSPROC)(GLuint, GLsizei, GLsizei *, GLuint *); }
# 5578 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETATTRIBLOCATIONPROC)(GLuint, const GLchar *); }
# 5579 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMIVPROC)(GLuint, GLenum, GLint *); }
# 5580 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMINFOLOGPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
# 5581 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHADERIVPROC)(GLuint, GLenum, GLint *); }
# 5582 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHADERINFOLOGPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
# 5583 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHADERSOURCEPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
# 5584 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETUNIFORMLOCATIONPROC)(GLuint, const GLchar *); }
# 5585 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMFVPROC)(GLuint, GLint, GLfloat *); }
# 5586 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMIVPROC)(GLuint, GLint, GLint *); }
# 5587 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVPROC)(GLuint, GLenum, GLdouble *); }
# 5588 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVPROC)(GLuint, GLenum, GLfloat *); }
# 5589 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVPROC)(GLuint, GLenum, GLint *); }
# 5590 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVPROC)(GLuint, GLenum, GLvoid **); }
# 5591 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISPROGRAMPROC)(GLuint); }
# 5592 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISSHADERPROC)(GLuint); }
# 5593 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLINKPROGRAMPROC)(GLuint); }
# 5594 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADERSOURCEPROC)(GLuint, GLsizei, const GLchar **, const GLint *); }
# 5595 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUSEPROGRAMPROC)(GLuint); }
# 5596 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1FPROC)(GLint, GLfloat); }
# 5597 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2FPROC)(GLint, GLfloat, GLfloat); }
# 5598 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3FPROC)(GLint, GLfloat, GLfloat, GLfloat); }
# 5599 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4FPROC)(GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5600 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1IPROC)(GLint, GLint); }
# 5601 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2IPROC)(GLint, GLint, GLint); }
# 5602 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3IPROC)(GLint, GLint, GLint, GLint); }
# 5603 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4IPROC)(GLint, GLint, GLint, GLint, GLint); }
# 5604 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1FVPROC)(GLint, GLsizei, const GLfloat *); }
# 5605 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2FVPROC)(GLint, GLsizei, const GLfloat *); }
# 5606 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3FVPROC)(GLint, GLsizei, const GLfloat *); }
# 5607 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4FVPROC)(GLint, GLsizei, const GLfloat *); }
# 5608 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1IVPROC)(GLint, GLsizei, const GLint *); }
# 5609 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2IVPROC)(GLint, GLsizei, const GLint *); }
# 5610 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3IVPROC)(GLint, GLsizei, const GLint *); }
# 5611 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4IVPROC)(GLint, GLsizei, const GLint *); }
# 5612 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 5613 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 5614 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 5615 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVALIDATEPROGRAMPROC)(GLuint); }
# 5616 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DPROC)(GLuint, GLdouble); }
# 5617 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVPROC)(GLuint, const GLdouble *); }
# 5618 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FPROC)(GLuint, GLfloat); }
# 5619 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVPROC)(GLuint, const GLfloat *); }
# 5620 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SPROC)(GLuint, GLshort); }
# 5621 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVPROC)(GLuint, const GLshort *); }
# 5622 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DPROC)(GLuint, GLdouble, GLdouble); }
# 5623 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVPROC)(GLuint, const GLdouble *); }
# 5624 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FPROC)(GLuint, GLfloat, GLfloat); }
# 5625 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVPROC)(GLuint, const GLfloat *); }
# 5626 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SPROC)(GLuint, GLshort, GLshort); }
# 5627 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVPROC)(GLuint, const GLshort *); }
# 5628 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 5629 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVPROC)(GLuint, const GLdouble *); }
# 5630 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 5631 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVPROC)(GLuint, const GLfloat *); }
# 5632 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SPROC)(GLuint, GLshort, GLshort, GLshort); }
# 5633 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVPROC)(GLuint, const GLshort *); }
# 5634 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NBVPROC)(GLuint, const GLbyte *); }
# 5635 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NIVPROC)(GLuint, const GLint *); }
# 5636 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NSVPROC)(GLuint, const GLshort *); }
# 5637 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
# 5638 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBVPROC)(GLuint, const GLubyte *); }
# 5639 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUIVPROC)(GLuint, const GLuint *); }
# 5640 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUSVPROC)(GLuint, const GLushort *); }
# 5641 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4BVPROC)(GLuint, const GLbyte *); }
# 5642 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 5643 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVPROC)(GLuint, const GLdouble *); }
# 5644 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5645 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVPROC)(GLuint, const GLfloat *); }
# 5646 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4IVPROC)(GLuint, const GLint *); }
# 5647 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
# 5648 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVPROC)(GLuint, const GLshort *); }
# 5649 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVPROC)(GLuint, const GLubyte *); }
# 5650 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UIVPROC)(GLuint, const GLuint *); }
# 5651 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4USVPROC)(GLuint, const GLushort *); }
# 5652 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *); }
# 5665 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2X3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 5666 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3X2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 5667 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2X4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 5668 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4X2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 5669 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3X4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 5670 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4X3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 5739 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORMASKIPROC)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean); }
# 5740 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBOOLEANI_VPROC)(GLenum, GLuint, GLboolean *); }
# 5741 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINTEGERI_VPROC)(GLenum, GLuint, GLint *); }
# 5742 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLEIPROC)(GLenum, GLuint); }
# 5743 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLEIPROC)(GLenum, GLuint); }
# 5744 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISENABLEDIPROC)(GLenum, GLuint); }
# 5745 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINTRANSFORMFEEDBACKPROC)(GLenum); }
# 5746 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDTRANSFORMFEEDBACKPROC)(void); }
# 5747 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERRANGEPROC)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr); }
# 5748 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERBASEPROC)(GLenum, GLuint, GLuint); }
# 5749 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSPROC)(GLuint, GLsizei, const GLchar **, GLenum); }
# 5750 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *); }
# 5751 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLAMPCOLORPROC)(GLenum, GLenum); }
# 5752 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINCONDITIONALRENDERPROC)(GLuint, GLenum); }
# 5753 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDCONDITIONALRENDERPROC)(void); }
# 5754 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBIPOINTERPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
# 5755 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIIVPROC)(GLuint, GLenum, GLint *); }
# 5756 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIUIVPROC)(GLuint, GLenum, GLuint *); }
# 5757 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IPROC)(GLuint, GLint); }
# 5758 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IPROC)(GLuint, GLint, GLint); }
# 5759 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IPROC)(GLuint, GLint, GLint, GLint); }
# 5760 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IPROC)(GLuint, GLint, GLint, GLint, GLint); }
# 5761 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIPROC)(GLuint, GLuint); }
# 5762 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIPROC)(GLuint, GLuint, GLuint); }
# 5763 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIPROC)(GLuint, GLuint, GLuint, GLuint); }
# 5764 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIPROC)(GLuint, GLuint, GLuint, GLuint, GLuint); }
# 5765 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IVPROC)(GLuint, const GLint *); }
# 5766 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IVPROC)(GLuint, const GLint *); }
# 5767 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IVPROC)(GLuint, const GLint *); }
# 5768 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IVPROC)(GLuint, const GLint *); }
# 5769 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIVPROC)(GLuint, const GLuint *); }
# 5770 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIVPROC)(GLuint, const GLuint *); }
# 5771 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIVPROC)(GLuint, const GLuint *); }
# 5772 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIVPROC)(GLuint, const GLuint *); }
# 5773 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4BVPROC)(GLuint, const GLbyte *); }
# 5774 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4SVPROC)(GLuint, const GLshort *); }
# 5775 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UBVPROC)(GLuint, const GLubyte *); }
# 5776 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4USVPROC)(GLuint, const GLushort *); }
# 5777 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMUIVPROC)(GLuint, GLint, GLuint *); }
# 5778 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDFRAGDATALOCATIONPROC)(GLuint, GLuint, const GLchar *); }
# 5779 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETFRAGDATALOCATIONPROC)(GLuint, const GLchar *); }
# 5780 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1UIPROC)(GLint, GLuint); }
# 5781 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2UIPROC)(GLint, GLuint, GLuint); }
# 5782 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3UIPROC)(GLint, GLuint, GLuint, GLuint); }
# 5783 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4UIPROC)(GLint, GLuint, GLuint, GLuint, GLuint); }
# 5784 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1UIVPROC)(GLint, GLsizei, const GLuint *); }
# 5785 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2UIVPROC)(GLint, GLsizei, const GLuint *); }
# 5786 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3UIVPROC)(GLint, GLsizei, const GLuint *); }
# 5787 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4UIVPROC)(GLint, GLsizei, const GLuint *); }
# 5788 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXPARAMETERIIVPROC)(GLenum, GLenum, const GLint *); }
# 5789 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXPARAMETERIUIVPROC)(GLenum, GLenum, const GLuint *); }
# 5790 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIIVPROC)(GLenum, GLenum, GLint *); }
# 5791 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIUIVPROC)(GLenum, GLenum, GLuint *); }
# 5792 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARBUFFERIVPROC)(GLenum, GLint, const GLint *); }
# 5793 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARBUFFERUIVPROC)(GLenum, GLint, const GLuint *); }
# 5794 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARBUFFERFVPROC)(GLenum, GLint, const GLfloat *); }
# 5795 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARBUFFERFIPROC)(GLenum, GLint, GLfloat, GLint); }
# 5796 "/usr/include/GL/glext.h" 3
extern "C" { typedef const GLubyte *(*PFNGLGETSTRINGIPROC)(GLenum, GLuint); }
# 5810 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWARRAYSINSTANCEDPROC)(GLenum, GLint, GLsizei, GLsizei); }
# 5811 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTSINSTANCEDPROC)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei); }
# 5812 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUFFERPROC)(GLenum, GLenum, GLuint); }
# 5813 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRIMITIVERESTARTINDEXPROC)(GLuint); }
# 5828 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINTEGER64I_VPROC)(GLenum, GLuint, GLint64 *); }
# 5829 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERPARAMETERI64VPROC)(GLenum, GLenum, GLint64 *); }
# 5830 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREPROC)(GLenum, GLenum, GLuint, GLint); }
# 5848 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBDIVISORPROC)(GLuint, GLuint); }
# 5872 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMINSAMPLESHADINGPROC)(GLclampf); }
# 5873 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONIPROC)(GLuint, GLenum); }
# 5874 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEIPROC)(GLuint, GLenum, GLenum); }
# 5875 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCIPROC)(GLuint, GLenum, GLenum); }
# 5876 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEIPROC)(GLuint, GLenum, GLenum, GLenum, GLenum); }
# 5972 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXFARBPROC)(const GLfloat *); }
# 5973 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXDARBPROC)(const GLdouble *); }
# 5974 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXFARBPROC)(const GLfloat *); }
# 5975 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXDARBPROC)(const GLdouble *); }
# 5983 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLECOVERAGEARBPROC)(GLclampf, GLboolean); }
# 6005 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 6006 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 6007 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
# 6008 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 6009 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 6010 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 6011 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)(GLenum, GLint, GLvoid *); }
# 6024 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFARBPROC)(GLenum, GLfloat); }
# 6025 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVARBPROC)(GLenum, const GLfloat *); }
# 6042 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTBVARBPROC)(GLint, const GLbyte *); }
# 6043 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTSVARBPROC)(GLint, const GLshort *); }
# 6044 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTIVARBPROC)(GLint, const GLint *); }
# 6045 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTFVARBPROC)(GLint, const GLfloat *); }
# 6046 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTDVARBPROC)(GLint, const GLdouble *); }
# 6047 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTUBVARBPROC)(GLint, const GLubyte *); }
# 6048 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTUSVARBPROC)(GLint, const GLushort *); }
# 6049 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTUIVARBPROC)(GLint, const GLuint *); }
# 6050 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTPOINTERARBPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
# 6051 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXBLENDARBPROC)(GLint); }
# 6063 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCURRENTPALETTEMATRIXARBPROC)(GLint); }
# 6064 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXINDEXUBVARBPROC)(GLint, const GLubyte *); }
# 6065 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXINDEXUSVARBPROC)(GLint, const GLushort *); }
# 6066 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXINDEXUIVARBPROC)(GLint, const GLuint *); }
# 6067 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXINDEXPOINTERARBPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
# 6118 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DARBPROC)(GLdouble, GLdouble); }
# 6119 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DVARBPROC)(const GLdouble *); }
# 6120 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FARBPROC)(GLfloat, GLfloat); }
# 6121 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FVARBPROC)(const GLfloat *); }
# 6122 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IARBPROC)(GLint, GLint); }
# 6123 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IVARBPROC)(const GLint *); }
# 6124 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SARBPROC)(GLshort, GLshort); }
# 6125 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SVARBPROC)(const GLshort *); }
# 6126 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DARBPROC)(GLdouble, GLdouble, GLdouble); }
# 6127 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DVARBPROC)(const GLdouble *); }
# 6128 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FARBPROC)(GLfloat, GLfloat, GLfloat); }
# 6129 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FVARBPROC)(const GLfloat *); }
# 6130 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IARBPROC)(GLint, GLint, GLint); }
# 6131 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IVARBPROC)(const GLint *); }
# 6132 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SARBPROC)(GLshort, GLshort, GLshort); }
# 6133 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SVARBPROC)(const GLshort *); }
# 6202 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DARBPROC)(GLuint, GLdouble); }
# 6203 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVARBPROC)(GLuint, const GLdouble *); }
# 6204 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FARBPROC)(GLuint, GLfloat); }
# 6205 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVARBPROC)(GLuint, const GLfloat *); }
# 6206 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SARBPROC)(GLuint, GLshort); }
# 6207 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVARBPROC)(GLuint, const GLshort *); }
# 6208 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DARBPROC)(GLuint, GLdouble, GLdouble); }
# 6209 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVARBPROC)(GLuint, const GLdouble *); }
# 6210 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FARBPROC)(GLuint, GLfloat, GLfloat); }
# 6211 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVARBPROC)(GLuint, const GLfloat *); }
# 6212 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SARBPROC)(GLuint, GLshort, GLshort); }
# 6213 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVARBPROC)(GLuint, const GLshort *); }
# 6214 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DARBPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 6215 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVARBPROC)(GLuint, const GLdouble *); }
# 6216 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FARBPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 6217 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVARBPROC)(GLuint, const GLfloat *); }
# 6218 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SARBPROC)(GLuint, GLshort, GLshort, GLshort); }
# 6219 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVARBPROC)(GLuint, const GLshort *); }
# 6220 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NBVARBPROC)(GLuint, const GLbyte *); }
# 6221 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NIVARBPROC)(GLuint, const GLint *); }
# 6222 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NSVARBPROC)(GLuint, const GLshort *); }
# 6223 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBARBPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
# 6224 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBVARBPROC)(GLuint, const GLubyte *); }
# 6225 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUIVARBPROC)(GLuint, const GLuint *); }
# 6226 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUSVARBPROC)(GLuint, const GLushort *); }
# 6227 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4BVARBPROC)(GLuint, const GLbyte *); }
# 6228 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DARBPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 6229 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVARBPROC)(GLuint, const GLdouble *); }
# 6230 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FARBPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 6231 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVARBPROC)(GLuint, const GLfloat *); }
# 6232 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4IVARBPROC)(GLuint, const GLint *); }
# 6233 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SARBPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
# 6234 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVARBPROC)(GLuint, const GLshort *); }
# 6235 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVARBPROC)(GLuint, const GLubyte *); }
# 6236 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UIVARBPROC)(GLuint, const GLuint *); }
# 6237 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4USVARBPROC)(GLuint, const GLushort *); }
# 6238 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERARBPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *); }
# 6239 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLEVERTEXATTRIBARRAYARBPROC)(GLuint); }
# 6240 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)(GLuint); }
# 6241 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMSTRINGARBPROC)(GLenum, GLenum, GLsizei, const GLvoid *); }
# 6242 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDPROGRAMARBPROC)(GLenum, GLuint); }
# 6243 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEPROGRAMSARBPROC)(GLsizei, const GLuint *); }
# 6244 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENPROGRAMSARBPROC)(GLsizei, GLuint *); }
# 6245 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4DARBPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 6246 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4DVARBPROC)(GLenum, GLuint, const GLdouble *); }
# 6247 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4FARBPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 6248 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4FVARBPROC)(GLenum, GLuint, const GLfloat *); }
# 6249 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4DARBPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 6250 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)(GLenum, GLuint, const GLdouble *); }
# 6251 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4FARBPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 6252 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)(GLenum, GLuint, const GLfloat *); }
# 6253 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERDVARBPROC)(GLenum, GLuint, GLdouble *); }
# 6254 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERFVARBPROC)(GLenum, GLuint, GLfloat *); }
# 6255 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)(GLenum, GLuint, GLdouble *); }
# 6256 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)(GLenum, GLuint, GLfloat *); }
# 6257 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMIVARBPROC)(GLenum, GLenum, GLint *); }
# 6258 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMSTRINGARBPROC)(GLenum, GLenum, GLvoid *); }
# 6259 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVARBPROC)(GLuint, GLenum, GLdouble *); }
# 6260 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVARBPROC)(GLuint, GLenum, GLfloat *); }
# 6261 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVARBPROC)(GLuint, GLenum, GLint *); }
# 6262 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVARBPROC)(GLuint, GLenum, GLvoid **); }
# 6263 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISPROGRAMARBPROC)(GLuint); }
# 6286 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERARBPROC)(GLenum, GLuint); }
# 6287 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEBUFFERSARBPROC)(GLsizei, const GLuint *); }
# 6288 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENBUFFERSARBPROC)(GLsizei, GLuint *); }
# 6289 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISBUFFERARBPROC)(GLuint); }
# 6290 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERDATAARBPROC)(GLenum, GLsizeiptrARB, const GLvoid *, GLenum); }
# 6291 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERSUBDATAARBPROC)(GLenum, GLintptrARB, GLsizeiptrARB, const GLvoid *); }
# 6292 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERSUBDATAARBPROC)(GLenum, GLintptrARB, GLsizeiptrARB, GLvoid *); }
# 6293 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPBUFFERARBPROC)(GLenum, GLenum); }
# 6294 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLUNMAPBUFFERARBPROC)(GLenum); }
# 6295 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERPARAMETERIVARBPROC)(GLenum, GLenum, GLint *); }
# 6296 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERPOINTERVARBPROC)(GLenum, GLenum, GLvoid **); }
# 6311 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENQUERIESARBPROC)(GLsizei, GLuint *); }
# 6312 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEQUERIESARBPROC)(GLsizei, const GLuint *); }
# 6313 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISQUERYARBPROC)(GLuint); }
# 6314 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINQUERYARBPROC)(GLenum, GLuint); }
# 6315 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDQUERYARBPROC)(GLenum); }
# 6316 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYIVARBPROC)(GLenum, GLenum, GLint *); }
# 6317 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTIVARBPROC)(GLuint, GLenum, GLint *); }
# 6318 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUIVARBPROC)(GLuint, GLenum, GLuint *); }
# 6364 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEOBJECTARBPROC)(GLhandleARB); }
# 6365 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLhandleARB (*PFNGLGETHANDLEARBPROC)(GLenum); }
# 6366 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDETACHOBJECTARBPROC)(GLhandleARB, GLhandleARB); }
# 6367 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLhandleARB (*PFNGLCREATESHADEROBJECTARBPROC)(GLenum); }
# 6368 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADERSOURCEARBPROC)(GLhandleARB, GLsizei, const GLcharARB **, const GLint *); }
# 6369 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPILESHADERARBPROC)(GLhandleARB); }
# 6370 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLhandleARB (*PFNGLCREATEPROGRAMOBJECTARBPROC)(void); }
# 6371 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLATTACHOBJECTARBPROC)(GLhandleARB, GLhandleARB); }
# 6372 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLINKPROGRAMARBPROC)(GLhandleARB); }
# 6373 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUSEPROGRAMOBJECTARBPROC)(GLhandleARB); }
# 6374 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVALIDATEPROGRAMARBPROC)(GLhandleARB); }
# 6375 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1FARBPROC)(GLint, GLfloat); }
# 6376 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2FARBPROC)(GLint, GLfloat, GLfloat); }
# 6377 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3FARBPROC)(GLint, GLfloat, GLfloat, GLfloat); }
# 6378 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4FARBPROC)(GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 6379 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1IARBPROC)(GLint, GLint); }
# 6380 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2IARBPROC)(GLint, GLint, GLint); }
# 6381 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3IARBPROC)(GLint, GLint, GLint, GLint); }
# 6382 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4IARBPROC)(GLint, GLint, GLint, GLint, GLint); }
# 6383 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 6384 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 6385 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 6386 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 6387 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1IVARBPROC)(GLint, GLsizei, const GLint *); }
# 6388 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2IVARBPROC)(GLint, GLsizei, const GLint *); }
# 6389 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3IVARBPROC)(GLint, GLsizei, const GLint *); }
# 6390 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4IVARBPROC)(GLint, GLsizei, const GLint *); }
# 6391 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 6392 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 6393 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 6394 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOBJECTPARAMETERFVARBPROC)(GLhandleARB, GLenum, GLfloat *); }
# 6395 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOBJECTPARAMETERIVARBPROC)(GLhandleARB, GLenum, GLint *); }
# 6396 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINFOLOGARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLcharARB *); }
# 6397 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETATTACHEDOBJECTSARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLhandleARB *); }
# 6398 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETUNIFORMLOCATIONARBPROC)(GLhandleARB, const GLcharARB *); }
# 6399 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMARBPROC)(GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *); }
# 6400 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMFVARBPROC)(GLhandleARB, GLint, GLfloat *); }
# 6401 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMIVARBPROC)(GLhandleARB, GLint, GLint *); }
# 6402 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHADERSOURCEARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLcharARB *); }
# 6412 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDATTRIBLOCATIONARBPROC)(GLhandleARB, GLuint, const GLcharARB *); }
# 6413 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEATTRIBARBPROC)(GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *); }
# 6414 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETATTRIBLOCATIONARBPROC)(GLhandleARB, const GLcharARB *); }
# 6442 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWBUFFERSARBPROC)(GLsizei, const GLenum *); }
# 6454 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLAMPCOLORARBPROC)(GLenum, GLenum); }
# 6479 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWARRAYSINSTANCEDARBPROC)(GLenum, GLint, GLsizei, GLsizei); }
# 6480 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTSINSTANCEDARBPROC)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei); }
# 6507 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISRENDERBUFFERPROC)(GLuint); }
# 6508 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDRENDERBUFFERPROC)(GLenum, GLuint); }
# 6509 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETERENDERBUFFERSPROC)(GLsizei, const GLuint *); }
# 6510 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENRENDERBUFFERSPROC)(GLsizei, GLuint *); }
# 6511 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEPROC)(GLenum, GLenum, GLsizei, GLsizei); }
# 6512 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 6513 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISFRAMEBUFFERPROC)(GLuint); }
# 6514 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDFRAMEBUFFERPROC)(GLenum, GLuint); }
# 6515 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEFRAMEBUFFERSPROC)(GLsizei, const GLuint *); }
# 6516 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENFRAMEBUFFERSPROC)(GLsizei, GLuint *); }
# 6517 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSPROC)(GLenum); }
# 6518 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE1DPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
# 6519 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE2DPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
# 6520 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE3DPROC)(GLenum, GLenum, GLenum, GLuint, GLint, GLint); }
# 6521 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERRENDERBUFFERPROC)(GLenum, GLenum, GLenum, GLuint); }
# 6522 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLenum, GLenum, GLenum, GLint *); }
# 6523 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENERATEMIPMAPPROC)(GLenum); }
# 6524 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLITFRAMEBUFFERPROC)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum); }
# 6525 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei); }
# 6526 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURELAYERPROC)(GLenum, GLenum, GLuint, GLint, GLint); }
# 6541 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERIARBPROC)(GLuint, GLenum, GLint); }
# 6542 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREARBPROC)(GLenum, GLenum, GLuint, GLint); }
# 6543 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURELAYERARBPROC)(GLenum, GLenum, GLuint, GLint, GLint); }
# 6544 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREFACEARBPROC)(GLenum, GLenum, GLuint, GLint, GLenum); }
# 6556 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBDIVISORARBPROC)(GLuint, GLuint); }
# 6565 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPBUFFERRANGEPROC)(GLenum, GLintptr, GLsizeiptr, GLbitfield); }
# 6566 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHMAPPEDBUFFERRANGEPROC)(GLenum, GLintptr, GLsizeiptr); }
# 6574 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUFFERARBPROC)(GLenum, GLenum, GLuint); }
# 6593 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDVERTEXARRAYPROC)(GLuint); }
# 6594 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEVERTEXARRAYSPROC)(GLsizei, const GLuint *); }
# 6595 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENVERTEXARRAYSPROC)(GLsizei, GLuint *); }
# 6596 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISVERTEXARRAYPROC)(GLuint); }
# 6610 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMINDICESPROC)(GLuint, GLsizei, const GLchar **, GLuint *); }
# 6611 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMSIVPROC)(GLuint, GLsizei, const GLuint *, GLenum, GLint *); }
# 6612 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMNAMEPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *); }
# 6613 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGETUNIFORMBLOCKINDEXPROC)(GLuint, const GLchar *); }
# 6614 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMBLOCKIVPROC)(GLuint, GLuint, GLenum, GLint *); }
# 6615 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *); }
# 6616 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMBLOCKBINDINGPROC)(GLuint, GLuint, GLuint); }
# 6628 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYBUFFERSUBDATAPROC)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr); }
# 6647 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTSBASEVERTEXPROC)(GLenum, GLsizei, GLenum, const GLvoid *, GLint); }
# 6648 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *, GLint); }
# 6649 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLint); }
# 6650 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei, const GLint *); }
# 6662 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROVOKINGVERTEXPROC)(GLenum); }
# 6680 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLsync (*PFNGLFENCESYNCPROC)(GLenum, GLbitfield); }
# 6681 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISSYNCPROC)(GLsync); }
# 6682 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETESYNCPROC)(GLsync); }
# 6683 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLenum (*PFNGLCLIENTWAITSYNCPROC)(GLsync, GLbitfield, GLuint64); }
# 6684 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWAITSYNCPROC)(GLsync, GLbitfield, GLuint64); }
# 6685 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINTEGER64VPROC)(GLenum, GLint64 *); }
# 6686 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSYNCIVPROC)(GLsync, GLenum, GLsizei, GLsizei *, GLint *); }
# 6697 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXIMAGE2DMULTISAMPLEPROC)(GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean); }
# 6698 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXIMAGE3DMULTISAMPLEPROC)(GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean); }
# 6699 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTISAMPLEFVPROC)(GLenum, GLuint, GLfloat *); }
# 6700 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEMASKIPROC)(GLuint, GLbitfield); }
# 6715 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONIARBPROC)(GLuint, GLenum); }
# 6716 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEIARBPROC)(GLuint, GLenum, GLenum); }
# 6717 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCIARBPROC)(GLuint, GLenum, GLenum); }
# 6718 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEIARBPROC)(GLuint, GLenum, GLenum, GLenum, GLenum); }
# 6726 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMINSAMPLESHADINGARBPROC)(GLclampf); }
# 6751 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDSTRINGARBPROC)(GLenum, GLint, const GLchar *, GLint, const GLchar *); }
# 6752 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETENAMEDSTRINGARBPROC)(GLint, const GLchar *); }
# 6753 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPILESHADERINCLUDEARBPROC)(GLuint, GLsizei, const GLchar **, const GLint *); }
# 6754 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISNAMEDSTRINGARBPROC)(GLint, const GLchar *); }
# 6755 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDSTRINGARBPROC)(GLint, const GLchar *, GLsizei, GLint *, GLchar *); }
# 6756 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDSTRINGIVARBPROC)(GLint, const GLchar *, GLenum, GLint *); }
# 6769 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)(GLuint, GLuint, GLuint, const GLchar *); }
# 6770 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETFRAGDATAINDEXPROC)(GLuint, const GLchar *); }
# 6799 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENSAMPLERSPROC)(GLsizei, GLuint *); }
# 6800 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETESAMPLERSPROC)(GLsizei, const GLuint *); }
# 6801 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISSAMPLERPROC)(GLuint); }
# 6802 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDSAMPLERPROC)(GLuint, GLuint); }
# 6803 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLERPARAMETERIPROC)(GLuint, GLenum, GLint); }
# 6804 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLERPARAMETERIVPROC)(GLuint, GLenum, const GLint *); }
# 6805 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLERPARAMETERFPROC)(GLuint, GLenum, GLfloat); }
# 6806 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLERPARAMETERFVPROC)(GLuint, GLenum, const GLfloat *); }
# 6807 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLERPARAMETERIIVPROC)(GLuint, GLenum, const GLint *); }
# 6808 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLERPARAMETERIUIVPROC)(GLuint, GLenum, const GLuint *); }
# 6809 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSAMPLERPARAMETERIVPROC)(GLuint, GLenum, GLint *); }
# 6810 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSAMPLERPARAMETERIIVPROC)(GLuint, GLenum, GLint *); }
# 6811 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSAMPLERPARAMETERFVPROC)(GLuint, GLenum, GLfloat *); }
# 6812 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSAMPLERPARAMETERIUIVPROC)(GLuint, GLenum, GLuint *); }
# 6830 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLQUERYCOUNTERPROC)(GLuint, GLenum); }
# 6831 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTI64VPROC)(GLuint, GLenum, GLint64 *); }
# 6832 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUI64VPROC)(GLuint, GLenum, GLuint64 *); }
# 6877 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXP2UIPROC)(GLenum, GLuint); }
# 6878 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXP2UIVPROC)(GLenum, const GLuint *); }
# 6879 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXP3UIPROC)(GLenum, GLuint); }
# 6880 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXP3UIVPROC)(GLenum, const GLuint *); }
# 6881 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXP4UIPROC)(GLenum, GLuint); }
# 6882 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXP4UIVPROC)(GLenum, const GLuint *); }
# 6883 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDP1UIPROC)(GLenum, GLuint); }
# 6884 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDP1UIVPROC)(GLenum, const GLuint *); }
# 6885 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDP2UIPROC)(GLenum, GLuint); }
# 6886 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDP2UIVPROC)(GLenum, const GLuint *); }
# 6887 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDP3UIPROC)(GLenum, GLuint); }
# 6888 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDP3UIVPROC)(GLenum, const GLuint *); }
# 6889 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDP4UIPROC)(GLenum, GLuint); }
# 6890 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDP4UIVPROC)(GLenum, const GLuint *); }
# 6891 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORDP1UIPROC)(GLenum, GLenum, GLuint); }
# 6892 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORDP1UIVPROC)(GLenum, GLenum, const GLuint *); }
# 6893 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORDP2UIPROC)(GLenum, GLenum, GLuint); }
# 6894 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORDP2UIVPROC)(GLenum, GLenum, const GLuint *); }
# 6895 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORDP3UIPROC)(GLenum, GLenum, GLuint); }
# 6896 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORDP3UIVPROC)(GLenum, GLenum, const GLuint *); }
# 6897 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORDP4UIPROC)(GLenum, GLenum, GLuint); }
# 6898 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORDP4UIVPROC)(GLenum, GLenum, const GLuint *); }
# 6899 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALP3UIPROC)(GLenum, GLuint); }
# 6900 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALP3UIVPROC)(GLenum, const GLuint *); }
# 6901 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORP3UIPROC)(GLenum, GLuint); }
# 6902 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORP3UIVPROC)(GLenum, const GLuint *); }
# 6903 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORP4UIPROC)(GLenum, GLuint); }
# 6904 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORP4UIVPROC)(GLenum, const GLuint *); }
# 6905 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLORP3UIPROC)(GLenum, GLuint); }
# 6906 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLORP3UIVPROC)(GLenum, const GLuint *); }
# 6907 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBP1UIPROC)(GLuint, GLenum, GLboolean, GLuint); }
# 6908 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBP1UIVPROC)(GLuint, GLenum, GLboolean, const GLuint *); }
# 6909 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBP2UIPROC)(GLuint, GLenum, GLboolean, GLuint); }
# 6910 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBP2UIVPROC)(GLuint, GLenum, GLboolean, const GLuint *); }
# 6911 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBP3UIPROC)(GLuint, GLenum, GLboolean, GLuint); }
# 6912 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBP3UIVPROC)(GLuint, GLenum, GLboolean, const GLuint *); }
# 6913 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBP4UIPROC)(GLuint, GLenum, GLboolean, GLuint); }
# 6914 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBP4UIVPROC)(GLuint, GLenum, GLboolean, const GLuint *); }
# 6923 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWARRAYSINDIRECTPROC)(GLenum, const GLvoid *); }
# 6924 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTSINDIRECTPROC)(GLenum, GLenum, const GLvoid *); }
# 6953 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1DPROC)(GLint, GLdouble); }
# 6954 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2DPROC)(GLint, GLdouble, GLdouble); }
# 6955 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3DPROC)(GLint, GLdouble, GLdouble, GLdouble); }
# 6956 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4DPROC)(GLint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 6957 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1DVPROC)(GLint, GLsizei, const GLdouble *); }
# 6958 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2DVPROC)(GLint, GLsizei, const GLdouble *); }
# 6959 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3DVPROC)(GLint, GLsizei, const GLdouble *); }
# 6960 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4DVPROC)(GLint, GLsizei, const GLdouble *); }
# 6961 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2DVPROC)(GLint, GLsizei, GLboolean, const GLdouble *); }
# 6962 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3DVPROC)(GLint, GLsizei, GLboolean, const GLdouble *); }
# 6963 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4DVPROC)(GLint, GLsizei, GLboolean, const GLdouble *); }
# 6964 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2X3DVPROC)(GLint, GLsizei, GLboolean, const GLdouble *); }
# 6965 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2X4DVPROC)(GLint, GLsizei, GLboolean, const GLdouble *); }
# 6966 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3X2DVPROC)(GLint, GLsizei, GLboolean, const GLdouble *); }
# 6967 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3X4DVPROC)(GLint, GLsizei, GLboolean, const GLdouble *); }
# 6968 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4X2DVPROC)(GLint, GLsizei, GLboolean, const GLdouble *); }
# 6969 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4X3DVPROC)(GLint, GLsizei, GLboolean, const GLdouble *); }
# 6970 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMDVPROC)(GLuint, GLint, GLdouble *); }
# 6985 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)(GLuint, GLenum, const GLchar *); }
# 6986 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGETSUBROUTINEINDEXPROC)(GLuint, GLenum, const GLchar *); }
# 6987 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)(GLuint, GLenum, GLuint, GLenum, GLint *); }
# 6988 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *); }
# 6989 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVESUBROUTINENAMEPROC)(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *); }
# 6990 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMSUBROUTINESUIVPROC)(GLenum, GLsizei, const GLuint *); }
# 6991 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMSUBROUTINEUIVPROC)(GLenum, GLint, GLuint *); }
# 6992 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMSTAGEIVPROC)(GLuint, GLenum, GLenum, GLint *); }
# 7001 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPATCHPARAMETERIPROC)(GLenum, GLint); }
# 7002 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPATCHPARAMETERFVPROC)(GLenum, const GLfloat *); }
# 7020 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDTRANSFORMFEEDBACKPROC)(GLenum, GLuint); }
# 7021 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETETRANSFORMFEEDBACKSPROC)(GLsizei, const GLuint *); }
# 7022 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENTRANSFORMFEEDBACKSPROC)(GLsizei, GLuint *); }
# 7023 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISTRANSFORMFEEDBACKPROC)(GLuint); }
# 7024 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPAUSETRANSFORMFEEDBACKPROC)(void); }
# 7025 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESUMETRANSFORMFEEDBACKPROC)(void); }
# 7026 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWTRANSFORMFEEDBACKPROC)(GLenum, GLuint); }
# 7037 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)(GLenum, GLuint, GLuint); }
# 7038 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINQUERYINDEXEDPROC)(GLenum, GLuint, GLuint); }
# 7039 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDQUERYINDEXEDPROC)(GLenum, GLuint); }
# 7040 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYINDEXEDIVPROC)(GLenum, GLuint, GLenum, GLint *); }
# 7052 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRELEASESHADERCOMPILERPROC)(void); }
# 7053 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADERBINARYPROC)(GLsizei, const GLuint *, GLenum, const GLvoid *, GLsizei); }
# 7054 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHADERPRECISIONFORMATPROC)(GLenum, GLenum, GLint *, GLint *); }
# 7055 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHRANGEFPROC)(GLclampf, GLclampf); }
# 7056 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARDEPTHFPROC)(GLclampf); }
# 7066 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMBINARYPROC)(GLuint, GLsizei, GLsizei *, GLenum *, GLvoid *); }
# 7067 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMBINARYPROC)(GLuint, GLenum, const GLvoid *, GLsizei); }
# 7068 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERIPROC)(GLuint, GLenum, GLint); }
# 7135 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUSEPROGRAMSTAGESPROC)(GLuint, GLbitfield, GLuint); }
# 7136 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLACTIVESHADERPROGRAMPROC)(GLuint, GLuint); }
# 7137 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLCREATESHADERPROGRAMVPROC)(GLenum, GLsizei, const GLchar **); }
# 7138 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDPROGRAMPIPELINEPROC)(GLuint); }
# 7139 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEPROGRAMPIPELINESPROC)(GLsizei, const GLuint *); }
# 7140 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENPROGRAMPIPELINESPROC)(GLsizei, GLuint *); }
# 7141 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISPROGRAMPIPELINEPROC)(GLuint); }
# 7142 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMPIPELINEIVPROC)(GLuint, GLenum, GLint *); }
# 7143 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1IPROC)(GLuint, GLint, GLint); }
# 7144 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1IVPROC)(GLuint, GLint, GLsizei, const GLint *); }
# 7145 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1FPROC)(GLuint, GLint, GLfloat); }
# 7146 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1FVPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
# 7147 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1DPROC)(GLuint, GLint, GLdouble); }
# 7148 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1DVPROC)(GLuint, GLint, GLsizei, const GLdouble *); }
# 7149 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1UIPROC)(GLuint, GLint, GLuint); }
# 7150 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1UIVPROC)(GLuint, GLint, GLsizei, const GLuint *); }
# 7151 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2IPROC)(GLuint, GLint, GLint, GLint); }
# 7152 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2IVPROC)(GLuint, GLint, GLsizei, const GLint *); }
# 7153 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2FPROC)(GLuint, GLint, GLfloat, GLfloat); }
# 7154 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2FVPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
# 7155 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2DPROC)(GLuint, GLint, GLdouble, GLdouble); }
# 7156 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2DVPROC)(GLuint, GLint, GLsizei, const GLdouble *); }
# 7157 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2UIPROC)(GLuint, GLint, GLuint, GLuint); }
# 7158 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2UIVPROC)(GLuint, GLint, GLsizei, const GLuint *); }
# 7159 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3IPROC)(GLuint, GLint, GLint, GLint, GLint); }
# 7160 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3IVPROC)(GLuint, GLint, GLsizei, const GLint *); }
# 7161 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3FPROC)(GLuint, GLint, GLfloat, GLfloat, GLfloat); }
# 7162 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3FVPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
# 7163 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3DPROC)(GLuint, GLint, GLdouble, GLdouble, GLdouble); }
# 7164 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3DVPROC)(GLuint, GLint, GLsizei, const GLdouble *); }
# 7165 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3UIPROC)(GLuint, GLint, GLuint, GLuint, GLuint); }
# 7166 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3UIVPROC)(GLuint, GLint, GLsizei, const GLuint *); }
# 7167 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4IPROC)(GLuint, GLint, GLint, GLint, GLint, GLint); }
# 7168 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4IVPROC)(GLuint, GLint, GLsizei, const GLint *); }
# 7169 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4FPROC)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 7170 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4FVPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
# 7171 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4DPROC)(GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 7172 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4DVPROC)(GLuint, GLint, GLsizei, const GLdouble *); }
# 7173 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4UIPROC)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint); }
# 7174 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4UIVPROC)(GLuint, GLint, GLsizei, const GLuint *); }
# 7175 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2FVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 7176 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3FVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 7177 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4FVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 7178 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2DVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 7179 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3DVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 7180 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4DVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 7181 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 7182 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 7183 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 7184 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 7185 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 7186 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 7187 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 7188 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 7189 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 7190 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 7191 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 7192 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 7193 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVALIDATEPROGRAMPIPELINEPROC)(GLuint); }
# 7194 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMPIPELINEINFOLOGPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
# 7211 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL1DPROC)(GLuint, GLdouble); }
# 7212 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL2DPROC)(GLuint, GLdouble, GLdouble); }
# 7213 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL3DPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 7214 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL4DPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 7215 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL1DVPROC)(GLuint, const GLdouble *); }
# 7216 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL2DVPROC)(GLuint, const GLdouble *); }
# 7217 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL3DVPROC)(GLuint, const GLdouble *); }
# 7218 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL4DVPROC)(GLuint, const GLdouble *); }
# 7219 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBLPOINTERPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
# 7220 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBLDVPROC)(GLuint, GLenum, GLdouble *); }
# 7237 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVIEWPORTARRAYVPROC)(GLuint, GLsizei, const GLfloat *); }
# 7238 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVIEWPORTINDEXEDFPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 7239 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVIEWPORTINDEXEDFVPROC)(GLuint, const GLfloat *); }
# 7240 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSCISSORARRAYVPROC)(GLuint, GLsizei, const GLint *); }
# 7241 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSCISSORINDEXEDPROC)(GLuint, GLint, GLint, GLsizei, GLsizei); }
# 7242 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSCISSORINDEXEDVPROC)(GLuint, const GLint *); }
# 7243 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHRANGEARRAYVPROC)(GLuint, GLsizei, const GLclampd *); }
# 7244 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHRANGEINDEXEDPROC)(GLuint, GLclampd, GLclampd); }
# 7245 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFLOATI_VPROC)(GLenum, GLuint, GLfloat *); }
# 7246 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETDOUBLEI_VPROC)(GLenum, GLuint, GLdouble *); }
# 7254 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLsync (*PFNGLCREATESYNCFROMCLEVENTARBPROC)(_cl_context *, _cl_event *, GLbitfield); }
# 7265 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEBUGMESSAGECONTROLARBPROC)(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean); }
# 7266 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEBUGMESSAGEINSERTARBPROC)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *); }
# 7267 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEBUGMESSAGECALLBACKARBPROC)(GLDEBUGPROCARB, const GLvoid *); }
# 7268 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGETDEBUGMESSAGELOGARBPROC)(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *); }
# 7295 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLenum (*PFNGLGETGRAPHICSRESETSTATUSARBPROC)(void); }
# 7296 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNMAPDVARBPROC)(GLenum, GLenum, GLsizei, GLdouble *); }
# 7297 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNMAPFVARBPROC)(GLenum, GLenum, GLsizei, GLfloat *); }
# 7298 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNMAPIVARBPROC)(GLenum, GLenum, GLsizei, GLint *); }
# 7299 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNPIXELMAPFVARBPROC)(GLenum, GLsizei, GLfloat *); }
# 7300 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNPIXELMAPUIVARBPROC)(GLenum, GLsizei, GLuint *); }
# 7301 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNPIXELMAPUSVARBPROC)(GLenum, GLsizei, GLushort *); }
# 7302 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNPOLYGONSTIPPLEARBPROC)(GLsizei, GLubyte *); }
# 7303 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNCOLORTABLEARBPROC)(GLenum, GLenum, GLenum, GLsizei, GLvoid *); }
# 7304 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNCONVOLUTIONFILTERARBPROC)(GLenum, GLenum, GLenum, GLsizei, GLvoid *); }
# 7305 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNSEPARABLEFILTERARBPROC)(GLenum, GLenum, GLenum, GLsizei, GLvoid *, GLsizei, GLvoid *, GLvoid *); }
# 7306 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNHISTOGRAMARBPROC)(GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid *); }
# 7307 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNMINMAXARBPROC)(GLenum, GLboolean, GLenum, GLenum, GLsizei, GLvoid *); }
# 7308 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNTEXIMAGEARBPROC)(GLenum, GLint, GLenum, GLenum, GLsizei, GLvoid *); }
# 7309 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREADNPIXELSARBPROC)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, GLvoid *); }
# 7310 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC)(GLenum, GLint, GLsizei, GLvoid *); }
# 7311 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNUNIFORMFVARBPROC)(GLuint, GLint, GLsizei, GLfloat *); }
# 7312 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNUNIFORMIVARBPROC)(GLuint, GLint, GLsizei, GLint *); }
# 7313 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNUNIFORMUIVARBPROC)(GLuint, GLint, GLsizei, GLuint *); }
# 7314 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNUNIFORMDVARBPROC)(GLuint, GLint, GLsizei, GLdouble *); }
# 7330 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDCOLOREXTPROC)(GLclampf, GLclampf, GLclampf, GLclampf); }
# 7338 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOLYGONOFFSETEXTPROC)(GLfloat, GLfloat); }
# 7351 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXIMAGE3DEXTPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 7352 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE3DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 7361 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXFILTERFUNCSGISPROC)(GLenum, GLenum, GLfloat *); }
# 7362 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXFILTERFUNCSGISPROC)(GLenum, GLenum, GLsizei, const GLfloat *); }
# 7371 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE1DEXTPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *); }
# 7372 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE2DEXTPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 7384 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXIMAGE1DEXTPROC)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint); }
# 7385 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXIMAGE2DEXTPROC)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint); }
# 7386 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE1DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei); }
# 7387 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE2DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 7388 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE3DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 7405 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMEXTPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
# 7406 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 7407 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 7408 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXEXTPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
# 7409 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 7410 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 7411 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLHISTOGRAMEXTPROC)(GLenum, GLsizei, GLenum, GLboolean); }
# 7412 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMINMAXEXTPROC)(GLenum, GLenum, GLboolean); }
# 7413 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESETHISTOGRAMEXTPROC)(GLenum); }
# 7414 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESETMINMAXEXTPROC)(GLenum); }
# 7434 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER1DEXTPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 7435 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER2DEXTPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 7436 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFEXTPROC)(GLenum, GLenum, GLfloat); }
# 7437 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
# 7438 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIEXTPROC)(GLenum, GLenum, GLint); }
# 7439 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 7440 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 7441 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei); }
# 7442 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONFILTEREXTPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 7443 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 7444 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 7445 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSEPARABLEFILTEREXTPROC)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *); }
# 7446 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSEPARABLEFILTER2DEXTPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *); }
# 7464 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLESGIPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 7465 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERFVSGIPROC)(GLenum, GLenum, const GLfloat *); }
# 7466 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERIVSGIPROC)(GLenum, GLenum, const GLint *); }
# 7467 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCOLORTABLESGIPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 7468 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLESGIPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 7469 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)(GLenum, GLenum, GLfloat *); }
# 7470 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)(GLenum, GLenum, GLint *); }
# 7478 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENSGIXPROC)(GLenum); }
# 7491 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERISGISPROC)(GLenum, GLint); }
# 7492 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERIVSGISPROC)(GLenum, const GLint *); }
# 7493 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERFSGISPROC)(GLenum, GLfloat); }
# 7494 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERFVSGISPROC)(GLenum, const GLfloat *); }
# 7495 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)(GLenum, GLint *); }
# 7496 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)(GLenum, GLfloat *); }
# 7505 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXIMAGE4DSGISPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 7506 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE4DSGISPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 7527 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLARETEXTURESRESIDENTEXTPROC)(GLsizei, const GLuint *, GLboolean *); }
# 7528 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDTEXTUREEXTPROC)(GLenum, GLuint); }
# 7529 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETETEXTURESEXTPROC)(GLsizei, const GLuint *); }
# 7530 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENTEXTURESEXTPROC)(GLsizei, GLuint *); }
# 7531 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISTEXTUREEXTPROC)(GLuint); }
# 7532 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRIORITIZETEXTURESEXTPROC)(GLsizei, const GLuint *, const GLclampf *); }
# 7541 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDETAILTEXFUNCSGISPROC)(GLenum, GLsizei, const GLfloat *); }
# 7542 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETDETAILTEXFUNCSGISPROC)(GLenum, GLfloat *); }
# 7551 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHARPENTEXFUNCSGISPROC)(GLenum, GLsizei, const GLfloat *); }
# 7552 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHARPENTEXFUNCSGISPROC)(GLenum, GLfloat *); }
# 7569 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEMASKSGISPROC)(GLclampf, GLboolean); }
# 7570 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEPATTERNSGISPROC)(GLenum); }
# 7590 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLARRAYELEMENTEXTPROC)(GLint); }
# 7591 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *); }
# 7592 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWARRAYSEXTPROC)(GLenum, GLint, GLsizei); }
# 7593 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEDGEFLAGPOINTEREXTPROC)(GLsizei, GLsizei, const GLboolean *); }
# 7594 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPOINTERVEXTPROC)(GLenum, GLvoid **); }
# 7595 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXPOINTEREXTPROC)(GLenum, GLsizei, GLsizei, const GLvoid *); }
# 7596 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALPOINTEREXTPROC)(GLenum, GLsizei, GLsizei, const GLvoid *); }
# 7597 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *); }
# 7598 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *); }
# 7630 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONEXTPROC)(GLenum); }
# 7661 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSPRITEPARAMETERFSGIXPROC)(GLenum, GLfloat); }
# 7662 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSPRITEPARAMETERFVSGIXPROC)(GLenum, const GLfloat *); }
# 7663 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSPRITEPARAMETERISGIXPROC)(GLenum, GLint); }
# 7664 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSPRITEPARAMETERIVSGIXPROC)(GLenum, const GLint *); }
# 7677 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFEXTPROC)(GLenum, GLfloat); }
# 7678 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVEXTPROC)(GLenum, const GLfloat *); }
# 7687 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFSGISPROC)(GLenum, GLfloat); }
# 7688 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVSGISPROC)(GLenum, const GLfloat *); }
# 7701 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETINSTRUMENTSSGIXPROC)(void); }
# 7702 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINSTRUMENTSBUFFERSGIXPROC)(GLsizei, GLint *); }
# 7703 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLPOLLINSTRUMENTSSGIXPROC)(GLint *); }
# 7704 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREADINSTRUMENTSSGIXPROC)(GLint); }
# 7705 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTARTINSTRUMENTSSGIXPROC)(void); }
# 7706 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTOPINSTRUMENTSSGIXPROC)(GLint); }
# 7718 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEZOOMSGIXPROC)(GLint); }
# 7726 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTAGSAMPLEBUFFERSGIXPROC)(void); }
# 7737 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEFORMATIONMAP3DSGIXPROC)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *); }
# 7738 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEFORMATIONMAP3FSGIXPROC)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *); }
# 7739 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEFORMSGIXPROC)(GLbitfield); }
# 7740 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)(GLbitfield); }
# 7748 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREFERENCEPLANESGIXPROC)(const GLdouble *); }
# 7756 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHRASTERSGIXPROC)(void); }
# 7769 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGFUNCSGISPROC)(GLsizei, const GLfloat *); }
# 7770 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFOGFUNCSGISPROC)(GLfloat *); }
# 7787 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERIHPPROC)(GLenum, GLenum, GLint); }
# 7788 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERFHPPROC)(GLenum, GLenum, GLfloat); }
# 7789 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)(GLenum, GLenum, const GLint *); }
# 7790 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)(GLenum, GLenum, const GLfloat *); }
# 7791 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)(GLenum, GLenum, GLint *); }
# 7792 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)(GLenum, GLenum, GLfloat *); }
# 7809 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORSUBTABLEEXTPROC)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 7810 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCOLORSUBTABLEEXTPROC)(GLenum, GLsizei, GLint, GLint, GLsizei); }
# 7822 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLHINTPGIPROC)(GLenum, GLint); }
# 7833 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEEXTPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 7834 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEEXTPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 7835 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 7836 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 7853 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLISTPARAMETERFVSGIXPROC)(GLuint, GLenum, GLfloat *); }
# 7854 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLISTPARAMETERIVSGIXPROC)(GLuint, GLenum, GLint *); }
# 7855 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLISTPARAMETERFSGIXPROC)(GLuint, GLenum, GLfloat); }
# 7856 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLISTPARAMETERFVSGIXPROC)(GLuint, GLenum, const GLfloat *); }
# 7857 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLISTPARAMETERISGIXPROC)(GLuint, GLenum, GLint); }
# 7858 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLISTPARAMETERIVSGIXPROC)(GLuint, GLenum, const GLint *); }
# 7886 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXMATERIALEXTPROC)(GLenum, GLenum); }
# 7894 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXFUNCEXTPROC)(GLenum, GLclampf); }
# 7907 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOCKARRAYSEXTPROC)(GLint, GLsizei); }
# 7908 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNLOCKARRAYSEXTPROC)(void); }
# 7917 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCULLPARAMETERDVEXTPROC)(GLenum, GLdouble *); }
# 7918 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCULLPARAMETERFVEXTPROC)(GLenum, GLfloat *); }
# 7947 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTCOLORMATERIALSGIXPROC)(GLenum, GLenum); }
# 7948 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTFSGIXPROC)(GLenum, GLenum, GLfloat); }
# 7949 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTFVSGIXPROC)(GLenum, GLenum, const GLfloat *); }
# 7950 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTISGIXPROC)(GLenum, GLenum, GLint); }
# 7951 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTIVSGIXPROC)(GLenum, GLenum, const GLint *); }
# 7952 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELFSGIXPROC)(GLenum, GLfloat); }
# 7953 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)(GLenum, const GLfloat *); }
# 7954 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELISGIXPROC)(GLenum, GLint); }
# 7955 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)(GLenum, const GLint *); }
# 7956 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALFSGIXPROC)(GLenum, GLenum, GLfloat); }
# 7957 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALFVSGIXPROC)(GLenum, GLenum, const GLfloat *); }
# 7958 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALISGIXPROC)(GLenum, GLenum, GLint); }
# 7959 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALIVSGIXPROC)(GLenum, GLenum, const GLint *); }
# 7960 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAGMENTLIGHTFVSGIXPROC)(GLenum, GLenum, GLfloat *); }
# 7961 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAGMENTLIGHTIVSGIXPROC)(GLenum, GLenum, GLint *); }
# 7962 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAGMENTMATERIALFVSGIXPROC)(GLenum, GLenum, GLfloat *); }
# 7963 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAGMENTMATERIALIVSGIXPROC)(GLenum, GLenum, GLint *); }
# 7964 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLIGHTENVISGIXPROC)(GLenum, GLint); }
# 7980 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTSEXTPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *); }
# 7998 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLAPPLYTEXTUREEXTPROC)(GLenum); }
# 7999 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURELIGHTEXTPROC)(GLenum); }
# 8000 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREMATERIALEXTPROC)(GLenum, GLenum); }
# 8021 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLASYNCMARKERSGIXPROC)(GLuint); }
# 8022 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLFINISHASYNCSGIXPROC)(GLuint *); }
# 8023 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLPOLLASYNCSGIXPROC)(GLuint *); }
# 8024 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGENASYNCMARKERSSGIXPROC)(GLsizei); }
# 8025 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEASYNCMARKERSSGIXPROC)(GLuint, GLsizei); }
# 8026 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISASYNCMARKERSGIXPROC)(GLuint); }
# 8045 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXPOINTERVINTELPROC)(GLint, GLenum, const GLvoid **); }
# 8046 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALPOINTERVINTELPROC)(GLenum, const GLvoid **); }
# 8047 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORPOINTERVINTELPROC)(GLint, GLenum, const GLvoid **); }
# 8048 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDPOINTERVINTELPROC)(GLint, GLenum, const GLvoid **); }
# 8063 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)(GLenum, GLenum, GLint); }
# 8064 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)(GLenum, GLenum, GLfloat); }
# 8065 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 8066 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
# 8102 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BEXTPROC)(GLbyte, GLbyte, GLbyte); }
# 8103 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BVEXTPROC)(const GLbyte *); }
# 8104 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DEXTPROC)(GLdouble, GLdouble, GLdouble); }
# 8105 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DVEXTPROC)(const GLdouble *); }
# 8106 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FEXTPROC)(GLfloat, GLfloat, GLfloat); }
# 8107 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FVEXTPROC)(const GLfloat *); }
# 8108 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IEXTPROC)(GLint, GLint, GLint); }
# 8109 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IVEXTPROC)(const GLint *); }
# 8110 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SEXTPROC)(GLshort, GLshort, GLshort); }
# 8111 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SVEXTPROC)(const GLshort *); }
# 8112 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBEXTPROC)(GLubyte, GLubyte, GLubyte); }
# 8113 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBVEXTPROC)(const GLubyte *); }
# 8114 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIEXTPROC)(GLuint, GLuint, GLuint); }
# 8115 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIVEXTPROC)(const GLuint *); }
# 8116 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USEXTPROC)(GLushort, GLushort, GLushort); }
# 8117 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USVEXTPROC)(const GLushort *); }
# 8118 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTEREXTPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
# 8126 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURENORMALEXTPROC)(GLenum); }
# 8135 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWARRAYSEXTPROC)(GLenum, const GLint *, const GLsizei *, GLsizei); }
# 8136 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTSEXTPROC)(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei); }
# 8148 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDFEXTPROC)(GLfloat); }
# 8149 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDFVEXTPROC)(const GLfloat *); }
# 8150 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDDEXTPROC)(GLdouble); }
# 8151 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDDVEXTPROC)(const GLdouble *); }
# 8152 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDPOINTEREXTPROC)(GLenum, GLsizei, const GLvoid *); }
# 8185 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3BEXTPROC)(GLbyte, GLbyte, GLbyte); }
# 8186 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3BVEXTPROC)(const GLbyte *); }
# 8187 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3DEXTPROC)(GLdouble, GLdouble, GLdouble); }
# 8188 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3DVEXTPROC)(const GLdouble *); }
# 8189 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3FEXTPROC)(GLfloat, GLfloat, GLfloat); }
# 8190 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3FVEXTPROC)(const GLfloat *); }
# 8191 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3IEXTPROC)(GLint, GLint, GLint); }
# 8192 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3IVEXTPROC)(const GLint *); }
# 8193 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3SEXTPROC)(GLshort, GLshort, GLshort); }
# 8194 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3SVEXTPROC)(const GLshort *); }
# 8195 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3BEXTPROC)(GLbyte, GLbyte, GLbyte); }
# 8196 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3BVEXTPROC)(const GLbyte *); }
# 8197 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3DEXTPROC)(GLdouble, GLdouble, GLdouble); }
# 8198 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3DVEXTPROC)(const GLdouble *); }
# 8199 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3FEXTPROC)(GLfloat, GLfloat, GLfloat); }
# 8200 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3FVEXTPROC)(const GLfloat *); }
# 8201 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3IEXTPROC)(GLint, GLint, GLint); }
# 8202 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3IVEXTPROC)(const GLint *); }
# 8203 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3SEXTPROC)(GLshort, GLshort, GLshort); }
# 8204 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3SVEXTPROC)(const GLshort *); }
# 8205 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENTPOINTEREXTPROC)(GLenum, GLsizei, const GLvoid *); }
# 8206 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMALPOINTEREXTPROC)(GLenum, GLsizei, const GLvoid *); }
# 8230 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINISHTEXTURESUNXPROC)(void); }
# 8245 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORBSUNPROC)(GLbyte); }
# 8246 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORSSUNPROC)(GLshort); }
# 8247 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORISUNPROC)(GLint); }
# 8248 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORFSUNPROC)(GLfloat); }
# 8249 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORDSUNPROC)(GLdouble); }
# 8250 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUBSUNPROC)(GLubyte); }
# 8251 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUSSUNPROC)(GLushort); }
# 8252 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUISUNPROC)(GLuint); }
# 8266 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUISUNPROC)(GLuint); }
# 8267 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUSSUNPROC)(GLushort); }
# 8268 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUBSUNPROC)(GLubyte); }
# 8269 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVSUNPROC)(const GLuint *); }
# 8270 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUSVSUNPROC)(const GLushort *); }
# 8271 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUBVSUNPROC)(const GLubyte *); }
# 8272 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEPOINTERSUNPROC)(GLenum, GLsizei, const GLvoid **); }
# 8319 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX2FSUNPROC)(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat); }
# 8320 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX2FVSUNPROC)(const GLubyte *, const GLfloat *); }
# 8321 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX3FSUNPROC)(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
# 8322 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX3FVSUNPROC)(const GLubyte *, const GLfloat *); }
# 8323 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8324 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 8325 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8326 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 8327 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8328 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
# 8329 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8330 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 8331 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4FVERTEX4FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8332 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4FVERTEX4FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 8333 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)(GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
# 8334 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)(const GLfloat *, const GLubyte *, const GLfloat *); }
# 8335 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8336 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
# 8337 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8338 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
# 8339 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8340 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 8341 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8342 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 8343 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 8344 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *); }
# 8345 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
# 8346 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)(const GLuint *, const GLubyte *, const GLfloat *); }
# 8347 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8348 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
# 8349 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8350 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
# 8351 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8352 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 8353 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8354 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
# 8355 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8356 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 8357 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8358 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 8366 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEEXTPROC)(GLenum, GLenum, GLenum, GLenum); }
# 8374 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEINGRPROC)(GLenum, GLenum, GLenum, GLenum); }
# 8420 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTFEXTPROC)(GLfloat); }
# 8421 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTFVEXTPROC)(const GLfloat *); }
# 8422 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTPOINTEREXTPROC)(GLsizei, GLenum, GLsizei, const GLvoid *); }
# 8435 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHVERTEXARRAYRANGENVPROC)(void); }
# 8436 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXARRAYRANGENVPROC)(GLsizei, const GLvoid *); }
# 8456 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERFVNVPROC)(GLenum, const GLfloat *); }
# 8457 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERFNVPROC)(GLenum, GLfloat); }
# 8458 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERIVNVPROC)(GLenum, const GLint *); }
# 8459 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERINVPROC)(GLenum, GLint); }
# 8460 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERINPUTNVPROC)(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum); }
# 8461 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINEROUTPUTNVPROC)(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean); }
# 8462 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINALCOMBINERINPUTNVPROC)(GLenum, GLenum, GLenum, GLenum); }
# 8463 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLenum, GLenum, GLfloat *); }
# 8464 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLenum, GLenum, GLint *); }
# 8465 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLenum, GLfloat *); }
# 8466 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLenum, GLint *); }
# 8467 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
# 8468 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLint *); }
# 8492 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESIZEBUFFERSMESAPROC)(void); }
# 8523 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DMESAPROC)(GLdouble, GLdouble); }
# 8524 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DVMESAPROC)(const GLdouble *); }
# 8525 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FMESAPROC)(GLfloat, GLfloat); }
# 8526 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FVMESAPROC)(const GLfloat *); }
# 8527 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IMESAPROC)(GLint, GLint); }
# 8528 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IVMESAPROC)(const GLint *); }
# 8529 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SMESAPROC)(GLshort, GLshort); }
# 8530 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SVMESAPROC)(const GLshort *); }
# 8531 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DMESAPROC)(GLdouble, GLdouble, GLdouble); }
# 8532 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DVMESAPROC)(const GLdouble *); }
# 8533 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FMESAPROC)(GLfloat, GLfloat, GLfloat); }
# 8534 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FVMESAPROC)(const GLfloat *); }
# 8535 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IMESAPROC)(GLint, GLint, GLint); }
# 8536 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IVMESAPROC)(const GLint *); }
# 8537 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SMESAPROC)(GLshort, GLshort, GLshort); }
# 8538 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SVMESAPROC)(const GLshort *); }
# 8539 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4DMESAPROC)(GLdouble, GLdouble, GLdouble, GLdouble); }
# 8540 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4DVMESAPROC)(const GLdouble *); }
# 8541 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4FMESAPROC)(GLfloat, GLfloat, GLfloat, GLfloat); }
# 8542 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4FVMESAPROC)(const GLfloat *); }
# 8543 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4IMESAPROC)(GLint, GLint, GLint, GLint); }
# 8544 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4IVMESAPROC)(const GLint *); }
# 8545 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4SMESAPROC)(GLshort, GLshort, GLshort, GLshort); }
# 8546 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4SVMESAPROC)(const GLshort *); }
# 8559 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIMODEDRAWARRAYSIBMPROC)(const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint); }
# 8560 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIMODEDRAWELEMENTSIBMPROC)(const GLenum *, const GLsizei *, GLenum, const GLvoid *const *, GLsizei, GLint); }
# 8575 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 8576 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 8577 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEDGEFLAGPOINTERLISTIBMPROC)(GLint, const GLboolean **, GLint); }
# 8578 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
# 8579 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
# 8580 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
# 8581 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 8582 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 8614 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTBUFFERMASK3DFXPROC)(GLuint); }
# 8623 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEMASKEXTPROC)(GLclampf, GLboolean); }
# 8624 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEPATTERNEXTPROC)(GLenum); }
# 8648 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURECOLORMASKSGISPROC)(GLboolean, GLboolean, GLboolean, GLboolean); }
# 8656 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIGLOOINTERFACESGIXPROC)(GLenum, const GLvoid *); }
# 8678 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEFENCESNVPROC)(GLsizei, const GLuint *); }
# 8679 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENFENCESNVPROC)(GLsizei, GLuint *); }
# 8680 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISFENCENVPROC)(GLuint); }
# 8681 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLTESTFENCENVPROC)(GLuint); }
# 8682 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFENCEIVNVPROC)(GLuint, GLenum, GLint *); }
# 8683 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINISHFENCENVPROC)(GLuint); }
# 8684 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSETFENCENVPROC)(GLuint, GLenum); }
# 8700 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPCONTROLPOINTSNVPROC)(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid *); }
# 8701 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPPARAMETERIVNVPROC)(GLenum, GLenum, const GLint *); }
# 8702 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPPARAMETERFVNVPROC)(GLenum, GLenum, const GLfloat *); }
# 8703 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMAPCONTROLPOINTSNVPROC)(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid *); }
# 8704 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMAPPARAMETERIVNVPROC)(GLenum, GLenum, GLint *); }
# 8705 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMAPPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
# 8706 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMAPATTRIBPARAMETERIVNVPROC)(GLenum, GLuint, GLenum, GLint *); }
# 8707 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMAPATTRIBPARAMETERFVNVPROC)(GLenum, GLuint, GLenum, GLfloat *); }
# 8708 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEVALMAPSNVPROC)(GLenum, GLenum); }
# 8721 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum, GLenum, const GLfloat *); }
# 8722 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
# 8813 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLAREPROGRAMSRESIDENTNVPROC)(GLsizei, const GLuint *, GLboolean *); }
# 8814 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDPROGRAMNVPROC)(GLenum, GLuint); }
# 8815 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEPROGRAMSNVPROC)(GLsizei, const GLuint *); }
# 8816 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEXECUTEPROGRAMNVPROC)(GLenum, GLuint, const GLfloat *); }
# 8817 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENPROGRAMSNVPROC)(GLsizei, GLuint *); }
# 8818 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMPARAMETERDVNVPROC)(GLenum, GLuint, GLenum, GLdouble *); }
# 8819 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMPARAMETERFVNVPROC)(GLenum, GLuint, GLenum, GLfloat *); }
# 8820 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMIVNVPROC)(GLuint, GLenum, GLint *); }
# 8821 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMSTRINGNVPROC)(GLuint, GLenum, GLubyte *); }
# 8822 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTRACKMATRIXIVNVPROC)(GLenum, GLuint, GLenum, GLint *); }
# 8823 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVNVPROC)(GLuint, GLenum, GLdouble *); }
# 8824 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVNVPROC)(GLuint, GLenum, GLfloat *); }
# 8825 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVNVPROC)(GLuint, GLenum, GLint *); }
# 8826 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVNVPROC)(GLuint, GLenum, GLvoid **); }
# 8827 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISPROGRAMNVPROC)(GLuint); }
# 8828 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADPROGRAMNVPROC)(GLenum, GLuint, GLsizei, const GLubyte *); }
# 8829 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4DNVPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 8830 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4DVNVPROC)(GLenum, GLuint, const GLdouble *); }
# 8831 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4FNVPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8832 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4FVNVPROC)(GLenum, GLuint, const GLfloat *); }
# 8833 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERS4DVNVPROC)(GLenum, GLuint, GLuint, const GLdouble *); }
# 8834 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERS4FVNVPROC)(GLenum, GLuint, GLuint, const GLfloat *); }
# 8835 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREQUESTRESIDENTPROGRAMSNVPROC)(GLsizei, const GLuint *); }
# 8836 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTRACKMATRIXNVPROC)(GLenum, GLuint, GLenum, GLenum); }
# 8837 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERNVPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
# 8838 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DNVPROC)(GLuint, GLdouble); }
# 8839 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVNVPROC)(GLuint, const GLdouble *); }
# 8840 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FNVPROC)(GLuint, GLfloat); }
# 8841 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVNVPROC)(GLuint, const GLfloat *); }
# 8842 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SNVPROC)(GLuint, GLshort); }
# 8843 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVNVPROC)(GLuint, const GLshort *); }
# 8844 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DNVPROC)(GLuint, GLdouble, GLdouble); }
# 8845 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVNVPROC)(GLuint, const GLdouble *); }
# 8846 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FNVPROC)(GLuint, GLfloat, GLfloat); }
# 8847 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVNVPROC)(GLuint, const GLfloat *); }
# 8848 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SNVPROC)(GLuint, GLshort, GLshort); }
# 8849 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVNVPROC)(GLuint, const GLshort *); }
# 8850 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DNVPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 8851 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVNVPROC)(GLuint, const GLdouble *); }
# 8852 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FNVPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 8853 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVNVPROC)(GLuint, const GLfloat *); }
# 8854 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SNVPROC)(GLuint, GLshort, GLshort, GLshort); }
# 8855 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVNVPROC)(GLuint, const GLshort *); }
# 8856 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DNVPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 8857 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVNVPROC)(GLuint, const GLdouble *); }
# 8858 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FNVPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8859 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVNVPROC)(GLuint, const GLfloat *); }
# 8860 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SNVPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
# 8861 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVNVPROC)(GLuint, const GLshort *); }
# 8862 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBNVPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
# 8863 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVNVPROC)(GLuint, const GLubyte *); }
# 8864 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 8865 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 8866 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 8867 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 8868 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 8869 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 8870 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 8871 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 8872 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 8873 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 8874 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 8875 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 8876 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4UBVNVPROC)(GLuint, GLsizei, const GLubyte *); }
# 8911 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUMPPARAMETERIVATIPROC)(GLenum, const GLint *); }
# 8912 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUMPPARAMETERFVATIPROC)(GLenum, const GLfloat *); }
# 8913 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXBUMPPARAMETERIVATIPROC)(GLenum, GLint *); }
# 8914 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXBUMPPARAMETERFVATIPROC)(GLenum, GLfloat *); }
# 8935 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGENFRAGMENTSHADERSATIPROC)(GLuint); }
# 8936 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDFRAGMENTSHADERATIPROC)(GLuint); }
# 8937 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEFRAGMENTSHADERATIPROC)(GLuint); }
# 8938 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINFRAGMENTSHADERATIPROC)(void); }
# 8939 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDFRAGMENTSHADERATIPROC)(void); }
# 8940 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPASSTEXCOORDATIPROC)(GLuint, GLuint, GLenum); }
# 8941 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEMAPATIPROC)(GLuint, GLuint, GLenum); }
# 8942 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP1ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 8943 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP2ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 8944 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP3ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 8945 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP1ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 8946 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP2ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 8947 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP3ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 8948 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)(GLuint, const GLfloat *); }
# 8957 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPNTRIANGLESIATIPROC)(GLenum, GLint); }
# 8958 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPNTRIANGLESFATIPROC)(GLenum, GLfloat); }
# 8977 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLNEWOBJECTBUFFERATIPROC)(GLsizei, const GLvoid *, GLenum); }
# 8978 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISOBJECTBUFFERATIPROC)(GLuint); }
# 8979 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUPDATEOBJECTBUFFERATIPROC)(GLuint, GLuint, GLsizei, const GLvoid *, GLenum); }
# 8980 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOBJECTBUFFERFVATIPROC)(GLuint, GLenum, GLfloat *); }
# 8981 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOBJECTBUFFERIVATIPROC)(GLuint, GLenum, GLint *); }
# 8982 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFREEOBJECTBUFFERATIPROC)(GLuint); }
# 8983 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLARRAYOBJECTATIPROC)(GLenum, GLint, GLenum, GLsizei, GLuint, GLuint); }
# 8984 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETARRAYOBJECTFVATIPROC)(GLenum, GLenum, GLfloat *); }
# 8985 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETARRAYOBJECTIVATIPROC)(GLenum, GLenum, GLint *); }
# 8986 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTARRAYOBJECTATIPROC)(GLuint, GLenum, GLsizei, GLuint, GLuint); }
# 8987 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTARRAYOBJECTFVATIPROC)(GLuint, GLenum, GLfloat *); }
# 8988 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTARRAYOBJECTIVATIPROC)(GLuint, GLenum, GLint *); }
# 9037 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINVERTEXSHADEREXTPROC)(void); }
# 9038 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDVERTEXSHADEREXTPROC)(void); }
# 9039 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDVERTEXSHADEREXTPROC)(GLuint); }
# 9040 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGENVERTEXSHADERSEXTPROC)(GLuint); }
# 9041 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEVERTEXSHADEREXTPROC)(GLuint); }
# 9042 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADEROP1EXTPROC)(GLenum, GLuint, GLuint); }
# 9043 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADEROP2EXTPROC)(GLenum, GLuint, GLuint, GLuint); }
# 9044 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADEROP3EXTPROC)(GLenum, GLuint, GLuint, GLuint, GLuint); }
# 9045 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSWIZZLEEXTPROC)(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum); }
# 9046 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWRITEMASKEXTPROC)(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum); }
# 9047 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINSERTCOMPONENTEXTPROC)(GLuint, GLuint, GLuint); }
# 9048 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEXTRACTCOMPONENTEXTPROC)(GLuint, GLuint, GLuint); }
# 9049 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGENSYMBOLSEXTPROC)(GLenum, GLenum, GLenum, GLuint); }
# 9050 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSETINVARIANTEXTPROC)(GLuint, GLenum, const GLvoid *); }
# 9051 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSETLOCALCONSTANTEXTPROC)(GLuint, GLenum, const GLvoid *); }
# 9052 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTBVEXTPROC)(GLuint, const GLbyte *); }
# 9053 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTSVEXTPROC)(GLuint, const GLshort *); }
# 9054 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTIVEXTPROC)(GLuint, const GLint *); }
# 9055 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTFVEXTPROC)(GLuint, const GLfloat *); }
# 9056 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTDVEXTPROC)(GLuint, const GLdouble *); }
# 9057 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTUBVEXTPROC)(GLuint, const GLubyte *); }
# 9058 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTUSVEXTPROC)(GLuint, const GLushort *); }
# 9059 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTUIVEXTPROC)(GLuint, const GLuint *); }
# 9060 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTPOINTEREXTPROC)(GLuint, GLenum, GLuint, const GLvoid *); }
# 9061 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)(GLuint); }
# 9062 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)(GLuint); }
# 9063 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLBINDLIGHTPARAMETEREXTPROC)(GLenum, GLenum); }
# 9064 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLBINDMATERIALPARAMETEREXTPROC)(GLenum, GLenum); }
# 9065 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLBINDTEXGENPARAMETEREXTPROC)(GLenum, GLenum, GLenum); }
# 9066 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)(GLenum, GLenum); }
# 9067 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLBINDPARAMETEREXTPROC)(GLenum); }
# 9068 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISVARIANTENABLEDEXTPROC)(GLuint, GLenum); }
# 9069 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
# 9070 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
# 9071 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
# 9072 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTPOINTERVEXTPROC)(GLuint, GLenum, GLvoid **); }
# 9073 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINVARIANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
# 9074 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINVARIANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
# 9075 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINVARIANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
# 9076 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
# 9077 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
# 9078 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
# 9130 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1SATIPROC)(GLenum, GLshort); }
# 9131 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1SVATIPROC)(GLenum, const GLshort *); }
# 9132 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1IATIPROC)(GLenum, GLint); }
# 9133 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1IVATIPROC)(GLenum, const GLint *); }
# 9134 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1FATIPROC)(GLenum, GLfloat); }
# 9135 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1FVATIPROC)(GLenum, const GLfloat *); }
# 9136 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1DATIPROC)(GLenum, GLdouble); }
# 9137 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1DVATIPROC)(GLenum, const GLdouble *); }
# 9138 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2SATIPROC)(GLenum, GLshort, GLshort); }
# 9139 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2SVATIPROC)(GLenum, const GLshort *); }
# 9140 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2IATIPROC)(GLenum, GLint, GLint); }
# 9141 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2IVATIPROC)(GLenum, const GLint *); }
# 9142 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2FATIPROC)(GLenum, GLfloat, GLfloat); }
# 9143 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2FVATIPROC)(GLenum, const GLfloat *); }
# 9144 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2DATIPROC)(GLenum, GLdouble, GLdouble); }
# 9145 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2DVATIPROC)(GLenum, const GLdouble *); }
# 9146 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3SATIPROC)(GLenum, GLshort, GLshort, GLshort); }
# 9147 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3SVATIPROC)(GLenum, const GLshort *); }
# 9148 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3IATIPROC)(GLenum, GLint, GLint, GLint); }
# 9149 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3IVATIPROC)(GLenum, const GLint *); }
# 9150 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 9151 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3FVATIPROC)(GLenum, const GLfloat *); }
# 9152 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 9153 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3DVATIPROC)(GLenum, const GLdouble *); }
# 9154 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4SATIPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
# 9155 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4SVATIPROC)(GLenum, const GLshort *); }
# 9156 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4IATIPROC)(GLenum, GLint, GLint, GLint, GLint); }
# 9157 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4IVATIPROC)(GLenum, const GLint *); }
# 9158 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
# 9159 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4FVATIPROC)(GLenum, const GLfloat *); }
# 9160 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
# 9161 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4DVATIPROC)(GLenum, const GLdouble *); }
# 9162 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3BATIPROC)(GLenum, GLbyte, GLbyte, GLbyte); }
# 9163 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3BVATIPROC)(GLenum, const GLbyte *); }
# 9164 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3SATIPROC)(GLenum, GLshort, GLshort, GLshort); }
# 9165 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3SVATIPROC)(GLenum, const GLshort *); }
# 9166 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3IATIPROC)(GLenum, GLint, GLint, GLint); }
# 9167 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3IVATIPROC)(GLenum, const GLint *); }
# 9168 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 9169 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3FVATIPROC)(GLenum, const GLfloat *); }
# 9170 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 9171 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3DVATIPROC)(GLenum, const GLdouble *); }
# 9172 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)(GLenum); }
# 9173 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXBLENDENVIATIPROC)(GLenum, GLint); }
# 9174 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXBLENDENVFATIPROC)(GLenum, GLfloat); }
# 9184 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLELEMENTPOINTERATIPROC)(GLenum, const GLvoid *); }
# 9185 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTARRAYATIPROC)(GLenum, GLsizei); }
# 9186 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTARRAYATIPROC)(GLenum, GLuint, GLuint, GLsizei); }
# 9194 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWMESHARRAYSSUNPROC)(GLenum, GLint, GLsizei, GLsizei); }
# 9220 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENOCCLUSIONQUERIESNVPROC)(GLsizei, GLuint *); }
# 9221 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEOCCLUSIONQUERIESNVPROC)(GLsizei, const GLuint *); }
# 9222 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISOCCLUSIONQUERYNVPROC)(GLuint); }
# 9223 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINOCCLUSIONQUERYNVPROC)(GLuint); }
# 9224 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDOCCLUSIONQUERYNVPROC)(void); }
# 9225 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOCCLUSIONQUERYIVNVPROC)(GLuint, GLenum, GLint *); }
# 9226 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOCCLUSIONQUERYUIVNVPROC)(GLuint, GLenum, GLuint *); }
# 9235 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERINVPROC)(GLenum, GLint); }
# 9236 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERIVNVPROC)(GLenum, const GLint *); }
# 9256 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLACTIVESTENCILFACEEXTPROC)(GLenum); }
# 9276 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLELEMENTPOINTERAPPLEPROC)(GLenum, const GLvoid *); }
# 9277 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTARRAYAPPLEPROC)(GLenum, GLint, GLsizei); }
# 9278 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum, GLuint, GLuint, GLint, GLsizei); }
# 9279 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)(GLenum, const GLint *, const GLsizei *, GLsizei); }
# 9280 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei); }
# 9295 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENFENCESAPPLEPROC)(GLsizei, GLuint *); }
# 9296 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEFENCESAPPLEPROC)(GLsizei, const GLuint *); }
# 9297 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSETFENCEAPPLEPROC)(GLuint); }
# 9298 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISFENCEAPPLEPROC)(GLuint); }
# 9299 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLTESTFENCEAPPLEPROC)(GLuint); }
# 9300 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINISHFENCEAPPLEPROC)(GLuint); }
# 9301 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLTESTOBJECTAPPLEPROC)(GLenum, GLuint); }
# 9302 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINISHOBJECTAPPLEPROC)(GLenum, GLint); }
# 9313 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDVERTEXARRAYAPPLEPROC)(GLuint); }
# 9314 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEVERTEXARRAYSAPPLEPROC)(GLsizei, const GLuint *); }
# 9315 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENVERTEXARRAYSAPPLEPROC)(GLsizei, GLuint *); }
# 9316 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISVERTEXARRAYAPPLEPROC)(GLuint); }
# 9326 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXARRAYRANGEAPPLEPROC)(GLsizei, GLvoid *); }
# 9327 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)(GLsizei, GLvoid *); }
# 9328 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)(GLenum, GLint); }
# 9344 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWBUFFERSATIPROC)(GLsizei, const GLenum *); }
# 9377 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)(GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat); }
# 9378 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)(GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble); }
# 9379 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)(GLuint, GLsizei, const GLubyte *, const GLfloat *); }
# 9380 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)(GLuint, GLsizei, const GLubyte *, const GLdouble *); }
# 9381 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)(GLuint, GLsizei, const GLubyte *, GLfloat *); }
# 9382 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)(GLuint, GLsizei, const GLubyte *, GLdouble *); }
# 9435 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX2HNVPROC)(GLhalfNV, GLhalfNV); }
# 9436 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX2HVNVPROC)(const GLhalfNV *); }
# 9437 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
# 9438 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX3HVNVPROC)(const GLhalfNV *); }
# 9439 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX4HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
# 9440 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX4HVNVPROC)(const GLhalfNV *); }
# 9441 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMAL3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
# 9442 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMAL3HVNVPROC)(const GLhalfNV *); }
# 9443 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
# 9444 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR3HVNVPROC)(const GLhalfNV *); }
# 9445 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
# 9446 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4HVNVPROC)(const GLhalfNV *); }
# 9447 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD1HNVPROC)(GLhalfNV); }
# 9448 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD1HVNVPROC)(const GLhalfNV *); }
# 9449 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2HNVPROC)(GLhalfNV, GLhalfNV); }
# 9450 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2HVNVPROC)(const GLhalfNV *); }
# 9451 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
# 9452 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD3HVNVPROC)(const GLhalfNV *); }
# 9453 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
# 9454 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4HVNVPROC)(const GLhalfNV *); }
# 9455 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1HNVPROC)(GLenum, GLhalfNV); }
# 9456 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1HVNVPROC)(GLenum, const GLhalfNV *); }
# 9457 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2HNVPROC)(GLenum, GLhalfNV, GLhalfNV); }
# 9458 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2HVNVPROC)(GLenum, const GLhalfNV *); }
# 9459 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3HNVPROC)(GLenum, GLhalfNV, GLhalfNV, GLhalfNV); }
# 9460 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3HVNVPROC)(GLenum, const GLhalfNV *); }
# 9461 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4HNVPROC)(GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
# 9462 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4HVNVPROC)(GLenum, const GLhalfNV *); }
# 9463 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDHNVPROC)(GLhalfNV); }
# 9464 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDHVNVPROC)(const GLhalfNV *); }
# 9465 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
# 9466 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3HVNVPROC)(const GLhalfNV *); }
# 9467 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTHNVPROC)(GLhalfNV); }
# 9468 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTHVNVPROC)(const GLhalfNV *); }
# 9469 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1HNVPROC)(GLuint, GLhalfNV); }
# 9470 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1HVNVPROC)(GLuint, const GLhalfNV *); }
# 9471 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2HNVPROC)(GLuint, GLhalfNV, GLhalfNV); }
# 9472 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2HVNVPROC)(GLuint, const GLhalfNV *); }
# 9473 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3HNVPROC)(GLuint, GLhalfNV, GLhalfNV, GLhalfNV); }
# 9474 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3HVNVPROC)(GLuint, const GLhalfNV *); }
# 9475 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4HNVPROC)(GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
# 9476 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4HVNVPROC)(GLuint, const GLhalfNV *); }
# 9477 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
# 9478 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
# 9479 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
# 9480 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
# 9489 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELDATARANGENVPROC)(GLenum, GLsizei, GLvoid *); }
# 9490 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHPIXELDATARANGENVPROC)(GLenum); }
# 9499 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRIMITIVERESTARTNVPROC)(void); }
# 9500 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRIMITIVERESTARTINDEXNVPROC)(GLuint); }
# 9517 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPOBJECTBUFFERATIPROC)(GLuint); }
# 9518 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNMAPOBJECTBUFFERATIPROC)(GLuint); }
# 9527 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILOPSEPARATEATIPROC)(GLenum, GLenum, GLenum, GLenum); }
# 9528 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILFUNCSEPARATEATIPROC)(GLenum, GLenum, GLint, GLuint); }
# 9538 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint); }
# 9539 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)(GLuint, GLenum, GLfloat *); }
# 9540 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)(GLuint, GLenum, GLint *); }
# 9552 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHBOUNDSEXTPROC)(GLclampd, GLclampd); }
# 9564 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEEXTPROC)(GLenum, GLenum); }
# 9616 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISRENDERBUFFEREXTPROC)(GLuint); }
# 9617 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDRENDERBUFFEREXTPROC)(GLenum, GLuint); }
# 9618 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETERENDERBUFFERSEXTPROC)(GLsizei, const GLuint *); }
# 9619 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENRENDERBUFFERSEXTPROC)(GLsizei, GLuint *); }
# 9620 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEEXTPROC)(GLenum, GLenum, GLsizei, GLsizei); }
# 9621 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 9622 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISFRAMEBUFFEREXTPROC)(GLuint); }
# 9623 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDFRAMEBUFFEREXTPROC)(GLenum, GLuint); }
# 9624 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEFRAMEBUFFERSEXTPROC)(GLsizei, const GLuint *); }
# 9625 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENFRAMEBUFFERSEXTPROC)(GLsizei, GLuint *); }
# 9626 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)(GLenum); }
# 9627 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
# 9628 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
# 9629 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint, GLint); }
# 9630 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)(GLenum, GLenum, GLenum, GLuint); }
# 9631 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
# 9632 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENERATEMIPMAPEXTPROC)(GLenum); }
# 9640 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTRINGMARKERGREMEDYPROC)(GLsizei, const GLvoid *); }
# 9652 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILCLEARTAGEXTPROC)(GLsizei, GLuint); }
# 9664 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLITFRAMEBUFFEREXTPROC)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum); }
# 9672 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei); }
# 9685 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTI64VEXTPROC)(GLuint, GLenum, GLint64EXT *); }
# 9686 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUI64VEXTPROC)(GLuint, GLenum, GLuint64EXT *); }
# 9695 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERS4FVEXTPROC)(GLenum, GLuint, GLsizei, const GLfloat *); }
# 9696 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC)(GLenum, GLuint, GLsizei, const GLfloat *); }
# 9705 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERPARAMETERIAPPLEPROC)(GLenum, GLenum, GLint); }
# 9706 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC)(GLenum, GLintptr, GLsizeiptr); }
# 9729 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4INVPROC)(GLenum, GLuint, GLint, GLint, GLint, GLint); }
# 9730 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC)(GLenum, GLuint, const GLint *); }
# 9731 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC)(GLenum, GLuint, GLsizei, const GLint *); }
# 9732 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4UINVPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 9733 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC)(GLenum, GLuint, const GLuint *); }
# 9734 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC)(GLenum, GLuint, GLsizei, const GLuint *); }
# 9735 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4INVPROC)(GLenum, GLuint, GLint, GLint, GLint, GLint); }
# 9736 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4IVNVPROC)(GLenum, GLuint, const GLint *); }
# 9737 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERSI4IVNVPROC)(GLenum, GLuint, GLsizei, const GLint *); }
# 9738 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4UINVPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 9739 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4UIVNVPROC)(GLenum, GLuint, const GLuint *); }
# 9740 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC)(GLenum, GLuint, GLsizei, const GLuint *); }
# 9741 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC)(GLenum, GLuint, GLint *); }
# 9742 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC)(GLenum, GLuint, GLuint *); }
# 9743 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERIIVNVPROC)(GLenum, GLuint, GLint *); }
# 9744 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC)(GLenum, GLuint, GLuint *); }
# 9755 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMVERTEXLIMITNVPROC)(GLenum, GLint); }
# 9756 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREEXTPROC)(GLenum, GLenum, GLuint, GLint); }
# 9757 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)(GLenum, GLenum, GLuint, GLint, GLint); }
# 9758 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)(GLenum, GLenum, GLuint, GLint, GLenum); }
# 9766 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERIEXTPROC)(GLuint, GLenum, GLint); }
# 9796 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IEXTPROC)(GLuint, GLint); }
# 9797 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IEXTPROC)(GLuint, GLint, GLint); }
# 9798 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IEXTPROC)(GLuint, GLint, GLint, GLint); }
# 9799 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IEXTPROC)(GLuint, GLint, GLint, GLint, GLint); }
# 9800 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIEXTPROC)(GLuint, GLuint); }
# 9801 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIEXTPROC)(GLuint, GLuint, GLuint); }
# 9802 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIEXTPROC)(GLuint, GLuint, GLuint, GLuint); }
# 9803 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIEXTPROC)(GLuint, GLuint, GLuint, GLuint, GLuint); }
# 9804 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IVEXTPROC)(GLuint, const GLint *); }
# 9805 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IVEXTPROC)(GLuint, const GLint *); }
# 9806 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IVEXTPROC)(GLuint, const GLint *); }
# 9807 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IVEXTPROC)(GLuint, const GLint *); }
# 9808 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIVEXTPROC)(GLuint, const GLuint *); }
# 9809 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIVEXTPROC)(GLuint, const GLuint *); }
# 9810 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIVEXTPROC)(GLuint, const GLuint *); }
# 9811 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIVEXTPROC)(GLuint, const GLuint *); }
# 9812 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4BVEXTPROC)(GLuint, const GLbyte *); }
# 9813 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4SVEXTPROC)(GLuint, const GLshort *); }
# 9814 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UBVEXTPROC)(GLuint, const GLubyte *); }
# 9815 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4USVEXTPROC)(GLuint, const GLushort *); }
# 9816 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBIPOINTEREXTPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
# 9817 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIIVEXTPROC)(GLuint, GLenum, GLint *); }
# 9818 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIUIVEXTPROC)(GLuint, GLenum, GLuint *); }
# 9836 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMUIVEXTPROC)(GLuint, GLint, GLuint *); }
# 9837 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDFRAGDATALOCATIONEXTPROC)(GLuint, GLuint, const GLchar *); }
# 9838 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETFRAGDATALOCATIONEXTPROC)(GLuint, const GLchar *); }
# 9839 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1UIEXTPROC)(GLint, GLuint); }
# 9840 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2UIEXTPROC)(GLint, GLuint, GLuint); }
# 9841 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3UIEXTPROC)(GLint, GLuint, GLuint, GLuint); }
# 9842 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4UIEXTPROC)(GLint, GLuint, GLuint, GLuint, GLuint); }
# 9843 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 9844 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 9845 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 9846 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 9855 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWARRAYSINSTANCEDEXTPROC)(GLenum, GLint, GLsizei, GLsizei); }
# 9856 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTSINSTANCEDEXTPROC)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei); }
# 9872 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUFFEREXTPROC)(GLenum, GLenum, GLuint); }
# 9894 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHRANGEDNVPROC)(GLdouble, GLdouble); }
# 9895 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARDEPTHDNVPROC)(GLdouble); }
# 9896 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHBOUNDSDNVPROC)(GLdouble, GLdouble); }
# 9908 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC)(GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei); }
# 9926 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLfloat *); }
# 9927 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLint *); }
# 9928 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLuint *); }
# 9941 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORMASKINDEXEDEXTPROC)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean); }
# 9942 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBOOLEANINDEXEDVEXTPROC)(GLenum, GLuint, GLboolean *); }
# 9943 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINTEGERINDEXEDVEXTPROC)(GLenum, GLuint, GLint *); }
# 9944 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLEINDEXEDEXTPROC)(GLenum, GLuint); }
# 9945 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLEINDEXEDEXTPROC)(GLenum, GLuint); }
# 9946 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISENABLEDINDEXEDEXTPROC)(GLenum, GLuint); }
# 9965 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINTRANSFORMFEEDBACKNVPROC)(GLenum); }
# 9966 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDTRANSFORMFEEDBACKNVPROC)(void); }
# 9967 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)(GLuint, const GLint *, GLenum); }
# 9968 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERRANGENVPROC)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr); }
# 9969 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFEROFFSETNVPROC)(GLenum, GLuint, GLuint, GLintptr); }
# 9970 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERBASENVPROC)(GLenum, GLuint, GLuint); }
# 9971 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)(GLuint, GLsizei, const GLint *, GLenum); }
# 9972 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLACTIVEVARYINGNVPROC)(GLuint, const GLchar *); }
# 9973 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETVARYINGLOCATIONNVPROC)(GLuint, const GLchar *); }
# 9974 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEVARYINGNVPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *); }
# 9975 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)(GLuint, GLuint, GLint *); }
# 9976 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC)(GLsizei, const GLint *, GLsizei, const GLint *, GLenum); }
# 9986 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMBUFFEREXTPROC)(GLuint, GLint, GLuint); }
# 9987 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETUNIFORMBUFFERSIZEEXTPROC)(GLuint, GLint); }
# 9988 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLintptr (*PFNGLGETUNIFORMOFFSETEXTPROC)(GLuint, GLint); }
# 10001 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXPARAMETERIIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 10002 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, const GLuint *); }
# 10003 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIIVEXTPROC)(GLenum, GLenum, GLint *); }
# 10004 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, GLuint *); }
# 10005 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARCOLORIIEXTPROC)(GLint, GLint, GLint, GLint); }
# 10006 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARCOLORIUIEXTPROC)(GLuint, GLuint, GLuint, GLuint); }
# 10014 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMETERMINATORGREMEDYPROC)(void); }
# 10023 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINCONDITIONALRENDERNVPROC)(GLuint, GLenum); }
# 10024 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDCONDITIONALRENDERNVPROC)(void); }
# 10037 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRESENTFRAMEKEYEDNVPROC)(GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLuint, GLenum, GLuint, GLuint); }
# 10038 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRESENTFRAMEDUALFILLNVPROC)(GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint); }
# 10039 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVIDEOIVNVPROC)(GLuint, GLenum, GLint *); }
# 10040 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVIDEOUIVNVPROC)(GLuint, GLenum, GLuint *); }
# 10041 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVIDEOI64VNVPROC)(GLuint, GLenum, GLint64EXT *); }
# 10042 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVIDEOUI64VNVPROC)(GLuint, GLenum, GLuint64EXT *); }
# 10056 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINTRANSFORMFEEDBACKEXTPROC)(GLenum); }
# 10057 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDTRANSFORMFEEDBACKEXTPROC)(void); }
# 10058 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERRANGEEXTPROC)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr); }
# 10059 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFEROFFSETEXTPROC)(GLenum, GLuint, GLuint, GLintptr); }
# 10060 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERBASEEXTPROC)(GLenum, GLuint, GLuint); }
# 10061 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC)(GLuint, GLsizei, const GLchar **, GLenum); }
# 10062 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *); }
# 10275 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLIENTATTRIBDEFAULTEXTPROC)(GLbitfield); }
# 10276 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC)(GLbitfield); }
# 10277 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXLOADFEXTPROC)(GLenum, const GLfloat *); }
# 10278 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXLOADDEXTPROC)(GLenum, const GLdouble *); }
# 10279 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXMULTFEXTPROC)(GLenum, const GLfloat *); }
# 10280 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXMULTDEXTPROC)(GLenum, const GLdouble *); }
# 10281 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXLOADIDENTITYEXTPROC)(GLenum); }
# 10282 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXROTATEFEXTPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
# 10283 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXROTATEDEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
# 10284 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXSCALEFEXTPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 10285 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXSCALEDEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 10286 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXTRANSLATEFEXTPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 10287 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXTRANSLATEDEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 10288 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXFRUSTUMEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble); }
# 10289 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXORTHOEXTPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble); }
# 10290 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXPOPEXTPROC)(GLenum); }
# 10291 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXPUSHEXTPROC)(GLenum); }
# 10292 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXLOADTRANSPOSEFEXTPROC)(GLenum, const GLfloat *); }
# 10293 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXLOADTRANSPOSEDEXTPROC)(GLenum, const GLdouble *); }
# 10294 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXMULTTRANSPOSEFEXTPROC)(GLenum, const GLfloat *); }
# 10295 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXMULTTRANSPOSEDEXTPROC)(GLenum, const GLdouble *); }
# 10296 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERFEXTPROC)(GLuint, GLenum, GLenum, GLfloat); }
# 10297 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERFVEXTPROC)(GLuint, GLenum, GLenum, const GLfloat *); }
# 10298 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERIEXTPROC)(GLuint, GLenum, GLenum, GLint); }
# 10299 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERIVEXTPROC)(GLuint, GLenum, GLenum, const GLint *); }
# 10300 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 10301 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 10302 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURESUBIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *); }
# 10303 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURESUBIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 10304 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXTUREIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint); }
# 10305 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXTUREIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint); }
# 10306 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei); }
# 10307 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 10308 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXTUREIMAGEEXTPROC)(GLuint, GLenum, GLint, GLenum, GLenum, GLvoid *); }
# 10309 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXTUREPARAMETERFVEXTPROC)(GLuint, GLenum, GLenum, GLfloat *); }
# 10310 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXTUREPARAMETERIVEXTPROC)(GLuint, GLenum, GLenum, GLint *); }
# 10311 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC)(GLuint, GLenum, GLint, GLenum, GLfloat *); }
# 10312 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC)(GLuint, GLenum, GLint, GLenum, GLint *); }
# 10313 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREIMAGE3DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 10314 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURESUBIMAGE3DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 10315 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 10316 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERFEXTPROC)(GLenum, GLenum, GLenum, GLfloat); }
# 10317 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERFVEXTPROC)(GLenum, GLenum, GLenum, const GLfloat *); }
# 10318 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERIEXTPROC)(GLenum, GLenum, GLenum, GLint); }
# 10319 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERIVEXTPROC)(GLenum, GLenum, GLenum, const GLint *); }
# 10320 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 10321 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 10322 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXSUBIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *); }
# 10323 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXSUBIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 10324 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYMULTITEXIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint); }
# 10325 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYMULTITEXIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint); }
# 10326 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei); }
# 10327 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 10328 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXIMAGEEXTPROC)(GLenum, GLenum, GLint, GLenum, GLenum, GLvoid *); }
# 10329 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXPARAMETERFVEXTPROC)(GLenum, GLenum, GLenum, GLfloat *); }
# 10330 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXPARAMETERIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
# 10331 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC)(GLenum, GLenum, GLint, GLenum, GLfloat *); }
# 10332 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC)(GLenum, GLenum, GLint, GLenum, GLint *); }
# 10333 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXIMAGE3DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 10334 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXSUBIMAGE3DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 10335 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 10336 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDMULTITEXTUREEXTPROC)(GLenum, GLenum, GLuint); }
# 10337 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLECLIENTSTATEINDEXEDEXTPROC)(GLenum, GLuint); }
# 10338 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC)(GLenum, GLuint); }
# 10339 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORDPOINTEREXTPROC)(GLenum, GLint, GLenum, GLsizei, const GLvoid *); }
# 10340 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXENVFEXTPROC)(GLenum, GLenum, GLenum, GLfloat); }
# 10341 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXENVFVEXTPROC)(GLenum, GLenum, GLenum, const GLfloat *); }
# 10342 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXENVIEXTPROC)(GLenum, GLenum, GLenum, GLint); }
# 10343 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXENVIVEXTPROC)(GLenum, GLenum, GLenum, const GLint *); }
# 10344 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXGENDEXTPROC)(GLenum, GLenum, GLenum, GLdouble); }
# 10345 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXGENDVEXTPROC)(GLenum, GLenum, GLenum, const GLdouble *); }
# 10346 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXGENFEXTPROC)(GLenum, GLenum, GLenum, GLfloat); }
# 10347 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXGENFVEXTPROC)(GLenum, GLenum, GLenum, const GLfloat *); }
# 10348 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXGENIEXTPROC)(GLenum, GLenum, GLenum, GLint); }
# 10349 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXGENIVEXTPROC)(GLenum, GLenum, GLenum, const GLint *); }
# 10350 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXENVFVEXTPROC)(GLenum, GLenum, GLenum, GLfloat *); }
# 10351 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXENVIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
# 10352 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXGENDVEXTPROC)(GLenum, GLenum, GLenum, GLdouble *); }
# 10353 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXGENFVEXTPROC)(GLenum, GLenum, GLenum, GLfloat *); }
# 10354 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXGENIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
# 10355 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFLOATINDEXEDVEXTPROC)(GLenum, GLuint, GLfloat *); }
# 10356 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETDOUBLEINDEXEDVEXTPROC)(GLenum, GLuint, GLdouble *); }
# 10357 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPOINTERINDEXEDVEXTPROC)(GLenum, GLuint, GLvoid **); }
# 10358 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 10359 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 10360 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
# 10361 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 10362 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC)(GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 10363 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC)(GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 10364 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC)(GLuint, GLenum, GLint, GLvoid *); }
# 10365 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 10366 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 10367 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
# 10368 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 10369 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC)(GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 10370 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 10371 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC)(GLenum, GLenum, GLint, GLvoid *); }
# 10372 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMSTRINGEXTPROC)(GLuint, GLenum, GLenum, GLsizei, const GLvoid *); }
# 10373 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC)(GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 10374 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC)(GLuint, GLenum, GLuint, const GLdouble *); }
# 10375 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC)(GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 10376 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC)(GLuint, GLenum, GLuint, const GLfloat *); }
# 10377 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC)(GLuint, GLenum, GLuint, GLdouble *); }
# 10378 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC)(GLuint, GLenum, GLuint, GLfloat *); }
# 10379 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMIVEXTPROC)(GLuint, GLenum, GLenum, GLint *); }
# 10380 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMSTRINGEXTPROC)(GLuint, GLenum, GLenum, GLvoid *); }
# 10381 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC)(GLuint, GLenum, GLuint, GLsizei, const GLfloat *); }
# 10382 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC)(GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint); }
# 10383 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC)(GLuint, GLenum, GLuint, const GLint *); }
# 10384 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC)(GLuint, GLenum, GLuint, GLsizei, const GLint *); }
# 10385 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC)(GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 10386 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC)(GLuint, GLenum, GLuint, const GLuint *); }
# 10387 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC)(GLuint, GLenum, GLuint, GLsizei, const GLuint *); }
# 10388 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC)(GLuint, GLenum, GLuint, GLint *); }
# 10389 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC)(GLuint, GLenum, GLuint, GLuint *); }
# 10390 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERIIVEXTPROC)(GLuint, GLenum, GLenum, const GLint *); }
# 10391 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREPARAMETERIUIVEXTPROC)(GLuint, GLenum, GLenum, const GLuint *); }
# 10392 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXTUREPARAMETERIIVEXTPROC)(GLuint, GLenum, GLenum, GLint *); }
# 10393 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXTUREPARAMETERIUIVEXTPROC)(GLuint, GLenum, GLenum, GLuint *); }
# 10394 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERIIVEXTPROC)(GLenum, GLenum, GLenum, const GLint *); }
# 10395 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, GLenum, const GLuint *); }
# 10396 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXPARAMETERIIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
# 10397 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTITEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, GLenum, GLuint *); }
# 10398 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1FEXTPROC)(GLuint, GLint, GLfloat); }
# 10399 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2FEXTPROC)(GLuint, GLint, GLfloat, GLfloat); }
# 10400 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3FEXTPROC)(GLuint, GLint, GLfloat, GLfloat, GLfloat); }
# 10401 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4FEXTPROC)(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 10402 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1IEXTPROC)(GLuint, GLint, GLint); }
# 10403 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2IEXTPROC)(GLuint, GLint, GLint, GLint); }
# 10404 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3IEXTPROC)(GLuint, GLint, GLint, GLint, GLint); }
# 10405 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4IEXTPROC)(GLuint, GLint, GLint, GLint, GLint, GLint); }
# 10406 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1FVEXTPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
# 10407 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2FVEXTPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
# 10408 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3FVEXTPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
# 10409 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4FVEXTPROC)(GLuint, GLint, GLsizei, const GLfloat *); }
# 10410 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1IVEXTPROC)(GLuint, GLint, GLsizei, const GLint *); }
# 10411 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2IVEXTPROC)(GLuint, GLint, GLsizei, const GLint *); }
# 10412 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3IVEXTPROC)(GLuint, GLint, GLsizei, const GLint *); }
# 10413 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4IVEXTPROC)(GLuint, GLint, GLsizei, const GLint *); }
# 10414 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 10415 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 10416 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 10417 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 10418 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 10419 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 10420 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 10421 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 10422 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLfloat *); }
# 10423 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1UIEXTPROC)(GLuint, GLint, GLuint); }
# 10424 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2UIEXTPROC)(GLuint, GLint, GLuint, GLuint); }
# 10425 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3UIEXTPROC)(GLuint, GLint, GLuint, GLuint, GLuint); }
# 10426 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4UIEXTPROC)(GLuint, GLint, GLuint, GLuint, GLuint, GLuint); }
# 10427 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1UIVEXTPROC)(GLuint, GLint, GLsizei, const GLuint *); }
# 10428 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2UIVEXTPROC)(GLuint, GLint, GLsizei, const GLuint *); }
# 10429 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3UIVEXTPROC)(GLuint, GLint, GLsizei, const GLuint *); }
# 10430 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4UIVEXTPROC)(GLuint, GLint, GLsizei, const GLuint *); }
# 10431 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDBUFFERDATAEXTPROC)(GLuint, GLsizeiptr, const GLvoid *, GLenum); }
# 10432 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDBUFFERSUBDATAEXTPROC)(GLuint, GLintptr, GLsizeiptr, const GLvoid *); }
# 10433 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPNAMEDBUFFEREXTPROC)(GLuint, GLenum); }
# 10434 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLUNMAPNAMEDBUFFEREXTPROC)(GLuint); }
# 10435 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPNAMEDBUFFERRANGEEXTPROC)(GLuint, GLintptr, GLsizeiptr, GLbitfield); }
# 10436 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC)(GLuint, GLintptr, GLsizeiptr); }
# 10437 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC)(GLuint, GLuint, GLintptr, GLintptr, GLsizeiptr); }
# 10438 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC)(GLuint, GLenum, GLint *); }
# 10439 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDBUFFERPOINTERVEXTPROC)(GLuint, GLenum, GLvoid **); }
# 10440 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDBUFFERSUBDATAEXTPROC)(GLuint, GLintptr, GLsizeiptr, GLvoid *); }
# 10441 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREBUFFEREXTPROC)(GLuint, GLenum, GLenum, GLuint); }
# 10442 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXBUFFEREXTPROC)(GLenum, GLenum, GLenum, GLuint); }
# 10443 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC)(GLuint, GLenum, GLsizei, GLsizei); }
# 10444 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC)(GLuint, GLenum, GLint *); }
# 10445 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLenum (*PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC)(GLuint, GLenum); }
# 10446 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC)(GLuint, GLenum, GLenum, GLuint, GLint); }
# 10447 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC)(GLuint, GLenum, GLenum, GLuint, GLint); }
# 10448 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC)(GLuint, GLenum, GLenum, GLuint, GLint, GLint); }
# 10449 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC)(GLuint, GLenum, GLenum, GLuint); }
# 10450 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)(GLuint, GLenum, GLenum, GLint *); }
# 10451 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENERATETEXTUREMIPMAPEXTPROC)(GLuint, GLenum); }
# 10452 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENERATEMULTITEXMIPMAPEXTPROC)(GLenum, GLenum); }
# 10453 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC)(GLuint, GLenum); }
# 10454 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC)(GLuint, GLsizei, const GLenum *); }
# 10455 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERREADBUFFEREXTPROC)(GLuint, GLenum); }
# 10456 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC)(GLuint, GLenum, GLint *); }
# 10457 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)(GLuint, GLsizei, GLenum, GLsizei, GLsizei); }
# 10458 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC)(GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei); }
# 10459 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC)(GLuint, GLenum, GLuint, GLint); }
# 10460 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC)(GLuint, GLenum, GLuint, GLint, GLint); }
# 10461 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC)(GLuint, GLenum, GLuint, GLint, GLenum); }
# 10462 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURERENDERBUFFEREXTPROC)(GLuint, GLenum, GLuint); }
# 10463 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXRENDERBUFFEREXTPROC)(GLenum, GLenum, GLuint); }
# 10464 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1DEXTPROC)(GLuint, GLint, GLdouble); }
# 10465 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2DEXTPROC)(GLuint, GLint, GLdouble, GLdouble); }
# 10466 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3DEXTPROC)(GLuint, GLint, GLdouble, GLdouble, GLdouble); }
# 10467 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4DEXTPROC)(GLuint, GLint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 10468 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1DVEXTPROC)(GLuint, GLint, GLsizei, const GLdouble *); }
# 10469 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2DVEXTPROC)(GLuint, GLint, GLsizei, const GLdouble *); }
# 10470 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3DVEXTPROC)(GLuint, GLint, GLsizei, const GLdouble *); }
# 10471 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4DVEXTPROC)(GLuint, GLint, GLsizei, const GLdouble *); }
# 10472 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 10473 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 10474 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 10475 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 10476 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 10477 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 10478 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 10479 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 10480 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC)(GLuint, GLint, GLsizei, GLboolean, const GLdouble *); }
# 10498 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMULTISAMPLEFVNVPROC)(GLenum, GLuint, GLfloat *); }
# 10499 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEMASKINDEXEDNVPROC)(GLuint, GLbitfield); }
# 10500 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXRENDERBUFFERNVPROC)(GLenum, GLuint); }
# 10514 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDTRANSFORMFEEDBACKNVPROC)(GLenum, GLuint); }
# 10515 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETETRANSFORMFEEDBACKSNVPROC)(GLsizei, const GLuint *); }
# 10516 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENTRANSFORMFEEDBACKSNVPROC)(GLsizei, GLuint *); }
# 10517 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISTRANSFORMFEEDBACKNVPROC)(GLuint); }
# 10518 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPAUSETRANSFORMFEEDBACKNVPROC)(void); }
# 10519 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESUMETRANSFORMFEEDBACKNVPROC)(void); }
# 10520 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWTRANSFORMFEEDBACKNVPROC)(GLenum, GLuint); }
# 10542 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPERFMONITORGROUPSAMDPROC)(GLint *, GLsizei, GLuint *); }
# 10543 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPERFMONITORCOUNTERSAMDPROC)(GLuint, GLint *, GLint *, GLsizei, GLuint *); }
# 10544 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
# 10545 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *); }
# 10546 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)(GLuint, GLuint, GLenum, GLvoid *); }
# 10547 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENPERFMONITORSAMDPROC)(GLsizei, GLuint *); }
# 10548 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEPERFMONITORSAMDPROC)(GLsizei, GLuint *); }
# 10549 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)(GLuint, GLboolean, GLuint, GLint, GLuint *); }
# 10550 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINPERFMONITORAMDPROC)(GLuint); }
# 10551 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDPERFMONITORAMDPROC)(GLuint); }
# 10552 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)(GLuint, GLenum, GLsizei, GLuint *, GLint *); }
# 10565 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTESSELLATIONFACTORAMDPROC)(GLfloat); }
# 10566 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTESSELLATIONMODEAMDPROC)(GLenum); }
# 10574 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROVOKINGVERTEXEXTPROC)(GLenum); }
# 10589 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCINDEXEDAMDPROC)(GLuint, GLenum, GLenum); }
# 10590 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC)(GLuint, GLenum, GLenum, GLenum, GLenum); }
# 10591 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONINDEXEDAMDPROC)(GLuint, GLenum); }
# 10592 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC)(GLuint, GLenum, GLenum); }
# 10601 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURERANGEAPPLEPROC)(GLenum, GLsizei, const GLvoid *); }
# 10602 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC)(GLenum, GLenum, GLvoid **); }
# 10620 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLEVERTEXATTRIBAPPLEPROC)(GLuint, GLenum); }
# 10621 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLEVERTEXATTRIBAPPLEPROC)(GLuint, GLenum); }
# 10622 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISVERTEXATTRIBENABLEDAPPLEPROC)(GLuint, GLenum); }
# 10623 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPVERTEXATTRIB1DAPPLEPROC)(GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, const GLdouble *); }
# 10624 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPVERTEXATTRIB1FAPPLEPROC)(GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, const GLfloat *); }
# 10625 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPVERTEXATTRIB2DAPPLEPROC)(GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *); }
# 10626 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPVERTEXATTRIB2FAPPLEPROC)(GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *); }
# 10640 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLenum (*PFNGLOBJECTPURGEABLEAPPLEPROC)(GLenum, GLuint, GLenum); }
# 10641 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLenum (*PFNGLOBJECTUNPURGEABLEAPPLEPROC)(GLenum, GLuint, GLenum); }
# 10642 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOBJECTPARAMETERIVAPPLEPROC)(GLenum, GLuint, GLenum, GLint *); }
# 10669 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINVIDEOCAPTURENVPROC)(GLuint); }
# 10670 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC)(GLuint, GLuint, GLenum, GLintptrARB); }
# 10671 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC)(GLuint, GLuint, GLenum, GLenum, GLuint); }
# 10672 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDVIDEOCAPTURENVPROC)(GLuint); }
# 10673 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVIDEOCAPTUREIVNVPROC)(GLuint, GLenum, GLint *); }
# 10674 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVIDEOCAPTURESTREAMIVNVPROC)(GLuint, GLuint, GLenum, GLint *); }
# 10675 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVIDEOCAPTURESTREAMFVNVPROC)(GLuint, GLuint, GLenum, GLfloat *); }
# 10676 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVIDEOCAPTURESTREAMDVNVPROC)(GLuint, GLuint, GLenum, GLdouble *); }
# 10677 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLenum (*PFNGLVIDEOCAPTURENVPROC)(GLuint, GLuint *, GLuint64EXT *); }
# 10678 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC)(GLuint, GLuint, GLenum, const GLint *); }
# 10679 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC)(GLuint, GLuint, GLenum, const GLfloat *); }
# 10680 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC)(GLuint, GLuint, GLenum, const GLdouble *); }
# 10688 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYIMAGESUBDATANVPROC)(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei); }
# 10698 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUSESHADERPROGRAMEXTPROC)(GLenum, GLuint); }
# 10699 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLACTIVEPROGRAMEXTPROC)(GLuint); }
# 10700 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLCREATESHADERPROGRAMEXTPROC)(GLenum, const GLchar *); }
# 10725 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAKEBUFFERRESIDENTNVPROC)(GLenum, GLenum); }
# 10726 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAKEBUFFERNONRESIDENTNVPROC)(GLenum); }
# 10727 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISBUFFERRESIDENTNVPROC)(GLenum); }
# 10728 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAKENAMEDBUFFERRESIDENTNVPROC)(GLuint, GLenum); }
# 10729 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC)(GLuint); }
# 10730 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISNAMEDBUFFERRESIDENTNVPROC)(GLuint); }
# 10731 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERPARAMETERUI64VNVPROC)(GLenum, GLenum, GLuint64EXT *); }
# 10732 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC)(GLuint, GLenum, GLuint64EXT *); }
# 10733 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINTEGERUI64VNVPROC)(GLenum, GLuint64EXT *); }
# 10734 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMUI64NVPROC)(GLint, GLuint64EXT); }
# 10735 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMUI64VNVPROC)(GLint, GLsizei, const GLuint64EXT *); }
# 10736 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMUI64VNVPROC)(GLuint, GLint, GLuint64EXT *); }
# 10737 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMUI64NVPROC)(GLuint, GLint, GLuint64EXT); }
# 10738 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORMUI64VNVPROC)(GLuint, GLint, GLsizei, const GLuint64EXT *); }
# 10757 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERADDRESSRANGENVPROC)(GLenum, GLuint, GLuint64EXT, GLsizeiptr); }
# 10758 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXFORMATNVPROC)(GLint, GLenum, GLsizei); }
# 10759 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALFORMATNVPROC)(GLenum, GLsizei); }
# 10760 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORFORMATNVPROC)(GLint, GLenum, GLsizei); }
# 10761 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXFORMATNVPROC)(GLenum, GLsizei); }
# 10762 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDFORMATNVPROC)(GLint, GLenum, GLsizei); }
# 10763 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEDGEFLAGFORMATNVPROC)(GLsizei); }
# 10764 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLORFORMATNVPROC)(GLint, GLenum, GLsizei); }
# 10765 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDFORMATNVPROC)(GLenum, GLsizei); }
# 10766 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBFORMATNVPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei); }
# 10767 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBIFORMATNVPROC)(GLuint, GLint, GLenum, GLsizei); }
# 10768 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINTEGERUI64I_VNVPROC)(GLenum, GLuint, GLuint64EXT *); }
# 10776 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREBARRIERNVPROC)(void); }
# 10797 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDIMAGETEXTUREEXTPROC)(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLint); }
# 10798 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMEMORYBARRIEREXTPROC)(GLbitfield); }
# 10816 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL1DEXTPROC)(GLuint, GLdouble); }
# 10817 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL2DEXTPROC)(GLuint, GLdouble, GLdouble); }
# 10818 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL3DEXTPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 10819 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL4DEXTPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 10820 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL1DVEXTPROC)(GLuint, const GLdouble *); }
# 10821 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL2DVEXTPROC)(GLuint, const GLdouble *); }
# 10822 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL3DVEXTPROC)(GLuint, const GLdouble *); }
# 10823 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL4DVEXTPROC)(GLuint, const GLdouble *); }
# 10824 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBLPOINTEREXTPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
# 10825 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBLDVEXTPROC)(GLuint, GLenum, GLdouble *); }
# 10826 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC)(GLuint, GLuint, GLuint, GLint, GLenum, GLsizei, GLintptr); }
# 10835 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC)(GLenum, GLsizei, const GLuint *); }
# 10836 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC)(GLenum, GLuint, GLuint *); }
# 10876 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1I64NVPROC)(GLint, GLint64EXT); }
# 10877 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2I64NVPROC)(GLint, GLint64EXT, GLint64EXT); }
# 10878 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3I64NVPROC)(GLint, GLint64EXT, GLint64EXT, GLint64EXT); }
# 10879 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4I64NVPROC)(GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT); }
# 10880 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1I64VNVPROC)(GLint, GLsizei, const GLint64EXT *); }
# 10881 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2I64VNVPROC)(GLint, GLsizei, const GLint64EXT *); }
# 10882 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3I64VNVPROC)(GLint, GLsizei, const GLint64EXT *); }
# 10883 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4I64VNVPROC)(GLint, GLsizei, const GLint64EXT *); }
# 10884 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1UI64NVPROC)(GLint, GLuint64EXT); }
# 10885 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2UI64NVPROC)(GLint, GLuint64EXT, GLuint64EXT); }
# 10886 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3UI64NVPROC)(GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT); }
# 10887 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4UI64NVPROC)(GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT); }
# 10888 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1UI64VNVPROC)(GLint, GLsizei, const GLuint64EXT *); }
# 10889 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2UI64VNVPROC)(GLint, GLsizei, const GLuint64EXT *); }
# 10890 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3UI64VNVPROC)(GLint, GLsizei, const GLuint64EXT *); }
# 10891 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4UI64VNVPROC)(GLint, GLsizei, const GLuint64EXT *); }
# 10892 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMI64VNVPROC)(GLuint, GLint, GLint64EXT *); }
# 10893 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1I64NVPROC)(GLuint, GLint, GLint64EXT); }
# 10894 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2I64NVPROC)(GLuint, GLint, GLint64EXT, GLint64EXT); }
# 10895 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3I64NVPROC)(GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT); }
# 10896 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4I64NVPROC)(GLuint, GLint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT); }
# 10897 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1I64VNVPROC)(GLuint, GLint, GLsizei, const GLint64EXT *); }
# 10898 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2I64VNVPROC)(GLuint, GLint, GLsizei, const GLint64EXT *); }
# 10899 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3I64VNVPROC)(GLuint, GLint, GLsizei, const GLint64EXT *); }
# 10900 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4I64VNVPROC)(GLuint, GLint, GLsizei, const GLint64EXT *); }
# 10901 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1UI64NVPROC)(GLuint, GLint, GLuint64EXT); }
# 10902 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2UI64NVPROC)(GLuint, GLint, GLuint64EXT, GLuint64EXT); }
# 10903 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3UI64NVPROC)(GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT); }
# 10904 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4UI64NVPROC)(GLuint, GLint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT); }
# 10905 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM1UI64VNVPROC)(GLuint, GLint, GLsizei, const GLuint64EXT *); }
# 10906 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM2UI64VNVPROC)(GLuint, GLint, GLsizei, const GLuint64EXT *); }
# 10907 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM3UI64VNVPROC)(GLuint, GLint, GLsizei, const GLuint64EXT *); }
# 10908 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMUNIFORM4UI64VNVPROC)(GLuint, GLint, GLsizei, const GLuint64EXT *); }
# 10942 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL1I64NVPROC)(GLuint, GLint64EXT); }
# 10943 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL2I64NVPROC)(GLuint, GLint64EXT, GLint64EXT); }
# 10944 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL3I64NVPROC)(GLuint, GLint64EXT, GLint64EXT, GLint64EXT); }
# 10945 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL4I64NVPROC)(GLuint, GLint64EXT, GLint64EXT, GLint64EXT, GLint64EXT); }
# 10946 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL1I64VNVPROC)(GLuint, const GLint64EXT *); }
# 10947 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL2I64VNVPROC)(GLuint, const GLint64EXT *); }
# 10948 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL3I64VNVPROC)(GLuint, const GLint64EXT *); }
# 10949 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL4I64VNVPROC)(GLuint, const GLint64EXT *); }
# 10950 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL1UI64NVPROC)(GLuint, GLuint64EXT); }
# 10951 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL2UI64NVPROC)(GLuint, GLuint64EXT, GLuint64EXT); }
# 10952 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL3UI64NVPROC)(GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT); }
# 10953 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL4UI64NVPROC)(GLuint, GLuint64EXT, GLuint64EXT, GLuint64EXT, GLuint64EXT); }
# 10954 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL1UI64VNVPROC)(GLuint, const GLuint64EXT *); }
# 10955 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL2UI64VNVPROC)(GLuint, const GLuint64EXT *); }
# 10956 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL3UI64VNVPROC)(GLuint, const GLuint64EXT *); }
# 10957 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBL4UI64VNVPROC)(GLuint, const GLuint64EXT *); }
# 10958 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBLI64VNVPROC)(GLuint, GLenum, GLint64EXT *); }
# 10959 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBLUI64VNVPROC)(GLuint, GLenum, GLuint64EXT *); }
# 10960 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBLFORMATNVPROC)(GLuint, GLint, GLenum, GLsizei); }
# 10974 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENNAMESAMDPROC)(GLenum, GLuint, GLuint *); }
# 10975 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETENAMESAMDPROC)(GLenum, GLuint, const GLuint *); }
# 10976 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISNAMEAMDPROC)(GLenum, GLuint); }
# 10987 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEBUGMESSAGEENABLEAMDPROC)(GLenum, GLenum, GLsizei, const GLuint *, GLboolean); }
# 10988 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEBUGMESSAGEINSERTAMDPROC)(GLenum, GLenum, GLuint, GLsizei, const GLchar *); }
# 10989 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEBUGMESSAGECALLBACKAMDPROC)(GLDEBUGPROCAMD, GLvoid *); }
# 10990 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGETDEBUGMESSAGELOGAMDPROC)(GLuint, GLsizei, GLenum *, GLuint *, GLuint *, GLsizei *, GLchar *); }
# 11007 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVDPAUINITNVPROC)(const GLvoid *, const GLvoid *); }
# 11008 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVDPAUFININVPROC)(void); }
# 11009 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLvdpauSurfaceNV (*PFNGLVDPAUREGISTERVIDEOSURFACENVPROC)(GLvoid *, GLenum, GLsizei, const GLuint *); }
# 11010 "/usr/include/GL/glext.h" 3
extern "C" { typedef GLvdpauSurfaceNV (*PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC)(GLvoid *, GLenum, GLsizei, const GLuint *); }
# 11011 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVDPAUISSURFACENVPROC)(GLvdpauSurfaceNV); }
# 11012 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVDPAUUNREGISTERSURFACENVPROC)(GLvdpauSurfaceNV); }
# 11013 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVDPAUGETSURFACEIVNVPROC)(GLvdpauSurfaceNV, GLenum, GLsizei, GLsizei *, GLint *); }
# 11014 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVDPAUSURFACEACCESSNVPROC)(GLvdpauSurfaceNV, GLenum); }
# 11015 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVDPAUMAPSURFACESNVPROC)(GLsizei, const GLvdpauSurfaceNV *); }
# 11016 "/usr/include/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVDPAUUNMAPSURFACESNVPROC)(GLsizei, const GLvdpauSurfaceNV *); }
# 2106 "/usr/include/GL/gl.h" 3
extern "C" GLhandleARB glCreateDebugObjectMESA() __attribute__((visibility("default")));
# 2107 "/usr/include/GL/gl.h" 3
extern "C" void glClearDebugLogMESA(GLhandleARB, GLenum, GLenum) __attribute__((visibility("default")));
# 2108 "/usr/include/GL/gl.h" 3
extern "C" void glGetDebugLogMESA(GLhandleARB, GLenum, GLenum, GLsizei, GLsizei *, GLcharARB *) __attribute__((visibility("default")));
# 2110 "/usr/include/GL/gl.h" 3
extern "C" GLsizei glGetDebugLogLengthMESA(GLhandleARB, GLenum, GLenum) __attribute__((visibility("default")));
# 2145 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*GLprogramcallbackMESA)(GLenum, GLvoid *); }
# 2147 "/usr/include/GL/gl.h" 3
extern "C" void glProgramCallbackMESA(GLenum, GLprogramcallbackMESA, GLvoid *) __attribute__((visibility("default")));
# 2149 "/usr/include/GL/gl.h" 3
extern "C" void glGetProgramRegisterfvMESA(GLenum, GLsizei, const GLubyte *, GLfloat *) __attribute__((visibility("default")));
# 2192 "/usr/include/GL/gl.h" 3
extern "C" void glBlendEquationSeparateATI(GLenum, GLenum) __attribute__((visibility("default")));
# 2193 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEATIPROC)(GLenum, GLenum); }
# 2200 "/usr/include/GL/gl.h" 3
extern "C" { typedef void *GLeglImageOES; }
# 2209 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLEGLIMAGETARGETTEXTURE2DOESPROC)(GLenum, GLeglImageOES); }
# 2210 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC)(GLenum, GLeglImageOES); }
# 270 "/usr/include/GL/glu.h" 3
class GLUnurbs;
# 271 "/usr/include/GL/glu.h" 3
class GLUquadric;
# 272 "/usr/include/GL/glu.h" 3
class GLUtesselator;
# 279 "/usr/include/GL/glu.h" 3
extern "C" { typedef GLUnurbs GLUnurbsObj; }
# 280 "/usr/include/GL/glu.h" 3
extern "C" { typedef GLUquadric GLUquadricObj; }
# 281 "/usr/include/GL/glu.h" 3
extern "C" { typedef GLUtesselator GLUtesselatorObj; }
# 282 "/usr/include/GL/glu.h" 3
extern "C" { typedef GLUtesselator GLUtriangulatorObj; }
# 287 "/usr/include/GL/glu.h" 3
extern "C" { typedef void (*_GLUfuncptr)(void); }
# 289 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginCurve(GLUnurbs *) __attribute__((visibility("default")));
# 290 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginPolygon(GLUtesselator *) __attribute__((visibility("default")));
# 291 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginSurface(GLUnurbs *) __attribute__((visibility("default")));
# 292 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginTrim(GLUnurbs *) __attribute__((visibility("default")));
# 293 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild1DMipmapLevels(GLenum, GLint, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) __attribute__((visibility("default")));
# 294 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild1DMipmaps(GLenum, GLint, GLsizei, GLenum, GLenum, const void *) __attribute__((visibility("default")));
# 295 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild2DMipmapLevels(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) __attribute__((visibility("default")));
# 296 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild2DMipmaps(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *) __attribute__((visibility("default")));
# 297 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild3DMipmapLevels(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) __attribute__((visibility("default")));
# 298 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild3DMipmaps(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) __attribute__((visibility("default")));
# 299 "/usr/include/GL/glu.h" 3
extern "C" GLboolean gluCheckExtension(const GLubyte *, const GLubyte *) __attribute__((visibility("default")));
# 300 "/usr/include/GL/glu.h" 3
extern "C" void gluCylinder(GLUquadric *, GLdouble, GLdouble, GLdouble, GLint, GLint) __attribute__((visibility("default")));
# 301 "/usr/include/GL/glu.h" 3
extern "C" void gluDeleteNurbsRenderer(GLUnurbs *) __attribute__((visibility("default")));
# 302 "/usr/include/GL/glu.h" 3
extern "C" void gluDeleteQuadric(GLUquadric *) __attribute__((visibility("default")));
# 303 "/usr/include/GL/glu.h" 3
extern "C" void gluDeleteTess(GLUtesselator *) __attribute__((visibility("default")));
# 304 "/usr/include/GL/glu.h" 3
extern "C" void gluDisk(GLUquadric *, GLdouble, GLdouble, GLint, GLint) __attribute__((visibility("default")));
# 305 "/usr/include/GL/glu.h" 3
extern "C" void gluEndCurve(GLUnurbs *) __attribute__((visibility("default")));
# 306 "/usr/include/GL/glu.h" 3
extern "C" void gluEndPolygon(GLUtesselator *) __attribute__((visibility("default")));
# 307 "/usr/include/GL/glu.h" 3
extern "C" void gluEndSurface(GLUnurbs *) __attribute__((visibility("default")));
# 308 "/usr/include/GL/glu.h" 3
extern "C" void gluEndTrim(GLUnurbs *) __attribute__((visibility("default")));
# 309 "/usr/include/GL/glu.h" 3
extern "C" const GLubyte *gluErrorString(GLenum) __attribute__((visibility("default")));
# 310 "/usr/include/GL/glu.h" 3
extern "C" void gluGetNurbsProperty(GLUnurbs *, GLenum, GLfloat *) __attribute__((visibility("default")));
# 311 "/usr/include/GL/glu.h" 3
extern "C" const GLubyte *gluGetString(GLenum) __attribute__((visibility("default")));
# 312 "/usr/include/GL/glu.h" 3
extern "C" void gluGetTessProperty(GLUtesselator *, GLenum, GLdouble *) __attribute__((visibility("default")));
# 313 "/usr/include/GL/glu.h" 3
extern "C" void gluLoadSamplingMatrices(GLUnurbs *, const GLfloat *, const GLfloat *, const GLint *) __attribute__((visibility("default")));
# 314 "/usr/include/GL/glu.h" 3
extern "C" void gluLookAt(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 315 "/usr/include/GL/glu.h" 3
extern "C" GLUnurbs *gluNewNurbsRenderer() __attribute__((visibility("default")));
# 316 "/usr/include/GL/glu.h" 3
extern "C" GLUquadric *gluNewQuadric() __attribute__((visibility("default")));
# 317 "/usr/include/GL/glu.h" 3
extern "C" GLUtesselator *gluNewTess() __attribute__((visibility("default")));
# 318 "/usr/include/GL/glu.h" 3
extern "C" void gluNextContour(GLUtesselator *, GLenum) __attribute__((visibility("default")));
# 319 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCallback(GLUnurbs *, GLenum, _GLUfuncptr) __attribute__((visibility("default")));
# 320 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCallbackData(GLUnurbs *, GLvoid *) __attribute__((visibility("default")));
# 321 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCallbackDataEXT(GLUnurbs *, GLvoid *) __attribute__((visibility("default")));
# 322 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCurve(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum) __attribute__((visibility("default")));
# 323 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsProperty(GLUnurbs *, GLenum, GLfloat) __attribute__((visibility("default")));
# 324 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsSurface(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum) __attribute__((visibility("default")));
# 325 "/usr/include/GL/glu.h" 3
extern "C" void gluOrtho2D(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 326 "/usr/include/GL/glu.h" 3
extern "C" void gluPartialDisk(GLUquadric *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble) __attribute__((visibility("default")));
# 327 "/usr/include/GL/glu.h" 3
extern "C" void gluPerspective(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 328 "/usr/include/GL/glu.h" 3
extern "C" void gluPickMatrix(GLdouble, GLdouble, GLdouble, GLdouble, GLint *) __attribute__((visibility("default")));
# 329 "/usr/include/GL/glu.h" 3
extern "C" GLint gluProject(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *) __attribute__((visibility("default")));
# 330 "/usr/include/GL/glu.h" 3
extern "C" void gluPwlCurve(GLUnurbs *, GLint, GLfloat *, GLint, GLenum) __attribute__((visibility("default")));
# 331 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricCallback(GLUquadric *, GLenum, _GLUfuncptr) __attribute__((visibility("default")));
# 332 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricDrawStyle(GLUquadric *, GLenum) __attribute__((visibility("default")));
# 333 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricNormals(GLUquadric *, GLenum) __attribute__((visibility("default")));
# 334 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricOrientation(GLUquadric *, GLenum) __attribute__((visibility("default")));
# 335 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricTexture(GLUquadric *, GLboolean) __attribute__((visibility("default")));
# 336 "/usr/include/GL/glu.h" 3
extern "C" GLint gluScaleImage(GLenum, GLsizei, GLsizei, GLenum, const void *, GLsizei, GLsizei, GLenum, GLvoid *) __attribute__((visibility("default")));
# 337 "/usr/include/GL/glu.h" 3
extern "C" void gluSphere(GLUquadric *, GLdouble, GLint, GLint) __attribute__((visibility("default")));
# 338 "/usr/include/GL/glu.h" 3
extern "C" void gluTessBeginContour(GLUtesselator *) __attribute__((visibility("default")));
# 339 "/usr/include/GL/glu.h" 3
extern "C" void gluTessBeginPolygon(GLUtesselator *, GLvoid *) __attribute__((visibility("default")));
# 340 "/usr/include/GL/glu.h" 3
extern "C" void gluTessCallback(GLUtesselator *, GLenum, _GLUfuncptr) __attribute__((visibility("default")));
# 341 "/usr/include/GL/glu.h" 3
extern "C" void gluTessEndContour(GLUtesselator *) __attribute__((visibility("default")));
# 342 "/usr/include/GL/glu.h" 3
extern "C" void gluTessEndPolygon(GLUtesselator *) __attribute__((visibility("default")));
# 343 "/usr/include/GL/glu.h" 3
extern "C" void gluTessNormal(GLUtesselator *, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 344 "/usr/include/GL/glu.h" 3
extern "C" void gluTessProperty(GLUtesselator *, GLenum, GLdouble) __attribute__((visibility("default")));
# 345 "/usr/include/GL/glu.h" 3
extern "C" void gluTessVertex(GLUtesselator *, GLdouble *, GLvoid *) __attribute__((visibility("default")));
# 346 "/usr/include/GL/glu.h" 3
extern "C" GLint gluUnProject(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *) __attribute__((visibility("default")));
# 347 "/usr/include/GL/glu.h" 3
extern "C" GLint gluUnProject4(GLdouble, GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble, GLdouble, GLdouble *, GLdouble *, GLdouble *, GLdouble *) __attribute__((visibility("default")));
# 206 "/usr/include/GL/freeglut_std.h" 3
extern "C" { extern void *glutStrokeRoman; }
# 207 "/usr/include/GL/freeglut_std.h" 3
extern "C" { extern void *glutStrokeMonoRoman; }
# 208 "/usr/include/GL/freeglut_std.h" 3
extern "C" { extern void *glutBitmap9By15; }
# 209 "/usr/include/GL/freeglut_std.h" 3
extern "C" { extern void *glutBitmap8By13; }
# 210 "/usr/include/GL/freeglut_std.h" 3
extern "C" { extern void *glutBitmapTimesRoman10; }
# 211 "/usr/include/GL/freeglut_std.h" 3
extern "C" { extern void *glutBitmapTimesRoman24; }
# 212 "/usr/include/GL/freeglut_std.h" 3
extern "C" { extern void *glutBitmapHelvetica10; }
# 213 "/usr/include/GL/freeglut_std.h" 3
extern "C" { extern void *glutBitmapHelvetica12; }
# 214 "/usr/include/GL/freeglut_std.h" 3
extern "C" { extern void *glutBitmapHelvetica18; }
# 389 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutInit(int *, char **);
# 390 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutInitWindowPosition(int, int);
# 391 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutInitWindowSize(int, int);
# 392 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutInitDisplayMode(unsigned);
# 393 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutInitDisplayString(const char *);
# 398 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutMainLoop();
# 403 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutCreateWindow(const char *);
# 404 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutCreateSubWindow(int, int, int, int, int);
# 405 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutDestroyWindow(int);
# 406 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSetWindow(int);
# 407 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutGetWindow();
# 408 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSetWindowTitle(const char *);
# 409 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSetIconTitle(const char *);
# 410 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutReshapeWindow(int, int);
# 411 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutPositionWindow(int, int);
# 412 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutShowWindow();
# 413 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutHideWindow();
# 414 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutIconifyWindow();
# 415 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutPushWindow();
# 416 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutPopWindow();
# 417 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutFullScreen();
# 422 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutPostWindowRedisplay(int);
# 423 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutPostRedisplay();
# 424 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSwapBuffers();
# 429 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWarpPointer(int, int);
# 430 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSetCursor(int);
# 435 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutEstablishOverlay();
# 436 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutRemoveOverlay();
# 437 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutUseLayer(GLenum);
# 438 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutPostOverlayRedisplay();
# 439 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutPostWindowOverlayRedisplay(int);
# 440 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutShowOverlay();
# 441 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutHideOverlay();
# 446 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutCreateMenu(void (*)(int));
# 447 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutDestroyMenu(int);
# 448 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutGetMenu();
# 449 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSetMenu(int);
# 450 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutAddMenuEntry(const char *, int);
# 451 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutAddSubMenu(const char *, int);
# 452 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutChangeToMenuEntry(int, const char *, int);
# 453 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutChangeToSubMenu(int, const char *, int);
# 454 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutRemoveMenuItem(int);
# 455 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutAttachMenu(int);
# 456 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutDetachMenu(int);
# 461 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutTimerFunc(unsigned, void (*)(int), int);
# 462 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutIdleFunc(void (*)(void));
# 467 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutKeyboardFunc(void (*)(unsigned char, int, int));
# 468 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSpecialFunc(void (*)(int, int, int));
# 469 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutReshapeFunc(void (*)(int, int));
# 470 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutVisibilityFunc(void (*)(int));
# 471 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutDisplayFunc(void (*)(void));
# 472 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutMouseFunc(void (*)(int, int, int, int));
# 473 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutMotionFunc(void (*)(int, int));
# 474 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutPassiveMotionFunc(void (*)(int, int));
# 475 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutEntryFunc(void (*)(int));
# 477 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutKeyboardUpFunc(void (*)(unsigned char, int, int));
# 478 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSpecialUpFunc(void (*)(int, int, int));
# 479 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutJoystickFunc(void (*)(unsigned, int, int, int), int);
# 480 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutMenuStateFunc(void (*)(int));
# 481 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutMenuStatusFunc(void (*)(int, int, int));
# 482 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutOverlayDisplayFunc(void (*)(void));
# 483 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWindowStatusFunc(void (*)(int));
# 485 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSpaceballMotionFunc(void (*)(int, int, int));
# 486 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSpaceballRotateFunc(void (*)(int, int, int));
# 487 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSpaceballButtonFunc(void (*)(int, int));
# 488 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutButtonBoxFunc(void (*)(int, int));
# 489 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutDialsFunc(void (*)(int, int));
# 490 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutTabletMotionFunc(void (*)(int, int));
# 491 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutTabletButtonFunc(void (*)(int, int, int, int));
# 496 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutGet(GLenum);
# 497 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutDeviceGet(GLenum);
# 498 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutGetModifiers();
# 499 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutLayerGet(GLenum);
# 504 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutBitmapCharacter(void *, int);
# 505 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutBitmapWidth(void *, int);
# 506 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutStrokeCharacter(void *, int);
# 507 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutStrokeWidth(void *, int);
# 508 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutBitmapLength(void *, const unsigned char *);
# 509 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutStrokeLength(void *, const unsigned char *);
# 514 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWireCube(GLdouble);
# 515 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSolidCube(GLdouble);
# 516 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWireSphere(GLdouble, GLint, GLint);
# 517 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSolidSphere(GLdouble, GLint, GLint);
# 518 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWireCone(GLdouble, GLdouble, GLint, GLint);
# 519 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSolidCone(GLdouble, GLdouble, GLint, GLint);
# 521 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWireTorus(GLdouble, GLdouble, GLint, GLint);
# 522 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSolidTorus(GLdouble, GLdouble, GLint, GLint);
# 523 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWireDodecahedron();
# 524 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSolidDodecahedron();
# 525 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWireOctahedron();
# 526 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSolidOctahedron();
# 527 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWireTetrahedron();
# 528 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSolidTetrahedron();
# 529 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWireIcosahedron();
# 530 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSolidIcosahedron();
# 535 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutWireTeapot(GLdouble);
# 536 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSolidTeapot(GLdouble);
# 541 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutGameModeString(const char *);
# 542 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutEnterGameMode();
# 543 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutLeaveGameMode();
# 544 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutGameModeGet(GLenum);
# 549 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutVideoResizeGet(GLenum);
# 550 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSetupVideoResizing();
# 551 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutStopVideoResizing();
# 552 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutVideoResize(int, int, int, int);
# 553 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutVideoPan(int, int, int, int);
# 558 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSetColor(int, GLfloat, GLfloat, GLfloat);
# 559 "/usr/include/GL/freeglut_std.h" 3
extern "C" GLfloat glutGetColor(int, int);
# 560 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutCopyColormap(int);
# 565 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutIgnoreKeyRepeat(int);
# 566 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutSetKeyRepeat(int);
# 567 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutForceJoystickFunc();
# 572 "/usr/include/GL/freeglut_std.h" 3
extern "C" int glutExtensionSupported(const char *);
# 573 "/usr/include/GL/freeglut_std.h" 3
extern "C" void glutReportErrors();
# 86 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLSetGLDevice(int);
# 135 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGraphicsGLRegisterImage(cudaGraphicsResource **, GLuint, GLenum, unsigned);
# 173 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGraphicsGLRegisterBuffer(cudaGraphicsResource **, GLuint, unsigned);
# 201 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
enum cudaGLMapFlags {
# 203 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
cudaGLMapFlagsNone,
# 204 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
cudaGLMapFlagsReadOnly,
# 205 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
cudaGLMapFlagsWriteDiscard
# 206 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
};
# 235 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLRegisterBufferObject(GLuint);
# 264 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLMapBufferObject(void **, GLuint);
# 291 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLUnmapBufferObject(GLuint);
# 313 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLUnregisterBufferObject(GLuint);
# 351 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLSetBufferObjectMapFlags(GLuint, unsigned);
# 380 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLMapBufferObjectAsync(void **, GLuint, cudaStream_t);
# 407 "/usr/local/cuda/bin/../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLUnmapBufferObjectAsync(GLuint, cudaStream_t);
# 47 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
extern "C" { void setDeviceSoftening(float softening)
# 48 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 49 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
float softeningSq = (softening * softening);
# 51 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaMemcpyToSymbol("softeningSquared", &softeningSq, sizeof(float), 0, cudaMemcpyHostToDevice), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 53);
# 54 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
} }
# 56 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
extern "C" { void allocateNBodyArrays(float *vel[2], int numBodies)
# 57 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 59 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
unsigned memSize = ((sizeof(float) * (4)) * numBodies);
# 61 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaMalloc((void **)(&(vel[0])), memSize), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 61);
# 62 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaMalloc((void **)(&(vel[1])), memSize), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 62);
# 63 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
} }
# 65 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
extern "C" { void deleteNBodyArrays(float *vel[2])
# 66 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 67 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaFree((void **)(vel[0])), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 67);
# 68 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaFree((void **)(vel[1])), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 68);
# 69 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
} }
# 71 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
extern "C" { void copyArrayFromDevice(float *host, const float *
# 72 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
device, unsigned
# 73 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
pbo, int
# 74 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
numBodies)
# 75 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 76 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
if (pbo) {
# 77 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaGLMapBufferObject((void **)(&device), pbo), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 77); }
# 79 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaMemcpy(host, device, (numBodies * 4) * sizeof(float), cudaMemcpyDeviceToHost), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 80);
# 81 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
if (pbo) {
# 82 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaGLUnmapBufferObject(pbo), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 82); }
# 83 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
} }
# 85 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
extern "C" { void copyArrayToDevice(float *device, const float *host, int numBodies)
# 86 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 87 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaMemcpy(device, host, (numBodies * 4) * sizeof(float), cudaMemcpyHostToDevice), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 88);
# 89 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
} }
# 91 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
extern "C" { void registerGLBufferObject(unsigned pbo)
# 92 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 93 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaGLRegisterBufferObject(pbo), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 93);
# 94 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
} }
# 96 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
extern "C" { void unregisterGLBufferObject(unsigned pbo)
# 97 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 98 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaGLUnregisterBufferObject(pbo), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 98);
# 99 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
} }
# 101 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
extern "C" { void threadSync() { cudaThreadSynchronize(); } }
# 104 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
extern "C" { void integrateNbodySystem(float *newPos, float *newVel, float *
# 105 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
oldPos, float *oldVel, unsigned
# 106 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
pboOldPos, unsigned pboNewPos, float
# 107 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
deltaTime, float damping, int
# 108 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
numBodies, int p, int q, int
# 109 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
bUsePBO)
# 110 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 111 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
int sharedMemSize = ((p * q) * sizeof(float4));
# 113 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
dim3 threads(p, q, 1);
# 114 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
dim3 grid(numBodies / p, 1, 1);
# 116 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
if (bUsePBO)
# 117 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 118 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaGLMapBufferObject((void **)(&oldPos), pboOldPos), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 118);
# 119 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaGLMapBufferObject((void **)(&newPos), pboNewPos), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 119);
# 120 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
}
# 140 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
if ((threads.y) == (1))
# 141 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 142 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
cudaConfigureCall(grid, threads, sharedMemSize) ? ((void)0) : (integrateBodies< false> )((float4 *)newPos, (float4 *)newVel, (float4 *)oldPos, (float4 *)oldVel, deltaTime, damping, numBodies);
# 146 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
} else
# 148 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 149 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
cudaConfigureCall(grid, threads, sharedMemSize) ? ((void)0) : (integrateBodies< true> )((float4 *)newPos, (float4 *)newVel, (float4 *)oldPos, (float4 *)oldVel, deltaTime, damping, numBodies);
# 154 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
}
# 157 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cutilCheckMsg("Kernel execution failed", "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 157);
# 159 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
if (bUsePBO)
# 160 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
{
# 161 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaGLUnmapBufferObject(pboNewPos), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 161);
# 162 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
__cudaSafeCall(cudaGLUnmapBufferObject(pboOldPos), "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu", 162);
# 163 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
}
# 164 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu"
} }
# 1 "/tmp/tmpxft_0000206f_00000000-1_bodysystemcuda.cudafe1.stub.c"
# 1 "/tmp/tmpxft_0000206f_00000000-1_bodysystemcuda.cudafe1.stub.c" 1
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1
# 91 "/usr/local/cuda/bin/../include/crt/host_runtime.h"
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

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
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



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/usr/local/cuda/bin/../include/common_functions.h" 1
# 90 "/usr/local/cuda/bin/../include/common_functions.h"
# 1 "/usr/local/cuda/bin/../include/math_functions.h" 1 3
# 948 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_constants.h" 1 3
# 949 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 2973 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 2974 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 4683 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) double rcbrt(double a); double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

extern __attribute__((__weak__)) double sinpi(double a); double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

extern __attribute__((__weak__)) double erfinv(double a); double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

extern __attribute__((__weak__)) double erfcinv(double a); double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

extern __attribute__((__weak__)) float rcbrtf(float a); float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

extern __attribute__((__weak__)) float sinpif(float a); float sinpif(float a)
{
  return (float)sinpi((double)a);
}

extern __attribute__((__weak__)) float erfinvf(float a); float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

extern __attribute__((__weak__)) float erfcinvf(float a); float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) long long int llmin(long long int a, long long int b); long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmin(unsigned long long int a, unsigned long long int b); unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
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

extern __attribute__((__weak__)) long long int llmax(long long int a, long long int b); long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmax(unsigned long long int a, unsigned long long int b); unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 5006 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx3.h" 1 3
# 5007 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 91 "/usr/local/cuda/bin/../include/common_functions.h" 2
# 164 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2







#pragma pack()
# 2 "/tmp/tmpxft_0000206f_00000000-1_bodysystemcuda.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_0000206f_00000000-3_bodysystemcuda.fatbin.c" 1
# 1 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 1
# 83 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatDebugEntryRec {
    char* gpuProfileName;
    char* debug;
    struct __cudaFatDebugEntryRec *next;
    unsigned int size;
} __cudaFatDebugEntry;

typedef struct __cudaFatElfEntryRec {
    char* gpuProfileName;
    char* elf;
    struct __cudaFatElfEntryRec *next;
    unsigned int size;
} __cudaFatElfEntry;

typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 152 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 166 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
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
    __cudaFatElfEntry *elf;
} __cudaFatCudaBinary;
# 203 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode,
        __cudaFatForcePTX
    } __cudaFatCompilationPolicy;
# 227 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 240 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
unsigned char fatCheckJitForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *ptx );
# 250 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );





void __cudaFatFreePTX( char* ptx );


}
# 2 "/tmp/tmpxft_0000206f_00000000-3_bodysystemcuda.fatbin.c" 2

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_13$:\n"
".quad 0x33010102464c457f,0x0000000000000002,0x0000000100be0002,0x0000000000000000\n"
".quad 0x000000000000158c,0x0000000000000040,0x00380040000d010d,0x0001000d00400006\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000380\n"
".quad 0x000000000000020c,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x000000000000058c\n"
".quad 0x0000000000000070,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x00000000000005fc\n"
".quad 0x00000000000001b0,0x0000000f00000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x00000001000000a3,0x0000000000100006,0x0000000000000000,0x00000000000007ac\n"
".quad 0x00000000000005b8,0x1500000800000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000014a,0x0000000000000002,0x0000000000000000,0x0000000000000d64\n"
".quad 0x0000000000000004,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000d8,0x0000000000000002,0x0000000000000000,0x0000000000000d68\n"
".quad 0x00000000000000a0,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000110,0x0000000000000003,0x0000000000000000,0x0000000000000e08\n"
".quad 0x0000000000000040,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000036,0x0000000000100006,0x0000000000000000,0x0000000000000e08\n"
".quad 0x00000000000006d8,0x1c00000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001c1,0x0000000000000002,0x0000000000000000,0x00000000000014e0\n"
".quad 0x0000000000000008,0x0000000800000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000006b,0x0000000000000002,0x0000000000000000,0x00000000000014e8\n"
".quad 0x00000000000000a0,0x0000000800000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000187,0x0000000000000003,0x0000000000000000,0x0000000000001588\n"
".quad 0x0000000000000040,0x0000000800000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001fe,0x0000000000000002,0x0000000000000000,0x0000000000001588\n"
".quad 0x0000000000000004,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x35315a5f2e747865\n"
".quad 0x7461726765746e69,0x49736569646f4265,0x365076454531624c,0x31533474616f6c66\n"
".quad 0x665f31535f31535f,0x692e766e2e006966,0x35315a5f2e6f666e,0x7461726765746e69\n"
".quad 0x49736569646f4265,0x365076454531624c,0x31533474616f6c66,0x665f31535f31535f\n"
".quad 0x747865742e006966,0x746e6935315a5f2e,0x6f42657461726765,0x30624c4973656964\n"
".quad 0x6f6c663650764545,0x31535f3153347461,0x006966665f31535f,0x6f666e692e766e2e\n"
".quad 0x746e6935315a5f2e,0x6f42657461726765,0x30624c4973656964,0x6f6c663650764545\n"
".quad 0x31535f3153347461,0x006966665f31535f,0x726168732e766e2e,0x6935315a5f2e6465\n"
".quad 0x657461726765746e,0x4c49736569646f42,0x6636507645453062,0x5f31533474616f6c\n"
".quad 0x66665f31535f3153,0x6f632e766e2e0069,0x2e31746e6174736e,0x65746e6935315a5f\n"
".quad 0x646f426574617267,0x4530624c49736569,0x616f6c6636507645,0x5f31535f31533474\n"
".quad 0x2e006966665f3153,0x65726168732e766e,0x6e6935315a5f2e64,0x4265746172676574\n"
".quad 0x624c49736569646f,0x6c66365076454531,0x535f31533474616f,0x6966665f31535f31\n"
".quad 0x6e6f632e766e2e00,0x5f2e31746e617473,0x6765746e6935315a,0x69646f4265746172\n"
".quad 0x454531624c497365,0x74616f6c66365076,0x535f31535f315334,0x6e2e006966665f31\n"
".quad 0x6174736e6f632e76,0x315a5f000030746e,0x61726765746e6935,0x736569646f426574\n"
".quad 0x5076454531624c49,0x533474616f6c6636,0x5f31535f31535f31,0x35315a5f00696666\n"
".quad 0x7461726765746e69,0x49736569646f4265,0x365076454530624c,0x31533474616f6c66\n"
".quad 0x665f31535f31535f,0x6574666f73006966,0x61757153676e696e,0x0000000000646572\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000010003\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000020003,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000030003,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000003,0x0000000000000000,0x0000000000000000,0x0000000000000003\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000080003,0x000006d800000000\n"
".quad 0x0000000000000000,0x00000000000a0003,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000040003,0x000005b800000000,0x0000000000000000,0x0000000000060003\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000070003,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000050003,0x0000000000000000,0x0000000000000000\n"
".quad 0x00000000000b0003,0x0000000000000000,0x0000000000000000,0x0000000000090003\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000000000c0003,0x0000000000000000\n"
".quad 0x0000000100000000,0x0000000000081012,0x0000000000000000,0x0000003000000000\n"
".quad 0x0000000000041012,0x0000000000000000,0x0000005f00000000,0x00000000000c0011\n"
".quad 0x0000000400000000,0x1000000500000000,0xa00042210403c780,0xa000440904200780\n"
".quad 0x4011080104200780,0xa0004c0d00000780,0x60100a1104200780,0x4008060100000780\n"
".quad 0xa000043500018780,0x3010081504000780,0x20000011c4100780,0x6010080904034780\n"
".quad 0x10001c0100014780,0x300408294400c780,0x20096003c4100780,0x2000d00900000000\n"
".quad 0xd00e041104228780,0x1000000980a00780,0xa0004e010403c780,0x2000000904200780\n"
".quad 0x300201fd04008780,0x10008a2c640187c8,0x10000e3910008c30,0x100830030403c780\n"
".quad 0xd080060900000280,0x4002221500400780,0x30100a1500000780,0x6002203dc4100780\n"
".quad 0x200d9e0400014780,0x2000002520028640,0x000402050400c780,0x307c11fdc0000780\n"
".quad 0xa0004845640107c8,0x1000f81d04200780,0x1000f8150403c780,0x1000f8190403c780\n"
".quad 0x301113fd0403c780,0x1002d003640187d8,0x4013200100001280,0x6012220100000780\n"
".quad 0x3010000100000780,0x60122001c4100780,0x2000000100000780,0x3004000104034780\n"
".quad 0x2000d001c4100780,0x1003500304200780,0x2040120100000780,0x4001200504044780\n"
".quad 0x6000220500000780,0x3010020500004780,0x60002001c4100780,0x2000000100004780\n"
".quad 0x3004000104034780,0x2000d001c4100780,0xd00e000104200780,0x0400200180a00780\n"
".quad 0x04002201e4200780,0x04002401e4204780,0x04002601e4208780,0x861ffe03e420c780\n"
".quad 0x1007e00300000000,0xa007d00300000100,0x10001e0100000000,0x30009e050403c780\n"
".quad 0x0004000900000003,0xb800e24dc0000780,0xb800e0510822c780,0xc013260908210780\n"
".quad 0xb800e40d00000780,0xe014280908230780,0xe003060900008780,0xb100040900008780\n"
".quad 0x9000040900000780,0x2001804840000780,0x2004a44990000408,0x9000040900000003\n"
".quad 0x301211fd00000780,0xc0020448640107d8,0xc0021c49c0120408,0xb800ea0900000780\n"
".quad 0xe01228190822c780,0xe013245100018780,0xb800e81500014780,0xc002044d08210780\n"
".quad 0xe003241d00000780,0xb800ec0d0001c780,0xe0050a4908230780,0xe00306490004c780\n"
".quad 0xb100244900048780,0x9000244900000780,0x9000244840000780,0xc012244c90002448\n"
".quad 0xc0121c49c0132448,0xb800f24d00000780,0xe0120a150822c780,0xe002240900018780\n"
".quad 0xb800f01900050780,0xc013265108210780,0xe003241d00000780,0xb800f4490001c780\n"
".quad 0xe0060c0d08230780,0xe012240d00050780,0xb100060d0000c780,0x9000060d00000780\n"
".quad 0x9000060c40000780,0xc00306509000060c,0xc0031c51c014060c,0xb800fa0d00000780\n"
".quad 0xe0140c150822c780,0xe013280900014780,0xb800f81900008780,0xc003064d08210780\n"
".quad 0xe012284900000780,0xb800fc1d0001c780,0xe0060c4d08230780,0xe0070e4d0004c780\n"
".quad 0xb100264d0004c780,0x9000264d00000780,0x9000264c40000780,0xc01326509000264c\n"
".quad 0xc00e264dc014264c,0xe0130c1900000780,0xe003261500014780,0xe007261d00008780\n"
".quad 0x2004800100048780,0x1003f00300000003,0xf000000100001280,0x861ffe03e0000002\n"
".quad 0x2001922500000000,0x301013fd00000003,0x10023003640147d8,0x1008600300001280\n"
".quad 0x1000f81d00000780,0x1000f8150403c780,0x1000f8190403c780,0x2000d4210403c780\n"
".quad 0xd00e100104228780,0xe006d80180a00780,0xe005d80500200780,0xe007d81500204780\n"
".quad 0x10009c1c00208780,0xc1017a08c1007a00,0x2000c805c1057a20,0xe000d81104228780\n"
".quad 0xe002d81500210780,0xe008d8190022c780,0xd00e021100230780,0x210aec10a0a00780\n"
".quad 0x1000100910008404,0xd00e08010403c780,0x30000003a0a00780,0xa000041100000780\n"
".quad 0xa000081504114780,0xa000001944004780,0x90000a1d04114780,0xa0000c1500000780\n"
".quad 0x203e8e1d44064780,0xc0070a150fffffff,0xa0000a150000c7c0,0x400b102584064780\n"
".quad 0x600a122500000780,0x3010122500024780,0x600a1025c4100780,0x20400c2500024780\n"
".quad 0xa000122504024780,0xc007121d44064780,0xa0000e1d0000c7c0,0x20000a1584064780\n"
".quad 0x4008161d0401c780,0x6009141d00000780,0x30100e1d0001c780,0x6008141dc4100780\n"
".quad 0x30000e190001c780,0x3006081104018780,0xd00004016400c780,0x301f000104008780\n"
".quad 0x30000815e4100780,0xa000001104014780,0xd00508112c014780,0x307c05fd04008780\n"
".quad 0x200000016c0147c8,0xd002000104010780,0x300000030402c500,0xf000000100000780\n"
".quad 0x000003ffe0000001,0x00000000001c0b04,0x0000001000000008,0x0000002000000018\n"
".quad 0x0000002800000024,0x000c1704002c1803,0x00280006ffffffff,0x000c17040013f000\n"
".quad 0x00240005ffffffff,0x000c17040013f000,0x00200004ffffffff,0x000c17040013f000\n"
".quad 0x00180003ffffffff,0x000c17040023f000,0x00100002ffffffff,0x000c17040023f000\n"
".quad 0x00080001ffffffff,0x000c17040023f000,0x00000000ffffffff,0x00080d040023f000\n"
".quad 0x0000002000210108,0x0403c78010000015,0x04200780a000422d,0x04200780a0004431\n"
".quad 0x0000078040173001,0x04200780a0004c49,0x04000780a000144d,0x0000078060163205\n"
".quad 0x00018780400b2401,0xc410078030100209,0x1100fc1020138004,0x0000878060163001\n"
".quad 0xc410078030040239,0x00000000200ba003,0x042387802000d001,0x80a00780d00e0001\n"
".quad 0x00400780d0801629,0x04200780a0004e25,0x1000921020049228,0x04000780a0001421\n"
".quad 0x640187c8300a13fd,0x100084401000823c,0x0403c78010000645,0x000002801008c003\n"
".quad 0x0000078040112c05,0x0000478060102e05,0xc410078030100205,0x0000078040191009\n"
".quad 0x0000478060102c35,0x0000878060181209,0x0404c78020001a05,0xc410078030100409\n"
".quad 0x0000000320048205,0x0000878060181055,0xc000078000040205,0x640107c8307c17fd\n"
".quad 0x0404878020001051,0x04200780a0004859,0x0403c7801000f805,0x0403c7801000f809\n"
".quad 0x0403c7801000f80d,0x2012aa102014aa14,0x6400c7d830052dfd,0x00000000a003d003\n"
".quad 0x0402078020000811,0x0000128010035003,0x0000078040092c15,0x0001478060082e15\n"
".quad 0xc410078030100a15,0x0001478060082c11,0x0404c78020000811,0xc410078030040811\n"
".quad 0x042107802000d011,0x000007801003d003,0x0405878020400811,0x0000078040092c15\n"
".quad 0x0001478060082e15,0xc410078030100a15,0x0001478060082c11,0x0404c78020000811\n"
".quad 0xc410078030040811,0x042107802000d011,0x80a00782d00e0811,0xe421078004000001\n"
".quad 0xe421478004000201,0xe421878004000401,0xe421c78004000601,0x00000000861ffe03\n"
".quad 0x0000010010086003,0x00000000a0085003,0x0403c78010001a11,0x0000000330009a19\n"
".quad 0xc000078000040809,0x0823c780b800e269,0x08200780b800e06d,0x00000780c01a341d\n"
".quad 0x08240780b800e415,0x0001c780e01b361d,0x0001c780e0050a1d,0x00000780b1000e1d\n"
".quad 0x4000078090000e1d,0x90000e1c90000e1c,0xc0170e5cc0070e5c,0x0823c780b800ea1d\n"
".quad 0x00000780c0172265,0x08200780b800e85d,0x00000780c0070e61,0x0000c780e019366d\n"
".quad 0x08240780b800ec0d,0x00060780e0172e61,0x00060780e0030661,0x00000780b1003061\n"
".quad 0x4000078090003061,0x9000306090003060,0x00008780e01a3209,0xc01a3060c0183068\n"
".quad 0x0823c780b800f269,0x00004780e0053205,0x00000780c0182261,0x08200780b800f015\n"
".quad 0x00000780c01a3465,0x0006c780e0182e6d,0x08240780b800f45d,0x00064780e0050a65\n"
".quad 0x00064780e0172e65,0x00000780b1003265,0x4000078090003265,0x9000326490003264\n"
".quad 0x00008780e0073009,0x00004780e0033005,0xc019321c2006880c,0x000000032004860d\n"
".quad 0x00000780c0073261,0x0823c780b800fa1d,0x640107d8300317fd,0x00000780c0182265\n"
".quad 0x08200780b800f861,0x00000780c0070e0d,0x0006c780e0190a6d,0x08240780b800fc15\n"
".quad 0x0000c780e018300d,0x0000c780e0050a0d,0x00000780b100060d,0x400007809000060d\n"
".quad 0x9000060c9000060c,0x00008780e01a3209,0xc01a060cc0030668,0x00000780c0110669\n"
".quad 0x00004780e0173205,0x0006c780e01a300d,0x00008780e0073409,0x00004780e0053405\n"
".quad 0x0000000320048811,0x0000128010047003,0xe0000002f0000001,0x00000000861ffe03\n"
".quad 0x0000000320019225,0x640147d8300a13fd,0x0403078020002a55,0x0000128010028003\n"
".quad 0x0000078010096003,0x0000078040112c05,0x0000478060102e05,0xc410078030100205\n"
".quad 0x0000478060102c05,0x0404c78020000205,0x0000000320048205,0xc000078000040205\n"
".quad 0x0403c7801000f805,0x0403c7801000f809,0x0403c7801000f80d,0xe420c78004000001\n"
".quad 0xe420878004000201,0xe420478004000401,0x00000000861ffe03,0x640147c8307c11fd\n"
".quad 0x00000000a00a9003,0x00000280100a9003,0x6440c7c8308119fd,0x00000280100a9003\n"
".quad 0x0404c78020001611,0x0000000310018015,0xc000078000040805,0x0000000320018a15\n"
".quad 0x0402c78020000811,0x640147c8300c0bfd,0x0020c780b400e00d,0x00208780b400e209\n"
".quad 0x00204780b400e405,0x00000280100a1003,0xe0000002f0000001,0x042387802000d421\n"
".quad 0x80a00780d00e1011,0x00210780e003d811,0x00214780e002d809,0x00218780e001d805\n"
".quad 0xc1047a101000a20c,0xc1017a20c1027a18,0x042387802000c815,0x00200780e004d801\n"
".quad 0x0023c780e006d805,0x00240780e008d809,0xa0a00780d00e0a01,0x10008c14210eec00\n"
".quad 0x0403c78010001019,0xa0a00780d00e0011,0x0000078030000003,0x04114780a0000005\n"
".quad 0x44004780a0000209,0x04114780a000080d,0x0000078090040419,0x44064780a0000609\n"
".quad 0x0fffffff203e8c19,0x0000c7c0c0060409,0x84064780a0000409,0x000007804005041d\n"
".quad 0x0001c7806004061d,0xc410078030100e1d,0x0001c7806004041d,0x0401c7802040061d\n"
".quad 0x44064780a0000e1d,0x0000c7c0c0060e19,0x84064780a0000c19,0x0401878020000409\n"
".quad 0x0000078040020a19,0x0001878060030819,0xc410078030100c19,0x0001878060020819\n"
".quad 0x0400c78030000c0d,0x6400c78030030205,0x04008780d0040011,0xe4100780301f0811\n"
".quad 0x0400878030000209,0x2c014780a0000805,0x04008780d0020205,0x6c0147c8307c01fd\n"
".quad 0x0400478020000811,0x0402c500d0000811,0x0000078030000003,0xe0000001f0000001\n"
".quad 0x00000001000003ff,0x00000000001c0b04,0x0000001000000008,0x0000002000000018\n"
".quad 0x0000002800000024,0x000c1704002c1803,0x00280006ffffffff,0x000c17040013f000\n"
".quad 0x00240005ffffffff,0x000c17040013f000,0x00200004ffffffff,0x000c17040013f000\n"
".quad 0x00180003ffffffff,0x000c17040023f000,0x00100002ffffffff,0x000c17040023f000\n"
".quad 0x00080001ffffffff,0x000c17040023f000,0x00000000ffffffff,0x00080d040023f000\n"
".quad 0x0000002000210108,0x0000000600000000,0x0000158c00000005,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000015000000000,0x0000015000000000,0x0000000400000000\n"
".quad 0x6000000000000000,0x000007ac00001005,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000065c00000000,0x0000065c00000000,0x0000000400000000,0x6000000000000000\n"
".quad 0x00000e0800001006,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000004000000000,0x0000000400000000,0x6000000000000000,0x00000e0800000f05\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000078000000000,0x0000078000000000\n"
".quad 0x0000000400000000,0x6000000000000000,0x0000158800000f06,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000004000000000,0x0000000400000000\n"
".quad 0x0000000100000000,0x0000158800000005,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000400000000,0x0000000400000000,0x0000000400000000,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_13$[732];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$compute_13$:\n"
".quad 0x6f69737265762e09,0x2e090a342e31206e,0x7320746567726174,0x2f2f090a33315f6d\n"
".quad 0x656c69706d6f6320,0x2f20687469772064,0x61636f6c2f727375,0x6f2f616475632f6c\n"
".quad 0x696c2f34366e6570,0x2f090a65622f2f62,0x6e65706f766e202f,0x6220322e33206363\n"
".quad 0x206e6f20746c6975,0x2d39302d30313032,0x2d2f2f090a0a3930,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x43202f2f090a2d2d,0x676e696c69706d6f\n"
".quad 0x6d742f706d742f20,0x3030305f74667870,0x30305f6636303230,0x372d303030303030\n"
".quad 0x73797379646f625f,0x2e616475636d6574,0x2820692e33707063,0x4263632f706d742f\n"
".quad 0x786b7731702e2349,0x2d2d2f2f090a2937,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2f2f090a0a2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x704f202f2f090a2d,0x090a3a736e6f6974,0x2d2d2d2d2d2d2f2f\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2f090a2d2d2d2d2d,0x656772615420202f\n"
".quad 0x49202c7874703a74,0x33315f6d733a4153,0x6e6169646e45202c,0x2c656c7474696c3a\n"
".quad 0x7265746e696f5020,0x34363a657a695320,0x4f2d20202f2f090a,0x6d6974704f280933\n"
".quad 0x206e6f6974617a69,0x090a296c6576656c,0x0930672d20202f2f,0x6c20677562654428\n"
".quad 0x2f090a296c657665,0x2809326d2d20202f,0x612074726f706552,0x6569726f73697664\n"
".quad 0x2d2d2f2f090a2973,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x6c69662e090a0a2d,0x6f633c2209310965,0x696c2d646e616d6d,0x662e090a223e656e\n"
".quad 0x2f22093209656c69,0x78706d742f706d74,0x32303030305f7466,0x303030305f663630\n"
".quad 0x625f362d30303030,0x657473797379646f,0x75632e616475636d,0x70672e3265666164\n"
".quad 0x6c69662e090a2275,0x73752f2209330965,0x63672f62696c2f72,0x6c2d363836692f63\n"
".quad 0x756e672d78756e69,0x692f352e342e342f,0x732f6564756c636e,0x22682e6665646474\n"
".quad 0x09656c69662e090a,0x2f7273752f220934,0x75632f6c61636f6c,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x65642f7472632f65,0x6e75725f65636976,0x0a22682e656d6974\n"
".quad 0x3509656c69662e09,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x65645f74736f682f,0x22682e73656e6966,0x09656c69662e090a\n"
".quad 0x2f7273752f220936,0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e\n"
".quad 0x69746c6975622f65,0x2e73657079745f6e,0x6c69662e090a2268,0x73752f2209370965\n"
".quad 0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f,0x697665642f656475\n"
".quad 0x73657079745f6563,0x69662e090a22682e,0x752f22093809656c,0x6c61636f6c2f7273\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x6972642f6564756c,0x657079745f726576\n"
".quad 0x662e090a22682e73,0x2f22093909656c69,0x61636f6c2f727375,0x622f616475632f6c\n"
".quad 0x6e692f2e2e2f6e69,0x75732f6564756c63,0x79745f6563616672,0x090a22682e736570\n"
".quad 0x303109656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x657275747865742f,0x682e73657079745f,0x656c69662e090a22\n"
".quad 0x73752f2209313109,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x746365762f656475,0x73657079745f726f,0x69662e090a22682e,0x2f2209323109656c\n"
".quad 0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69,0x65642f6564756c63\n"
".quad 0x75616c5f65636976,0x617261705f68636e,0x682e73726574656d,0x656c69662e090a22\n"
".quad 0x73752f2209333109,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x2f7472632f656475,0x5f656761726f7473,0x22682e7373616c63,0x09656c69662e090a\n"
".quad 0x7273752f22093431,0x6564756c636e692f,0x79742f737469622f,0x090a22682e736570\n"
".quad 0x353109656c69662e,0x692f7273752f2209,0x742f6564756c636e,0x090a22682e656d69\n"
".quad 0x363109656c69662e,0x2f656d6f682f2209,0x632f6c616d726f6e,0x2f74756f6b636568\n"
".quad 0x6f6c65636f757067,0x2f73747365742f74,0x2f322e3261647563,0x626e2f7374736574\n"
".quad 0x646f626e2f79646f,0x6c656e72656b5f79,0x662e090a2275632e,0x2209373109656c69\n"
".quad 0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962,0x632f6564756c636e\n"
".quad 0x75665f6e6f6d6d6f,0x2e736e6f6974636e,0x6c69662e090a2268,0x752f220938310965\n"
".quad 0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e,0x74616d2f6564756c\n"
".quad 0x6974636e75665f68,0x090a22682e736e6f,0x393109656c69662e,0x6c2f7273752f2209\n"
".quad 0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f,0x6f635f6874616d2f\n"
".quad 0x2e73746e6174736e,0x6c69662e090a2268,0x752f220930320965,0x6c61636f6c2f7273\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x7665642f6564756c,0x636e75665f656369\n"
".quad 0x22682e736e6f6974,0x09656c69662e090a,0x7273752f22093132,0x632f6c61636f6c2f\n"
".quad 0x2f6e69622f616475,0x756c636e692f2e2e,0x31315f6d732f6564,0x5f63696d6f74615f\n"
".quad 0x6e6f6974636e7566,0x662e090a22682e73,0x2209323209656c69,0x636f6c2f7273752f\n"
".quad 0x2f616475632f6c61,0x692f2e2e2f6e6962,0x732f6564756c636e,0x6f74615f32315f6d\n"
".quad 0x636e75665f63696d,0x22682e736e6f6974,0x09656c69662e090a,0x7273752f22093332\n"
".quad 0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e,0x33315f6d732f6564\n"
".quad 0x5f656c62756f645f,0x6e6f6974636e7566,0x662e090a22682e73,0x2209343209656c69\n"
".quad 0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962,0x732f6564756c636e\n"
".quad 0x6f74615f30325f6d,0x636e75665f63696d,0x22682e736e6f6974,0x09656c69662e090a\n"
".quad 0x7273752f22093532,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x30325f6d732f6564,0x736e6972746e695f,0x090a22682e736369,0x363209656c69662e\n"
".quad 0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f\n"
".quad 0x656361667275732f,0x6f6974636e75665f,0x2e090a22682e736e,0x09373209656c6966\n"
".quad 0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x5f65727574786574,0x75665f6863746566,0x2e736e6f6974636e,0x6c69662e090a2268\n"
".quad 0x752f220938320965,0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e\n"
".quad 0x74616d2f6564756c,0x6974636e75665f68,0x5f6c62645f736e6f,0x0a22682e33787470\n"
".quad 0x72657478652e090a,0x65726168732e096e,0x6e67696c612e2064,0x2038622e20363120\n"
".quad 0x6f50646572616873,0x632e090a3b5d5b73,0x33662e2074736e6f,0x6e6574666f732032\n"
".quad 0x7261757153676e69,0x652e090a0a3b6465,0x315a5f207972746e,0x61726765746e6935\n"
".quad 0x736569646f426574,0x5076454530624c49,0x533474616f6c6636,0x5f31535f31535f31\n"
".quad 0x09090a2820696666,0x2e206d617261702e,0x75635f5f20343675,0x5f5f6d7261706164\n"
".quad 0x6765746e6935315a,0x69646f4265746172,0x454530624c497365,0x74616f6c66365076\n"
".quad 0x535f31535f315334,0x656e5f6966665f31,0x09090a2c736f5077,0x2e206d617261702e\n"
".quad 0x75635f5f20343675,0x5f5f6d7261706164,0x6765746e6935315a,0x69646f4265746172\n"
".quad 0x454530624c497365,0x74616f6c66365076,0x535f31535f315334,0x656e5f6966665f31\n"
".quad 0x09090a2c6c655677,0x2e206d617261702e,0x75635f5f20343675,0x5f5f6d7261706164\n"
".quad 0x6765746e6935315a,0x69646f4265746172,0x454530624c497365,0x74616f6c66365076\n"
".quad 0x535f31535f315334,0x6c6f5f6966665f31,0x09090a2c736f5064,0x2e206d617261702e\n"
".quad 0x75635f5f20343675,0x5f5f6d7261706164,0x6765746e6935315a,0x69646f4265746172\n"
".quad 0x454530624c497365,0x74616f6c66365076,0x535f31535f315334,0x6c6f5f6966665f31\n"
".quad 0x09090a2c6c655664,0x2e206d617261702e,0x75635f5f20323366,0x5f5f6d7261706164\n"
".quad 0x6765746e6935315a,0x69646f4265746172,0x454530624c497365,0x74616f6c66365076\n"
".quad 0x535f31535f315334,0x65645f6966665f31,0x2c656d695461746c,0x617261702e09090a\n"
".quad 0x5f203233662e206d,0x726170616475635f,0x6e6935315a5f5f6d,0x4265746172676574\n"
".quad 0x624c49736569646f,0x6c66365076454530,0x535f31533474616f,0x6966665f31535f31\n"
".quad 0x676e69706d61645f,0x7261702e09090a2c,0x203233732e206d61,0x6170616475635f5f\n"
".quad 0x6935315a5f5f6d72,0x657461726765746e,0x4c49736569646f42,0x6636507645453062\n"
".quad 0x5f31533474616f6c,0x66665f31535f3153,0x646f426d756e5f69,0x0a7b090a29736569\n"
".quad 0x752e206765722e09,0x36343c7225203233,0x6765722e090a3b3e,0x7225203436752e20\n"
".quad 0x090a3b3e30333c64,0x33662e206765722e,0x3130313c66252032,0x6765722e090a3b3e\n"
".quad 0x2520646572702e20,0x2e090a3b3e373c70,0x3209363109636f6c,0x444c240a30093730\n"
".quad 0x5f5f6e6967656257,0x6765746e6935315a,0x69646f4265746172,0x454530624c497365\n"
".quad 0x74616f6c66365076,0x535f31535f315334,0x090a3a6966665f31,0x09363109636f6c2e\n"
".quad 0x63090a3009303132,0x752e3233732e7476,0x2c31722509203631,0x782e6469746e2520\n"
".quad 0x732e747663090a3b,0x09203631752e3233,0x746325202c327225,0x090a3b782e646961\n"
".quad 0x6f6c2e34326c756d,0x722509203233732e,0x202c327225202c33,0x7663090a3b317225\n"
".quad 0x31752e3233752e74,0x202c347225092036,0x0a3b782e64697425,0x3233752e64646109\n"
".quad 0x25202c3572250920,0x3b347225202c3372,0x6f6c2e6c756d090a,0x722509203233752e\n"
".quad 0x202c357225202c36,0x747663090a3b3631,0x3233752e3436752e,0x202c316472250920\n"
".quad 0x646c090a3b367225,0x752e6d617261702e,0x3264722509203436,0x6475635f5f5b202c\n"
".quad 0x5a5f5f6d72617061,0x726765746e693531,0x6569646f42657461,0x76454530624c4973\n"
".quad 0x3474616f6c663650,0x31535f31535f3153,0x646c6f5f6966665f,0x61090a3b5d736f50\n"
".quad 0x09203436752e6464,0x7225202c33647225,0x32647225202c3164,0x6c672e646c090a3b\n"
".quad 0x2e34762e6c61626f,0x66257b0920323366,0x66252c3266252c31,0x202c7d3466252c33\n"
".quad 0x5d302b336472255b,0x09636f6c2e090a3b,0x3009323531093631,0x33732e747663090a\n"
".quad 0x2509203631752e32,0x61746325202c3772,0x63090a3b792e6469,0x752e3233732e7476\n"
".quad 0x2c38722509203631,0x792e6469746e2520,0x6c2e6c756d090a3b,0x2509203233732e6f\n"
".quad 0x2c387225202c3972,0x6c090a3b31722520,0x2e6d617261702e64,0x3172250920323373\n"
".quad 0x75635f5f5b202c30,0x5f5f6d7261706164,0x6765746e6935315a,0x69646f4265746172\n"
".quad 0x454530624c497365,0x74616f6c66365076,0x535f31535f315334,0x756e5f6966665f31\n"
".quad 0x5d736569646f426d,0x732e766964090a3b,0x3131722509203233,0x202c30317225202c\n"
".quad 0x6461090a3b397225,0x2509203233752e64,0x317225202c323172,0x0a3b377225202c31\n"
".quad 0x65672e7074657309,0x702509203233752e,0x202c377225202c31,0x40090a3b32317225\n"
".quad 0x2061726220317025,0x385f305f744c2409,0x6f6d090a3b303534,0x2509203436752e76\n"
".quad 0x616873202c346472,0x0a3b736f50646572,0x3233732e766f6d09,0x202c333172250920\n"
".quad 0x61090a3b31317225,0x09203233752e6464,0x7225202c34317225,0x0a3b327225202c37\n"
".quad 0x3233752e74766309,0x722509203631752e,0x64697425202c3531,0x6c756d090a3b792e\n"
".quad 0x203233752e6f6c2e,0x25202c3631722509,0x35317225202c3172,0x752e766f6d090a3b\n"
".quad 0x3731722509203233,0x6573090a3b30202c,0x33752e74672e7074,0x202c327025092032\n"
".quad 0x317225202c317225,0x2e646461090a3b37,0x3172250920323375,0x202c327225202c38\n"
".quad 0x61090a3b32317225,0x09203233752e6464,0x7225202c39317225,0x3b347225202c3631\n"
".quad 0x36752e747663090a,0x2509203233752e34,0x317225202c356472,0x2e6c756d090a3b39\n"
".quad 0x3233752e65646977,0x202c366472250920,0x3631202c39317225,0x752e646461090a3b\n"
".quad 0x3764722509203436,0x202c34647225202c,0x63090a3b36647225,0x752e3233752e7476\n"
".quad 0x3032722509203631,0x696174636e25202c,0x6f6d090a3b782e64,0x2509203233662e76\n"
".quad 0x30306630202c3566,0x203b303030303030,0x202f2f0920202020,0x662e766f6d090a30\n"
".quad 0x2c36662509203233,0x3030303030663020,0x202020203b303030,0x090a30202f2f0920\n"
".quad 0x203233662e766f6d,0x6630202c37662509,0x3030303030303030,0x2f0920202020203b\n"
".quad 0x766f6d090a30202f,0x722509203233732e,0x33317225202c3132,0x5f305f744c240a3b\n"
".quad 0x2f200a3a32303436,0x203e706f6f6c3c2f,0x646f6220706f6f4c,0x3120656e696c2079\n"
".quad 0x7473656e202c3235,0x7470656420676e69,0x7365202c31203a68,0x20646574616d6974\n"
".quad 0x6f69746172657469,0x6e6b6e75203a736e,0x746573090a6e776f,0x3233752e65672e70\n"
".quad 0x25202c3370250920,0x327225202c343172,0x33702540090a3b30,0x4c24092061726220\n"
".quad 0x343139365f305f74,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c32353120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x0a323034365f305f,0x363109636f6c2e09,0x090a300934353109,0x752e6f6c2e6c756d\n"
".quad 0x3232722509203233,0x25202c317225202c,0x6461090a3b343172,0x2509203233752e64\n"
".quad 0x347225202c333272,0x0a3b32327225202c,0x2e6f6c2e6c756d09,0x3272250920323375\n"
".quad 0x2c33327225202c34,0x7663090a3b363120,0x33752e3436752e74,0x2c38647225092032\n"
".quad 0x090a3b3432722520,0x203436752e646461,0x25202c3964722509,0x647225202c386472\n"
".quad 0x2e617262090a3b32,0x744c240920696e75,0x3b383536365f305f,0x365f305f744c240a\n"
".quad 0x2f2f200a3a343139,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x353120656e696c20,0x2064616568202c32,0x2064656c6562616c,0x34365f305f744c24\n"
".quad 0x2e627573090a3230,0x3272250920323375,0x2c34317225202c35,0x090a3b3032722520\n"
".quad 0x752e6f6c2e6c756d,0x3632722509203233,0x25202c317225202c,0x6461090a3b353272\n"
".quad 0x2509203233752e64,0x347225202c373272,0x0a3b36327225202c,0x2e6f6c2e6c756d09\n"
".quad 0x3272250920323375,0x2c37327225202c38,0x7663090a3b363120,0x33752e3436752e74\n"
".quad 0x3031647225092032,0x0a3b38327225202c,0x3436752e64646109,0x202c396472250920\n"
".quad 0x25202c3031647225,0x744c240a3b326472,0x3a383536365f305f,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3235312065\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x090a323034365f30,0x61626f6c672e646c\n"
".quad 0x3233662e34762e6c,0x252c3866257b0920,0x2c303166252c3966,0x5b202c7d31316625\n"
".quad 0x3b5d302b39647225,0x6168732e7473090a,0x203233662e646572,0x302b376472255b09\n"
".quad 0x0a3b386625202c5d,0x726168732e747309,0x09203233662e6465,0x5d342b376472255b\n"
".quad 0x090a3b396625202c,0x65726168732e7473,0x5b09203233662e64,0x2c5d382b37647225\n"
".quad 0x090a3b3031662520,0x65726168732e7473,0x5b09203233662e64,0x5d32312b37647225\n"
".quad 0x0a3b31316625202c,0x363109636f6c2e09,0x090a300939353109,0x636e79732e726162\n"
".quad 0x6c2e090a3b300920,0x363109363109636f,0x766f6d090a300932,0x662509203233662e\n"
".quad 0x3b376625202c3231,0x33662e766f6d090a,0x2c33316625092032,0x6d090a3b36662520\n"
".quad 0x09203233662e766f,0x6625202c34316625,0x70252140090a3b35,0x2409206172622032\n"
".quad 0x3731375f305f744c,0x6c3c2f2f200a3b30,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c32353120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x323034365f305f74,0x33752e646461090a,0x2c39327225092032,0x3b33202c31722520\n"
".quad 0x33732e726873090a,0x2c30337225092032,0x33202c3932722520,0x2e766f6d090a3b31\n"
".quad 0x3372250920323373,0x61090a3b33202c31,0x09203233622e646e,0x7225202c32337225\n"
".quad 0x31337225202c3033,0x732e646461090a3b,0x3333722509203233,0x202c32337225202c\n"
".quad 0x73090a3b39327225,0x09203233732e7268,0x7225202c34337225,0x090a3b32202c3333\n"
".quad 0x203233732e766f6d,0x25202c3533722509,0x6f6d090a3b363172,0x2509203233752e76\n"
".quad 0x0a3b30202c363372,0x3233752e62757309,0x202c373372250920,0x7225202c36337225\n"
".quad 0x2e646c090a3b3533,0x33662e74736e6f63,0x2c35316625092032,0x6e6574666f735b20\n"
".quad 0x7261757153676e69,0x2f2f200a3b5d6465,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c32,0x2064656c6562616c\n"
".quad 0x34365f305f744c24,0x2e766f6d090a3230,0x3372250920323373,0x3b34337225202c38\n"
".quad 0x375f305f744c240a,0x2f2f200a3a323836,0x4c203e706f6f6c3c,0x79646f6220706f6f\n"
".quad 0x363120656e696c20,0x697473656e202c32,0x687470656420676e,0x747365202c32203a\n"
".quad 0x6920646574616d69,0x6e6f697461726574,0x6f6e6b6e75203a73,0x636f6c2e090a6e77\n"
".quad 0x0930313109363109,0x732e766f6d090a30,0x3933722509203233,0x0a3b35337225202c\n"
".quad 0x3233752e64646109,0x202c303472250920,0x7225202c39337225,0x646461090a3b3733\n"
".quad 0x722509203233752e,0x39337225202c3134,0x7663090a3b31202c,0x33752e3436752e74\n"
".quad 0x3131647225092032,0x0a3b31347225202c,0x6469772e6c756d09,0x2509203233752e65\n"
".quad 0x7225202c32316472,0x0a3b3631202c3134,0x3436752e64646109,0x2c33316472250920\n"
".quad 0x25202c3464722520,0x6c090a3b32316472,0x6465726168732e64,0x662509203233662e\n"
".quad 0x6472255b202c3631,0x3b5d36312d2b3331,0x6168732e646c090a,0x203233662e646572\n"
".quad 0x5b202c3731662509,0x312d2b3331647225,0x2e646c090a3b5d32,0x662e646572616873\n"
".quad 0x3831662509203233,0x33316472255b202c,0x2e090a3b5d382d2b,0x3109363109636f6c\n"
".quad 0x6461090a30093331,0x2509203233752e64,0x337225202c323472,0x63090a3b32202c39\n"
".quad 0x752e3436752e7476,0x3164722509203233,0x3b32347225202c34,0x69772e6c756d090a\n"
".quad 0x09203233752e6564,0x25202c3531647225,0x3b3631202c323472,0x36752e646461090a\n"
".quad 0x3631647225092034,0x202c34647225202c,0x090a3b3531647225,0x65726168732e646c\n"
".quad 0x2509203233662e64,0x72255b202c393166,0x5d36312d2b363164,0x68732e646c090a3b\n"
".quad 0x3233662e64657261,0x202c303266250920,0x2d2b36316472255b,0x646c090a3b5d3231\n"
".quad 0x2e6465726168732e,0x3266250920323366,0x316472255b202c31,0x090a3b5d382d2b36\n"
".quad 0x09363109636f6c2e,0x7573090a30093637,0x2509203233662e62,0x316625202c323266\n"
".quad 0x0a3b316625202c36,0x3233662e62757309,0x202c333266250920,0x6625202c37316625\n"
".quad 0x2e627573090a3b32,0x3266250920323366,0x2c38316625202c34,0x73090a3b33662520\n"
".quad 0x09203233662e6275,0x6625202c35326625,0x3b316625202c3931,0x33662e627573090a\n"
".quad 0x2c36326625092032,0x25202c3032662520,0x627573090a3b3266,0x662509203233662e\n"
".quad 0x31326625202c3732,0x090a3b336625202c,0x203233662e6c756d,0x25202c3832662509\n"
".quad 0x326625202c333266,0x2e6c756d090a3b33,0x3266250920323366,0x2c36326625202c39\n"
".quad 0x090a3b3632662520,0x203233662e64616d,0x25202c3033662509,0x326625202c323266\n"
".quad 0x3b38326625202c32,0x33662e64616d090a,0x2c31336625092032,0x25202c3532662520\n"
".quad 0x326625202c353266,0x2e64616d090a3b39,0x3366250920323366,0x2c34326625202c32\n"
".quad 0x25202c3432662520,0x616d090a3b303366,0x2509203233662e64,0x326625202c333366\n"
".quad 0x2c37326625202c37,0x090a3b3133662520,0x203233662e646461,0x25202c3433662509\n"
".quad 0x316625202c323366,0x2e646461090a3b35,0x3366250920323366,0x2c33336625202c35\n"
".quad 0x090a3b3531662520,0x7070612e74727173,0x203233662e786f72,0x25202c3633662509\n"
".quad 0x7173090a3b343366,0x6f727070612e7472,0x2509203233662e78,0x336625202c373366\n"
".quad 0x2e706372090a3b35,0x662e786f72707061,0x3833662509203233,0x0a3b36336625202c\n"
".quad 0x7070612e70637209,0x203233662e786f72,0x25202c3933662509,0x756d090a3b373366\n"
".quad 0x2509203233662e6c,0x336625202c303466,0x3b38336625202c38,0x33662e6c756d090a\n"
".quad 0x2c31346625092032,0x25202c3933662520,0x756d090a3b393366,0x2509203233662e6c\n"
".quad 0x336625202c323466,0x3b30346625202c38,0x33662e6c756d090a,0x2c33346625092032\n"
".quad 0x25202c3933662520,0x756d090a3b313466,0x2509203233662e6c,0x346625202c343466\n"
".quad 0x0a3b346625202c32,0x3233662e6c756d09,0x202c353466250920,0x6625202c33346625\n"
".quad 0x2e64616d090a3b34,0x3466250920323366,0x2c32326625202c36,0x25202c3434662520\n"
".quad 0x616d090a3b323166,0x2509203233662e64,0x326625202c373466,0x2c35346625202c35\n"
".quad 0x090a3b3634662520,0x09363109636f6c2e,0x616d090a30093737,0x2509203233662e64\n"
".quad 0x346625202c383466,0x2c33326625202c34,0x090a3b3331662520,0x203233662e64616d\n"
".quad 0x25202c3934662509,0x326625202c353466,0x3b38346625202c36,0x3109636f6c2e090a\n"
".quad 0x090a300938370936,0x203233662e64616d,0x25202c3035662509,0x326625202c343466\n"
".quad 0x3b34316625202c34,0x33662e64616d090a,0x2c31356625092032,0x25202c3534662520\n"
".quad 0x356625202c373266,0x636f6c2e090a3b30,0x0937313109363109,0x752e646461090a30\n"
".quad 0x3334722509203233,0x202c39337225202c,0x2e747663090a3b33,0x203233752e343675\n"
".quad 0x202c373164722509,0x6d090a3b33347225,0x2e656469772e6c75,0x6472250920323375\n"
".quad 0x33347225202c3831,0x61090a3b3631202c,0x09203436752e6464,0x25202c3931647225\n"
".quad 0x647225202c346472,0x2e646c090a3b3831,0x662e646572616873,0x3235662509203233\n"
".quad 0x39316472255b202c,0x090a3b5d36312d2b,0x65726168732e646c,0x2509203233662e64\n"
".quad 0x72255b202c333566,0x5d32312d2b393164,0x68732e646c090a3b,0x3233662e64657261\n"
".quad 0x202c343566250920,0x2d2b39316472255b,0x6f6c2e090a3b5d38,0x3831310936310963\n"
".quad 0x2e646461090a3009,0x3472250920323375,0x2c30347225202c34,0x646461090a3b3420\n"
".quad 0x722509203233752e,0x35337225202c3533,0x7663090a3b34202c,0x33752e3436752e74\n"
".quad 0x3032647225092032,0x0a3b35337225202c,0x6469772e6c756d09,0x2509203233752e65\n"
".quad 0x7225202c31326472,0x0a3b3631202c3533,0x3436752e64646109,0x2c32326472250920\n"
".quad 0x25202c3464722520,0x6c090a3b31326472,0x6465726168732e64,0x662509203233662e\n"
".quad 0x6472255b202c3535,0x3b5d36312d2b3232,0x6168732e646c090a,0x203233662e646572\n"
".quad 0x5b202c3635662509,0x312d2b3232647225,0x2e646c090a3b5d32,0x662e646572616873\n"
".quad 0x3735662509203233,0x32326472255b202c,0x2e090a3b5d382d2b,0x3709363109636f6c\n"
".quad 0x627573090a300936,0x662509203233662e,0x32356625202c3835,0x090a3b316625202c\n"
".quad 0x203233662e627573,0x25202c3935662509,0x326625202c333566,0x662e627573090a3b\n"
".quad 0x3036662509203233,0x202c34356625202c,0x7573090a3b336625,0x2509203233662e62\n"
".quad 0x356625202c313666,0x0a3b316625202c35,0x3233662e62757309,0x202c323666250920\n"
".quad 0x6625202c36356625,0x2e627573090a3b32,0x3666250920323366,0x2c37356625202c33\n"
".quad 0x6d090a3b33662520,0x09203233662e6c75,0x6625202c34366625,0x39356625202c3935\n"
".quad 0x662e6c756d090a3b,0x3536662509203233,0x202c32366625202c,0x6d090a3b32366625\n"
".quad 0x09203233662e6461,0x6625202c36366625,0x38356625202c3835,0x0a3b34366625202c\n"
".quad 0x3233662e64616d09,0x202c373666250920,0x6625202c31366625,0x35366625202c3136\n"
".quad 0x662e64616d090a3b,0x3836662509203233,0x202c30366625202c,0x6625202c30366625\n"
".quad 0x64616d090a3b3636,0x662509203233662e,0x33366625202c3936,0x202c33366625202c\n"
".quad 0x61090a3b37366625,0x09203233662e6464,0x6625202c30376625,0x35316625202c3836\n"
".quad 0x662e646461090a3b,0x3137662509203233,0x202c39366625202c,0x73090a3b35316625\n"
".quad 0x727070612e747271,0x09203233662e786f,0x6625202c32376625,0x727173090a3b3037\n"
".quad 0x786f727070612e74,0x662509203233662e,0x31376625202c3337,0x612e706372090a3b\n"
".quad 0x33662e786f727070,0x2c34376625092032,0x090a3b3237662520,0x727070612e706372\n"
".quad 0x09203233662e786f,0x6625202c35376625,0x6c756d090a3b3337,0x662509203233662e\n"
".quad 0x34376625202c3637,0x0a3b34376625202c,0x3233662e6c756d09,0x202c373766250920\n"
".quad 0x6625202c35376625,0x6c756d090a3b3537,0x662509203233662e,0x34376625202c3837\n"
".quad 0x0a3b36376625202c,0x3233662e6c756d09,0x202c393766250920,0x6625202c35376625\n"
".quad 0x6c756d090a3b3737,0x662509203233662e,0x38376625202c3038,0x090a3b346625202c\n"
".quad 0x203233662e6c756d,0x25202c3138662509,0x346625202c393766,0x662e64616d090a3b\n"
".quad 0x3238662509203233,0x202c38356625202c,0x6625202c30386625,0x64616d090a3b3734\n"
".quad 0x662509203233662e,0x31366625202c3338,0x202c31386625202c,0x2e090a3b32386625\n"
".quad 0x3709363109636f6c,0x64616d090a300937,0x662509203233662e,0x30386625202c3438\n"
".quad 0x202c39356625202c,0x6d090a3b39346625,0x09203233662e6461,0x6625202c35386625\n"
".quad 0x32366625202c3138,0x0a3b34386625202c,0x363109636f6c2e09,0x6d090a3009383709\n"
".quad 0x09203233662e6461,0x6625202c36386625,0x30366625202c3038,0x0a3b31356625202c\n"
".quad 0x3233662e64616d09,0x202c373866250920,0x6625202c31386625,0x36386625202c3336\n"
".quad 0x09636f6c2e090a3b,0x3009383131093631,0x33662e766f6d090a,0x2c32316625092032\n"
".quad 0x090a3b3338662520,0x203233662e766f6d,0x25202c3331662509,0x6f6d090a3b353866\n"
".quad 0x2509203233662e76,0x386625202c343166,0x70746573090a3b37,0x203233752e74672e\n"
".quad 0x7225202c34702509,0x3b34347225202c31,0x622034702540090a,0x5f744c2409206172\n"
".quad 0x0a3b323836375f30,0x31375f305f744c24,0x3c2f2f200a3a3037,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x32353120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3034365f305f744c,0x09636f6c2e090a32,0x3009323631093631\n"
".quad 0x33662e766f6d090a,0x202c376625092032,0x6d090a3b32316625,0x09203233662e766f\n"
".quad 0x316625202c366625,0x2e766f6d090a3b33,0x3566250920323366,0x0a3b34316625202c\n"
".quad 0x363109636f6c2e09,0x090a300934363109,0x636e79732e726162,0x6461090a3b300920\n"
".quad 0x2509203233752e64,0x317225202c343172,0x73090a3b31202c34,0x752e656e2e707465\n"
".quad 0x2c35702509203233,0x25202c3431722520,0x2540090a3b383172,0x0920617262203570\n"
".quad 0x34365f305f744c24,0x617262090a3b3230,0x4c240920696e752e,0x303938355f305f74\n"
".quad 0x5f305f744c240a3b,0x6d090a3a30353438,0x09203233662e766f,0x306630202c356625\n"
".quad 0x3b30303030303030,0x2f2f092020202020,0x2e766f6d090a3020,0x3666250920323366\n"
".quad 0x303030306630202c,0x2020203b30303030,0x0a30202f2f092020,0x3233662e766f6d09\n"
".quad 0x30202c3766250920,0x3030303030303066,0x0920202020203b30,0x744c240a30202f2f\n"
".quad 0x3a303938355f305f,0x3109636f6c2e090a,0x0a30093831320936,0x617261702e646c09\n"
".quad 0x2509203436752e6d,0x5f5b202c33326472,0x726170616475635f,0x6e6935315a5f5f6d\n"
".quad 0x4265746172676574,0x624c49736569646f,0x6c66365076454530,0x535f31533474616f\n"
".quad 0x6966665f31535f31,0x5d6c6556646c6f5f,0x752e646461090a3b,0x3264722509203436\n"
".quad 0x3332647225202c34,0x0a3b31647225202c,0x626f6c672e646c09,0x33662e34762e6c61\n"
".quad 0x383866257b092032,0x66252c393866252c,0x7d313966252c3039,0x34326472255b202c\n"
".quad 0x6c2e090a3b5d302b,0x323209363109636f,0x2e646c090a300934,0x33662e6d61726170\n"
".quad 0x2c32396625092032,0x616475635f5f5b20,0x315a5f5f6d726170,0x61726765746e6935\n"
".quad 0x736569646f426574,0x5076454530624c49,0x533474616f6c6636,0x5f31535f31535f31\n"
".quad 0x746c65645f696666,0x0a3b5d656d695461,0x617261702e646c09,0x2509203233662e6d\n"
".quad 0x5f5f5b202c333966,0x6d72617061647563,0x746e6935315a5f5f,0x6f42657461726765\n"
".quad 0x30624c4973656964,0x6f6c663650764545,0x31535f3153347461,0x5f6966665f31535f\n"
".quad 0x5d676e69706d6164,0x662e64616d090a3b,0x3439662509203233,0x202c32396625202c\n"
".quad 0x386625202c376625,0x2e6c756d090a3b38,0x3966250920323366,0x2c33396625202c35\n"
".quad 0x090a3b3439662520,0x09363109636f6c2e,0x6d090a3009353232,0x09203233662e6461\n"
".quad 0x6625202c36396625,0x2c366625202c3239,0x090a3b3938662520,0x203233662e6c756d\n"
".quad 0x25202c3739662509,0x396625202c333966,0x636f6c2e090a3b36,0x0936323209363109\n"
".quad 0x662e64616d090a30,0x3839662509203233,0x202c32396625202c,0x396625202c356625\n"
".quad 0x2e6c756d090a3b30,0x3966250920323366,0x2c33396625202c39,0x090a3b3839662520\n"
".quad 0x09363109636f6c2e,0x6d090a3009393232,0x09203233662e6461,0x396625202c316625\n"
".quad 0x2c35396625202c32,0x2e090a3b31662520,0x3209363109636f6c,0x616d090a30093033\n"
".quad 0x2509203233662e64,0x32396625202c3266,0x202c37396625202c,0x6c2e090a3b326625\n"
".quad 0x333209363109636f,0x64616d090a300931,0x662509203233662e,0x2c32396625202c33\n"
".quad 0x25202c3939662520,0x6f6c2e090a3b3366,0x3433320936310963,0x702e646c090a3009\n"
".quad 0x3436752e6d617261,0x2c35326472250920,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x61726765746e6935,0x736569646f426574,0x5076454530624c49,0x533474616f6c6636\n"
".quad 0x5f31535f31535f31,0x5077656e5f696666,0x6461090a3b5d736f,0x2509203436752e64\n"
".quad 0x7225202c36326472,0x647225202c353264,0x672e7473090a3b31,0x34762e6c61626f6c\n"
".quad 0x255b09203233662e,0x2c5d302b36326472,0x66252c3166257b20,0x66252c3366252c32\n"
".quad 0x6f6c2e090a3b7d34,0x3533320936310963,0x702e646c090a3009,0x3436752e6d617261\n"
".quad 0x2c37326472250920,0x616475635f5f5b20,0x315a5f5f6d726170,0x61726765746e6935\n"
".quad 0x736569646f426574,0x5076454530624c49,0x533474616f6c6636,0x5f31535f31535f31\n"
".quad 0x5677656e5f696666,0x6461090a3b5d6c65,0x2509203436752e64,0x7225202c38326472\n"
".quad 0x647225202c373264,0x672e7473090a3b31,0x34762e6c61626f6c,0x255b09203233662e\n"
".quad 0x2c5d302b38326472,0x252c353966257b20,0x393966252c373966,0x0a3b7d313966252c\n"
".quad 0x363109636f6c2e09,0x090a300936333209,0x4c240a3b74697865,0x5a5f5f646e655744\n"
".quad 0x726765746e693531,0x6569646f42657461,0x76454530624c4973,0x3474616f6c663650\n"
".quad 0x31535f31535f3153,0x7d090a3a6966665f,0x35315a5f202f2f20,0x7461726765746e69\n"
".quad 0x49736569646f4265,0x365076454530624c,0x31533474616f6c66,0x665f31535f31535f\n"
".quad 0x6e652e090a0a6966,0x35315a5f20797274,0x7461726765746e69,0x49736569646f4265\n"
".quad 0x365076454531624c,0x31533474616f6c66,0x665f31535f31535f,0x2e09090a28206966\n"
".quad 0x752e206d61726170,0x6475635f5f203436,0x5a5f5f6d72617061,0x726765746e693531\n"
".quad 0x6569646f42657461,0x76454531624c4973,0x3474616f6c663650,0x31535f31535f3153\n"
".quad 0x77656e5f6966665f,0x2e09090a2c736f50,0x752e206d61726170,0x6475635f5f203436\n"
".quad 0x5a5f5f6d72617061,0x726765746e693531,0x6569646f42657461,0x76454531624c4973\n"
".quad 0x3474616f6c663650,0x31535f31535f3153,0x77656e5f6966665f,0x2e09090a2c6c6556\n"
".quad 0x752e206d61726170,0x6475635f5f203436,0x5a5f5f6d72617061,0x726765746e693531\n"
".quad 0x6569646f42657461,0x76454531624c4973,0x3474616f6c663650,0x31535f31535f3153\n"
".quad 0x646c6f5f6966665f,0x2e09090a2c736f50,0x752e206d61726170,0x6475635f5f203436\n"
".quad 0x5a5f5f6d72617061,0x726765746e693531,0x6569646f42657461,0x76454531624c4973\n"
".quad 0x3474616f6c663650,0x31535f31535f3153,0x646c6f5f6966665f,0x2e09090a2c6c6556\n"
".quad 0x662e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061,0x726765746e693531\n"
".quad 0x6569646f42657461,0x76454531624c4973,0x3474616f6c663650,0x31535f31535f3153\n"
".quad 0x6c65645f6966665f,0x0a2c656d69546174,0x6d617261702e0909,0x5f5f203233662e20\n"
".quad 0x6d72617061647563,0x746e6935315a5f5f,0x6f42657461726765,0x31624c4973656964\n"
".quad 0x6f6c663650764545,0x31535f3153347461,0x5f6966665f31535f,0x2c676e69706d6164\n"
".quad 0x617261702e09090a,0x5f203233732e206d,0x726170616475635f,0x6e6935315a5f5f6d\n"
".quad 0x4265746172676574,0x624c49736569646f,0x6c66365076454531,0x535f31533474616f\n"
".quad 0x6966665f31535f31,0x69646f426d756e5f,0x090a7b090a297365,0x33752e206765722e\n"
".quad 0x3e38353c72252032,0x206765722e090a3b,0x647225203436752e,0x2e090a3b3e35333c\n"
".quad 0x3233662e20676572,0x3e3430313c662520,0x206765722e090a3b,0x702520646572702e\n"
".quad 0x2e090a3b3e30313c,0x3209363109636f6c,0x444c240a30093730,0x5f5f6e6967656257\n"
".quad 0x6765746e6935315a,0x69646f4265746172,0x454531624c497365,0x74616f6c66365076\n"
".quad 0x535f31535f315334,0x090a3a6966665f31,0x09363109636f6c2e,0x63090a3009303132\n"
".quad 0x752e3233732e7476,0x2c31722509203631,0x782e6469746e2520,0x732e747663090a3b\n"
".quad 0x09203631752e3233,0x746325202c327225,0x090a3b782e646961,0x6f6c2e34326c756d\n"
".quad 0x722509203233732e,0x202c327225202c33,0x7663090a3b317225,0x31752e3233752e74\n"
".quad 0x202c347225092036,0x0a3b782e64697425,0x3233752e64646109,0x25202c3572250920\n"
".quad 0x3b347225202c3372,0x6f6c2e6c756d090a,0x722509203233752e,0x202c357225202c36\n"
".quad 0x747663090a3b3631,0x3233752e3436752e,0x202c316472250920,0x646c090a3b367225\n"
".quad 0x752e6d617261702e,0x3264722509203436,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x726765746e693531,0x6569646f42657461,0x76454531624c4973,0x3474616f6c663650\n"
".quad 0x31535f31535f3153,0x646c6f5f6966665f,0x61090a3b5d736f50,0x09203436752e6464\n"
".quad 0x7225202c33647225,0x32647225202c3164,0x6c672e646c090a3b,0x2e34762e6c61626f\n"
".quad 0x66257b0920323366,0x66252c3266252c31,0x202c7d3466252c33,0x5d302b336472255b\n"
".quad 0x09636f6c2e090a3b,0x3009323531093631,0x33732e747663090a,0x2509203631752e32\n"
".quad 0x61746325202c3772,0x6d090a3b792e6469,0x09203233732e766f,0x377225202c387225\n"
".quad 0x732e747663090a3b,0x09203631752e3233,0x746e25202c397225,0x6d090a3b792e6469\n"
".quad 0x33732e6f6c2e6c75,0x2c30317225092032,0x7225202c39722520,0x702e646c090a3b31\n"
".quad 0x3233732e6d617261,0x202c313172250920,0x70616475635f5f5b,0x35315a5f5f6d7261\n"
".quad 0x7461726765746e69,0x49736569646f4265,0x365076454531624c,0x31533474616f6c66\n"
".quad 0x665f31535f31535f,0x6f426d756e5f6966,0x090a3b5d73656964,0x203233732e766964\n"
".quad 0x25202c3231722509,0x317225202c313172,0x2e646461090a3b30,0x3172250920323375\n"
".quad 0x2c32317225202c33,0x63090a3b37722520,0x752e3233752e7476,0x3431722509203631\n"
".quad 0x792e64697425202c,0x2e70746573090a3b,0x09203233752e6567,0x377225202c317025\n"
".quad 0x0a3b33317225202c,0x7262203170254009,0x315f744c24092061,0x090a3b303337395f\n"
".quad 0x203436752e766f6d,0x73202c3464722509,0x736f506465726168,0x732e766f6d090a3b\n"
".quad 0x3531722509203233,0x0a3b32317225202c,0x2e6f6c2e6c756d09,0x3172250920323375\n"
".quad 0x202c317225202c36,0x61090a3b34317225,0x09203233732e6464,0x7225202c37317225\n"
".quad 0x3b34317225202c32,0x6f6c2e6c756d090a,0x722509203233732e,0x2c377225202c3831\n"
".quad 0x6d090a3b39722520,0x09203233752e766f,0x3b30202c39317225,0x672e70746573090a\n"
".quad 0x2509203233752e74,0x2c317225202c3270,0x090a3b3931722520,0x203233752e646461\n"
".quad 0x25202c3032722509,0x347225202c363172,0x752e747663090a3b,0x09203233752e3436\n"
".quad 0x7225202c35647225,0x6c756d090a3b3032,0x33752e656469772e,0x2c36647225092032\n"
".quad 0x31202c3032722520,0x2e646461090a3b36,0x6472250920343675,0x2c34647225202c37\n"
".quad 0x090a3b3664722520,0x2e3233752e747663,0x3272250920363175,0x6174636e25202c31\n"
".quad 0x6d090a3b782e6469,0x09203233662e766f,0x306630202c356625,0x3b30303030303030\n"
".quad 0x2f2f092020202020,0x2e766f6d090a3020,0x3666250920323366,0x303030306630202c\n"
".quad 0x2020203b30303030,0x0a30202f2f092020,0x3233662e766f6d09,0x30202c3766250920\n"
".quad 0x3030303030303066,0x0920202020203b30,0x6f6d090a30202f2f,0x2509203233732e76\n"
".quad 0x317225202c323272,0x315f744c240a3b35,0x200a3a363431365f,0x3e706f6f6c3c2f2f\n"
".quad 0x6f6220706f6f4c20,0x20656e696c207964,0x73656e202c323531,0x70656420676e6974\n"
".quad 0x65202c31203a6874,0x646574616d697473,0x6974617265746920,0x6b6e75203a736e6f\n"
".quad 0x6461090a6e776f6e,0x2509203233752e64,0x317225202c333272,0x0a3b327225202c38\n"
".quad 0x3233752e64646109,0x202c343272250920,0x7225202c33327225,0x646461090a3b3431\n"
".quad 0x722509203233732e,0x37317225202c3532,0x0a3b38317225202c,0x656c2e7074657309\n"
".quad 0x702509203233752e,0x2c31327225202c33,0x090a3b3532722520,0x6172622033702540\n"
".quad 0x5f315f744c240920,0x2f200a3b38353636,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3235,0x64656c6562616c20\n"
".quad 0x365f315f744c2420,0x6f6c2e090a363431,0x3435310936310963,0x2e6c756d090a3009\n"
".quad 0x09203233752e6f6c,0x7225202c36327225,0x3b34327225202c31,0x33752e646461090a\n"
".quad 0x2c37327225092032,0x7225202c34722520,0x6c756d090a3b3632,0x203233752e6f6c2e\n"
".quad 0x25202c3832722509,0x3b3631202c373272,0x36752e747663090a,0x2509203233752e34\n"
".quad 0x327225202c386472,0x2e646461090a3b38,0x6472250920343675,0x2c38647225202c39\n"
".quad 0x090a3b3264722520,0x20696e752e617262,0x365f315f744c2409,0x744c240a3b323034\n"
".quad 0x3a383536365f315f,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3235312065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x090a363431365f31,0x203233752e627573,0x25202c3932722509,0x327225202c343272\n"
".quad 0x2e6c756d090a3b31,0x09203233752e6f6c,0x7225202c30337225,0x3b39327225202c31\n"
".quad 0x33752e646461090a,0x2c31337225092032,0x7225202c34722520,0x6c756d090a3b3033\n"
".quad 0x203233752e6f6c2e,0x25202c3233722509,0x3b3631202c313372,0x36752e747663090a\n"
".quad 0x2509203233752e34,0x7225202c30316472,0x646461090a3b3233,0x722509203436752e\n"
".quad 0x31647225202c3964,0x3b32647225202c30,0x365f315f744c240a,0x2f2f200a3a323034\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20\n"
".quad 0x2064616568202c32,0x2064656c6562616c,0x31365f315f744c24,0x672e646c090a3634\n"
".quad 0x34762e6c61626f6c,0x257b09203233662e,0x252c3966252c3866,0x313166252c303166\n"
".quad 0x396472255b202c7d,0x7473090a3b5d302b,0x2e6465726168732e,0x72255b0920323366\n"
".quad 0x25202c5d302b3764,0x2e7473090a3b3866,0x662e646572616873,0x6472255b09203233\n"
".quad 0x6625202c5d342b37,0x732e7473090a3b39,0x33662e6465726168,0x376472255b092032\n"
".quad 0x316625202c5d382b,0x732e7473090a3b30,0x33662e6465726168,0x376472255b092032\n"
".quad 0x6625202c5d32312b,0x6f6c2e090a3b3131,0x3935310936310963,0x2e726162090a3009\n"
".quad 0x3b300920636e7973,0x3109636f6c2e090a,0x0a30093236310936,0x3233662e766f6d09\n"
".quad 0x202c323166250920,0x6f6d090a3b376625,0x2509203233662e76,0x366625202c333166\n"
".quad 0x662e766f6d090a3b,0x3431662509203233,0x090a3b356625202c,0x7262203270252140\n"
".quad 0x315f744c24092061,0x200a3b343139365f,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c323531,0x656c6562616c2064\n"
".quad 0x5f315f744c242064,0x6461090a36343136,0x2509203233752e64,0x317225202c333372\n"
".quad 0x6873090a3b33202c,0x2509203233732e72,0x337225202c343372,0x090a3b3133202c33\n"
".quad 0x203233732e766f6d,0x33202c3533722509,0x622e646e61090a3b,0x3633722509203233\n"
".quad 0x202c34337225202c,0x61090a3b35337225,0x09203233732e6464,0x7225202c37337225\n"
".quad 0x33337225202c3633,0x732e726873090a3b,0x3833722509203233,0x202c37337225202c\n"
".quad 0x2e766f6d090a3b32,0x3372250920323373,0x3b36317225202c39,0x33752e766f6d090a\n"
".quad 0x2c30347225092032,0x627573090a3b3020,0x722509203233752e,0x30347225202c3134\n"
".quad 0x0a3b39337225202c,0x736e6f632e646c09,0x2509203233662e74,0x6f735b202c353166\n"
".quad 0x53676e696e657466,0x3b5d646572617571,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3235312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x090a363431365f31,0x203233732e766f6d,0x25202c3234722509\n"
".quad 0x744c240a3b383372,0x3a363234375f315f,0x6f6f6c3c2f2f200a,0x20706f6f4c203e70\n"
".quad 0x6e696c2079646f62,0x6e202c3236312065,0x6420676e69747365,0x2c32203a68747065\n"
".quad 0x74616d6974736520,0x6172657469206465,0x75203a736e6f6974,0x090a6e776f6e6b6e\n"
".quad 0x09363109636f6c2e,0x6d090a3009303131,0x09203233732e766f,0x7225202c33347225\n"
".quad 0x646461090a3b3933,0x722509203233752e,0x33347225202c3434,0x0a3b31347225202c\n"
".quad 0x3233752e64646109,0x202c353472250920,0x3b31202c33347225,0x36752e747663090a\n"
".quad 0x2509203233752e34,0x7225202c31316472,0x6c756d090a3b3534,0x33752e656469772e\n"
".quad 0x3231647225092032,0x202c35347225202c,0x646461090a3b3631,0x722509203436752e\n"
".quad 0x647225202c333164,0x3231647225202c34,0x68732e646c090a3b,0x3233662e64657261\n"
".quad 0x202c363166250920,0x2d2b33316472255b,0x646c090a3b5d3631,0x2e6465726168732e\n"
".quad 0x3166250920323366,0x316472255b202c37,0x0a3b5d32312d2b33,0x726168732e646c09\n"
".quad 0x09203233662e6465,0x255b202c38316625,0x5d382d2b33316472,0x09636f6c2e090a3b\n"
".quad 0x3009333131093631,0x33752e646461090a,0x2c36347225092032,0x32202c3334722520\n"
".quad 0x752e747663090a3b,0x09203233752e3436,0x25202c3431647225,0x756d090a3b363472\n"
".quad 0x752e656469772e6c,0x3164722509203233,0x2c36347225202c35,0x6461090a3b363120\n"
".quad 0x2509203436752e64,0x7225202c36316472,0x31647225202c3464,0x732e646c090a3b35\n"
".quad 0x33662e6465726168,0x2c39316625092032,0x2b36316472255b20,0x6c090a3b5d36312d\n"
".quad 0x6465726168732e64,0x662509203233662e,0x6472255b202c3032,0x3b5d32312d2b3631\n"
".quad 0x6168732e646c090a,0x203233662e646572,0x5b202c3132662509,0x382d2b3631647225\n"
".quad 0x636f6c2e090a3b5d,0x3009363709363109,0x33662e627573090a,0x2c32326625092032\n"
".quad 0x25202c3631662520,0x627573090a3b3166,0x662509203233662e,0x37316625202c3332\n"
".quad 0x090a3b326625202c,0x203233662e627573,0x25202c3432662509,0x336625202c383166\n"
".quad 0x662e627573090a3b,0x3532662509203233,0x202c39316625202c,0x7573090a3b316625\n"
".quad 0x2509203233662e62,0x326625202c363266,0x0a3b326625202c30,0x3233662e62757309\n"
".quad 0x202c373266250920,0x6625202c31326625,0x2e6c756d090a3b33,0x3266250920323366\n"
".quad 0x2c33326625202c38,0x090a3b3332662520,0x203233662e6c756d,0x25202c3932662509\n"
".quad 0x326625202c363266,0x2e64616d090a3b36,0x3366250920323366,0x2c32326625202c30\n"
".quad 0x25202c3232662520,0x616d090a3b383266,0x2509203233662e64,0x326625202c313366\n"
".quad 0x2c35326625202c35,0x090a3b3932662520,0x203233662e64616d,0x25202c3233662509\n"
".quad 0x326625202c343266,0x3b30336625202c34,0x33662e64616d090a,0x2c33336625092032\n"
".quad 0x25202c3732662520,0x336625202c373266,0x2e646461090a3b31,0x3366250920323366\n"
".quad 0x2c32336625202c34,0x090a3b3531662520,0x203233662e646461,0x25202c3533662509\n"
".quad 0x316625202c333366,0x74727173090a3b35,0x2e786f727070612e,0x3366250920323366\n"
".quad 0x3b34336625202c36,0x612e74727173090a,0x33662e786f727070,0x2c37336625092032\n"
".quad 0x090a3b3533662520,0x727070612e706372,0x09203233662e786f,0x6625202c38336625\n"
".quad 0x706372090a3b3633,0x2e786f727070612e,0x3366250920323366,0x3b37336625202c39\n"
".quad 0x33662e6c756d090a,0x2c30346625092032,0x25202c3833662520,0x756d090a3b383366\n"
".quad 0x2509203233662e6c,0x336625202c313466,0x3b39336625202c39,0x33662e6c756d090a\n"
".quad 0x2c32346625092032,0x25202c3833662520,0x756d090a3b303466,0x2509203233662e6c\n"
".quad 0x336625202c333466,0x3b31346625202c39,0x33662e6c756d090a,0x2c34346625092032\n"
".quad 0x25202c3234662520,0x6c756d090a3b3466,0x662509203233662e,0x33346625202c3534\n"
".quad 0x090a3b346625202c,0x203233662e64616d,0x25202c3634662509,0x346625202c323266\n"
".quad 0x3b32316625202c34,0x33662e64616d090a,0x2c37346625092032,0x25202c3532662520\n"
".quad 0x346625202c353466,0x636f6c2e090a3b36,0x3009373709363109,0x33662e64616d090a\n"
".quad 0x2c38346625092032,0x25202c3434662520,0x316625202c333266,0x2e64616d090a3b33\n"
".quad 0x3466250920323366,0x2c35346625202c39,0x25202c3632662520,0x6c2e090a3b383466\n"
".quad 0x383709363109636f,0x2e64616d090a3009,0x3566250920323366,0x2c34346625202c30\n"
".quad 0x25202c3432662520,0x616d090a3b343166,0x2509203233662e64,0x346625202c313566\n"
".quad 0x2c37326625202c35,0x090a3b3035662520,0x09363109636f6c2e,0x61090a3009373131\n"
".quad 0x09203233752e6464,0x7225202c37347225,0x090a3b33202c3334,0x2e3436752e747663\n"
".quad 0x6472250920323375,0x37347225202c3731,0x772e6c756d090a3b,0x203233752e656469\n"
".quad 0x202c383164722509,0x3631202c37347225,0x752e646461090a3b,0x3164722509203436\n"
".quad 0x2c34647225202c39,0x0a3b383164722520,0x726168732e646c09,0x09203233662e6465\n"
".quad 0x255b202c32356625,0x36312d2b39316472,0x732e646c090a3b5d,0x33662e6465726168\n"
".quad 0x2c33356625092032,0x2b39316472255b20,0x6c090a3b5d32312d,0x6465726168732e64\n"
".quad 0x662509203233662e,0x6472255b202c3435,0x0a3b5d382d2b3931,0x363109636f6c2e09\n"
".quad 0x090a300938313109,0x203233752e646461,0x25202c3834722509,0x0a3b34202c343472\n"
".quad 0x3233752e64646109,0x202c393372250920,0x3b34202c39337225,0x36752e747663090a\n"
".quad 0x2509203233752e34,0x7225202c30326472,0x6c756d090a3b3933,0x33752e656469772e\n"
".quad 0x3132647225092032,0x202c39337225202c,0x646461090a3b3631,0x722509203436752e\n"
".quad 0x647225202c323264,0x3132647225202c34,0x68732e646c090a3b,0x3233662e64657261\n"
".quad 0x202c353566250920,0x2d2b32326472255b,0x646c090a3b5d3631,0x2e6465726168732e\n"
".quad 0x3566250920323366,0x326472255b202c36,0x0a3b5d32312d2b32,0x726168732e646c09\n"
".quad 0x09203233662e6465,0x255b202c37356625,0x5d382d2b32326472,0x09636f6c2e090a3b\n"
".quad 0x0a30093637093631,0x3233662e62757309,0x202c383566250920,0x6625202c32356625\n"
".quad 0x2e627573090a3b31,0x3566250920323366,0x2c33356625202c39,0x73090a3b32662520\n"
".quad 0x09203233662e6275,0x6625202c30366625,0x3b336625202c3435,0x33662e627573090a\n"
".quad 0x2c31366625092032,0x25202c3535662520,0x627573090a3b3166,0x662509203233662e\n"
".quad 0x36356625202c3236,0x090a3b326625202c,0x203233662e627573,0x25202c3336662509\n"
".quad 0x336625202c373566,0x662e6c756d090a3b,0x3436662509203233,0x202c39356625202c\n"
".quad 0x6d090a3b39356625,0x09203233662e6c75,0x6625202c35366625,0x32366625202c3236\n"
".quad 0x662e64616d090a3b,0x3636662509203233,0x202c38356625202c,0x6625202c38356625\n"
".quad 0x64616d090a3b3436,0x662509203233662e,0x31366625202c3736,0x202c31366625202c\n"
".quad 0x6d090a3b35366625,0x09203233662e6461,0x6625202c38366625,0x30366625202c3036\n"
".quad 0x0a3b36366625202c,0x3233662e64616d09,0x202c393666250920,0x6625202c33366625\n"
".quad 0x37366625202c3336,0x662e646461090a3b,0x3037662509203233,0x202c38366625202c\n"
".quad 0x61090a3b35316625,0x09203233662e6464,0x6625202c31376625,0x35316625202c3936\n"
".quad 0x2e74727173090a3b,0x662e786f72707061,0x3237662509203233,0x0a3b30376625202c\n"
".quad 0x70612e7472717309,0x3233662e786f7270,0x202c333766250920,0x72090a3b31376625\n"
".quad 0x6f727070612e7063,0x2509203233662e78,0x376625202c343766,0x2e706372090a3b32\n"
".quad 0x662e786f72707061,0x3537662509203233,0x0a3b33376625202c,0x3233662e6c756d09\n"
".quad 0x202c363766250920,0x6625202c34376625,0x6c756d090a3b3437,0x662509203233662e\n"
".quad 0x35376625202c3737,0x0a3b35376625202c,0x3233662e6c756d09,0x202c383766250920\n"
".quad 0x6625202c34376625,0x6c756d090a3b3637,0x662509203233662e,0x35376625202c3937\n"
".quad 0x0a3b37376625202c,0x3233662e6c756d09,0x202c303866250920,0x6625202c38376625\n"
".quad 0x2e6c756d090a3b34,0x3866250920323366,0x2c39376625202c31,0x6d090a3b34662520\n"
".quad 0x09203233662e6461,0x6625202c32386625,0x30386625202c3835,0x0a3b37346625202c\n"
".quad 0x3233662e64616d09,0x202c333866250920,0x6625202c31366625,0x32386625202c3138\n"
".quad 0x09636f6c2e090a3b,0x0a30093737093631,0x3233662e64616d09,0x202c343866250920\n"
".quad 0x6625202c30386625,0x39346625202c3935,0x662e64616d090a3b,0x3538662509203233\n"
".quad 0x202c31386625202c,0x6625202c32366625,0x6f6c2e090a3b3438,0x0938370936310963\n"
".quad 0x662e64616d090a30,0x3638662509203233,0x202c30386625202c,0x6625202c30366625\n"
".quad 0x64616d090a3b3135,0x662509203233662e,0x31386625202c3738,0x202c33366625202c\n"
".quad 0x2e090a3b36386625,0x3109363109636f6c,0x6f6d090a30093831,0x2509203233662e76\n"
".quad 0x386625202c323166,0x2e766f6d090a3b33,0x3166250920323366,0x3b35386625202c33\n"
".quad 0x33662e766f6d090a,0x2c34316625092032,0x090a3b3738662520,0x2e74672e70746573\n"
".quad 0x3470250920323375,0x25202c317225202c,0x2540090a3b383472,0x0920617262203470\n"
".quad 0x34375f315f744c24,0x5f744c240a3b3632,0x0a3a343139365f31,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c32353120\n"
".quad 0x6c6562616c206461,0x315f744c24206465,0x2e090a363431365f,0x3109363109636f6c\n"
".quad 0x6f6d090a30093236,0x2509203233662e76,0x32316625202c3766,0x662e766f6d090a3b\n"
".quad 0x2c36662509203233,0x090a3b3331662520,0x203233662e766f6d,0x6625202c35662509\n"
".quad 0x6f6c2e090a3b3431,0x3436310936310963,0x2e726162090a3009,0x3b300920636e7973\n"
".quad 0x33732e646461090a,0x202c387225092032,0x0a3b31202c387225,0x3233732e64646109\n"
".quad 0x202c383172250920,0x7225202c38317225,0x70746573090a3b39,0x203233752e656e2e\n"
".quad 0x7225202c35702509,0x3b33317225202c38,0x622035702540090a,0x5f744c2409206172\n"
".quad 0x0a3b363431365f31,0x696e752e61726209,0x5f315f744c240920,0x4c240a3b34333635\n"
".quad 0x303337395f315f74,0x752e766f6d090a3a,0x3464722509203436,0x646572616873202c\n"
".quad 0x756d090a3b736f50,0x3233752e6f6c2e6c,0x202c393472250920,0x317225202c317225\n"
".quad 0x2e646461090a3b34,0x3572250920323375,0x2c39347225202c30,0x63090a3b34722520\n"
".quad 0x752e3436752e7476,0x3264722509203233,0x3b30357225202c33,0x69772e6c756d090a\n"
".quad 0x09203233752e6564,0x25202c3432647225,0x3b3631202c303572,0x36752e646461090a\n"
".quad 0x2c37647225092034,0x25202c3464722520,0x6d090a3b34326472,0x09203233662e766f\n"
".quad 0x306630202c356625,0x3b30303030303030,0x2f2f092020202020,0x2e766f6d090a3020\n"
".quad 0x3666250920323366,0x303030306630202c,0x2020203b30303030,0x0a30202f2f092020\n"
".quad 0x3233662e766f6d09,0x30202c3766250920,0x3030303030303066,0x0920202020203b30\n"
".quad 0x744c240a30202f2f,0x3a343336355f315f,0x3109636f6c2e090a,0x0a30093138310936\n"
".quad 0x726168732e747309,0x09203233662e6465,0x5d302b376472255b,0x090a3b376625202c\n"
".quad 0x09363109636f6c2e,0x73090a3009323831,0x6465726168732e74,0x255b09203233662e\n"
".quad 0x202c5d342b376472,0x6c2e090a3b366625,0x383109363109636f,0x2e7473090a300933\n"
".quad 0x662e646572616873,0x6472255b09203233,0x6625202c5d382b37,0x636f6c2e090a3b35\n"
".quad 0x0935383109363109,0x732e726162090a30,0x0a3b300920636e79,0x3233752e766f6d09\n"
".quad 0x202c313572250920,0x70746573090a3b30,0x203233752e656e2e,0x7225202c36702509\n"
".quad 0x31357225202c3431,0x2036702540090a3b,0x744c240920617262,0x3b363037385f315f\n"
".quad 0x33752e766f6d090a,0x2c32357225092032,0x746573090a3b3120,0x3233752e656c2e70\n"
".quad 0x25202c3770250920,0x32357225202c3972,0x2037702540090a3b,0x744c240920617262\n"
".quad 0x3b363037385f315f,0x33752e627573090a,0x2c33357225092032,0x3b31202c39722520\n"
".quad 0x33752e646461090a,0x2c34357225092032,0x7225202c31722520,0x2e766f6d090a3b34\n"
".quad 0x3572250920323373,0x6d090a3b31202c35,0x09203233732e766f,0x7225202c36357225\n"
".quad 0x5f744c240a3b3335,0x0a3a383132395f31,0x706f6f6c3c2f2f20,0x6220706f6f4c203e\n"
".quad 0x656e696c2079646f,0x656e202c35383120,0x656420676e697473,0x202c31203a687470\n"
".quad 0x6574616d69747365,0x7461726574692064,0x6e75203a736e6f69,0x2e090a6e776f6e6b\n"
".quad 0x3109363109636f6c,0x7663090a30093239,0x33752e3436752e74,0x3532647225092032\n"
".quad 0x0a3b34357225202c,0x6469772e6c756d09,0x2509203233752e65,0x7225202c36326472\n"
".quad 0x0a3b3631202c3435,0x3436752e64646109,0x2c37326472250920,0x25202c3464722520\n"
".quad 0x6c090a3b36326472,0x6465726168732e64,0x662509203233662e,0x6472255b202c3838\n"
".quad 0x090a3b5d302b3732,0x203233662e646461,0x6625202c37662509,0x3b376625202c3838\n"
".quad 0x3109636f6c2e090a,0x0a30093339310936,0x726168732e646c09,0x09203233662e6465\n"
".quad 0x255b202c39386625,0x3b5d342b37326472,0x33662e646461090a,0x202c366625092032\n"
".quad 0x6625202c39386625,0x636f6c2e090a3b36,0x0934393109363109,0x68732e646c090a30\n"
".quad 0x3233662e64657261,0x202c303966250920,0x382b37326472255b,0x2e646461090a3b5d\n"
".quad 0x3566250920323366,0x202c30396625202c,0x6461090a3b356625,0x2509203233732e64\n"
".quad 0x357225202c353572,0x61090a3b31202c35,0x09203233752e6464,0x7225202c34357225\n"
".quad 0x3b34357225202c31,0x6e2e70746573090a,0x2509203233752e65,0x35357225202c3870\n"
".quad 0x090a3b397225202c,0x6172622038702540,0x5f315f744c240920,0x4c240a3b38313239\n"
".quad 0x363037385f315f74,0x5f315f744c240a3a,0x2e090a3a34393138,0x3209363109636f6c\n"
".quad 0x646c090a30093831,0x752e6d617261702e,0x3264722509203436,0x75635f5f5b202c38\n"
".quad 0x5f5f6d7261706164,0x6765746e6935315a,0x69646f4265746172,0x454531624c497365\n"
".quad 0x74616f6c66365076,0x535f31535f315334,0x6c6f5f6966665f31,0x090a3b5d6c655664\n"
".quad 0x203436752e646461,0x202c393264722509,0x25202c3832647225,0x646c090a3b316472\n"
".quad 0x2e6c61626f6c672e,0x09203233662e3476,0x66252c313966257b,0x2c333966252c3239\n"
".quad 0x5b202c7d34396625,0x5d302b3932647225,0x09636f6c2e090a3b,0x3009343232093631\n"
".quad 0x7261702e646c090a,0x09203233662e6d61,0x5f5b202c35396625,0x726170616475635f\n"
".quad 0x6e6935315a5f5f6d,0x4265746172676574,0x624c49736569646f,0x6c66365076454531\n"
".quad 0x535f31533474616f,0x6966665f31535f31,0x695461746c65645f,0x646c090a3b5d656d\n"
".quad 0x662e6d617261702e,0x3639662509203233,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x726765746e693531,0x6569646f42657461,0x76454531624c4973,0x3474616f6c663650\n"
".quad 0x31535f31535f3153,0x6d61645f6966665f,0x090a3b5d676e6970,0x203233662e64616d\n"
".quad 0x25202c3739662509,0x376625202c353966,0x0a3b31396625202c,0x3233662e6c756d09\n"
".quad 0x202c383966250920,0x6625202c36396625,0x6f6c2e090a3b3739,0x3532320936310963\n"
".quad 0x2e64616d090a3009,0x3966250920323366,0x2c35396625202c39,0x6625202c36662520\n"
".quad 0x6c756d090a3b3239,0x662509203233662e,0x396625202c303031,0x3b39396625202c36\n"
".quad 0x3109636f6c2e090a,0x0a30093632320936,0x3233662e64616d09,0x2c31303166250920\n"
".quad 0x25202c3539662520,0x33396625202c3566,0x662e6c756d090a3b,0x3031662509203233\n"
".quad 0x2c36396625202c32,0x0a3b313031662520,0x363109636f6c2e09,0x090a300939323209\n"
".quad 0x203233662e64616d,0x6625202c31662509,0x38396625202c3539,0x090a3b316625202c\n"
".quad 0x09363109636f6c2e,0x6d090a3009303332,0x09203233662e6461,0x396625202c326625\n"
".quad 0x3030316625202c35,0x090a3b326625202c,0x09363109636f6c2e,0x6d090a3009313332\n"
".quad 0x09203233662e6461,0x396625202c336625,0x3230316625202c35,0x090a3b336625202c\n"
".quad 0x09363109636f6c2e,0x6c090a3009343332,0x2e6d617261702e64,0x6472250920343675\n"
".quad 0x635f5f5b202c3033,0x5f6d726170616475,0x65746e6935315a5f,0x646f426574617267\n"
".quad 0x4531624c49736569,0x616f6c6636507645,0x5f31535f31533474,0x6e5f6966665f3153\n"
".quad 0x0a3b5d736f507765,0x3436752e64646109,0x2c31336472250920,0x202c303364722520\n"
".quad 0x73090a3b31647225,0x6c61626f6c672e74,0x203233662e34762e,0x2b31336472255b09\n"
".quad 0x3166257b202c5d30,0x3366252c3266252c,0x090a3b7d3466252c,0x09363109636f6c2e\n"
".quad 0x6c090a3009353332,0x2e6d617261702e64,0x6472250920343675,0x635f5f5b202c3233\n"
".quad 0x5f6d726170616475,0x65746e6935315a5f,0x646f426574617267,0x4531624c49736569\n"
".quad 0x616f6c6636507645,0x5f31535f31533474,0x6e5f6966665f3153,0x0a3b5d6c65567765\n"
".quad 0x3436752e64646109,0x2c33336472250920,0x202c323364722520,0x73090a3b31647225\n"
".quad 0x6c61626f6c672e74,0x203233662e34762e,0x2b33336472255b09,0x3966257b202c5d30\n"
".quad 0x2c30303166252c38,0x66252c3230316625,0x6c2e090a3b7d3439,0x333209363109636f\n"
".quad 0x697865090a300936,0x6557444c240a3b74,0x6935315a5f5f646e,0x657461726765746e\n"
".quad 0x4c49736569646f42,0x6636507645453162,0x5f31533474616f6c,0x66665f31535f3153\n"
".quad 0x2f2f207d090a3a69,0x746e6935315a5f20,0x6f42657461726765,0x31624c4973656964\n"
".quad 0x6f6c663650764545,0x31535f3153347461,0x0a6966665f31535f,0x000000000000000a\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_13$[2492];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_13",(char*)__deviceText_$compute_13$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_13", (char*)__deviceText_$sm_13$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_13$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0xa14f518d,(char*)"832bfd2412494d29",(char*)"/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/nbody/bodysystemcuda.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0xf055b1b9,&__elfEntries1};
# 3 "/tmp/tmpxft_0000206f_00000000-1_bodysystemcuda.cudafe1.stub.c" 2
struct __T20 {float4 *__par0;float4 *__par1;float4 *__par2;float4 *__par3;float __par4;float __par5;int __par6;int __dummy_field;};
struct __T21 {float4 *__par0;float4 *__par1;float4 *__par2;float4 *__par3;float __par4;float __par5;int __par6;int __dummy_field;};
static void __device_stub__Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi(float4 *, float4 *, float4 *, float4 *, float, float, int);
static void __device_stub__Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi(float4 *, float4 *, float4 *, float4 *, float, float, int);
static void __sti____cudaRegisterAll_49_tmpxft_0000206f_00000000_4_bodysystemcuda_cpp1_ii_0d741ed4(void) __attribute__((__constructor__));
static void __device_stub__Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi(float4 *__par0, float4 *__par1, float4 *__par2, float4 *__par3, float __par4, float __par5, int __par6){ struct __T20 *__T238 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T238->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T238->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T238->__par2) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T238->__par3) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T238->__par4) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T238->__par5) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T238->__par6) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float4 *, float4 *, float4 *, float4 *, float, float, int))integrateBodies<(bool)0> )); (void)cudaLaunch(((char *)((void ( *)(float4 *, float4 *, float4 *, float4 *, float, float, int))integrateBodies<(bool)0> ))); };}
template<> void __wrapper__device_stub_integrateBodies<false>( float4 *&__cuda_0,float4 *&__cuda_1,float4 *&__cuda_2,float4 *&__cuda_3,float &__cuda_4,float &__cuda_5,int &__cuda_6){__device_stub__Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);}
static void __device_stub__Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi(float4 *__par0, float4 *__par1, float4 *__par2, float4 *__par3, float __par4, float __par5, int __par6){ struct __T21 *__T239 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T239->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T239->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T239->__par2) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T239->__par3) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T239->__par4) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T239->__par5) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T239->__par6) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float4 *, float4 *, float4 *, float4 *, float, float, int))integrateBodies<(bool)1> )); (void)cudaLaunch(((char *)((void ( *)(float4 *, float4 *, float4 *, float4 *, float, float, int))integrateBodies<(bool)1> ))); };}
template<> void __wrapper__device_stub_integrateBodies<true>( float4 *&__cuda_0,float4 *&__cuda_1,float4 *&__cuda_2,float4 *&__cuda_3,float &__cuda_4,float &__cuda_5,int &__cuda_6){__device_stub__Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);}
static void __sti____cudaRegisterAll_49_tmpxft_0000206f_00000000_4_bodysystemcuda_cpp1_ii_0d741ed4(void){__cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float4 *, float4 *, float4 *, float4 *, float, float, int))integrateBodies<(bool)1> ), (char*)"_Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi", "_Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float4 *, float4 *, float4 *, float4 *, float, float, int))integrateBodies<(bool)0> ), (char*)"_Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi", "_Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&softeningSquared, (char*)"softeningSquared", "softeningSquared", 0, 4, 1, 0);}
# 1 "/tmp/tmpxft_0000206f_00000000-1_bodysystemcuda.cudafe1.stub.c" 2
