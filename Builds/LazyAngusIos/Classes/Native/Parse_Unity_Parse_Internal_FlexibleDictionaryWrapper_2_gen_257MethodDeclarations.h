#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>
struct FlexibleDictionaryWrapper_2_t2106;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>
struct ICollection_1_t9527;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>
struct IDictionary_2_t7039;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>[]
struct KeyValuePair_2U5BU5D_t9528;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>>
struct IEnumerator_1_t9529;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_115.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m58316(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2106 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m31486_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m58317(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2106 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31487_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m58318(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2106 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m31488_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m58319(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2106 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m31489_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m58320(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2106 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31490_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m58321(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2106 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m31491_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m58322(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2106 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m31492_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m58323(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2106 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m31493_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m58324(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2106 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m31494_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m58325(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2106 *, KeyValuePair_2_t8176 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31495_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m58326(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2106 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m31496_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m58327(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2106 *, KeyValuePair_2_t8176 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m31497_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m58328(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2106 *, KeyValuePair_2U5BU5D_t9528*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m31498_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m58329(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2106 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m31499_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58330(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2106 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m31500_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m58331(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2106 *, KeyValuePair_2_t8176 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31501_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58332(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2106 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m31502_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58333(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2106 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31503_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58334(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m31504_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58335(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8176  (*) (Object_t * /* static, unused */, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m31505_gshared)(__this /* static, unused */, ___pair, method)
