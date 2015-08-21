#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>
struct FlexibleDictionaryWrapper_2_t1976;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9211;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7009;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7767;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7265;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53424_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53424(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1976 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53424_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53425_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53425(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1976 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53425_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53426_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53426(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1976 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53426_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53427_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53427(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1976 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53427_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53428_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53428(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1976 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53428_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53429_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53429(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1976 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53429_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53430_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53430(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1976 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53430_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53431_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53431(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1976 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53431_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53432_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53432(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1976 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53432_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53433_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, KeyValuePair_2_t7260  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53433(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1976 *, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53433_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53434_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53434(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1976 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53434_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53435_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, KeyValuePair_2_t7260  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53435(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1976 *, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53435_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53436_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, KeyValuePair_2U5BU5D_t7767* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53436(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1976 *, KeyValuePair_2U5BU5D_t7767*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53436_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53437_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53437(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1976 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53437_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53438_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53438(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1976 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53438_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53439_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, KeyValuePair_2_t7260  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53439(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1976 *, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53439_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53440_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53440(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1976 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53440_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53441_gshared (FlexibleDictionaryWrapper_2_t1976 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53441(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1976 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53441_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53442_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53442(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53442_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7260  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53443_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7079  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53443(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7260  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53443_gshared)(__this /* static, unused */, ___pair, method)
