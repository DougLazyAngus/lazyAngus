﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1860;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7259;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1400;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46838_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46838(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46838_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46839_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46839(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46839_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46840_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46840(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46840_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46841_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46841(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46841_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46842_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46842(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46842_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46843_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46843(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46843_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46844_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46844(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46844_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46845_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46845(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46845_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46846_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46846(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46846_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46847_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46847(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46847_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46848_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46848(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46848_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46849_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46849(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46849_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46850_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2U5BU5D_t1413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46850(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2U5BU5D_t1413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46850_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46851_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46851(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46851_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46852_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46852(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46852_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46853_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46853(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46853_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46854_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46854(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46854_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46855_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46855(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46855_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46856_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46856(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46856_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t778  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46857_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7263  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46857(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t778  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46857_gshared)(__this /* static, unused */, ___pair, method)
