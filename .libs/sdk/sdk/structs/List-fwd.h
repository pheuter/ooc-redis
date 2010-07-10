/* structs/List header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_List_fwd___
#define ___structs_List_fwd___

struct _structs_List__List;
typedef struct _structs_List__List structs_List__List;
struct _structs_List__ListClass;
typedef struct _structs_List__ListClass structs_List__ListClass;

#include <sdk/lang/memory-fwd.h>
#include <sdk/lang/stdio-fwd.h>
#include <sdk/lang/string-fwd.h>
#include <sdk/lang/system-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/vararg-fwd.h>
#include <sdk/text/Buffer-fwd.h>
#include <sdk/math/Random-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>
#include <sdk/structs/HashMap-fwd.h>

#ifndef __FUNC___T_Bool__DEFINE
#define __FUNC___T_Bool__DEFINE

typedef lang_types__Bool (*__FUNC___T_Bool)(uint8_t*);

#endif


#ifndef __FUNC___T__DEFINE
#define __FUNC___T__DEFINE

typedef void (*__FUNC___T)(uint8_t*);

#endif


#ifndef __FUNC___T_T_T_Bool__DEFINE
#define __FUNC___T_T_T_Bool__DEFINE

typedef lang_types__Bool (*__FUNC___T_T_T_Bool)(lang_types__Class*, uint8_t*, uint8_t*);

#endif

structs_List__ListClass *structs_List__List_class();
void structs_List__List_init(structs_List__List* this);
void structs_List__List_add(structs_List__List* this, uint8_t* element);
void structs_List__List_add_withIndex(structs_List__List* this, lang_types__Int index, uint8_t* element);
void structs_List__List_addAll(structs_List__List* this, lang_types__Iterable* list);
void structs_List__List_addAll_impl(structs_List__List* this, lang_types__Iterable* list);
void structs_List__List_addAll_atStart(structs_List__List* this, lang_types__Int start, lang_types__Iterable* list);
void structs_List__List_addAll_atStart_impl(structs_List__List* this, lang_types__Int start, lang_types__Iterable* list);
void structs_List__List_clear(structs_List__List* this);
lang_types__Bool structs_List__List_removeLast(structs_List__List* this);
lang_types__Bool structs_List__List_removeLast_impl(structs_List__List* this);
lang_types__Bool structs_List__List_contains(structs_List__List* this, uint8_t* element);
lang_types__Bool structs_List__List_contains_impl(structs_List__List* this, uint8_t* element);
lang_types__Bool structs_List__List_replace(structs_List__List* this, uint8_t* oldie, uint8_t* kiddo);
lang_types__Bool structs_List__List_replace_impl(structs_List__List* this, uint8_t* oldie, uint8_t* kiddo);
void structs_List__List_get(structs_List__List* this, uint8_t* __genericReturn8, lang_types__Int index);
lang_types__Int structs_List__List_indexOf(structs_List__List* this, uint8_t* element);
lang_types__Bool structs_List__List_isEmpty(structs_List__List* this);
lang_types__Bool structs_List__List_isEmpty_impl(structs_List__List* this);
lang_types__Int structs_List__List_lastIndexOf(structs_List__List* this, uint8_t* element);
void structs_List__List_removeAt(structs_List__List* this, uint8_t* __genericReturn9, lang_types__Int index);
lang_types__Bool structs_List__List_remove(structs_List__List* this, uint8_t* element);
void structs_List__List_set(structs_List__List* this, uint8_t* __genericReturn10, lang_types__Int index, uint8_t* element);
lang_types__Int structs_List__List_size(structs_List__List* this);
lang_types__BackIterator* structs_List__List_iterator(structs_List__List* this);
structs_List__List* structs_List__List_clone(structs_List__List* this);
structs_List__List* structs_List__List_emptyClone(structs_List__List* this);
void structs_List__List_split(structs_List__List* this, __FUNC___T_Bool f, structs_List__List** list1, structs_List__List** list2);
void structs_List__List_split_impl(structs_List__List* this, __FUNC___T_Bool f, structs_List__List** list1, structs_List__List** list2);
structs_List__List* structs_List__List_shuffle(structs_List__List* this);
structs_List__List* structs_List__List_shuffle_impl(structs_List__List* this);
void structs_List__List_first(structs_List__List* this, uint8_t* __genericReturn11);
void structs_List__List_first_impl(structs_List__List* this, uint8_t* __genericReturn11);
void structs_List__List_last(structs_List__List* this, uint8_t* __genericReturn12);
void structs_List__List_last_impl(structs_List__List* this, uint8_t* __genericReturn12);
lang_types__Int structs_List__List_lastIndex(structs_List__List* this);
lang_types__Int structs_List__List_lastIndex_impl(structs_List__List* this);
void structs_List__List_reverse(structs_List__List* this);
void structs_List__List_reverse_impl(structs_List__List* this);
lang_types__Pointer structs_List__List_toArray(structs_List__List* this);
lang_types__Pointer structs_List__List_toArray_impl(structs_List__List* this);
void structs_List__List_each(structs_List__List* this, __FUNC___T f);
void structs_List__List_each_impl(structs_List__List* this, __FUNC___T f);
lang_types__String structs_List__List_join_stringDefault(structs_List__List* this);
lang_types__String structs_List__List_join_stringDefault_impl(structs_List__List* this);
lang_types__String structs_List__List_join_string(structs_List__List* this, lang_types__String str);
lang_types__String structs_List__List_join_string_impl(structs_List__List* this, lang_types__String str);
lang_types__String structs_List__List_join_char(structs_List__List* this, lang_types__Char chr);
lang_types__String structs_List__List_join_char_impl(structs_List__List* this, lang_types__Char chr);
void structs_List__List___defaults__(structs_List__List* this);
void structs_List__List___defaults___impl(structs_List__List* this);
void structs_List__List___load__();
void structs_List_load();
void structs_List____OP_IDX_List_Int__T(uint8_t* __genericReturn20, lang_types__Class* T, structs_List__List* list, lang_types__Int i);
void structs_List____OP_IDX_ASS_List_Int_T(lang_types__Class* T, structs_List__List* list, lang_types__Int i, uint8_t* element);
void structs_List____OP_ADD_ASS_List_T(lang_types__Class* T, structs_List__List* list, uint8_t* element);
lang_types__Bool structs_List____OP_SUB_ASS_List_T__Bool(lang_types__Class* T, structs_List__List* list, uint8_t* element);

#endif // ___structs_List_fwd___
