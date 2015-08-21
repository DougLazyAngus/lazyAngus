#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>
struct FlexibleDictionaryWrapper_2_t1960;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9080;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7245;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7702;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7254;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52538_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52538(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52538_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52539_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52539(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52539_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52540_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52540(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52540_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52541_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52541(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52541_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52542_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52542(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52542_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52543_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52543(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52543_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52544_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52544(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52544_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m52545_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52545(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52545_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52546_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52546(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52546_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52547_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52547(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52547_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52548_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52548(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52548_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52549_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52549(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52549_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52550_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, KeyValuePair_2U5BU5D_t7702* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52550(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1960 *, KeyValuePair_2U5BU5D_t7702*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52550_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52551_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52551(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52551_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52552_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52552(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52552_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52553_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52553(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1960 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52553_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52554_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52554(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52554_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52555_gshared (FlexibleDictionaryWrapper_2_t1960 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52555(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1960 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52555_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52556_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52556(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52556_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7249  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52557_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7249  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52557(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7249  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52557_gshared)(__this /* static, unused */, ___pair, method)
