#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1949;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7178;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7767;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7197;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53658_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53658(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53658_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53659_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53659(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53659_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53660_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53660(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53660_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53661_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53661(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53661_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53662_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53662(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53662_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53663_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53663(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53663_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53664_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53664(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53664_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53665_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53665(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53665_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53666_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53666(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53666_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53667_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53667(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53667_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53668_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53668(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53668_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53669_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53669(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53669_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53670_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2U5BU5D_t7767* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53670(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2U5BU5D_t7767*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53670_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53671_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53671(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53671_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53672_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53672(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53672_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53673_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53673(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53673_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53674_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53674(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53674_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53675_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53675(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53675_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53676_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53676(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53676_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7001  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53677_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7182  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53677(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7001  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53677_gshared)(__this /* static, unused */, ___pair, method)
