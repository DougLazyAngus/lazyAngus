#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1899;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9208;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7259;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7380;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7206;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48728_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48728(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48728_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48729_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48729(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48729_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48730_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48730(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48730_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48731_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48731(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48731_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48732_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48732(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48732_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48733_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48733(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48733_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48734_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48734(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48734_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48735_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48735(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48735_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48736_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48736(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48736_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48737_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48737(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48737_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48738_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48738(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48738_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48739_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48739(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48739_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48740_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2U5BU5D_t7380* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48740(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2U5BU5D_t7380*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48740_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48741_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48741(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48741_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48742_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48742(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48742_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48743_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48743(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1899 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48743_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48744_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48744(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48744_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48745_gshared (FlexibleDictionaryWrapper_2_t1899 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48745(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1899 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48745_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48746_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48746(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48746_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7201  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48747_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7263  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48747(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7201  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48747_gshared)(__this /* static, unused */, ___pair, method)
