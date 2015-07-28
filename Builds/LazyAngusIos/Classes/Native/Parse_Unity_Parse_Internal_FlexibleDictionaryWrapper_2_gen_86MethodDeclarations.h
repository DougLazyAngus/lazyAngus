﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1878;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8625;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7487;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7147;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50191_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50191(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50191_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50192_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50192(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50192_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50193_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50193(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50193_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50194_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50194(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50194_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50195_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50195(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50195_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50196_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50196(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50196_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50197_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50197(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50197_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50198_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50198(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50198_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50199_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50199(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50199_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50200_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50200(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50200_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50201_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50201(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50201_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50202_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50202(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50202_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50203_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2U5BU5D_t7487* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50203(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2U5BU5D_t7487*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50203_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50204_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50204(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50204_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50205_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50205(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50205_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50206_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50206(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50206_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50207_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50207(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50207_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50208_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50208(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50208_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50209_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50209(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50209_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5488  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50210_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7175  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50210(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5488  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50210_gshared)(__this /* static, unused */, ___pair, method)
