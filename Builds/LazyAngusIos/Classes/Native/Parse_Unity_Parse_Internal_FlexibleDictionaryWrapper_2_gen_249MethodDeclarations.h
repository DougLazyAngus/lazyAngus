#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>
struct FlexibleDictionaryWrapper_2_t2051;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>
struct ICollection_1_t9418;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t6946;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t768;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>[]
struct KeyValuePair_2U5BU5D_t9419;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>>
struct IEnumerator_1_t9420;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.DateTime>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_110.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m57343(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2051 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30722_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m57344(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2051 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30723_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m57345(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2051 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30724_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m57346(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2051 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30725_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m57347(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2051 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30726_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m57348(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2051 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30727_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m57349(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2051 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30728_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m57350(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2051 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30729_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m57351(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2051 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30730_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m57352(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2051 *, KeyValuePair_2_t8086 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30731_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m57353(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2051 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30732_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m57354(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2051 *, KeyValuePair_2_t8086 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30733_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m57355(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2051 *, KeyValuePair_2U5BU5D_t9419*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30734_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m57356(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2051 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30735_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57357(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2051 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30736_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m57358(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2051 *, KeyValuePair_2_t8086 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30737_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57359(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2051 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30738_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57360(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2051 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30739_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57361(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30740_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57362(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8086  (*) (Object_t * /* static, unused */, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30741_gshared)(__this /* static, unused */, ___pair, method)
