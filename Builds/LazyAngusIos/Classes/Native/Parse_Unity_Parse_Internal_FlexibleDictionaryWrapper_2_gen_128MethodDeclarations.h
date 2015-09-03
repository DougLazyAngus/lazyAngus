#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>
struct FlexibleDictionaryWrapper_2_t1996;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7570;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8334;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7832;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58094_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58094(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58094_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58095_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58095(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58095_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58096_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58096(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58096_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58097_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58097(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58097_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58098_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58098(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58098_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58099_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58099(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58099_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58100_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58100(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58100_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m58101_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58101(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58101_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58102_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58102(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58102_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58103_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58103(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58103_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58104_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58104(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58104_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58105_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58105(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58105_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58106_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2U5BU5D_t8334* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58106(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2U5BU5D_t8334*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58106_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58107_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58107(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58107_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58108_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58108(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58108_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58109_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58109(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58109_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58110_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58110(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58110_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58111_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58111(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58111_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58112_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58112(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58112_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7827  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58113_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7626  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58113(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7827  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58113_gshared)(__this /* static, unused */, ___pair, method)
