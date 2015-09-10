#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>
struct FlexibleDictionaryWrapper_2_t1986;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9720;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7785;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8282;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7834;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57074_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57074(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57074_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57075_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57075(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57075_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57076_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57076(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57076_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57077_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57077(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57077_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57078_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57078(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57078_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57079_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57079(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57079_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57080_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57080(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57080_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57081_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57081(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57081_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57082_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57082(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57082_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57083_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57083(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57083_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57084_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57084(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57084_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57085_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57085(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57085_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57086_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2U5BU5D_t8282* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57086(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2U5BU5D_t8282*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57086_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57087_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57087(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57087_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57088_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57088(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57088_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57089_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57089(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57089_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57090_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57090(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57090_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57091_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57091(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57091_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57092_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57092(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57092_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7829  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57093_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7789  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57093(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7829  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57093_gshared)(__this /* static, unused */, ___pair, method)
