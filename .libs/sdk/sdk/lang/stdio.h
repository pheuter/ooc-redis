/* lang/stdio header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_stdio___
#define ___lang_stdio___

#include <sdk/lang/stdio-fwd.h>
#include <sdk/lang/types.h>

struct _lang_stdio__FILEClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_stdio__FStreamClass {
    struct _lang_types__ClassClass __super__;
    lang_stdio__FStream (*open)(lang_types__String, lang_types__String);
    lang_types__Int (*close)(lang_stdio__FStream);
    void (*flush)(lang_stdio__FStream);
    lang_types__Char (*readChar)(lang_stdio__FStream);
    lang_types__String (*readLine_defaults)(lang_stdio__FStream);
    lang_types__String (*readLine)(lang_stdio__FStream, lang_types__Int);
    lang_types__Bool (*hasNext)(lang_stdio__FStream);
    void (*write_chr)(lang_stdio__FStream, lang_types__Char);
    void (*write)(lang_stdio__FStream, lang_types__String);
    lang_types__SizeT (*write_precise)(lang_stdio__FStream, lang_types__Char*, lang_types__SizeT, lang_types__SizeT);
};


#ifdef OOC_FROM_C
#define println_withStr(str) lang_stdio__println_withStr((void*) (str))
#define println() lang_stdio__println()
#define FILEClass lang_stdio__FILEClass
#define FILEClass_class() lang_stdio__FILEClass_class()
#define FILE___load__() FILE___load__()
#define FStream lang_stdio__FStream
#define FStream_class() lang_stdio__FStream_class()
#define FStreamClass lang_stdio__FStreamClass
#define FStreamClass_class() lang_stdio__FStreamClass_class()
#define FStream_open(filename, mode) lang_stdio__FStream_open((filename), (mode))
#define FStream_close(_this_) lang_stdio__FStream_close((void*) (_this_))
#define FStream_flush(_this_) lang_stdio__FStream_flush((void*) (_this_))
#define FStream_readChar(_this_) lang_stdio__FStream_readChar((void*) (_this_))
#define FStream_readLine_defaults(_this_) lang_stdio__FStream_readLine_defaults((void*) (_this_))
#define FStream_readLine(_this_, chunk) lang_stdio__FStream_readLine((void*) (_this_), (chunk))
#define FStream_hasNext(_this_) lang_stdio__FStream_hasNext((void*) (_this_))
#define FStream_write_chr(_this_, chr) lang_stdio__FStream_write_chr((void*) (_this_), (chr))
#define FStream_write(_this_, str) lang_stdio__FStream_write((void*) (_this_), (str))
#define FStream_write_precise(_this_, str, offset, length) lang_stdio__FStream_write_precise((void*) (_this_), (void*) (str), (offset), (length))
#define FStream___load__() lang_stdio__FStream___load__()
#endif

#endif // ___lang_stdio___
