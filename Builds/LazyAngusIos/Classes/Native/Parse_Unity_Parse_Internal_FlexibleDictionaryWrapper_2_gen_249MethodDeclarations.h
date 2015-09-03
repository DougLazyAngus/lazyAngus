#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>
struct FlexibleDictionaryWrapper_2_t2117;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>
struct ICollection_1_t10142;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t7587;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>[]
struct KeyValuePair_2U5BU5D_t10143;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>
struct IEnumerator_1_t10144;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_111.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m62727(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2117 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m36081_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m62728(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2117 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m36082_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m62729(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2117 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m36083_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m62730(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2117 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m36084_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m62731(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2117 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m36085_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m62732(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2117 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m36086_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m62733(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2117 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m36087_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m62734(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2117 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m36088_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m62735(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2117 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m36089_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m62736(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2117 *, KeyValuePair_2_t8727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m36090_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m62737(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2117 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m36091_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m62738(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2117 *, KeyValuePair_2_t8727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m36092_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m62739(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2117 *, KeyValuePair_2U5BU5D_t10143*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m36093_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m62740(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2117 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m36094_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m62741(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2117 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m36095_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m62742(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2117 *, KeyValuePair_2_t8727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m36096_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m62743(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2117 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m36097_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m62744(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2117 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m36098_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m62745(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m36099_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m62746(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8727  (*) (Object_t * /* static, unused */, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m36100_gshared)(__this /* static, unused */, ___pair, method)
