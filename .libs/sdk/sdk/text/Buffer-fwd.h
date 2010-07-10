/* text/Buffer header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___text_Buffer_fwd___
#define ___text_Buffer_fwd___

struct _text_Buffer__Buffer;
typedef struct _text_Buffer__Buffer text_Buffer__Buffer;
struct _text_Buffer__BufferWriter;
typedef struct _text_Buffer__BufferWriter text_Buffer__BufferWriter;
struct _text_Buffer__BufferReader;
typedef struct _text_Buffer__BufferReader text_Buffer__BufferReader;
struct _text_Buffer__BufferClass;
typedef struct _text_Buffer__BufferClass text_Buffer__BufferClass;
struct _text_Buffer__BufferWriterClass;
typedef struct _text_Buffer__BufferWriterClass text_Buffer__BufferWriterClass;
struct _text_Buffer__BufferReaderClass;
typedef struct _text_Buffer__BufferReaderClass text_Buffer__BufferReaderClass;

#include <sdk/lang/memory-fwd.h>
#include <sdk/lang/stdio-fwd.h>
#include <sdk/lang/string-fwd.h>
#include <sdk/lang/system-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/vararg-fwd.h>
#include <sdk/io/Writer-fwd.h>
#include <sdk/io/Reader-fwd.h>
text_Buffer__BufferClass *text_Buffer__Buffer_class();
text_Buffer__Buffer* text_Buffer__Buffer_new();
void text_Buffer__Buffer_init(text_Buffer__Buffer* this);
text_Buffer__Buffer* text_Buffer__Buffer_new_withCapa(lang_types__SizeT capacity);
void text_Buffer__Buffer_init_withCapa(text_Buffer__Buffer* this, lang_types__SizeT capacity);
text_Buffer__Buffer* text_Buffer__Buffer_new_withContent(lang_types__String data);
void text_Buffer__Buffer_init_withContent(text_Buffer__Buffer* this, lang_types__String data);
void text_Buffer__Buffer_append_str(text_Buffer__Buffer* this, lang_types__String str);
void text_Buffer__Buffer_append_str_impl(text_Buffer__Buffer* this, lang_types__String str);
void text_Buffer__Buffer_append_strWithLength(text_Buffer__Buffer* this, lang_types__String str, lang_types__SizeT length);
void text_Buffer__Buffer_append_strWithLength_impl(text_Buffer__Buffer* this, lang_types__String str, lang_types__SizeT length);
void text_Buffer__Buffer_append_chr(text_Buffer__Buffer* this, lang_types__Char chr);
void text_Buffer__Buffer_append_chr_impl(text_Buffer__Buffer* this, lang_types__Char chr);
lang_types__Int text_Buffer__Buffer_get_strWithLengthOffset(text_Buffer__Buffer* this, lang_types__Char* str, lang_types__SizeT offset, lang_types__SizeT length);
lang_types__Int text_Buffer__Buffer_get_strWithLengthOffset_impl(text_Buffer__Buffer* this, lang_types__Char* str, lang_types__SizeT offset, lang_types__SizeT length);
lang_types__Char text_Buffer__Buffer_get_chr(text_Buffer__Buffer* this, lang_types__Int offset);
lang_types__Char text_Buffer__Buffer_get_chr_impl(text_Buffer__Buffer* this, lang_types__Int offset);
void text_Buffer__Buffer_checkLength(text_Buffer__Buffer* this, lang_types__SizeT min);
void text_Buffer__Buffer_checkLength_impl(text_Buffer__Buffer* this, lang_types__SizeT min);
lang_types__String text_Buffer__Buffer_toString(text_Buffer__Buffer* this);
lang_types__String text_Buffer__Buffer_toString_impl(text_Buffer__Buffer* this);
void text_Buffer__Buffer___defaults__(text_Buffer__Buffer* this);
void text_Buffer__Buffer___defaults___impl(text_Buffer__Buffer* this);
void text_Buffer__Buffer___load__();
text_Buffer__BufferWriterClass *text_Buffer__BufferWriter_class();
text_Buffer__BufferWriter* text_Buffer__BufferWriter_new();
void text_Buffer__BufferWriter_init(text_Buffer__BufferWriter* this);
text_Buffer__BufferWriter* text_Buffer__BufferWriter_new_withBuffer(text_Buffer__Buffer* buffer);
void text_Buffer__BufferWriter_init_withBuffer(text_Buffer__BufferWriter* this, text_Buffer__Buffer* buffer);
text_Buffer__Buffer* text_Buffer__BufferWriter_buffer(text_Buffer__BufferWriter* this);
text_Buffer__Buffer* text_Buffer__BufferWriter_buffer_impl(text_Buffer__BufferWriter* this);
void text_Buffer__BufferWriter_close(text_Buffer__BufferWriter* this);
void text_Buffer__BufferWriter_close_impl(text_Buffer__BufferWriter* this);
void text_Buffer__BufferWriter_write_chr(text_Buffer__BufferWriter* this, lang_types__Char chr);
void text_Buffer__BufferWriter_write_chr_impl(text_Buffer__BufferWriter* this, lang_types__Char chr);
lang_types__SizeT text_Buffer__BufferWriter_write(text_Buffer__BufferWriter* this, lang_types__String chars, lang_types__SizeT length);
lang_types__SizeT text_Buffer__BufferWriter_write_impl(text_Buffer__BufferWriter* this, lang_types__String chars, lang_types__SizeT length);
void text_Buffer__BufferWriter_vwritef(text_Buffer__BufferWriter* this, lang_types__String fmt, lang_vararg__VaList list);
void text_Buffer__BufferWriter_vwritef_impl(text_Buffer__BufferWriter* this, lang_types__String fmt, lang_vararg__VaList list);
void text_Buffer__BufferWriter___defaults__(text_Buffer__BufferWriter* this);
void text_Buffer__BufferWriter___defaults___impl(text_Buffer__BufferWriter* this);
void text_Buffer__BufferWriter___load__();
text_Buffer__BufferReaderClass *text_Buffer__BufferReader_class();
text_Buffer__BufferReader* text_Buffer__BufferReader_new();
void text_Buffer__BufferReader_init(text_Buffer__BufferReader* this);
text_Buffer__BufferReader* text_Buffer__BufferReader_new_withBuffer(text_Buffer__Buffer* buffer);
void text_Buffer__BufferReader_init_withBuffer(text_Buffer__BufferReader* this, text_Buffer__Buffer* buffer);
text_Buffer__Buffer* text_Buffer__BufferReader_buffer(text_Buffer__BufferReader* this);
text_Buffer__Buffer* text_Buffer__BufferReader_buffer_impl(text_Buffer__BufferReader* this);
void text_Buffer__BufferReader_close(text_Buffer__BufferReader* this);
void text_Buffer__BufferReader_close_impl(text_Buffer__BufferReader* this);
lang_types__SizeT text_Buffer__BufferReader_read(text_Buffer__BufferReader* this, lang_types__String chars, lang_types__Int offset, lang_types__Int count);
lang_types__SizeT text_Buffer__BufferReader_read_impl(text_Buffer__BufferReader* this, lang_types__String chars, lang_types__Int offset, lang_types__Int count);
lang_types__Char text_Buffer__BufferReader_read_char(text_Buffer__BufferReader* this);
lang_types__Char text_Buffer__BufferReader_read_char_impl(text_Buffer__BufferReader* this);
lang_types__Bool text_Buffer__BufferReader_hasNext(text_Buffer__BufferReader* this);
lang_types__Bool text_Buffer__BufferReader_hasNext_impl(text_Buffer__BufferReader* this);
void text_Buffer__BufferReader_rewind(text_Buffer__BufferReader* this, lang_types__Int offset);
void text_Buffer__BufferReader_rewind_impl(text_Buffer__BufferReader* this, lang_types__Int offset);
lang_types__Long text_Buffer__BufferReader_mark(text_Buffer__BufferReader* this);
lang_types__Long text_Buffer__BufferReader_mark_impl(text_Buffer__BufferReader* this);
void text_Buffer__BufferReader_reset(text_Buffer__BufferReader* this, lang_types__Long marker);
void text_Buffer__BufferReader_reset_impl(text_Buffer__BufferReader* this, lang_types__Long marker);
void text_Buffer__BufferReader___defaults__(text_Buffer__BufferReader* this);
void text_Buffer__BufferReader___defaults___impl(text_Buffer__BufferReader* this);
void text_Buffer__BufferReader___load__();
void text_Buffer_load();

#endif // ___text_Buffer_fwd___
