/* lang/memory header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_memory___
#define ___lang_memory___

#include <sdk/lang/memory-fwd.h>

#ifdef OOC_FROM_C
#define gc_malloc(size) (void*) lang_memory__gc_malloc((size))
#define gc_malloc(size) (void*) GC_MALLOC((size))
#define gc_malloc_atomic(size) (void*) malloc((size))
#define gc_malloc_atomic(size) (void*) GC_MALLOC_ATOMIC((size))
#define gc_realloc(ptr, size) (void*) realloc((void*) (ptr), (size))
#define gc_realloc(ptr, size) (void*) GC_REALLOC((void*) (ptr), (size))
#define gc_calloc(nmemb, size) (void*) calloc((nmemb), (size))
#define gc_calloc(nmemb, size) (void*) lang_memory__gc_calloc((nmemb), (size))
#endif

#endif // ___lang_memory___
