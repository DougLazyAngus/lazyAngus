#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1921;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9833;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7752;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8009;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7781;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53775_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53775(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53775_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53777_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53777(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53777_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53779_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53779(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53779_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53781_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53781(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53781_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53783_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53783(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53783_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53785_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53785(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53785_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53787_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53787(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53787_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m53789_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53789(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53789_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53791_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53791(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53791_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53793_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53793(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53793_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53795_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53795(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53795_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53797_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53797(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53797_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53799_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, KeyValuePair_2U5BU5D_t8009* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53799(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1921 *, KeyValuePair_2U5BU5D_t8009*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53799_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53801_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53801(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53801_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53803_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53803(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53803_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53805_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53805(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1921 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53805_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53807_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53807(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53807_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53809_gshared (FlexibleDictionaryWrapper_2_t1921 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53809(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1921 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53809_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53811_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53811(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53811_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7776  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53813_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7754  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53813(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7776  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53813_gshared)(__this /* static, unused */, ___pair, method)
