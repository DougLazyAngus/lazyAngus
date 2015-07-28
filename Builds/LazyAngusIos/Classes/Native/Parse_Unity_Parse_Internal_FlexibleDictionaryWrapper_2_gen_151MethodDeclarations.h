#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1942;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9104;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7170;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7759;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7189;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53611_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53611(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53611_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53612_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53612(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53612_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53613_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53613(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53613_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53614_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53614(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53614_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53615_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53615(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53615_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53616_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53616(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53616_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53617_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53617(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53617_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53618_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53618(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53618_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53619_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53619(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53619_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53620_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53620(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53620_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53621_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53621(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53621_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53622_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53622(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53622_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53623_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2U5BU5D_t7759* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53623(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2U5BU5D_t7759*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53623_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53624_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53624(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53624_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53625_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53625(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53625_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53626_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53626(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53626_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53627_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53627(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53627_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53628_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53628(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53628_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53629_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53629(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53629_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6993  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53630_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7174  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53630(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6993  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53630_gshared)(__this /* static, unused */, ___pair, method)
