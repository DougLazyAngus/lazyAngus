#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>
struct FlexibleDictionaryWrapper_2_t1811;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1170;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6927;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1361;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1348;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46167_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46167(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1811 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46167_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46168_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46168(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1811 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46168_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46169_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46169(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1811 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46169_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46170_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46170(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1811 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46170_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46171_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46171(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1811 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46171_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46172_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46172(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1811 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46172_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46173_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46173(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1811 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46173_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46174_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46174(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1811 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46174_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46175_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46175(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1811 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46175_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46176_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46176(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1811 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46176_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46177_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46177(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1811 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46177_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46178_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46178(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1811 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46178_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46179_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, KeyValuePair_2U5BU5D_t1361* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46179(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1811 *, KeyValuePair_2U5BU5D_t1361*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46179_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46180_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46180(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1811 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46180_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46181_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46181(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1811 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46181_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46182_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46182(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1811 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46182_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46183_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46183(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1811 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46183_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46184_gshared (FlexibleDictionaryWrapper_2_t1811 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46184(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1811 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46184_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46185_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46185(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46185_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t728  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46186_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6983  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46186(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t728  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6983 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46186_gshared)(__this /* static, unused */, ___pair, method)
