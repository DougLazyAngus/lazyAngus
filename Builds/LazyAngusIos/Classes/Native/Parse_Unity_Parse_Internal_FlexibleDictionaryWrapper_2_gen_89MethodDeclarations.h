﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>
struct FlexibleDictionaryWrapper_2_t1880;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8624;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6917;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7486;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7146;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50301_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50301(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50301_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50302_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50302(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50302_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50303_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50303(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50303_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50304_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50304(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50304_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50305_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50305(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50305_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50306_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50306(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50306_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50307_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50307(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50307_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50308_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50308(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50308_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50309_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50309(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50309_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50310_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50310(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t5487 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50310_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50311_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50311(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50311_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50312_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50312(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t5487 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50312_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50313_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2U5BU5D_t7486* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50313(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2U5BU5D_t7486*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50313_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50314_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50314(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50314_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50315_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50315(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50315_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50316_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t5487  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50316(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t5487 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50316_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50317_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50317(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50317_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50318_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50318(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50318_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50319_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50319(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50319_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5487  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50320_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6973  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50320(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5487  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6973 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50320_gshared)(__this /* static, unused */, ___pair, method)