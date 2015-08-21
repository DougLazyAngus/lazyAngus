#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>
struct FlexibleDictionaryWrapper_2_t2090;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Single>>
struct ICollection_1_t9507;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7003;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>[]
struct KeyValuePair_2U5BU5D_t9508;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>>
struct IEnumerator_1_t9509;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Single>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_108.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m57891(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2090 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m31487_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m57892(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2090 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31488_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m57893(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2090 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m31489_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m57894(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2090 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m31490_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m57895(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2090 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31491_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m57896(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2090 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m31492_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m57897(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2090 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m31493_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m57898(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2090 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m31494_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m57899(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2090 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m31495_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m57900(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2090 *, KeyValuePair_2_t8146 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31496_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m57901(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2090 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m31497_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m57902(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2090 *, KeyValuePair_2_t8146 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m31498_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m57903(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2090 *, KeyValuePair_2U5BU5D_t9508*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m31499_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m57904(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2090 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m31500_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57905(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2090 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m31501_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m57906(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2090 *, KeyValuePair_2_t8146 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31502_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57907(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2090 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m31503_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57908(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2090 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31504_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57909(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m31505_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Single>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57910(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8146  (*) (Object_t * /* static, unused */, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m31506_gshared)(__this /* static, unused */, ___pair, method)
