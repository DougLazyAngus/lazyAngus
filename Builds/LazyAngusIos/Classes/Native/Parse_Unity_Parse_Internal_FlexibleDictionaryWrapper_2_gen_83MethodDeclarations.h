#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>
struct FlexibleDictionaryWrapper_2_t1962;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9342;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7579;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8152;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7812;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55606_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55606(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55606_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55607_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55607(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55607_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55608_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55608(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55608_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55609_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55609(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55609_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55610_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55610(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55610_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55611_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55611(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55611_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55612_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55612(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55612_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55613_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55613(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55613_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55614_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55614(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55614_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55615_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2_t6104  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55615(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55615_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55616_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55616(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55616_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55617_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2_t6104  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55617(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55617_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55618_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2U5BU5D_t8152* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55618(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2U5BU5D_t8152*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55619_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55619(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55619_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55620_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55620(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55620_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55621_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2_t6104  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55621(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55621_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55622_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55622(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55622_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55623_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55623(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55623_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55624_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55624(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55624_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6104  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55625_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6104  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55625(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6104  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55625_gshared)(__this /* static, unused */, ___pair, method)
