﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>
struct FlexibleDictionaryWrapper_2_t1922;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9210;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7002;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7510;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7228;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50153_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50153(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50153_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50154_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50154(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50154_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50155_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50155(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50155_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50156_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50156(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50156_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50157_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50157(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50157_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50158_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50158(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50158_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50159_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50159(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50159_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m50160_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50160(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50160_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50161_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50161(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50161_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50162_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50162(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50162_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50163_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50163(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50163_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50164_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50164(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50164_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50165_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2U5BU5D_t7510* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50165(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2U5BU5D_t7510*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50165_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50166_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50166(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50166_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50167_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50167(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50167_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50168_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50168(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50168_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50169_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50169(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50169_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50170_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50170(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50170_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50171_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50171(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50171_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7223  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50172_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5544  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50172(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7223  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50172_gshared)(__this /* static, unused */, ___pair, method)
