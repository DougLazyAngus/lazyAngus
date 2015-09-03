#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>
struct FlexibleDictionaryWrapper_2_t2022;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9840;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7570;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7842;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59183_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59183(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59183_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59184_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59184(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59184_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59185_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59185(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59185_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59186_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59186(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59186_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59187_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59187(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59187_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59188_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59188(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59188_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59189_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59189(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59189_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m59190_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59190(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59190_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59191_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59191(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59191_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59192_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59192(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59192_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59193_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59193(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59193_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59194_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59194(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59194_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59195_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2U5BU5D_t8412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59195(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2U5BU5D_t8412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59195_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59196_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59196(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59196_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59197_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59197(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59197_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59198_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59198(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59198_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59199_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59199(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59199_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59200_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59200(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59200_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59201_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59201(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59201_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7646  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59202_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7626  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59202(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7646  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59202_gshared)(__this /* static, unused */, ___pair, method)
