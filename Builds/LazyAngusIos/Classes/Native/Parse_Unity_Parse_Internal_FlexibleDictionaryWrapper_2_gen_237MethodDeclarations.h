#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>
struct FlexibleDictionaryWrapper_2_t2086;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>
struct ICollection_1_t9501;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t1277;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>[]
struct KeyValuePair_2U5BU5D_t9502;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>
struct IEnumerator_1_t9503;
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
#define FlexibleDictionaryWrapper_2__ctor_m57783(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2086 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m31487_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m57784(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2086 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31488_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m57785(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2086 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m31489_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m57786(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2086 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m31490_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m57787(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2086 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31491_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m57788(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2086 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m31492_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m57789(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2086 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m31493_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m57790(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2086 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m31494_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m57791(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2086 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m31495_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m57792(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2086 *, KeyValuePair_2_t8138 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31496_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m57793(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2086 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m31497_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m57794(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2086 *, KeyValuePair_2_t8138 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m31498_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m57795(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2086 *, KeyValuePair_2U5BU5D_t9502*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m31499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m57796(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2086 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m31500_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57797(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2086 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m31501_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m57798(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2086 *, KeyValuePair_2_t8138 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31502_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57799(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2086 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m31503_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57800(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2086 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31504_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57801(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m31505_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57802(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8138  (*) (Object_t * /* static, unused */, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m31506_gshared)(__this /* static, unused */, ___pair, method)
