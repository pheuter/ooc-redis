/* lang/stdio header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_stdio_fwd___
#define ___lang_stdio_fwd___

#include <stdio.h>

typedef FILE* lang_stdio__FStream;
struct _lang_stdio__FILEClass;
typedef struct _lang_stdio__FILEClass lang_stdio__FILEClass;
struct _lang_stdio__FStreamClass;
typedef struct _lang_stdio__FStreamClass lang_stdio__FStreamClass;

#include <sdk/lang/memory-fwd.h>
#include <sdk/lang/string-fwd.h>
#include <sdk/lang/system-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/vararg-fwd.h>
lang_stdio__FILEClass *FILE_class();
void FILE___load__();
lang_stdio__FStreamClass *lang_stdio__FStream_class();
lang_stdio__FStream lang_stdio__FStream_open(lang_types__String filename, lang_types__String mode);
lang_types__Int lang_stdio__FStream_close(lang_stdio__FStream this);
void lang_stdio__FStream_flush(lang_stdio__FStream this);
lang_types__Char lang_stdio__FStream_readChar(lang_stdio__FStream this);
lang_types__String lang_stdio__FStream_readLine_defaults(lang_stdio__FStream this);
lang_types__String lang_stdio__FStream_readLine(lang_stdio__FStream this, lang_types__Int chunk);
lang_types__Bool lang_stdio__FStream_hasNext(lang_stdio__FStream this);
void lang_stdio__FStream_write_chr(lang_stdio__FStream this, lang_types__Char chr);
void lang_stdio__FStream_write(lang_stdio__FStream this, lang_types__String str);
lang_types__SizeT lang_stdio__FStream_write_precise(lang_stdio__FStream this, lang_types__Char* str, lang_types__SizeT offset, lang_types__SizeT length);
void lang_stdio__FStream___load__();
void lang_stdio_load();
void lang_stdio__println_withStr(lang_types__Char* str);
void lang_stdio__println();

#endif // ___lang_stdio_fwd___
