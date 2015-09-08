#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1977;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9708;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7784;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8270;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7822;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57048_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57048(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57048_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57049_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57049(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57049_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57050_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57050(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57050_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57051_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57051(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57051_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57052_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57052(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57052_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57053_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57053(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57053_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57054_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57054(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57054_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57055_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57055(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57055_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57056_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57056(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57056_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57057_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57057(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57057_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57058_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57058(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57058_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57059_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57059(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57059_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57060_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2U5BU5D_t8270* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57060(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2U5BU5D_t8270*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57060_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57061_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57061(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57061_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57062_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57062(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57062_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57063_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57063(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57063_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57064_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57064(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57064_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57065_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57065(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57065_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57066_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57066(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57066_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7817  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57067_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7788  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57067(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7817  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57067_gshared)(__this /* static, unused */, ___pair, method)
