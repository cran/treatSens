/* #define HAVE_ALLOCA_H 1 */
#define HAVE_GETTIMEOFDAY 1
#define HAVE_STDINT_H 1
#define HAVE_SYS_TIME_H 1
#define STDC_HEADERS 1
#define HAVE_SNPRINTF 1
#define HAVE_MALLOC_H 1
#define HAVE_SYS_TYPES_H 1
#if (defined(_MSC_VER) && _M_IX86_FP >= 2) || defined(__SSE2__) || defined(__ia64) || defined(__x64_64__) || defined(_M_X64)
#  define HAVE_SSE2 1
#endif

#define PACKAGE_BUGREPORT "vdorie@gmail.com"
#define PACKAGE_NAME "treatSens"
#define PACKAGE_STRING "treatSens 3.0"
#define PACKAGE_TARNAME "treatSens"
#define PACKAGE_VERSION "3.0"

#ifdef _WIN64
#  define SIZEOF_SIZE_T 8
#  define ALIGNOF_VOIDP 8
#else
#  define SIZEOF_SIZE_T 4
#  define ALIGNOF_VOIDP 4
#endif
