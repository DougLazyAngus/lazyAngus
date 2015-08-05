#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>
struct FlexibleDictionaryWrapper_2_t1851;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9107;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6928;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7302;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7128;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48040_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48040(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48040_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48041_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48041(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48041_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48042_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48042(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48042_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48043_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48043(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48043_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48044_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48044(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48044_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48045_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48045(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48045_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48046_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48046(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48046_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48047_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48047(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48047_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48048_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48048(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48048_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48049_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48049(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48049_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48050_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48050(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48050_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48051_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48051(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48051_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48052_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2U5BU5D_t7302* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48052(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2U5BU5D_t7302*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48052_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48053_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48053(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48053_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48054_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48054(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48054_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48055_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48055(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48055_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48056_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48056(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48056_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48057_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48057(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48057_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48058_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48058(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48058_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7123  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48059_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6984  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48059(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7123  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6984 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48059_gshared)(__this /* static, unused */, ___pair, method)
