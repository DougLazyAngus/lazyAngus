#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>
struct FlexibleDictionaryWrapper_2_t1985;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IList`1<System.String>>
struct ICollection_1_t9328;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t638;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.String>>[]
struct KeyValuePair_2U5BU5D_t9329;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.String>>>
struct IEnumerator_1_t9330;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IList`1<System.String>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_83.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m55759(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1985 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30644_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m55760(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1985 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30645_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m55761(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1985 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30646_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m55762(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1985 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30647_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m55763(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1985 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30648_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m55764(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1985 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30649_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m55765(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1985 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30650_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m55766(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1985 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30651_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m55767(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1985 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30652_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m55768(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1985 *, KeyValuePair_2_t7965 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30653_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m55769(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1985 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30654_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m55770(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1985 *, KeyValuePair_2_t7965 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30655_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m55771(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1985 *, KeyValuePair_2U5BU5D_t9329*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m55772(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1985 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30657_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55773(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1985 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30658_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m55774(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1985 *, KeyValuePair_2_t7965 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30659_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55775(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1985 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30660_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55776(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1985 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30661_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55777(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30662_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IList`1<System.String>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55778(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7965  (*) (Object_t * /* static, unused */, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30663_gshared)(__this /* static, unused */, ___pair, method)
