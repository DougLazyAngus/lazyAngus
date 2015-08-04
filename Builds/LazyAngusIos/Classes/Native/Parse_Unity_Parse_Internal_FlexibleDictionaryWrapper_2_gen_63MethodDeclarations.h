#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>
struct FlexibleDictionaryWrapper_2_t1863;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9107;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6927;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7366;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7138;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48810_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48810(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48810_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48811_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48811(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48811_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48812_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48812(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48812_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48813_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48813(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48813_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48814_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48814(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48814_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48815_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48815(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48815_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48816_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48816(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48816_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48817_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48817(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48817_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48818_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48818(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48818_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48819_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48819(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, KeyValuePair_2_t7133 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48819_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48820_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48820(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48820_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48821_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48821(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, KeyValuePair_2_t7133 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48821_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48822_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, KeyValuePair_2U5BU5D_t7366* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48822(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, KeyValuePair_2U5BU5D_t7366*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48822_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48823_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48823(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48823_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48824_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48824(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48824_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48825_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48825(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, KeyValuePair_2_t7133 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48825_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48826_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48826(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48826_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48827_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48827(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48827_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48828_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48828(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48828_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7133  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48829_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6983  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48829(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7133  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6983 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48829_gshared)(__this /* static, unused */, ___pair, method)
