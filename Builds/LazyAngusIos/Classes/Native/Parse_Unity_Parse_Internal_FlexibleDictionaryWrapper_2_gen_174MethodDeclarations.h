#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>
struct FlexibleDictionaryWrapper_2_t1972;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1168;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>
struct IDictionary_2_t6951;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1359;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1346;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55026_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55026(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55026_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55027_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55027(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55027_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55028_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55028(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55028_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55029_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55029(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55029_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55030_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55030(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55030_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55031_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55031(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55031_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55032_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55032(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55032_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m55033_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55033(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55033_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55034_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55034(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55034_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55035_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55035(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55035_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55036_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55036(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55036_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55037_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55037(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55037_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55038_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2U5BU5D_t1359* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55038(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1972 *, KeyValuePair_2U5BU5D_t1359*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55038_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55039_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55039(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55039_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55040_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55040(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55040_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55041_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55041(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1972 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55041_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55042_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55042(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55042_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55043_gshared (FlexibleDictionaryWrapper_2_t1972 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55043(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1972 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55043_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55044_gshared (Object_t * __this /* static, unused */, ParseGeoPoint_t1192  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55044(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, ParseGeoPoint_t1192 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55044_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t727  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55045_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7054  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55045(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t727  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7054 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55045_gshared)(__this /* static, unused */, ___pair, method)
