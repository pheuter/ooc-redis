/* lang/types header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_types___
#define ___lang_types___

#include <sdk/lang/types-fwd.h>

struct _lang_types__Object {
    lang_types__Class* class;
};


struct _lang_types__Class {
    struct _lang_types__Object __super__;
    lang_types__SizeT instanceSize;
    lang_types__SizeT size;
    lang_types__String name;
    lang_types__Class* super;
};


struct _lang_types__None {
    struct _lang_types__Object __super__;
};


struct _lang_types__Comparable {
    struct _lang_types__Object __super__;
};


struct _Comparable__reference {
    lang_types__ComparableClass* impl;
    lang_types__Object* obj;
};

struct _lang_types__Range {
    lang_types__Int min;
    lang_types__Int max;
};

struct _lang_types__Iterable {
    struct _lang_types__Object __super__;
    lang_types__Class* T;
};


struct _lang_types__BackIterable {
    struct _lang_types__Iterable __super__;
};


struct _lang_types__Iterator {
    struct _lang_types__Iterable __super__;
};


struct _lang_types__BackIterator {
    struct _lang_types__Iterator __super__;
};


struct _lang_types__ReverseIterator {
    struct _lang_types__BackIterator __super__;
    lang_types__BackIterator* iterator;
};


struct _lang_types__StringIterator {
    struct _lang_types__BackIterator __super__;
    lang_types__Int i;
    lang_types__String str;
};


struct _lang_types__Cell {
    struct _lang_types__Object __super__;
    lang_types__Class* T;
    uint8_t* val;
};


struct _lang_types__Exception {
    struct _lang_types__Object __super__;
    lang_types__Class* origin;
    lang_types__String msg;
};


struct _lang_types__ObjectClass {
    struct _lang_types__Class __super__;
    void (*__defaults__)(lang_types__Object*);
    void (*__destroy__)(lang_types__Object*);
    lang_types__Bool (*instanceOf)(lang_types__Object*, lang_types__Class*);
    void (*__load__)();
};


struct _lang_types__ClassClass {
    struct _lang_types__ObjectClass __super__;
    lang_types__Object* (*alloc__class)(lang_types__Class*);
    lang_types__Bool (*inheritsFrom__class)(lang_types__Class*, lang_types__Class*);
};


struct _lang_types__ArrayClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_types__NoneClass {
    struct _lang_types__ClassClass __super__;
    lang_types__None* (*new)();
    void (*init)(lang_types__None*);
};


struct _lang_types__VoidClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_types__PointerClass {
    struct _lang_types__ClassClass __super__;
    lang_types__String (*toString)(lang_types__Pointer);
};


struct _lang_types__CharClass {
    struct _lang_types__ClassClass __super__;
    lang_types__Bool (*isAlphaNumeric)(lang_types__Char);
    lang_types__Bool (*isAlpha)(lang_types__Char);
    lang_types__Bool (*isLower)(lang_types__Char);
    lang_types__Bool (*isUpper)(lang_types__Char);
    lang_types__Bool (*isDigit)(lang_types__Char);
    lang_types__Bool (*isHexDigit)(lang_types__Char);
    lang_types__Bool (*isControl)(lang_types__Char);
    lang_types__Bool (*isGraph)(lang_types__Char);
    lang_types__Bool (*isPrintable)(lang_types__Char);
    lang_types__Bool (*isPunctuation)(lang_types__Char);
    lang_types__Bool (*isWhitespace)(lang_types__Char);
    lang_types__Bool (*isBlank)(lang_types__Char);
    lang_types__Int (*toInt)(lang_types__Char);
    lang_types__String (*toString)(lang_types__Char);
    void (*print)(lang_types__Char);
    void (*println)(lang_types__Char);
};


struct _lang_types__SCharClass {
    struct _lang_types__CharClass __super__;
};


struct _lang_types__UCharClass {
    struct _lang_types__CharClass __super__;
};


struct _lang_types__WCharClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_types__StringClass {
    struct _lang_types__ClassClass __super__;
    lang_types__String (*new_withLength)(lang_types__Int);
    lang_types__String (*new_withChar)(lang_types__Char);
    lang_types__Bool (*compare)(lang_types__String, lang_types__String, lang_types__Int, lang_types__Int);
    lang_types__Bool (*compare_implicitLength)(lang_types__String, lang_types__String, lang_types__Int);
    lang_types__Bool (*compare_whole)(lang_types__String, lang_types__String);
    lang_types__Bool (*equals)(lang_types__String, lang_types__String);
    lang_types__Int (*toInt)(lang_types__String);
    lang_types__Int (*toInt_withBase)(lang_types__String, lang_types__Int);
    lang_types__Long (*toLong)(lang_types__String);
    lang_types__Long (*toLong_withBase)(lang_types__String, lang_types__Long);
    lang_types__LLong (*toLLong)(lang_types__String);
    lang_types__LLong (*toLLong_withBase)(lang_types__String, lang_types__LLong);
    lang_types__ULong (*toULong)(lang_types__String);
    lang_types__ULong (*toULong_withBase)(lang_types__String, lang_types__ULong);
    lang_types__Float (*toFloat)(lang_types__String);
    lang_types__Double (*toDouble)(lang_types__String);
    lang_types__LDouble (*toLDouble)(lang_types__String);
    lang_types__Bool (*isEmpty)(lang_types__String);
    lang_types__Bool (*startsWith)(lang_types__String, lang_types__String);
    lang_types__Bool (*startsWith_withChar)(lang_types__String, lang_types__Char);
    lang_types__Bool (*endsWith)(lang_types__String, lang_types__String);
    lang_types__Int (*indexOf_charZero)(lang_types__String, lang_types__Char);
    lang_types__Int (*indexOf_char)(lang_types__String, lang_types__Char, lang_types__Int);
    lang_types__Int (*indexOf_stringZero)(lang_types__String, lang_types__String);
    lang_types__Int (*indexOf_string)(lang_types__String, lang_types__String, lang_types__Int);
    lang_types__Bool (*contains_char)(lang_types__String, lang_types__Char);
    lang_types__Bool (*contains_string)(lang_types__String, lang_types__String);
    lang_types__String (*trim_whitespace)(lang_types__String);
    lang_types__String (*trim)(lang_types__String, lang_types__Char);
    lang_types__String (*trim_string)(lang_types__String, lang_types__String);
    lang_types__String (*trimLeft_space)(lang_types__String);
    lang_types__String (*trimLeft)(lang_types__String, lang_types__Char);
    lang_types__String (*trimLeft_string)(lang_types__String, lang_types__String);
    lang_types__String (*trimRight_space)(lang_types__String);
    lang_types__String (*trimRight)(lang_types__String, lang_types__Char);
    lang_types__String (*trimRight_string)(lang_types__String, lang_types__String);
    lang_types__Char (*first)(lang_types__String);
    lang_types__Int (*lastIndex)(lang_types__String);
    lang_types__Char (*last)(lang_types__String);
    lang_types__Int (*lastIndexOf)(lang_types__String, lang_types__Char);
    lang_types__String (*substring_tillEnd)(lang_types__String, lang_types__Int);
    lang_types__String (*substring)(lang_types__String, lang_types__Int, lang_types__Int);
    lang_types__String (*reverse)(lang_types__String);
    void (*print)(lang_types__String);
    void (*println)(lang_types__String);
    lang_types__String (*times)(lang_types__String, lang_types__Int);
    lang_types__String (*clone)(lang_types__String);
    lang_types__String (*append)(lang_types__String, lang_types__String);
    lang_types__String (*append_char)(lang_types__String, lang_types__Char);
    lang_types__Int (*count_char)(lang_types__String, lang_types__Char);
    lang_types__Int (*count_string)(lang_types__String, lang_types__String);
    lang_types__String (*replace)(lang_types__String, lang_types__Char, lang_types__Char);
    lang_types__String (*replace_string)(lang_types__String, lang_types__String, lang_types__String);
    lang_types__String (*prepend)(lang_types__String, lang_types__String);
    lang_types__String (*prepend_char)(lang_types__String, lang_types__Char);
    lang_types__String (*toLower)(lang_types__String);
    lang_types__String (*toUpper)(lang_types__String);
    lang_types__Char (*charAt)(lang_types__String, lang_types__SizeT);
    lang_types__String (*format)(lang_types__String, ...);
    void (*printf)(lang_types__String, ...);
    void (*vprintf)(lang_types__String, lang_vararg__VaList);
    void (*printfln)(lang_types__String, ...);
    lang_types__Int (*scanf)(lang_types__String, lang_types__String, ...);
    lang_types__StringIterator* (*iterator)(lang_types__String);
    lang_types__StringIterator* (*forward)(lang_types__String);
    lang_types__BackIterator* (*backward)(lang_types__String);
    lang_types__StringIterator* (*backIterator)(lang_types__String);
};


struct _lang_types__ComparableClass {
    struct _lang_types__ClassClass __super__;
    lang_types__Int (*compareTo)(void*, lang_types__Class*, uint8_t*);
};


struct _lang_types__LLongClass {
    struct _lang_types__ClassClass __super__;
    lang_types__String (*toString)(lang_types__LLong);
    lang_types__String (*toHexString)(lang_types__LLong);
    lang_types__Bool (*isOdd)(lang_types__LLong);
    lang_types__Bool (*isEven)(lang_types__LLong);
    lang_types__Bool (*in)(lang_types__LLong, lang_types__Range);
};


struct _lang_types__LongClass {
    struct _lang_types__LLongClass __super__;
};


struct _lang_types__IntClass {
    struct _lang_types__LLongClass __super__;
};


struct _lang_types__ShortClass {
    struct _lang_types__LLongClass __super__;
};


struct _lang_types__ULLongClass {
    struct _lang_types__LLongClass __super__;
};


struct _lang_types__ULongClass {
    struct _lang_types__ULLongClass __super__;
};


struct _lang_types__UIntClass {
    struct _lang_types__ULLongClass __super__;
};


struct _lang_types__UShortClass {
    struct _lang_types__ULLongClass __super__;
};


struct _lang_types__Int8Class {
    struct _lang_types__LLongClass __super__;
};


struct _lang_types__Int16Class {
    struct _lang_types__LLongClass __super__;
};


struct _lang_types__Int32Class {
    struct _lang_types__LLongClass __super__;
};


struct _lang_types__Int64Class {
    struct _lang_types__LLongClass __super__;
};


struct _lang_types__UInt8Class {
    struct _lang_types__ULLongClass __super__;
};


struct _lang_types__UInt16Class {
    struct _lang_types__ULLongClass __super__;
};


struct _lang_types__UInt32Class {
    struct _lang_types__ULLongClass __super__;
};


struct _lang_types__UInt64Class {
    struct _lang_types__ULLongClass __super__;
};


struct _lang_types__OctetClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_types__SizeTClass {
    struct _lang_types__LLongClass __super__;
};


struct _lang_types__BoolClass {
    struct _lang_types__ClassClass __super__;
    lang_types__String (*toString)(lang_types__Bool);
};


struct _lang_types__LDoubleClass {
    struct _lang_types__ClassClass __super__;
    lang_types__String (*toString)(lang_types__LDouble);
    lang_types__LDouble (*abs)(lang_types__LDouble);
};


struct _lang_types__FloatClass {
    struct _lang_types__LDoubleClass __super__;
};


struct _lang_types__DoubleClass {
    struct _lang_types__LDoubleClass __super__;
};


struct _lang_types__RangeClass {
    struct _lang_types__ClassClass __super__;
    lang_types__Range (*new)(lang_types__Int, lang_types__Int);
};


struct _lang_types__IterableClass {
    struct _lang_types__ClassClass __super__;
    void (*init)(lang_types__Iterable*);
    lang_types__Iterator* (*iterator)(lang_types__Iterable*);
    structs_ArrayList__ArrayList* (*toList)(lang_types__Iterable*);
};


struct _lang_types__BackIterableClass {
    struct _lang_types__IterableClass __super__;
    lang_types__BackIterator* (*backIterator)(lang_types__BackIterable*);
    lang_types__BackIterator* (*forward)(lang_types__BackIterable*);
    lang_types__BackIterator* (*backward)(lang_types__BackIterable*);
};


struct _lang_types__IteratorClass {
    struct _lang_types__IterableClass __super__;
    lang_types__Bool (*hasNext)(lang_types__Iterator*);
    void (*next)(lang_types__Iterator*, uint8_t*);
    lang_types__Bool (*remove)(lang_types__Iterator*);
};


struct _lang_types__BackIteratorClass {
    struct _lang_types__IteratorClass __super__;
    lang_types__Bool (*hasPrev)(lang_types__BackIterator*);
    void (*prev)(lang_types__BackIterator*, uint8_t*);
    lang_types__ReverseIterator* (*reversed)(lang_types__BackIterator*);
};


struct _lang_types__ReverseIteratorClass {
    struct _lang_types__BackIteratorClass __super__;
    lang_types__ReverseIterator* (*new)(lang_types__Class*);
    lang_types__Bool (*hasNext)(lang_types__ReverseIterator*);
    void (*next)(lang_types__ReverseIterator*, uint8_t*);
    lang_types__Bool (*remove)(lang_types__ReverseIterator*);
};


struct _lang_types__StringIteratorClass {
    struct _lang_types__BackIteratorClass __super__;
    lang_types__StringIterator* (*new_withStr)(lang_types__Class*, lang_types__String);
    void (*init_withStr)(lang_types__StringIterator*, lang_types__String);
    lang_types__Bool (*hasNext)(lang_types__StringIterator*);
    void (*next)(lang_types__StringIterator*, uint8_t*);
    lang_types__Bool (*remove)(lang_types__StringIterator*);
};


struct _lang_types__CellClass {
    struct _lang_types__ClassClass __super__;
    lang_types__Cell* (*new)(lang_types__Class*, uint8_t*);
    void (*init)(lang_types__Cell*, uint8_t*);
};


struct _lang_types__ExceptionClass {
    struct _lang_types__ClassClass __super__;
    lang_types__Exception* (*new_originMsg)(lang_types__Class*, lang_types__String);
    void (*init_originMsg)(lang_types__Exception*, lang_types__Class*, lang_types__String);
    lang_types__Exception* (*new_noOrigin)(lang_types__String);
    void (*init_noOrigin)(lang_types__Exception*, lang_types__String);
    void (*crash)(lang_types__Exception*);
    lang_types__String (*getMessage)(lang_types__Exception*);
    void (*print)(lang_types__Exception*);
    void (*throw)(lang_types__Exception*);
};


#ifdef OOC_FROM_C
#define Object lang_types__Object
#define Object_class() lang_types__Object_class()
#define ObjectClass lang_types__ObjectClass
#define ObjectClass_class() lang_types__ObjectClass_class()
#define Object___defaults__(_this_) lang_types__Object___defaults__((void*) (_this_))
#define Object___destroy__(_this_) lang_types__Object___destroy__((void*) (_this_))
#define Object_instanceOf(_this_, T) lang_types__Object_instanceOf((void*) (_this_), (void*) (T))
#define Object___load__() lang_types__Object___load__()
#define Class lang_types__Class
#define Class_class() lang_types__Class_class()
#define ClassClass lang_types__ClassClass
#define ClassClass_class() lang_types__ClassClass_class()
#define Class_alloc__class(_this_) (void*) lang_types__Class_alloc__class((void*) (_this_))
#define Class_inheritsFrom__class(_this_, T) lang_types__Class_inheritsFrom__class((void*) (_this_), (void*) (T))
#define Class___defaults__(_this_) lang_types__Class___defaults__((void*) (_this_))
#define Class___load__() lang_types__Class___load__()
#define Array lang_types__Array
#define Array_class() lang_types__Array_class()
#define ArrayClass lang_types__ArrayClass
#define ArrayClass_class() lang_types__ArrayClass_class()
#define Array_free(_this_) _lang_array__Array_free((void*) (_this_))
#define Array___load__() lang_types__Array___load__()
#define None lang_types__None
#define None_class() lang_types__None_class()
#define NoneClass lang_types__NoneClass
#define NoneClass_class() lang_types__NoneClass_class()
#define None_new() (void*) lang_types__None_new()
#define None_init(_this_) lang_types__None_init((void*) (_this_))
#define None___defaults__(_this_) lang_types__None___defaults__((void*) (_this_))
#define None___load__() lang_types__None___load__()
#define Void lang_types__Void
#define Void_class() lang_types__Void_class()
#define VoidClass lang_types__VoidClass
#define VoidClass_class() lang_types__VoidClass_class()
#define Void___load__() lang_types__Void___load__()
#define Pointer lang_types__Pointer
#define Pointer_class() lang_types__Pointer_class()
#define PointerClass lang_types__PointerClass
#define PointerClass_class() lang_types__PointerClass_class()
#define Pointer_toString(_this_) lang_types__Pointer_toString((void*) (_this_))
#define Pointer___load__() lang_types__Pointer___load__()
#define Char lang_types__Char
#define Char_class() lang_types__Char_class()
#define CharClass lang_types__CharClass
#define CharClass_class() lang_types__CharClass_class()
#define Char_isAlphaNumeric(_this_) lang_types__Char_isAlphaNumeric((void*) (_this_))
#define Char_isAlpha(_this_) lang_types__Char_isAlpha((void*) (_this_))
#define Char_isLower(_this_) lang_types__Char_isLower((void*) (_this_))
#define Char_isUpper(_this_) lang_types__Char_isUpper((void*) (_this_))
#define Char_isDigit(_this_) lang_types__Char_isDigit((void*) (_this_))
#define Char_isHexDigit(_this_) lang_types__Char_isHexDigit((void*) (_this_))
#define Char_isControl(_this_) lang_types__Char_isControl((void*) (_this_))
#define Char_isGraph(_this_) lang_types__Char_isGraph((void*) (_this_))
#define Char_isPrintable(_this_) lang_types__Char_isPrintable((void*) (_this_))
#define Char_isPunctuation(_this_) lang_types__Char_isPunctuation((void*) (_this_))
#define Char_isWhitespace(_this_) lang_types__Char_isWhitespace((void*) (_this_))
#define Char_isBlank(_this_) lang_types__Char_isBlank((void*) (_this_))
#define Char_toInt(_this_) lang_types__Char_toInt((void*) (_this_))
#define Char_toLower(_this_) tolower((void*) (_this_))
#define Char_toUpper(_this_) toupper((void*) (_this_))
#define Char_toString(_this_) lang_types__Char_toString((void*) (_this_))
#define Char_print(_this_) lang_types__Char_print((void*) (_this_))
#define Char_println(_this_) lang_types__Char_println((void*) (_this_))
#define Char___load__() lang_types__Char___load__()
#define SChar lang_types__SChar
#define SChar_class() lang_types__SChar_class()
#define SCharClass lang_types__SCharClass
#define SCharClass_class() lang_types__SCharClass_class()
#define SChar___load__() lang_types__SChar___load__()
#define UChar lang_types__UChar
#define UChar_class() lang_types__UChar_class()
#define UCharClass lang_types__UCharClass
#define UCharClass_class() lang_types__UCharClass_class()
#define UChar___load__() lang_types__UChar___load__()
#define WChar lang_types__WChar
#define WChar_class() lang_types__WChar_class()
#define WCharClass lang_types__WCharClass
#define WCharClass_class() lang_types__WCharClass_class()
#define WChar___load__() lang_types__WChar___load__()
#define String lang_types__String
#define String_class() lang_types__String_class()
#define StringClass lang_types__StringClass
#define StringClass_class() lang_types__StringClass_class()
#define String_new_withLength(length) lang_types__String_new_withLength((length))
#define String_new_withChar(c) lang_types__String_new_withChar((c))
#define String_compare(_this_, other, start, length) lang_types__String_compare((void*) (_this_), (other), (start), (length))
#define String_compare_implicitLength(_this_, other, start) lang_types__String_compare_implicitLength((void*) (_this_), (other), (start))
#define String_compare_whole(_this_, other) lang_types__String_compare_whole((void*) (_this_), (other))
#define String_length(_this_) strlen((void*) (_this_))
#define String_equals(_this_, other) lang_types__String_equals((void*) (_this_), (other))
#define String_toInt(_this_) lang_types__String_toInt((void*) (_this_))
#define String_toInt_withBase(_this_, base) lang_types__String_toInt_withBase((void*) (_this_), (base))
#define String_toLong(_this_) lang_types__String_toLong((void*) (_this_))
#define String_toLong_withBase(_this_, base) lang_types__String_toLong_withBase((void*) (_this_), (base))
#define String_toLLong(_this_) lang_types__String_toLLong((void*) (_this_))
#define String_toLLong_withBase(_this_, base) lang_types__String_toLLong_withBase((void*) (_this_), (base))
#define String_toULong(_this_) lang_types__String_toULong((void*) (_this_))
#define String_toULong_withBase(_this_, base) lang_types__String_toULong_withBase((void*) (_this_), (base))
#define String_toFloat(_this_) lang_types__String_toFloat((void*) (_this_))
#define String_toDouble(_this_) lang_types__String_toDouble((void*) (_this_))
#define String_toLDouble(_this_) lang_types__String_toLDouble((void*) (_this_))
#define String_isEmpty(_this_) lang_types__String_isEmpty((void*) (_this_))
#define String_startsWith(_this_, s) lang_types__String_startsWith((void*) (_this_), (s))
#define String_startsWith_withChar(_this_, c) lang_types__String_startsWith_withChar((void*) (_this_), (c))
#define String_endsWith(_this_, s) lang_types__String_endsWith((void*) (_this_), (s))
#define String_indexOf_charZero(_this_, c) lang_types__String_indexOf_charZero((void*) (_this_), (c))
#define String_indexOf_char(_this_, c, start) lang_types__String_indexOf_char((void*) (_this_), (c), (start))
#define String_indexOf_stringZero(_this_, s) lang_types__String_indexOf_stringZero((void*) (_this_), (s))
#define String_indexOf_string(_this_, s, start) lang_types__String_indexOf_string((void*) (_this_), (s), (start))
#define String_contains_char(_this_, c) lang_types__String_contains_char((void*) (_this_), (c))
#define String_contains_string(_this_, s) lang_types__String_contains_string((void*) (_this_), (s))
#define String_trim_whitespace(_this_) lang_types__String_trim_whitespace((void*) (_this_))
#define String_trim(_this_, c) lang_types__String_trim((void*) (_this_), (c))
#define String_trim_string(_this_, s) lang_types__String_trim_string((void*) (_this_), (s))
#define String_trimLeft_space(_this_) lang_types__String_trimLeft_space((void*) (_this_))
#define String_trimLeft(_this_, c) lang_types__String_trimLeft((void*) (_this_), (c))
#define String_trimLeft_string(_this_, s) lang_types__String_trimLeft_string((void*) (_this_), (s))
#define String_trimRight_space(_this_) lang_types__String_trimRight_space((void*) (_this_))
#define String_trimRight(_this_, c) lang_types__String_trimRight((void*) (_this_), (c))
#define String_trimRight_string(_this_, s) lang_types__String_trimRight_string((void*) (_this_), (s))
#define String_first(_this_) lang_types__String_first((void*) (_this_))
#define String_lastIndex(_this_) lang_types__String_lastIndex((void*) (_this_))
#define String_last(_this_) lang_types__String_last((void*) (_this_))
#define String_lastIndexOf(_this_, c) lang_types__String_lastIndexOf((void*) (_this_), (c))
#define String_substring_tillEnd(_this_, start) lang_types__String_substring_tillEnd((void*) (_this_), (start))
#define String_substring(_this_, start, end) lang_types__String_substring((void*) (_this_), (start), (end))
#define String_reverse(_this_) lang_types__String_reverse((void*) (_this_))
#define String_print(_this_) lang_types__String_print((void*) (_this_))
#define String_println(_this_) lang_types__String_println((void*) (_this_))
#define String_times(_this_, count) lang_types__String_times((void*) (_this_), (count))
#define String_clone(_this_) lang_types__String_clone((void*) (_this_))
#define String_append(_this_, other) lang_types__String_append((void*) (_this_), (other))
#define String_append_char(_this_, other) lang_types__String_append_char((void*) (_this_), (other))
#define String_count_char(_this_, what) lang_types__String_count_char((void*) (_this_), (what))
#define String_count_string(_this_, what) lang_types__String_count_string((void*) (_this_), (what))
#define String_replace(_this_, oldie, kiddo) lang_types__String_replace((void*) (_this_), (oldie), (kiddo))
#define String_replace_string(_this_, oldie, kiddo) lang_types__String_replace_string((void*) (_this_), (oldie), (kiddo))
#define String_prepend(_this_, other) lang_types__String_prepend((void*) (_this_), (other))
#define String_prepend_char(_this_, other) lang_types__String_prepend_char((void*) (_this_), (other))
#define String_toLower(_this_) lang_types__String_toLower((void*) (_this_))
#define String_toUpper(_this_) lang_types__String_toUpper((void*) (_this_))
#define String_charAt(_this_, index) lang_types__String_charAt((void*) (_this_), (index))
#define String_format(_this_, ...) lang_types__String_format((void*) (_this_), __VA_ARGS__)
#define String_printf(_this_, ...) lang_types__String_printf((void*) (_this_), __VA_ARGS__)
#define String_vprintf(_this_, list) lang_types__String_vprintf((void*) (_this_), (list))
#define String_printfln(_this_, ...) lang_types__String_printfln((void*) (_this_), __VA_ARGS__)
#define String_scanf(_this_, format, ...) lang_types__String_scanf((void*) (_this_), (format), __VA_ARGS__)
#define String_iterator(_this_) (void*) lang_types__String_iterator((void*) (_this_))
#define String_forward(_this_) (void*) lang_types__String_forward((void*) (_this_))
#define String_backward(_this_) (void*) lang_types__String_backward((void*) (_this_))
#define String_backIterator(_this_) (void*) lang_types__String_backIterator((void*) (_this_))
#define String___load__() lang_types__String___load__()
#define Comparable lang_types__Comparable
#define Comparable_class() lang_types__Comparable_class()
#define ComparableClass lang_types__ComparableClass
#define ComparableClass_class() lang_types__ComparableClass_class()
#define Comparable_compareTo(_this_, T, other) lang_types__Comparable_compareTo((void*) (_this_), (T), (other))
#define LLong lang_types__LLong
#define LLong_class() lang_types__LLong_class()
#define LLongClass lang_types__LLongClass
#define LLongClass_class() lang_types__LLongClass_class()
#define LLong_toString(_this_) lang_types__LLong_toString((void*) (_this_))
#define LLong_toHexString(_this_) lang_types__LLong_toHexString((void*) (_this_))
#define LLong_isOdd(_this_) lang_types__LLong_isOdd((void*) (_this_))
#define LLong_isEven(_this_) lang_types__LLong_isEven((void*) (_this_))
#define LLong_in(_this_, range) lang_types__LLong_in((void*) (_this_), (range))
#define LLong___load__() lang_types__LLong___load__()
#define Long lang_types__Long
#define Long_class() lang_types__Long_class()
#define LongClass lang_types__LongClass
#define LongClass_class() lang_types__LongClass_class()
#define Long___load__() lang_types__Long___load__()
#define Int lang_types__Int
#define Int_class() lang_types__Int_class()
#define IntClass lang_types__IntClass
#define IntClass_class() lang_types__IntClass_class()
#define Int___load__() lang_types__Int___load__()
#define Short lang_types__Short
#define Short_class() lang_types__Short_class()
#define ShortClass lang_types__ShortClass
#define ShortClass_class() lang_types__ShortClass_class()
#define Short___load__() lang_types__Short___load__()
#define ULLong lang_types__ULLong
#define ULLong_class() lang_types__ULLong_class()
#define ULLongClass lang_types__ULLongClass
#define ULLongClass_class() lang_types__ULLongClass_class()
#define ULLong_toString(_this_) lang_types__ULLong_toString((void*) (_this_))
#define ULLong_in(_this_, range) lang_types__ULLong_in((void*) (_this_), (range))
#define ULLong___load__() lang_types__ULLong___load__()
#define ULong lang_types__ULong
#define ULong_class() lang_types__ULong_class()
#define ULongClass lang_types__ULongClass
#define ULongClass_class() lang_types__ULongClass_class()
#define ULong___load__() lang_types__ULong___load__()
#define UInt lang_types__UInt
#define UInt_class() lang_types__UInt_class()
#define UIntClass lang_types__UIntClass
#define UIntClass_class() lang_types__UIntClass_class()
#define UInt___load__() lang_types__UInt___load__()
#define UShort lang_types__UShort
#define UShort_class() lang_types__UShort_class()
#define UShortClass lang_types__UShortClass
#define UShortClass_class() lang_types__UShortClass_class()
#define UShort___load__() lang_types__UShort___load__()
#define Int8 lang_types__Int8
#define Int8_class() lang_types__Int8_class()
#define Int8Class lang_types__Int8Class
#define Int8Class_class() lang_types__Int8Class_class()
#define Int8___load__() lang_types__Int8___load__()
#define Int16 lang_types__Int16
#define Int16_class() lang_types__Int16_class()
#define Int16Class lang_types__Int16Class
#define Int16Class_class() lang_types__Int16Class_class()
#define Int16___load__() lang_types__Int16___load__()
#define Int32 lang_types__Int32
#define Int32_class() lang_types__Int32_class()
#define Int32Class lang_types__Int32Class
#define Int32Class_class() lang_types__Int32Class_class()
#define Int32___load__() lang_types__Int32___load__()
#define Int64 lang_types__Int64
#define Int64_class() lang_types__Int64_class()
#define Int64Class lang_types__Int64Class
#define Int64Class_class() lang_types__Int64Class_class()
#define Int64___load__() lang_types__Int64___load__()
#define UInt8 lang_types__UInt8
#define UInt8_class() lang_types__UInt8_class()
#define UInt8Class lang_types__UInt8Class
#define UInt8Class_class() lang_types__UInt8Class_class()
#define UInt8___load__() lang_types__UInt8___load__()
#define UInt16 lang_types__UInt16
#define UInt16_class() lang_types__UInt16_class()
#define UInt16Class lang_types__UInt16Class
#define UInt16Class_class() lang_types__UInt16Class_class()
#define UInt16___load__() lang_types__UInt16___load__()
#define UInt32 lang_types__UInt32
#define UInt32_class() lang_types__UInt32_class()
#define UInt32Class lang_types__UInt32Class
#define UInt32Class_class() lang_types__UInt32Class_class()
#define UInt32___load__() lang_types__UInt32___load__()
#define UInt64 lang_types__UInt64
#define UInt64_class() lang_types__UInt64_class()
#define UInt64Class lang_types__UInt64Class
#define UInt64Class_class() lang_types__UInt64Class_class()
#define UInt64___load__() lang_types__UInt64___load__()
#define Octet lang_types__Octet
#define Octet_class() lang_types__Octet_class()
#define OctetClass lang_types__OctetClass
#define OctetClass_class() lang_types__OctetClass_class()
#define Octet___load__() lang_types__Octet___load__()
#define SizeT lang_types__SizeT
#define SizeT_class() lang_types__SizeT_class()
#define SizeTClass lang_types__SizeTClass
#define SizeTClass_class() lang_types__SizeTClass_class()
#define SizeT___load__() lang_types__SizeT___load__()
#define Bool lang_types__Bool
#define Bool_class() lang_types__Bool_class()
#define BoolClass lang_types__BoolClass
#define BoolClass_class() lang_types__BoolClass_class()
#define Bool_toString(_this_) lang_types__Bool_toString((void*) (_this_))
#define Bool___load__() lang_types__Bool___load__()
#define LDouble lang_types__LDouble
#define LDouble_class() lang_types__LDouble_class()
#define LDoubleClass lang_types__LDoubleClass
#define LDoubleClass_class() lang_types__LDoubleClass_class()
#define LDouble_toString(_this_) lang_types__LDouble_toString((void*) (_this_))
#define LDouble_abs(_this_) lang_types__LDouble_abs((void*) (_this_))
#define LDouble___load__() lang_types__LDouble___load__()
#define Float lang_types__Float
#define Float_class() lang_types__Float_class()
#define FloatClass lang_types__FloatClass
#define FloatClass_class() lang_types__FloatClass_class()
#define Float___load__() lang_types__Float___load__()
#define Double lang_types__Double
#define Double_class() lang_types__Double_class()
#define DoubleClass lang_types__DoubleClass
#define DoubleClass_class() lang_types__DoubleClass_class()
#define Double___load__() lang_types__Double___load__()
#define Range lang_types__Range
#define Range_class() lang_types__Range_class()
#define RangeClass lang_types__RangeClass
#define RangeClass_class() lang_types__RangeClass_class()
#define Range_new(min, max) lang_types__Range_new((min), (max))
#define Range___load__() lang_types__Range___load__()
#define Iterable lang_types__Iterable
#define Iterable_class() lang_types__Iterable_class()
#define IterableClass lang_types__IterableClass
#define IterableClass_class() lang_types__IterableClass_class()
#define Iterable_init(_this_) lang_types__Iterable_init((void*) (_this_))
#define Iterable_iterator(_this_) (void*) lang_types__Iterable_iterator((void*) (_this_))
#define Iterable_toList(_this_) (void*) lang_types__Iterable_toList((void*) (_this_))
#define Iterable___defaults__(_this_) lang_types__Iterable___defaults__((void*) (_this_))
#define Iterable___load__() lang_types__Iterable___load__()
#define BackIterable lang_types__BackIterable
#define BackIterable_class() lang_types__BackIterable_class()
#define BackIterableClass lang_types__BackIterableClass
#define BackIterableClass_class() lang_types__BackIterableClass_class()
#define BackIterable_init(_this_) lang_types__BackIterable_init((void*) (_this_))
#define BackIterable_iterator(_this_) (void*) lang_types__BackIterable_iterator((void*) (_this_))
#define BackIterable_backIterator(_this_) (void*) lang_types__BackIterable_backIterator((void*) (_this_))
#define BackIterable_forward(_this_) (void*) lang_types__BackIterable_forward((void*) (_this_))
#define BackIterable_backward(_this_) (void*) lang_types__BackIterable_backward((void*) (_this_))
#define BackIterable___defaults__(_this_) lang_types__BackIterable___defaults__((void*) (_this_))
#define BackIterable___load__() lang_types__BackIterable___load__()
#define Iterator lang_types__Iterator
#define Iterator_class() lang_types__Iterator_class()
#define IteratorClass lang_types__IteratorClass
#define IteratorClass_class() lang_types__IteratorClass_class()
#define Iterator_init(_this_) lang_types__Iterator_init((void*) (_this_))
#define Iterator_hasNext(_this_) lang_types__Iterator_hasNext((void*) (_this_))
#define Iterator_next(_this_, __genericReturn2) lang_types__Iterator_next((void*) (_this_), (__genericReturn2))
#define Iterator_remove(_this_) lang_types__Iterator_remove((void*) (_this_))
#define Iterator_iterator(_this_) (void*) lang_types__Iterator_iterator((void*) (_this_))
#define Iterator___defaults__(_this_) lang_types__Iterator___defaults__((void*) (_this_))
#define Iterator___load__() lang_types__Iterator___load__()
#define BackIterator lang_types__BackIterator
#define BackIterator_class() lang_types__BackIterator_class()
#define BackIteratorClass lang_types__BackIteratorClass
#define BackIteratorClass_class() lang_types__BackIteratorClass_class()
#define BackIterator_init(_this_) lang_types__BackIterator_init((void*) (_this_))
#define BackIterator_hasPrev(_this_) lang_types__BackIterator_hasPrev((void*) (_this_))
#define BackIterator_prev(_this_, __genericReturn3) lang_types__BackIterator_prev((void*) (_this_), (__genericReturn3))
#define BackIterator_iterator(_this_) (void*) lang_types__BackIterator_iterator((void*) (_this_))
#define BackIterator_reversed(_this_) (void*) lang_types__BackIterator_reversed((void*) (_this_))
#define BackIterator___defaults__(_this_) lang_types__BackIterator___defaults__((void*) (_this_))
#define BackIterator___load__() lang_types__BackIterator___load__()
#define ReverseIterator lang_types__ReverseIterator
#define ReverseIterator_class() lang_types__ReverseIterator_class()
#define ReverseIteratorClass lang_types__ReverseIteratorClass
#define ReverseIteratorClass_class() lang_types__ReverseIteratorClass_class()
#define ReverseIterator_new(T) (void*) lang_types__ReverseIterator_new((T))
#define ReverseIterator_init(_this_) lang_types__ReverseIterator_init((void*) (_this_))
#define ReverseIterator_hasNext(_this_) lang_types__ReverseIterator_hasNext((void*) (_this_))
#define ReverseIterator_next(_this_, __genericReturn4) lang_types__ReverseIterator_next((void*) (_this_), (__genericReturn4))
#define ReverseIterator_hasPrev(_this_) lang_types__ReverseIterator_hasPrev((void*) (_this_))
#define ReverseIterator_prev(_this_, __genericReturn5) lang_types__ReverseIterator_prev((void*) (_this_), (__genericReturn5))
#define ReverseIterator_remove(_this_) lang_types__ReverseIterator_remove((void*) (_this_))
#define ReverseIterator_reversed(_this_) (void*) lang_types__ReverseIterator_reversed((void*) (_this_))
#define ReverseIterator_iterator(_this_) (void*) lang_types__ReverseIterator_iterator((void*) (_this_))
#define ReverseIterator___defaults__(_this_) lang_types__ReverseIterator___defaults__((void*) (_this_))
#define ReverseIterator___load__() lang_types__ReverseIterator___load__()
#define StringIterator lang_types__StringIterator
#define StringIterator_class() lang_types__StringIterator_class()
#define StringIteratorClass lang_types__StringIteratorClass
#define StringIteratorClass_class() lang_types__StringIteratorClass_class()
#define StringIterator_new_withStr(T, str) (void*) lang_types__StringIterator_new_withStr((T), (str))
#define StringIterator_init_withStr(_this_, str) lang_types__StringIterator_init_withStr((void*) (_this_), (str))
#define StringIterator_hasNext(_this_) lang_types__StringIterator_hasNext((void*) (_this_))
#define StringIterator_next(_this_, __genericReturn6) lang_types__StringIterator_next((void*) (_this_), (__genericReturn6))
#define StringIterator_hasPrev(_this_) lang_types__StringIterator_hasPrev((void*) (_this_))
#define StringIterator_prev(_this_, __genericReturn7) lang_types__StringIterator_prev((void*) (_this_), (__genericReturn7))
#define StringIterator_remove(_this_) lang_types__StringIterator_remove((void*) (_this_))
#define StringIterator___defaults__(_this_) lang_types__StringIterator___defaults__((void*) (_this_))
#define StringIterator___load__() lang_types__StringIterator___load__()
#define Cell lang_types__Cell
#define Cell_class() lang_types__Cell_class()
#define CellClass lang_types__CellClass
#define CellClass_class() lang_types__CellClass_class()
#define Cell_new(T, val) (void*) lang_types__Cell_new((T), (val))
#define Cell_init(_this_, val) lang_types__Cell_init((void*) (_this_), (val))
#define Cell___defaults__(_this_) lang_types__Cell___defaults__((void*) (_this_))
#define Cell___load__() lang_types__Cell___load__()
#define Exception lang_types__Exception
#define Exception_class() lang_types__Exception_class()
#define ExceptionClass lang_types__ExceptionClass
#define ExceptionClass_class() lang_types__ExceptionClass_class()
#define Exception_new_originMsg(origin, msg) (void*) lang_types__Exception_new_originMsg((void*) (origin), (msg))
#define Exception_init_originMsg(_this_, origin, msg) lang_types__Exception_init_originMsg((void*) (_this_), (void*) (origin), (msg))
#define Exception_new_noOrigin(msg) (void*) lang_types__Exception_new_noOrigin((msg))
#define Exception_init_noOrigin(_this_, msg) lang_types__Exception_init_noOrigin((void*) (_this_), (msg))
#define Exception_crash(_this_) lang_types__Exception_crash((void*) (_this_))
#define Exception_getMessage(_this_) lang_types__Exception_getMessage((void*) (_this_))
#define Exception_print(_this_) lang_types__Exception_print((void*) (_this_))
#define Exception_throw(_this_) lang_types__Exception_throw((void*) (_this_))
#define Exception___defaults__(_this_) lang_types__Exception___defaults__((void*) (_this_))
#define Exception___load__() lang_types__Exception___load__()
#endif

#endif // ___lang_types___
