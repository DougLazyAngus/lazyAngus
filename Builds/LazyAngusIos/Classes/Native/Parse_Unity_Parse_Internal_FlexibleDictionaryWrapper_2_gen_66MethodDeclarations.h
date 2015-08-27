﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1918;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9210;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7188;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7510;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7228;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49958_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49958(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1918 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49958_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49960_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49960(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1918 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49960_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49962_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49962(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1918 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49962_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49964_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49964(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1918 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49964_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49966_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49966(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1918 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49966_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49968_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49968(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1918 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49968_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49970_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49970(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1918 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49970_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49972_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49972(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1918 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49972_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49974_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49974(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1918 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49974_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49976_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, KeyValuePair_2_t7223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49976(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1918 *, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49976_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49978_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49978(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1918 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49978_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49980_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, KeyValuePair_2_t7223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49980(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1918 *, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49980_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49982_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, KeyValuePair_2U5BU5D_t7510* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49982(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1918 *, KeyValuePair_2U5BU5D_t7510*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49982_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49984_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49984(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1918 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49984_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49986_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49986(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1918 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49986_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49988_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, KeyValuePair_2_t7223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49988(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1918 *, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49988_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49990_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49990(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1918 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49990_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49992_gshared (FlexibleDictionaryWrapper_2_t1918 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49992(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1918 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49992_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49994_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49994(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49994_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7223  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49996_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7190  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49996(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7223  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49996_gshared)(__this /* static, unused */, ___pair, method)
