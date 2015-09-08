#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>
struct FlexibleDictionaryWrapper_2_t1935;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8015;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7787;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54234_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54234(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54234_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54235_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54235(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54235_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54236_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54236(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54236_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54237_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54237(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54237_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54238_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54238(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54238_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54239_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54239(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54239_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54240_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54240(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54240_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m54241_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54241(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54241_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54242_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54242(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54242_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54243_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54243(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54243_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54244_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54244(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54244_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54245_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54245(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54245_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54246_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, KeyValuePair_2U5BU5D_t8015* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54246(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, KeyValuePair_2U5BU5D_t8015*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54246_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54247_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54247(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54247_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54248_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54248(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54248_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54249_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54249(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54249_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54250_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54250(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54250_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54251_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54251(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54251_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54252_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54252(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54252_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7782  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54253_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7632  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54253(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7782  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54253_gshared)(__this /* static, unused */, ___pair, method)
