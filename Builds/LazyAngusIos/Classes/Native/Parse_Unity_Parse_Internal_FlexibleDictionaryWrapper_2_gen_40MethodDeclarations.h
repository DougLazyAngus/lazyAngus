﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1892;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9208;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7188;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7380;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7206;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48404_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48404(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48404_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48406_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48406(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48406_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48408_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48408(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48408_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48410_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48410(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48410_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48412_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48412(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48412_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48414_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48414(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48414_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48416_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48416(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48416_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48418_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48418(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48418_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48420_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48420(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48420_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48422_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48422(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48422_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48424_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48424(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48424_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48426_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48426(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48426_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48428_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2U5BU5D_t7380* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48428(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2U5BU5D_t7380*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48428_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48430_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48430(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48430_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48432_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48432(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48432_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48434_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48434(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1892 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48434_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48436_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48436(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48436_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48438_gshared (FlexibleDictionaryWrapper_2_t1892 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48438(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1892 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48438_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48440_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48440(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48440_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7201  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48442_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7190  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48442(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7201  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48442_gshared)(__this /* static, unused */, ___pair, method)
