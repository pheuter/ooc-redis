/* lang/vararg header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_vararg_fwd___
#define ___lang_vararg_fwd___

#include <stdarg.h>

typedef va_list lang_vararg__VaList;
struct _lang_vararg__VaListClass;
typedef struct _lang_vararg__VaListClass lang_vararg__VaListClass;

#include <sdk/lang/memory-fwd.h>
#include <sdk/lang/stdio-fwd.h>
#include <sdk/lang/string-fwd.h>
#include <sdk/lang/system-fwd.h>
#include <sdk/lang/types-fwd.h>
lang_vararg__VaListClass *lang_vararg__VaList_class();
void lang_vararg__VaList___load__();
void lang_vararg_load();

#endif // ___lang_vararg_fwd___
