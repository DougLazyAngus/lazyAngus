#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>
struct FlexibleDictionaryWrapper_2_t2022;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7818;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8418;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7848;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59055_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59055(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59055_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59056_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59056(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59056_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59057_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59057(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59057_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59058_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59058(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59058_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59059_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59059(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59059_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59060_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59060(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59060_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59061_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59061(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59061_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m59062_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59062(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59062_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59063_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59063(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59063_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59064_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59064(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59064_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59065_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59065(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59065_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59066_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59066(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59066_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59067_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2U5BU5D_t8418* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59067(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2U5BU5D_t8418*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59067_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59068_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59068(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59068_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59069_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59069(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59069_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59070_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59070(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59070_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59071_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59071(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59071_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59072_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59072(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59072_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59073_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59073(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59073_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7652  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59074_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7822  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59074(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7652  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59074_gshared)(__this /* static, unused */, ___pair, method)
