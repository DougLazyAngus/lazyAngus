#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>
struct FlexibleDictionaryWrapper_2_t1844;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9106;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6923;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7301;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7127;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47794_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47794(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47794_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47795_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47795(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47795_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47796_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47796(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47796_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47797_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47797(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47797_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47798_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47798(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47798_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47799_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47799(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47799_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47800_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47800(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47800_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47801_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47801(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47801_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47802_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47802(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47802_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47803_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47803(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7122 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47803_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47804_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47804(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47804_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47805_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47805(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7122 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47805_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47806_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2U5BU5D_t7301* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47806(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2U5BU5D_t7301*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47806_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47807_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47807(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47807_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47808_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47808(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47808_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47809_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7122  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47809(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7122 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47809_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47810_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47810(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47810_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47811_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47811(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47811_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47812_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47812(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47812_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7122  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47813_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5497  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47813(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7122  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5497 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47813_gshared)(__this /* static, unused */, ___pair, method)
