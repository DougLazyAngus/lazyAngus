#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>
struct FlexibleDictionaryWrapper_2_t2035;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>
struct ICollection_1_t9400;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t1224;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t764;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>[]
struct KeyValuePair_2U5BU5D_t9401;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>>
struct IEnumerator_1_t9402;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_105.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m56994(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30691_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m56995(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30692_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m56996(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30693_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m56997(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30694_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m56998(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30695_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m56999(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30696_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m57000(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30697_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m57001(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30698_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m57002(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30699_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m57003(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, KeyValuePair_2_t8060 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30700_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m57004(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30701_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m57005(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, KeyValuePair_2_t8060 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30702_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m57006(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, KeyValuePair_2U5BU5D_t9401*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30703_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m57007(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30704_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57008(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30705_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m57009(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, KeyValuePair_2_t8060 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30706_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57010(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30707_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57011(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30708_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57012(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30709_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.Boolean>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57013(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8060  (*) (Object_t * /* static, unused */, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30710_gshared)(__this /* static, unused */, ___pair, method)
