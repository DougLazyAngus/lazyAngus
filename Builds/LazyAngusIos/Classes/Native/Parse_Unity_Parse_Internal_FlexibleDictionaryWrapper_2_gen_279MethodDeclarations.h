#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>
struct FlexibleDictionaryWrapper_2_t2158;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>
struct ICollection_1_t10200;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>
struct Dictionary_2_t7711;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>[]
struct KeyValuePair_2U5BU5D_t10201;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>
struct IEnumerator_1_t10202;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_126.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m63619(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2158 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m36163_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m63620(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2158 *, String_t*, Dictionary_2_t7711 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m36164_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m63621(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2158 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m36165_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m63622(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2158 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m36166_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m63623(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2158 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m36167_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m63624(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2158 *, String_t*, Dictionary_2_t7711 **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m36168_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m63625(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2158 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m36169_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m63626(__this, ___key, method) (( Dictionary_2_t7711 * (*) (FlexibleDictionaryWrapper_2_t2158 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m36170_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m63627(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2158 *, String_t*, Dictionary_2_t7711 *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m36171_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m63628(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2158 *, KeyValuePair_2_t8800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m36172_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m63629(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2158 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m36173_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m63630(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2158 *, KeyValuePair_2_t8800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m36174_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m63631(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2158 *, KeyValuePair_2U5BU5D_t10201*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m36175_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m63632(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2158 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m36176_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m63633(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2158 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m36177_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m63634(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2158 *, KeyValuePair_2_t8800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m36178_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m63635(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2158 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m36179_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m63636(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2158 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m36180_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m63637(__this /* static, unused */, ___item, method) (( Dictionary_2_t7711 * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m36181_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m63638(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8800  (*) (Object_t * /* static, unused */, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m36182_gshared)(__this /* static, unused */, ___pair, method)
