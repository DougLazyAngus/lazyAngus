﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>
struct FlexibleDictionaryWrapper_2_t2014;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8939;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7237;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7913;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7285;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55170_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55170(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55170_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55171_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55171(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55171_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55172_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55172(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55172_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55173_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55173(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55173_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55174_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55174(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55174_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55175_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55175(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55175_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55176_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55176(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55176_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55177_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55177(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55177_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55178_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55178(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55178_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55179_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55179(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55179_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55180_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55180(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55180_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55181_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55181(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55181_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55182_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2U5BU5D_t7913* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55182(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2U5BU5D_t7913*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55182_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55183_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55183(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55183_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55184_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55184(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55184_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55185_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55185(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55185_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55186_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55186(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55186_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55187_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55187(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55187_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55188_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55188(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55188_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7062  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55189_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7241  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55189(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7062  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55189_gshared)(__this /* static, unused */, ___pair, method)
