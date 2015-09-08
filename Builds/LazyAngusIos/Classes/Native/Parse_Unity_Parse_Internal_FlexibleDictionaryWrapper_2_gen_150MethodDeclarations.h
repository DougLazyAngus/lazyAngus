#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>
struct FlexibleDictionaryWrapper_2_t2019;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9841;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7813;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7843;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59043_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59043(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59043_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59044_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59044(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59044_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59045_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59045(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59045_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59046_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59046(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59046_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59047_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59047(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59047_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59048_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59048(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59048_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59049_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59049(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59049_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m59050_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59050(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59050_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59051_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59051(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59051_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59052_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59052(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59052_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59053_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59053(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59053_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59054_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59054(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59054_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59055_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, KeyValuePair_2U5BU5D_t8413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59055(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, KeyValuePair_2U5BU5D_t8413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59055_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59056_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59056(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59056_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59057_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59057(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59057_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59058_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59058(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59058_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59059_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59059(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59059_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59060_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59060(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59060_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59061_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59061(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59061_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7647  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59062_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7817  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59062(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7647  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59062_gshared)(__this /* static, unused */, ___pair, method)
