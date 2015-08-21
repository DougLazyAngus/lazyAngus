#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1894;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7234;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7377;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7203;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48610_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48610(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48610_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48611_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48611(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48611_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48612_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48612(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48612_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48613_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48613(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48613_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48614_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48614(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48614_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48615_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48615(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48615_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48616_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48616(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48616_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48617_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48617(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48617_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48618_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48618(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48618_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48619_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48619(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48619_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48620_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48620(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48620_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48621_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48621(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48621_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48622_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2U5BU5D_t7377* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48622(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2U5BU5D_t7377*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48622_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48623_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48623(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48623_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48624_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48624(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48624_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48625_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48625(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48625_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48626_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48626(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48626_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48627_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48627(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48627_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48628_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48628(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48628_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7198  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48629_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7238  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48629(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7198  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48629_gshared)(__this /* static, unused */, ___pair, method)
