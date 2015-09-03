#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>
struct FlexibleDictionaryWrapper_2_t1979;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9707;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7812;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8269;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7821;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57164_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57164(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57164_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57165_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57165(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57165_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57166_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57166(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57166_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57167_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57167(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57167_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57168_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57168(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57168_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57169_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57169(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57169_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57170_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57170(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57170_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57171_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57171(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57171_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57172_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57172(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57172_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57173_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57173(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57173_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57174_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57174(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57174_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57175_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57175(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57175_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57176_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2U5BU5D_t8269* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57176(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2U5BU5D_t8269*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57176_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57177_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57177(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57177_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57178_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57178(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57178_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57179_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57179(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1979 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57179_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57180_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57180(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57180_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57181_gshared (FlexibleDictionaryWrapper_2_t1979 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57181(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1979 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57181_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57182_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57182(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57182_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7816  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57183_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7816  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57183(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7816  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57183_gshared)(__this /* static, unused */, ___pair, method)
