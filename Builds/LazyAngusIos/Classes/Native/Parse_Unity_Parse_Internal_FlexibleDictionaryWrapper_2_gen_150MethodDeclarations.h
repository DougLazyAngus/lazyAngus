﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>
struct FlexibleDictionaryWrapper_2_t1942;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9105;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7160;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7760;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7190;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53568_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53568(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53568_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53569_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53569(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53569_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53570_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53570(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53570_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53571_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53571(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53571_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53572_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53572(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53572_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53573_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53573(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53573_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53574_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53574(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53574_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53575_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53575(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53575_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53576_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53576(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53576_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53577_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t6994  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53577(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53577_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53578_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53578(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53578_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53579_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t6994  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53579(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53579_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53580_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2U5BU5D_t7760* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53580(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2U5BU5D_t7760*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53580_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53581_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53581(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53581_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53582_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53582(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53582_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53583_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t6994  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53583(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53583_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53584_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53584(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53584_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53585_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53585(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53585_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53586_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53586(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53586_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6994  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53587_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7164  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53587(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6994  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53587_gshared)(__this /* static, unused */, ___pair, method)
