#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>
struct FlexibleDictionaryWrapper_2_t2097;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,System.String>>
struct ICollection_1_t9177;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t693;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>>[]
struct KeyValuePair_2U5BU5D_t9516;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>>>
struct IEnumerator_1_t9517;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_110.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_FlexibleDictionaryWrapper_2_genMethodDeclarations.h"
#define FlexibleDictionaryWrapper_2__ctor_m58031(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2097 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m31519_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m58032(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2097 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31520_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m58033(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2097 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m31521_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m58034(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2097 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m31522_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m58035(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2097 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31523_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m58036(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2097 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m31524_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m58037(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2097 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m31525_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m58038(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2097 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m31526_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m58039(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2097 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m31527_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m58040(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2097 *, KeyValuePair_2_t8157 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31528_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m58041(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2097 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m31529_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m58042(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2097 *, KeyValuePair_2_t8157 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m31530_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m58043(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2097 *, KeyValuePair_2U5BU5D_t9516*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m31531_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m58044(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2097 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m31532_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58045(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2097 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m31533_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m58046(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2097 *, KeyValuePair_2_t8157 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31534_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58047(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2097 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m31535_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58048(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2097 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31536_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58049(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m31537_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58050(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8157  (*) (Object_t * /* static, unused */, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m31538_gshared)(__this /* static, unused */, ___pair, method)
