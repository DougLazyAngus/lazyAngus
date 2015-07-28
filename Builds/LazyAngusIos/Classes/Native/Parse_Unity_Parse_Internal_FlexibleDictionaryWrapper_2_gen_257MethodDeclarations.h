#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>
struct FlexibleDictionaryWrapper_2_t2049;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>
struct ICollection_1_t9419;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>
struct IDictionary_2_t6954;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>[]
struct KeyValuePair_2U5BU5D_t9420;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>>
struct IEnumerator_1_t9421;
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
#define FlexibleDictionaryWrapper_2__ctor_m57481(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30644_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m57482(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30645_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m57483(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30646_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m57484(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30647_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m57485(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30648_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m57486(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30649_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m57487(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30650_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m57488(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30651_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m57489(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30652_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m57490(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, KeyValuePair_2_t8091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30653_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m57491(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30654_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m57492(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, KeyValuePair_2_t8091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30655_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m57493(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, KeyValuePair_2U5BU5D_t9420*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m57494(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30657_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57495(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30658_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m57496(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, KeyValuePair_2_t8091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30659_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57497(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30660_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57498(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30661_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57499(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30662_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57500(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8091  (*) (Object_t * /* static, unused */, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30663_gshared)(__this /* static, unused */, ___pair, method)
