#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>
struct FlexibleDictionaryWrapper_2_t2109;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>
struct ICollection_1_t10134;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t1300;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>[]
struct KeyValuePair_2U5BU5D_t10135;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>
struct IEnumerator_1_t10136;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_106.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m62434(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2109 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m36106_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m62435(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2109 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m36107_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m62436(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2109 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m36108_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m62437(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2109 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m36109_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m62438(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2109 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m36110_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m62439(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2109 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m36111_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m62440(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2109 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m36112_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m62441(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2109 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m36113_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m62442(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2109 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m36114_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m62443(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2109 *, KeyValuePair_2_t8711 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m36115_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m62444(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2109 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m36116_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m62445(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2109 *, KeyValuePair_2_t8711 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m36117_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m62446(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2109 *, KeyValuePair_2U5BU5D_t10135*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m36118_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m62447(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2109 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m36119_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m62448(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2109 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m36120_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m62449(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2109 *, KeyValuePair_2_t8711 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m36121_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m62450(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2109 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m36122_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m62451(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2109 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m36123_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m62452(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m36124_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m62453(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8711  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m36125_gshared)(__this /* static, unused */, ___pair, method)
