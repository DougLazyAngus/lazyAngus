﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>
struct FlexibleDictionaryWrapper_2_t1903;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8972;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7160;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7617;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7169;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51702_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51702(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51702_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51703_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51703(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51703_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51704_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51704(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51704_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51705_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51705(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51705_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51706_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51706(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51706_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51707_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51707(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51707_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51708_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51708(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51708_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51709_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51709(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51709_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51710_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51710(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51710_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51711_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51711(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51711_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51712_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51712(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51712_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51713_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51713(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51713_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51714_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2U5BU5D_t7617* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51714(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2U5BU5D_t7617*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51714_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51715_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51715(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51715_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51716_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51716(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51716_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51717_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51717(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1903 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51717_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51718_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51718(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51718_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51719_gshared (FlexibleDictionaryWrapper_2_t1903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51719(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51719_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51720_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51720(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51720_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7164  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51721_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7164  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51721(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7164  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51721_gshared)(__this /* static, unused */, ___pair, method)
