#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>
struct FlexibleDictionaryWrapper_2_t2067;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
struct ICollection_1_t9442;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t768;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>[]
struct KeyValuePair_2U5BU5D_t9443;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>>
struct IEnumerator_1_t9444;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Int32>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_118.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m57775(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2067 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30722_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m57776(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2067 *, String_t*, Dictionary_2_t223 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30723_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m57777(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2067 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30724_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m57778(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2067 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30725_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m57779(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2067 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30726_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m57780(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2067 *, String_t*, Dictionary_2_t223 **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30727_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m57781(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2067 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30728_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m57782(__this, ___key, method) (( Dictionary_2_t223 * (*) (FlexibleDictionaryWrapper_2_t2067 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30729_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m57783(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2067 *, String_t*, Dictionary_2_t223 *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30730_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m57784(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2067 *, KeyValuePair_2_t8118 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30731_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m57785(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2067 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30732_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m57786(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2067 *, KeyValuePair_2_t8118 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30733_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m57787(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2067 *, KeyValuePair_2U5BU5D_t9443*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30734_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m57788(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2067 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30735_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57789(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2067 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30736_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m57790(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2067 *, KeyValuePair_2_t8118 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30737_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57791(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2067 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30738_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57792(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2067 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30739_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57793(__this /* static, unused */, ___item, method) (( Dictionary_2_t223 * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30740_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57794(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8118  (*) (Object_t * /* static, unused */, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30741_gshared)(__this /* static, unused */, ___pair, method)
