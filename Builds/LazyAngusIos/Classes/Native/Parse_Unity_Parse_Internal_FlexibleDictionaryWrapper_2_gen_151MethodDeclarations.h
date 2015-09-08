#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>
struct FlexibleDictionaryWrapper_2_t2023;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7829;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8418;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7848;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59098_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59098(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2023 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59098_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59099_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59099(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2023 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59099_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59100_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59100(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2023 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59100_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59101_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59101(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59101_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59102_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59102(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2023 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59102_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59103_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59103(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2023 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59103_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59104_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59104(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59104_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m59105_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59105(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2023 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59105_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59106_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59106(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2023 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59106_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59107_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59107(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2023 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59107_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59108_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59108(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59108_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59109_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59109(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2023 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59109_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59110_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, KeyValuePair_2U5BU5D_t8418* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59110(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2023 *, KeyValuePair_2U5BU5D_t8418*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59110_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59111_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59111(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59111_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59112_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59112(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59112_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59113_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59113(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2023 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59113_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59114_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59114(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59114_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59115_gshared (FlexibleDictionaryWrapper_2_t2023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59115(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59115_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59116_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59116(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59116_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7652  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59117_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7833  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59117(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7652  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59117_gshared)(__this /* static, unused */, ___pair, method)
