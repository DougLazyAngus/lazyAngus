#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>
struct FlexibleDictionaryWrapper_2_t2129;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>
struct ICollection_1_t10160;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>
struct IDictionary_2_t7612;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>[]
struct KeyValuePair_2U5BU5D_t10161;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>>>
struct IEnumerator_1_t10162;
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
#define FlexibleDictionaryWrapper_2__ctor_m62968(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2129 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m36106_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Add(System.String,TOut)
#define FlexibleDictionaryWrapper_2_Add_m62969(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2129 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m36107_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::ContainsKey(System.String)
#define FlexibleDictionaryWrapper_2_ContainsKey_m62970(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2129 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m36108_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Keys()
#define FlexibleDictionaryWrapper_2_get_Keys_m62971(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2129 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m36109_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Remove(System.String)
#define FlexibleDictionaryWrapper_2_Remove_m62972(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2129 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m36110_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::TryGetValue(System.String,TOut&)
#define FlexibleDictionaryWrapper_2_TryGetValue_m62973(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2129 *, String_t*, Object_t**, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m36111_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Values()
#define FlexibleDictionaryWrapper_2_get_Values_m62974(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2129 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m36112_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Item(System.String)
#define FlexibleDictionaryWrapper_2_get_Item_m62975(__this, ___key, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2129 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m36113_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::set_Item(System.String,TOut)
#define FlexibleDictionaryWrapper_2_set_Item_m62976(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2129 *, String_t*, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m36114_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Add_m62977(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2129 *, KeyValuePair_2_t8749 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m36115_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Clear()
#define FlexibleDictionaryWrapper_2_Clear_m62978(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2129 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m36116_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Contains_m62979(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2129 *, KeyValuePair_2_t8749 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m36117_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
#define FlexibleDictionaryWrapper_2_CopyTo_m62980(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2129 *, KeyValuePair_2U5BU5D_t10161*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m36118_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_Count()
#define FlexibleDictionaryWrapper_2_get_Count_m62981(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2129 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m36119_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::get_IsReadOnly()
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m62982(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2129 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m36120_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
#define FlexibleDictionaryWrapper_2_Remove_m62983(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2129 *, KeyValuePair_2_t8749 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m36121_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::GetEnumerator()
#define FlexibleDictionaryWrapper_2_GetEnumerator_m62984(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2129 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m36122_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m62985(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2129 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m36123_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::<get_Values>b__0(TIn)
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m62986(__this /* static, unused */, ___item, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m36124_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Collections.Generic.IDictionary`2<System.String,Parse.ParseACL>,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m62987(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t8749  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m36125_gshared)(__this /* static, unused */, ___pair, method)
