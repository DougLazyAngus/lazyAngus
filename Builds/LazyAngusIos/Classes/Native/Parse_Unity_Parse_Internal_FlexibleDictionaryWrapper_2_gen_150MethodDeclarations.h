#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>
struct FlexibleDictionaryWrapper_2_t1948;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7167;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7767;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7197;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53615_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53615(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53615_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53616_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53616(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53616_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53617_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53617(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53617_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53618_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53618(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53618_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53619_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53619(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53619_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53620_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53620(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53620_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53621_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53621(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53621_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53622_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53622(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53622_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53623_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53623(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53623_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53624_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53624(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53624_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53625_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53625(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53625_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53626_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53626(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53626_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53627_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2U5BU5D_t7767* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53627(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2U5BU5D_t7767*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53627_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53628_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53628(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53628_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53629_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53629(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53629_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53630_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53630(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53630_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53631_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53631(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53631_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53632_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53632(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53632_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53633_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53633(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53633_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7001  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53634_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7171  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53634(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7001  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53634_gshared)(__this /* static, unused */, ___pair, method)
