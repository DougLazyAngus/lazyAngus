#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>
struct FlexibleDictionaryWrapper_2_t2070;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>
struct ICollection_1_t9451;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>
struct Dictionary_2_t7045;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t757;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>[]
struct KeyValuePair_2U5BU5D_t9452;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>
struct IEnumerator_1_t9453;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_125.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m58075(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2070 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30644_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m58076(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2070 *, String_t*, Dictionary_2_t7045 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30645_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m58077(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2070 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30646_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m58078(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2070 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30647_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m58079(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2070 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30648_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m58080(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2070 *, String_t*, Dictionary_2_t7045 **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30649_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m58081(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2070 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30650_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m58082(__this, ___key, method) (( Dictionary_2_t7045 * (*) (FlexibleDictionaryWrapper_2_t2070 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30651_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m58083(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2070 *, String_t*, Dictionary_2_t7045 *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30652_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m58084(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2070 *, KeyValuePair_2_t8134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30653_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m58085(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2070 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30654_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m58086(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2070 *, KeyValuePair_2_t8134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30655_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m58087(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2070 *, KeyValuePair_2U5BU5D_t9452*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m58088(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2070 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30657_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58089(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2070 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30658_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m58090(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2070 *, KeyValuePair_2_t8134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30659_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58091(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2070 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30660_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58092(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2070 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30661_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58093(__this /* static, unused */, ___item, method) (( Dictionary_2_t7045 * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30662_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58094(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8134  (*) (Object_t * /* static, unused */, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30663_gshared)(__this /* static, unused */, ___pair, method)
