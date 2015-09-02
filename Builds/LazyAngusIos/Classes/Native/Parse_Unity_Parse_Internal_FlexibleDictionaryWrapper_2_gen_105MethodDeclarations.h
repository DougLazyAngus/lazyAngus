#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1973;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9120;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7217;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7734;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7286;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52621_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52621(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52621_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52623_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52623(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52623_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52625_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52625(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52625_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52627_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52627(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52627_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52629_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52629(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52629_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52631_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52631(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52631_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52633_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52633(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52633_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m52635_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52635(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52635_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52637_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52637(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52637_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52639_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7281  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52639(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7281 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52639_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52641_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52641(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52641_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52643_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7281  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52643(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7281 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52643_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52645_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2U5BU5D_t7734* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52645(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2U5BU5D_t7734*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52645_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52647_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52647(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52647_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52649_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52649(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52649_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52651_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7281  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52651(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7281 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52651_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52653_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52653(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52653_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52655_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52655(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52655_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52657_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52657(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52657_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7281  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52659_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7219  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52659(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7281  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7219 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52659_gshared)(__this /* static, unused */, ___pair, method)
