#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1956;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9072;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7698;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7250;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52168_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52168(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52168_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52170_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52170(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52170_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52172_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52172(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52172_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52174_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52174(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52174_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52176_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52176(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52176_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52178_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52178(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52178_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52180_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52180(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52180_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m52182_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52182(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52182_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52184_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52184(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52184_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52186_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52186(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52186_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52188_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52188(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52188_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52190_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52190(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52190_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52192_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2U5BU5D_t7698* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52192(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2U5BU5D_t7698*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52192_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52194_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52194(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52194_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52196_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52196(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52196_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52198_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52198(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52198_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52200_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52200(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52200_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52202_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52202(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52202_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52204_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52204(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52204_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7245  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52206_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7183  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52206(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7245  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52206_gshared)(__this /* static, unused */, ___pair, method)
