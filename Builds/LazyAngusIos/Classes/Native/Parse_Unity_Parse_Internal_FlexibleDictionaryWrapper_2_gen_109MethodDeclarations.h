#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>
struct FlexibleDictionaryWrapper_2_t1978;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9708;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7567;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8270;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7822;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57091_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57091(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57091_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57092_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57092(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57092_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57093_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57093(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57093_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57094_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57094(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57094_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57095_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57095(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57095_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57096_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57096(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57096_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57097_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57097(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57097_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57098_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57098(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57098_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57099_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57099(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57099_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57100_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57100(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57100_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57101_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57101(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57101_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57102_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57102(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57102_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57103_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, KeyValuePair_2U5BU5D_t8270* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57103(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, KeyValuePair_2U5BU5D_t8270*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57103_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57104_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57104(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57104_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57105_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57105(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57105_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57106_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, KeyValuePair_2_t7817  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57106(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, KeyValuePair_2_t7817 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57106_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57107_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57107(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57107_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57108_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57108(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57108_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57109_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57109(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57109_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7817  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57110_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6094  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57110(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7817  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6094 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57110_gshared)(__this /* static, unused */, ___pair, method)
