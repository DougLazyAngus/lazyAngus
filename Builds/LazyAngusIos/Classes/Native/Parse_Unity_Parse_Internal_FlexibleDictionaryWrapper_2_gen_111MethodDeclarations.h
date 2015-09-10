#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>
struct FlexibleDictionaryWrapper_2_t1990;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9720;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7825;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8282;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7834;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57246_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57246(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57246_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57247_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57247(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57247_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57248_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57248(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57248_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57249_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57249(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57249_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57250_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57250(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57250_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57251_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57251(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57251_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57252_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57252(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57252_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57253_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57253(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57253_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57254_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57254(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57254_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57255_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57255(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57255_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57256_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57256(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57256_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57257_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57257(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57257_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57258_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2U5BU5D_t8282* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57258(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2U5BU5D_t8282*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57258_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57259_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57259(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57259_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57260_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57260(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57260_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57261_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57261(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57261_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57262_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57262(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57262_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57263_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57263(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57263_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57264_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57264(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57264_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7829  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57265_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7829  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57265(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7829  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57265_gshared)(__this /* static, unused */, ___pair, method)
