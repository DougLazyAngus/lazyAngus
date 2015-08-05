#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>
struct FlexibleDictionaryWrapper_2_t2058;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>
struct ICollection_1_t9429;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>
struct IDictionary_2_t6964;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>[]
struct KeyValuePair_2U5BU5D_t9430;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>>
struct IEnumerator_1_t9431;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_114.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m57551(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2058 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30714_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m57552(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2058 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30715_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m57553(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2058 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30716_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m57554(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30717_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m57555(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2058 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30718_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m57556(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2058 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30719_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m57557(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30720_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m57558(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2058 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30721_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m57559(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2058 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30722_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m57560(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2058 *, KeyValuePair_2_t8101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30723_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m57561(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30724_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m57562(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2058 *, KeyValuePair_2_t8101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30725_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m57563(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2058 *, KeyValuePair_2U5BU5D_t9430*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30726_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m57564(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30727_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57565(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30728_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m57566(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2058 *, KeyValuePair_2_t8101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30729_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57567(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30730_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57568(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30731_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57569(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30732_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57570(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8101  (*) (Object_t * /* static, unused */, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30733_gshared)(__this /* static, unused */, ___pair, method)
