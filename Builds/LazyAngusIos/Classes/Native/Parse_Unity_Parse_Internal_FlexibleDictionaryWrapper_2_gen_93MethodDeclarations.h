﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>
struct FlexibleDictionaryWrapper_2_t1945;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9212;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7197;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7640;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7246;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51578_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51578(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51578_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51579_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51579(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51579_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51580_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51580(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51580_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51581_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51581(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51581_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51582_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51582(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51582_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51583_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51583(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51583_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51584_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51584(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51584_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51585_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51585(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51585_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51586_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51586(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51586_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51587_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51587(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51587_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51588_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51588(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51588_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51589_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51589(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51589_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51590_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2U5BU5D_t7640* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51590(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2U5BU5D_t7640*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51590_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51591_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51591(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51591_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51592_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51592(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51592_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51593_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51593(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51593_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51594_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51594(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51594_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51595_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51595(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51595_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51596_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51596(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51596_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7241  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51597_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7201  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51597(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7241  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51597_gshared)(__this /* static, unused */, ___pair, method)
