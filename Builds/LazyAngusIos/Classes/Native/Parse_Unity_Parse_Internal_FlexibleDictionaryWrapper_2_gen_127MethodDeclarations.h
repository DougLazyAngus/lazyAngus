#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>
struct FlexibleDictionaryWrapper_2_t1919;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9103;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6924;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7682;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7180;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52589_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52589(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52589_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52590_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52590(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52590_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52591_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52591(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52591_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52592_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52592(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52592_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52593_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52593(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52593_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52594_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52594(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52594_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52595_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52595(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52595_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52596_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52596(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52596_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52597_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52597(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52597_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52598_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52598(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52598_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52599_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52599(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52599_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52600_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52600(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52600_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52601_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2U5BU5D_t7682* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52601(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2U5BU5D_t7682*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52601_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52602_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52602(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52602_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52603_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52603(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52603_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52604_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52604(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52604_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52605_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52605(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52605_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52606_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52606(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52606_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52607_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52607(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52607_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7175  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52608_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6994  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52608(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7175  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52608_gshared)(__this /* static, unused */, ___pair, method)
