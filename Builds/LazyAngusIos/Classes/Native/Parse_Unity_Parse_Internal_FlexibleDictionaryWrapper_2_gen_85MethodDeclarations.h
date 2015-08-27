﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>
struct FlexibleDictionaryWrapper_2_t1937;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8713;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7248;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7575;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7235;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51016_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51016(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51016_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51017_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51017(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51017_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51018_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51018(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51018_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51019_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51019(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51019_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51020_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51020(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51020_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51021_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51021(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51021_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51022_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51022(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51022_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m51023_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51023(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51023_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51024_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51024(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51024_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51025_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2_t5544  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51025(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51025_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51026_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51026(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51026_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51027_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2_t5544  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51027(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51027_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51028_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2U5BU5D_t7575* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51028(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2U5BU5D_t7575*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51028_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51029_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51029(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51029_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51030_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51030(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51030_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51031_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2_t5544  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51031(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51031_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51032_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51032(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51032_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51033_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51033(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51033_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51034_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51034(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51034_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5544  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51035_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7252  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51035(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5544  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51035_gshared)(__this /* static, unused */, ___pair, method)
