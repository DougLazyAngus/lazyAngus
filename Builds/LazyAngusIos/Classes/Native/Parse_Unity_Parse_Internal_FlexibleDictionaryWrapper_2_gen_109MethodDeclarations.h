#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>
struct FlexibleDictionaryWrapper_2_t1909;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8981;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6923;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7626;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7178;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51679_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51679(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51679_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51680_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51680(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51680_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51681_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51681(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51681_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51682_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51682(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51682_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51683_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51683(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51683_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51684_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51684(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51684_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51685_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51685(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51685_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51686_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51686(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51686_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51687_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51687(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51687_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51688_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51688(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51688_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51689_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51689(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51689_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51690_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51690(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51690_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51691_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2U5BU5D_t7626* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51691(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2U5BU5D_t7626*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51691_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51692_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51692(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51692_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51693_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51693(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51693_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51694_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51694(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51694_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51695_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51695(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51695_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51696_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51696(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51696_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51697_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51697(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51697_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7173  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51698_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5497  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51698(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7173  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5497 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51698_gshared)(__this /* static, unused */, ___pair, method)
