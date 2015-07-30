#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1802;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1168;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7138;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1359;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1346;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45791_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45791(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45791_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45792_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45792(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45792_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45793_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45793(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45793_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45794_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45794(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45794_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45795_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45795(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45795_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45796_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45796(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45796_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45797_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45797(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45797_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45798_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45798(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45798_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45799_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45799(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45799_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45800_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45800(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45800_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45801_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45801(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45801_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45802_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45802(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45802_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45803_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2U5BU5D_t1359* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45803(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2U5BU5D_t1359*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45803_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45804_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45804(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45804_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45805_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45805(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45805_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45806_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45806(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45806_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45807_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45807(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45807_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45808_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45808(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45808_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45809_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45809(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45809_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t727  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45810_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7142  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45810(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t727  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45810_gshared)(__this /* static, unused */, ___pair, method)
