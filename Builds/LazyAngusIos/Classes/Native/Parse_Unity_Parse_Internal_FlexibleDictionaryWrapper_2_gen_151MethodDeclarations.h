#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1951;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9114;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7180;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7769;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7199;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53674_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53674(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53674_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53675_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53675(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53675_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53676_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53676(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53676_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53677_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53677(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53677_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53678_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53678(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53678_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53679_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53679(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53679_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53680_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53680(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53680_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53681_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53681(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53681_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53682_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53682(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53682_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53683_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53683(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53683_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53684_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53684(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53684_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53685_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53685(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53685_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53686_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2U5BU5D_t7769* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53686(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2U5BU5D_t7769*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53686_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53687_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53687(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53687_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53688_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53688(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53688_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53689_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53689(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53689_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53690_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53690(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53690_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53691_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53691(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53691_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53692_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53692(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53692_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7003  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53693_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7184  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53693(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7003  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7184 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53693_gshared)(__this /* static, unused */, ___pair, method)
