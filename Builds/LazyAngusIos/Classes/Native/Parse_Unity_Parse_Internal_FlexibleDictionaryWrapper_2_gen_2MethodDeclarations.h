﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>
struct FlexibleDictionaryWrapper_2_t1854;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7197;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1400;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46490_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46490(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46490_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46491_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46491(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46491_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46492_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46492(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46492_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46493_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46493(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46493_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46494_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46494(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46494_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46495_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46495(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46495_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46496_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46496(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46496_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46497_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46497(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46497_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46498_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46498(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46498_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46499_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46499(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46499_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46500_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46500(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46500_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46501_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46501(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46501_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46502_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2U5BU5D_t1413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46502(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2U5BU5D_t1413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46502_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46503_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46503(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46503_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46504_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46504(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46504_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46505_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46505(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46505_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46506_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46506(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46506_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46507_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46507(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46507_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46508_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46508(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46508_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t778  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46509_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7201  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46509(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t778  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46509_gshared)(__this /* static, unused */, ___pair, method)
