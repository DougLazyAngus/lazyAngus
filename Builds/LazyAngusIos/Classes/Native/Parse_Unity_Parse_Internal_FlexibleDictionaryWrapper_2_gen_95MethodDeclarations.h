#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1896;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9111;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7141;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7562;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7168;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50866_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50866(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50866_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50867_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50867(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50867_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50868_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50868(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50868_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50869_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50869(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50869_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50870_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50870(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50870_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50871_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50871(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50871_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50872_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50872(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50872_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50873_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50873(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50873_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50874_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50874(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50874_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50875_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50875(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50875_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50876_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50876(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50876_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50877_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50877(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50877_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50878_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2U5BU5D_t7562* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50878(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2U5BU5D_t7562*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50878_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50879_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50879(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50879_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50880_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50880(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50880_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50881_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50881(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50881_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50882_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50882(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50882_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50883_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50883(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50883_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50884_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50884(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50884_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7163  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50885_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7145  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50885(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7163  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50885_gshared)(__this /* static, unused */, ___pair, method)
