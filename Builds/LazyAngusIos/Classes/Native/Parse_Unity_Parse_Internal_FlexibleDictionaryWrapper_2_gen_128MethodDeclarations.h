#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>
struct FlexibleDictionaryWrapper_2_t2000;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9844;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8340;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7838;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58119_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58119(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58119_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58120_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58120(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58120_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58121_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58121(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58121_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58122_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58122(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58122_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58123_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58123(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58123_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58124_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58124(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58124_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58125_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58125(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58125_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m58126_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58126(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58126_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58127_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58127(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58127_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58128_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58128(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58128_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58129_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58129(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58129_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58130_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58130(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58130_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58131_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2U5BU5D_t8340* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58131(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2U5BU5D_t8340*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58131_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58132_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58132(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58132_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58133_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58133(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58133_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58134_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58134(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58134_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58135_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58135(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58135_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58136_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58136(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58136_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58137_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58137(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58137_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7833  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58138_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7632  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58138(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7833  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58138_gshared)(__this /* static, unused */, ___pair, method)
