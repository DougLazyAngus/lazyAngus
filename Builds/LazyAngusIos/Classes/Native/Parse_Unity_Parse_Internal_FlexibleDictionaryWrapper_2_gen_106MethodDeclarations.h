﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>
struct FlexibleDictionaryWrapper_2_t1898;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8972;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7109;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7617;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7169;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51487_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51487(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51487_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51488_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51488(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51488_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51489_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51489(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51489_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51490_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51490(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51490_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51491_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51491(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51491_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51492_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51492(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51492_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51493_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51493(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51493_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51494_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51494(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51494_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51495_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51495(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51495_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51496_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51496(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51496_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51497_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51497(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51497_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51498_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51498(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51498_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51499_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2U5BU5D_t7617* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51499(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2U5BU5D_t7617*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51500_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51500(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51500_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51501_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51501(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51501_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51502_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51502(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51502_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51503_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51503(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51503_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51504_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51504(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51504_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51505_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51505(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51505_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7164  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51506_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7113  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51506(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7164  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51506_gshared)(__this /* static, unused */, ___pair, method)
