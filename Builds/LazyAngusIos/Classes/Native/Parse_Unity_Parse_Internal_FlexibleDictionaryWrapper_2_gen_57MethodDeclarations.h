﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>
struct FlexibleDictionaryWrapper_2_t1848;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9097;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6913;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7356;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7128;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48508_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48508(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48508_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48509_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48509(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48509_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48510_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48510(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48510_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48511_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48511(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48511_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48512_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48512(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48512_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48513_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48513(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48513_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48514_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48514(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48514_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48515_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48515(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48515_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48516_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48516(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48516_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48517_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48517(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48517_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48518_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48518(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48518_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48519_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48519(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48519_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48520_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2U5BU5D_t7356* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48520(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2U5BU5D_t7356*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48520_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48521_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48521(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48521_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48522_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48522(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48522_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48523_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48523(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48523_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48524_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48524(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48524_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48525_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48525(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48525_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48526_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48526(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48526_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7123  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48527_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5487  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48527(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7123  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5487 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48527_gshared)(__this /* static, unused */, ___pair, method)