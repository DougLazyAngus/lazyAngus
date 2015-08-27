#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1964;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9083;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7259;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7705;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7257;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52613_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52613(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52613_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52614_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52614(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52614_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52615_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52615(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52615_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52616_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52616(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52616_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52617_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52617(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52617_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52618_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52618(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52618_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52619_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52619(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52619_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m52620_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52620(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52620_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52621_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52621(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52621_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52622_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t7252  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52622(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52622_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52623_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52623(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52623_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52624_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t7252  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52624(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52624_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52625_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2U5BU5D_t7705* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52625(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2U5BU5D_t7705*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52625_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52626_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52626(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52626_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52627_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52627(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52627_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52628_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t7252  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52628(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52628_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52629_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52629(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52629_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52630_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52630(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52630_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52631_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52631(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52631_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7252  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52632_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7263  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52632(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7252  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52632_gshared)(__this /* static, unused */, ___pair, method)
