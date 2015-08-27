﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>
struct FlexibleDictionaryWrapper_2_t1885;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9141;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7248;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7195;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47765_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47765(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47765_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47767_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47767(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47767_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47769_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47769(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47769_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47771_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47771(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47771_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47773_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47773(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47773_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47775_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47775(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47775_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47777_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47777(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47777_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47779_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47779(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47779_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47781_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47781(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47781_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47783_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47783(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47783_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47785_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47785(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47785_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47787_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47787(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47787_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47789_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2U5BU5D_t7303* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47789(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47789_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47791_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47791(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47791_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47793_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47793(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47793_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47795_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47795(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47795_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47797_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47797(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47797_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47799_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47799(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47799_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47801_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47801(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47801_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7190  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47803_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7252  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47803(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7190  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47803_gshared)(__this /* static, unused */, ___pair, method)
