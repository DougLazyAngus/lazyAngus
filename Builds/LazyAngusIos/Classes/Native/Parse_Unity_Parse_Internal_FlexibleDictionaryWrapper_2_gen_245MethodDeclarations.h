#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>
struct FlexibleDictionaryWrapper_2_t2047;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct ICollection_1_t9077;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t647;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t767;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>>[]
struct KeyValuePair_2U5BU5D_t9416;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>>>
struct IEnumerator_1_t9417;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_109.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m57238(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30719_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m57239(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30720_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m57240(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30721_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m57241(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30722_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m57242(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30723_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m57243(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30724_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m57244(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30725_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m57245(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30726_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m57246(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30727_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m57247(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, KeyValuePair_2_t8080 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30728_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m57248(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30729_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m57249(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, KeyValuePair_2_t8080 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30730_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m57250(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, KeyValuePair_2U5BU5D_t9416*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30731_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m57251(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30732_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57252(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30733_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m57253(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, KeyValuePair_2_t8080 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30734_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57254(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30735_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57255(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30736_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57256(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30737_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57257(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8080  (*) (Object_t * /* static, unused */, KeyValuePair_2_t729 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30738_gshared)(__this /* static, unused */, ___pair, method)
