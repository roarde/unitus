#if defined (__x86_64__) || defined (USE_SSE2)
#include "yescrypt-simd.c"
#else
#include "yescrypt-opt.c"
#endif
