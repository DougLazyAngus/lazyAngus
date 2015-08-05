#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1843;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7120;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7129;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47680_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47680(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47680_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47681_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47681(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47681_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47682_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47682(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47682_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47683_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47683(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47683_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47684_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47684(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47684_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47685_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47685(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47685_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47686_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47686(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47686_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47687_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47687(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47687_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47688_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47688(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47688_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47689_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47689(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47689_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47690_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47690(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47690_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47691_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47691(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47691_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47692_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, KeyValuePair_2U5BU5D_t7303* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47692(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47692_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47693_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47693(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47693_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47694_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47694(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47694_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47695_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47695(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47695_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47696_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47696(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47696_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47697_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47697(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47697_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47698_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47698(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47698_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7124  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47699_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7124  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47699(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7124  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47699_gshared)(__this /* static, unused */, ___pair, method)
