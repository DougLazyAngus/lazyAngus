﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1973;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9214;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7219;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7770;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7268;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53218_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53218(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53218_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53219_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53219(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53219_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53220_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53220(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53220_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53221_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53221(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53221_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53222_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53222(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53222_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53223_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53223(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53223_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53224_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53224(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53224_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53225_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53225(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53225_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53226_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53226(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53226_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53227_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7263  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53227(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53227_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53228_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53228(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53228_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53229_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7263  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53229(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53229_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53230_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2U5BU5D_t7770* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53230(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2U5BU5D_t7770*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53230_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53231_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53231(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53231_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53232_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53232(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53232_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53233_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7263  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53233(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53233_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53234_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53234(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53234_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53235_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53235(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53235_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53236_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53236(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53236_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7263  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53237_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7223  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53237(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7263  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53237_gshared)(__this /* static, unused */, ___pair, method)
