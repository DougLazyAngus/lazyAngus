#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>
struct FlexibleDictionaryWrapper_2_t1975;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9713;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8275;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7827;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56608_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56608(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56608_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56609_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56609(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56609_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56610_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56610(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56610_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56611_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56611(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56611_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56612_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56612(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56612_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56613_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56613(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56613_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56614_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56614(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56614_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m56615_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56615(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56615_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56616_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56616(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56616_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56617_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56617(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56617_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56618_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56618(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56618_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56619_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56619(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56619_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56620_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2U5BU5D_t8275* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56620(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2U5BU5D_t8275*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56620_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56621_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56621(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56621_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56622_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56622(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56622_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56623_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56623(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56623_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56624_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56624(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56624_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56625_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56625(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56625_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56626_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56626(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56626_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7822  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56627_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t795  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56627(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7822  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56627_gshared)(__this /* static, unused */, ___pair, method)
