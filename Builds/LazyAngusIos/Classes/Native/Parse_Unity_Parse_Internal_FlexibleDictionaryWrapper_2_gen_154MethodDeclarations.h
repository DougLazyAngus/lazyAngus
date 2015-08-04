#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>
struct FlexibleDictionaryWrapper_2_t1954;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9114;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6927;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7769;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7199;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53784_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53784(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53784_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53785_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53785(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53785_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53786_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53786(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53786_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53787_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53787(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53787_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53788_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53788(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53788_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53789_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53789(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53789_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53790_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53790(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53790_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53791_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53791(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53791_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53792_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53792(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53792_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53793_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53793(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53793_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53794_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53794(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53794_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53795_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53795(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53795_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53796_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2U5BU5D_t7769* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53796(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2U5BU5D_t7769*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53796_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53797_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53797(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53797_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53798_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53798(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53798_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53799_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53799(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53799_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53800_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53800(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53800_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53801_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53801(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53801_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53802_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53802(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53802_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7003  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53803_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6983  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53803(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7003  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6983 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53803_gshared)(__this /* static, unused */, ___pair, method)
