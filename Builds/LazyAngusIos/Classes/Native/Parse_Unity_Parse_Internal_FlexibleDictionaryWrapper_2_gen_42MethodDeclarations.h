#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>
struct FlexibleDictionaryWrapper_2_t1844;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7131;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7129;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47723_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47723(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47723_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47724_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47724(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47724_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47725_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47725(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47725_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47726_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47726(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47726_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47727_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47727(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47727_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47728_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47728(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47728_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47729_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47729(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47729_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47730_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47730(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47730_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47731_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47731(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47731_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47732_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47732(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47732_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47733_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47733(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47733_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47734_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47734(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47734_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47735_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2U5BU5D_t7303* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47735(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47735_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47736_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47736(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47736_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47737_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47737(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47737_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47738_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47738(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47738_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47739_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47739(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47739_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47740_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47740(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47740_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47741_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47741(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47741_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7124  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47742_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7135  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47742(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7124  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47742_gshared)(__this /* static, unused */, ___pair, method)
