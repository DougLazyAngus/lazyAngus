#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>
struct FlexibleDictionaryWrapper_2_t1984;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8334;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7832;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57360_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57360(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1984 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57360_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57361_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57361(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1984 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57361_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57362_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57362(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1984 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57362_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57363_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57363(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1984 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57363_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57364_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57364(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1984 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57364_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57365_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57365(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1984 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57365_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57366_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57366(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1984 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57366_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57367_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57367(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1984 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57367_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57368_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57368(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1984 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57368_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57369_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57369(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1984 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57369_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57370_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57370(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1984 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57370_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57371_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57371(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1984 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57371_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57372_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, KeyValuePair_2U5BU5D_t8334* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57372(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1984 *, KeyValuePair_2U5BU5D_t8334*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57372_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57373_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57373(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1984 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57373_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57374_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57374(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1984 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57374_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57375_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57375(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1984 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57375_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57376_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57376(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1984 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57376_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57377_gshared (FlexibleDictionaryWrapper_2_t1984 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57377(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1984 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57377_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57378_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57378(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57378_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7827  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57379_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t791  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57379(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7827  (*) (Object_t * /* static, unused */, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57379_gshared)(__this /* static, unused */, ___pair, method)
