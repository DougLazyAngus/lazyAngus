#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>
struct FlexibleDictionaryWrapper_2_t2028;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9853;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7814;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8425;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59069_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59069(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59069_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59070_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59070(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59070_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59071_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59071(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59071_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59072_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59072(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59072_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59073_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59073(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59073_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59074_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59074(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59074_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59075_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59075(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59075_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m59076_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59076(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59076_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59077_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59077(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59077_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59078_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59078(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59078_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59079_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59079(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59079_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59080_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59080(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59080_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59081_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, KeyValuePair_2U5BU5D_t8425* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59081(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2028 *, KeyValuePair_2U5BU5D_t8425*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59081_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59082_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59082(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59082_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59083_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59083(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59083_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59084_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59084(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2028 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59084_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59085_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59085(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59085_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59086_gshared (FlexibleDictionaryWrapper_2_t2028 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59086(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2028 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59086_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59087_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59087(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59087_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7659  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59088_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7818  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59088(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7659  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59088_gshared)(__this /* static, unused */, ___pair, method)
