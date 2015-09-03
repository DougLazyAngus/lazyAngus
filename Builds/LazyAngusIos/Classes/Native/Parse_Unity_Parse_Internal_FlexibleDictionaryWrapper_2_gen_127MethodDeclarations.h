#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>
struct FlexibleDictionaryWrapper_2_t1995;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8334;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7832;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58051_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58051(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58051_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58052_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58052(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58052_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58053_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58053(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58053_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58054_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58054(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58054_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58055_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58055(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58055_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58056_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58056(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58056_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58057_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58057(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58057_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m58058_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58058(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58058_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58059_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58059(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58059_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58060_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58060(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58060_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58061_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58061(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58061_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58062_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58062(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58062_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58063_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, KeyValuePair_2U5BU5D_t8334* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58063(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, KeyValuePair_2U5BU5D_t8334*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58063_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58064_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58064(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58064_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58065_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58065(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58065_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58066_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58066(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58066_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58067_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58067(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58067_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58068_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58068(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58068_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58069_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58069(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58069_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7827  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58070_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7646  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58070(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7827  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58070_gshared)(__this /* static, unused */, ___pair, method)
