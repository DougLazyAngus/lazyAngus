﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>
struct FlexibleDictionaryWrapper_2_t1898;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9208;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7248;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7380;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7206;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48685_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48685(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48685_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48686_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48686(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48686_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48687_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48687(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48687_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48688_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48688(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48688_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48689_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48689(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48689_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48690_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48690(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48690_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48691_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48691(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48691_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48692_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48692(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48692_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48693_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48693(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48693_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48694_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48694(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48694_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48695_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48695(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48695_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48696_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48696(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48696_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48697_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2U5BU5D_t7380* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48697(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2U5BU5D_t7380*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48697_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48698_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48698(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48698_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48699_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48699(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48699_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48700_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48700(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48700_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48701_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48701(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48701_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48702_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48702(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48702_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48703_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48703(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48703_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7201  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48704_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7252  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48704(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7201  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48704_gshared)(__this /* static, unused */, ___pair, method)
