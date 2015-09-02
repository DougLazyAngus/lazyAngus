#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>
struct FlexibleDictionaryWrapper_2_t1983;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9120;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7035;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7734;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7286;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53055_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53055(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53055_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53056_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53056(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53056_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53057_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53057(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53057_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53058_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53058(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53058_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53059_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53059(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53059_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53060_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53060(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53060_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53061_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53061(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53061_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m53062_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53062(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53062_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53063_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53063(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53063_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53064_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, KeyValuePair_2_t7281  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53064(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, KeyValuePair_2_t7281 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53064_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53065_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53065(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53065_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53066_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, KeyValuePair_2_t7281  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53066(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, KeyValuePair_2_t7281 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53066_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53067_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, KeyValuePair_2U5BU5D_t7734* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53067(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, KeyValuePair_2U5BU5D_t7734*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53067_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53068_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53068(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53068_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53069_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53069(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53069_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53070_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, KeyValuePair_2_t7281  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53070(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, KeyValuePair_2_t7281 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53070_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53071_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53071(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53071_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53072_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53072(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53072_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53073_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53073(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53073_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7281  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53074_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7091  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53074(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7281  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53074_gshared)(__this /* static, unused */, ___pair, method)
