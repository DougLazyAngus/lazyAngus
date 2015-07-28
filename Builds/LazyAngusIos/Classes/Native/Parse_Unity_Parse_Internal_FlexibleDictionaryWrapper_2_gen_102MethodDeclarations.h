﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>
struct FlexibleDictionaryWrapper_2_t1894;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9101;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6918;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7552;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7158;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51078_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51078(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51078_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51079_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51079(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51079_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51080_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51080(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51080_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51081_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51081(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51081_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51082_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51082(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51082_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51083_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51083(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51083_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51084_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51084(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51084_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51085_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51085(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51085_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51086_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51086(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51086_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51087_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51087(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51087_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51088_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51088(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51088_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51089_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51089(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51089_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51090_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2U5BU5D_t7552* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51090(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2U5BU5D_t7552*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51090_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51091_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51091(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51091_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51092_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51092(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51092_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51093_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51093(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51093_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51094_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51094(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51094_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51095_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51095(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51095_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51096_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51096(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51096_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7153  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51097_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6974  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51097(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7153  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51097_gshared)(__this /* static, unused */, ___pair, method)
