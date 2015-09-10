#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>
struct FlexibleDictionaryWrapper_2_t2004;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9851;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8347;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7845;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58066_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58066(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58066_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58067_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58067(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58067_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58068_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58068(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58068_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58069_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58069(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58069_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58070_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58070(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58070_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58071_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58071(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58071_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58072_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58072(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58072_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m58073_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58073(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58073_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58074_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58074(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58074_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58075_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58075(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58075_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58076_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58076(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58076_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58077_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58077(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58077_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58078_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, KeyValuePair_2U5BU5D_t8347* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58078(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, KeyValuePair_2U5BU5D_t8347*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58078_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58079_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58079(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58079_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58080_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58080(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58080_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58081_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58081(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58081_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58082_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58082(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58082_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58083_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58083(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58083_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58084_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58084(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58084_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7840  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58085_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7840  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58085(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7840  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58085_gshared)(__this /* static, unused */, ___pair, method)
