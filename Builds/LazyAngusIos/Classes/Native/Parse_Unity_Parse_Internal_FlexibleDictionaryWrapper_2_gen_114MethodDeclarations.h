#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>
struct FlexibleDictionaryWrapper_2_t1986;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9713;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7582;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8275;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7827;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57299_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57299(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57299_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57300_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57300(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57300_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57301_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57301(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57301_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57302_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57302(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57302_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57303_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57303(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57303_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57304_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57304(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57304_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57305_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57305(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57305_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57306_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57306(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57306_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57307_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57307(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57307_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57308_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57308(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57308_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57309_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57309(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57309_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57310_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57310(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57310_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57311_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2U5BU5D_t8275* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57311(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2U5BU5D_t8275*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57311_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57312_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57312(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57312_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57313_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57313(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57313_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57314_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57314(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57314_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57315_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57315(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57315_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57316_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57316(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57316_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57317_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57317(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57317_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7822  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57318_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7652  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57318(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7822  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57318_gshared)(__this /* static, unused */, ___pair, method)
