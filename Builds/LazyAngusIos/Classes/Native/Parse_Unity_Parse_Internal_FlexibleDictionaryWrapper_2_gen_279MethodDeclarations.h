#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>
struct FlexibleDictionaryWrapper_2_t2081;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>
struct ICollection_1_t9463;
// System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>
struct Dictionary_2_t7057;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t767;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>[]
struct KeyValuePair_2U5BU5D_t9464;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>>>
struct IEnumerator_1_t9465;
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
#define FlexibleDictionaryWrapper_2__ctor_m58150(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2081 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30719_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m58151(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2081 *, String_t*, Dictionary_2_t7057 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30720_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m58152(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2081 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30721_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m58153(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2081 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30722_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m58154(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2081 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30723_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m58155(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2081 *, String_t*, Dictionary_2_t7057 **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30724_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m58156(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2081 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30725_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m58157(__this, ___key, method) (( Dictionary_2_t7057 * (*) (FlexibleDictionaryWrapper_2_t2081 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30726_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m58158(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2081 *, String_t*, Dictionary_2_t7057 *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30727_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m58159(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2081 *, KeyValuePair_2_t8146 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30728_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m58160(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2081 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30729_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m58161(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2081 *, KeyValuePair_2_t8146 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30730_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m58162(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2081 *, KeyValuePair_2U5BU5D_t9464*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30731_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m58163(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2081 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30732_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58164(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2081 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30733_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m58165(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2081 *, KeyValuePair_2_t8146 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30734_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58166(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2081 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30735_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58167(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2081 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30736_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58168(__this /* static, unused */, ___item, method) (( Dictionary_2_t7057 * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30737_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,Parse.ParseGeoPoint>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58169(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8146  (*) (Object_t * /* static, unused */, KeyValuePair_2_t729 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30738_gshared)(__this /* static, unused */, ___pair, method)
