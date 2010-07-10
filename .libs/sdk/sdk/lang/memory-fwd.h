/* lang/memory header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_memory_fwd___
#define ___lang_memory_fwd___

#include <memory.h>
#if defined(__OOC_USE_GC__)
#include <gc/gc.h>
#endif

#include <sdk/lang/stdio-fwd.h>
#include <sdk/lang/string-fwd.h>
#include <sdk/lang/system-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/vararg-fwd.h>
void lang_memory_load();
#if !(defined(__OOC_USE_GC__))
lang_types__Pointer lang_memory__gc_malloc(lang_types__SizeT size);
#endif
#if defined(__OOC_USE_GC__)
lang_types__Pointer lang_memory__gc_calloc(lang_types__SizeT nmemb, lang_types__SizeT size);
#endif

#endif // ___lang_memory_fwd___
