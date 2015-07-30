#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>
struct FlexibleDictionaryWrapper_2_t1844;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9104;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7167;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7299;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7125;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47864_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47864(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47864_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47865_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47865(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47865_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47866_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47866(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47866_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47867_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47867(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47867_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47868_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47868(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47868_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47869_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47869(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47869_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47870_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47870(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47870_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47871_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47871(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47871_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47872_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47872(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47872_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47873_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47873(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47873_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47874_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47874(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47874_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47875_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47875(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47875_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47876_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2U5BU5D_t7299* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47876(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2U5BU5D_t7299*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47876_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47877_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47877(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47877_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47878_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47878(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47878_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47879_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47879(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47879_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47880_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47880(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47880_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47881_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47881(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47881_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47882_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47882(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47882_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7120  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47883_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7171  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47883(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7120  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47883_gshared)(__this /* static, unused */, ___pair, method)
