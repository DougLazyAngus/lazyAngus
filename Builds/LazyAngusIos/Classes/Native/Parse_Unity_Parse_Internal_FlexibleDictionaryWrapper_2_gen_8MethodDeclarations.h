#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1810;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7182;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1363;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1350;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46048_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46048(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1810 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46048_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46049_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46049(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1810 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46049_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46050_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46050(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1810 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46050_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46051_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46051(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1810 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46051_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46052_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46052(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1810 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46052_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46053_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46053(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1810 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46053_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46054_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46054(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1810 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46054_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46055_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46055(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1810 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46055_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46056_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46056(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1810 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46056_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46057_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46057(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1810 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46057_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46058_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46058(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1810 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46058_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46059_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46059(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1810 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46059_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46060_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, KeyValuePair_2U5BU5D_t1363* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46060(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1810 *, KeyValuePair_2U5BU5D_t1363*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46060_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46061_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46061(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1810 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46061_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46062_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46062(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1810 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46062_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46063_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46063(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1810 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46063_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46064_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46064(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1810 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46064_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46065_gshared (FlexibleDictionaryWrapper_2_t1810 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46065(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1810 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46065_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46066_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46066(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46066_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t730  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46067_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7186  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46067(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t730  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46067_gshared)(__this /* static, unused */, ___pair, method)
