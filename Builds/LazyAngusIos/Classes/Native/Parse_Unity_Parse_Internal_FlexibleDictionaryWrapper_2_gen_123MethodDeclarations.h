﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1975;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9214;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7237;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7770;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7268;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53304_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53304(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53304_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53305_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53305(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53305_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53306_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53306(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53306_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53307_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53307(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53307_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53308_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53308(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53308_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53309_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53309(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53309_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53310_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53310(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53310_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53311_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53311(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53311_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53312_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53312(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53312_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53313_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t7263  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53313(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53313_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53314_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53314(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53314_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53315_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t7263  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53315(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53315_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53316_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2U5BU5D_t7770* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53316(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2U5BU5D_t7770*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53316_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53317_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53317(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53317_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53318_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53318(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53318_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53319_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t7263  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53319(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53319_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53320_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53320(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53320_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53321_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53321(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53321_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53322_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53322(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53322_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7263  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53323_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7241  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53323(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7263  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53323_gshared)(__this /* static, unused */, ___pair, method)
