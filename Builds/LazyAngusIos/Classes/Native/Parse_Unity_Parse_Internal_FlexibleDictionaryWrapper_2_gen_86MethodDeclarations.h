#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1884;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8632;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7178;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7494;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7154;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50238_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50238(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50238_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50239_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50239(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50239_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50240_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50240(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50240_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50241_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50241(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50241_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50242_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50242(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50242_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50243_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50243(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50243_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50244_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50244(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50244_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50245_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50245(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50245_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50246_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50246(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50246_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50247_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50247(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50247_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50248_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50248(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50248_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50249_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50249(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50249_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50250_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2U5BU5D_t7494* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50250(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2U5BU5D_t7494*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50250_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50251_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50251(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50251_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50252_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50252(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50252_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50253_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50253(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50253_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50254_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50254(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50254_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50255_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50255(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50255_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50256_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50256(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50256_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5495  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50257_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7182  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50257(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5495  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50257_gshared)(__this /* static, unused */, ___pair, method)
