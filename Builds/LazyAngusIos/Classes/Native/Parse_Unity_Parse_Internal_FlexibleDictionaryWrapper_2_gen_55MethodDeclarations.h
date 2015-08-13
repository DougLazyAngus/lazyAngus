#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>
struct FlexibleDictionaryWrapper_2_t1906;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9198;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7201;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7438;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7210;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49169_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49169(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49169_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49170_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49170(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49170_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49171_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49171(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49171_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49172_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49172(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49172_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49173_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49173(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49173_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49174_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49174(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49174_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49175_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49175(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49175_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49176_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49176(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49176_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49177_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49177(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49177_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49178_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49178(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49178_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49179_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49179(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49179_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49180_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49180(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49180_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49181_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2U5BU5D_t7438* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49181(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2U5BU5D_t7438*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49181_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49182_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49182(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49182_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49183_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49183(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49183_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49184_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49184(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1906 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49184_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49185_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49185(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49185_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49186_gshared (FlexibleDictionaryWrapper_2_t1906 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49186(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1906 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49186_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49187_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49187(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49187_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7205  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49188_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7205  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49188(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7205  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49188_gshared)(__this /* static, unused */, ___pair, method)
