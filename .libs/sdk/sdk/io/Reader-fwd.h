/* io/Reader header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_Reader_fwd___
#define ___io_Reader_fwd___

struct _io_Reader__Reader;
typedef struct _io_Reader__Reader io_Reader__Reader;
struct _io_Reader__ReaderClass;
typedef struct _io_Reader__ReaderClass io_Reader__ReaderClass;

#include <sdk/lang/memory-fwd.h>
#include <sdk/lang/stdio-fwd.h>
#include <sdk/lang/string-fwd.h>
#include <sdk/lang/system-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/vararg-fwd.h>
#include <sdk/text/Buffer-fwd.h>

#ifndef __FUNC___String_Bool__DEFINE
#define __FUNC___String_Bool__DEFINE

typedef lang_types__Bool (*__FUNC___String_Bool)(lang_types__String);

#endif

io_Reader__ReaderClass *io_Reader__Reader_class();
void io_Reader__Reader_init(io_Reader__Reader* this);
lang_types__SizeT io_Reader__Reader_read(io_Reader__Reader* this, lang_types__Char* chars, lang_types__Int offset, lang_types__Int count);
lang_types__Char io_Reader__Reader_read_char(io_Reader__Reader* this);
lang_types__String io_Reader__Reader_readUntil(io_Reader__Reader* this, lang_types__Char end);
lang_types__String io_Reader__Reader_readUntil_impl(io_Reader__Reader* this, lang_types__Char end);
void io_Reader__Reader_skipUntil(io_Reader__Reader* this, lang_types__Char end);
void io_Reader__Reader_skipUntil_impl(io_Reader__Reader* this, lang_types__Char end);
lang_types__String io_Reader__Reader_readLine(io_Reader__Reader* this);
lang_types__String io_Reader__Reader_readLine_impl(io_Reader__Reader* this);
void io_Reader__Reader_skipLine(io_Reader__Reader* this);
void io_Reader__Reader_skipLine_impl(io_Reader__Reader* this);
lang_types__Bool io_Reader__Reader_eachLine(io_Reader__Reader* this, __FUNC___String_Bool f);
lang_types__Bool io_Reader__Reader_eachLine_impl(io_Reader__Reader* this, __FUNC___String_Bool f);
lang_types__Char io_Reader__Reader_peek(io_Reader__Reader* this);
lang_types__Char io_Reader__Reader_peek_impl(io_Reader__Reader* this);
void io_Reader__Reader_skipWhile(io_Reader__Reader* this, lang_types__Char unwanted);
void io_Reader__Reader_skipWhile_impl(io_Reader__Reader* this, lang_types__Char unwanted);
lang_types__Bool io_Reader__Reader_hasNext(io_Reader__Reader* this);
void io_Reader__Reader_rewind(io_Reader__Reader* this, lang_types__Int offset);
lang_types__Long io_Reader__Reader_mark(io_Reader__Reader* this);
void io_Reader__Reader_reset(io_Reader__Reader* this, lang_types__Long marker);
void io_Reader__Reader_skip(io_Reader__Reader* this, lang_types__Int offset);
void io_Reader__Reader_skip_impl(io_Reader__Reader* this, lang_types__Int offset);
void io_Reader__Reader_close(io_Reader__Reader* this);
void io_Reader__Reader___defaults__(io_Reader__Reader* this);
void io_Reader__Reader___defaults___impl(io_Reader__Reader* this);
void io_Reader__Reader___load__();
void io_Reader_load();

#endif // ___io_Reader_fwd___
