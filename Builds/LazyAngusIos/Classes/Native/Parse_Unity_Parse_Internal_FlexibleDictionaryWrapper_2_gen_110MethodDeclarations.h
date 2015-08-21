#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1959;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9080;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7234;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7702;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7254;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52494_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52494(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52494_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52495_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52495(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52495_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52496_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52496(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52496_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52497_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52497(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52497_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52498_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52498(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52498_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52499_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52499(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52499_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52500_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52500(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52500_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m52501_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52501(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52501_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52502_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52502(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52502_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52503_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52503(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52503_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52504_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52504(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52504_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52505_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52505(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52505_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52506_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2U5BU5D_t7702* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52506(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2U5BU5D_t7702*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52506_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52507_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52507(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52507_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52508_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52508(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52508_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52509_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52509(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52509_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52510_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52510(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52510_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52511_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52511(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52511_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52512_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52512(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52512_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7249  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52513_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7238  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52513(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7249  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52513_gshared)(__this /* static, unused */, ___pair, method)
