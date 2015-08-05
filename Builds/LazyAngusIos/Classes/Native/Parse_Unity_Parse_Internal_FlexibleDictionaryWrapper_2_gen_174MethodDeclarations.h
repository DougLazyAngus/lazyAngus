#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>
struct FlexibleDictionaryWrapper_2_t1975;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>
struct IDictionary_2_t6954;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1362;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1349;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55049_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55049(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55049_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55050_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55050(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55050_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55051_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55051(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55051_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55052_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55052(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55052_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55053_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55053(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55053_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55054_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55054(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55054_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55055_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55055(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55055_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m55056_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55056(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55056_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55057_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55057(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55057_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55058_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55058(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55058_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55059_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55059(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55059_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55060_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55060(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55060_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55061_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2U5BU5D_t1362* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55061(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2U5BU5D_t1362*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55061_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55062_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55062(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55062_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55063_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55063(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55063_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55064_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55064(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55064_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55065_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55065(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55065_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55066_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55066(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55066_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55067_gshared (Object_t * __this /* static, unused */, ParseGeoPoint_t1195  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55067(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, ParseGeoPoint_t1195 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55067_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t728  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55068_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7057  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55068(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t728  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7057 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55068_gshared)(__this /* static, unused */, ___pair, method)
