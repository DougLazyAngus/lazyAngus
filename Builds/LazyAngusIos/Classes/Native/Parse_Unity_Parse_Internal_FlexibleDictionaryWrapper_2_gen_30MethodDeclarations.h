#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1885;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7252;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7296;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7188;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47711_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47711(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47711_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47713_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47713(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47713_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47715_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47715(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47715_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47717_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47717(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47717_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47719_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47719(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47719_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47721_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47721(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47721_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47723_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47723(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47723_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47725_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47725(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47725_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47727_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47727(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47727_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47729_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47729(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47729_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47731_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47731(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47731_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47733_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47733(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47733_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47735_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2U5BU5D_t7296* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47735(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2U5BU5D_t7296*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47735_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47737_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47737(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47737_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47739_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47739(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47739_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47741_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47741(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1885 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47741_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47743_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47743(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47743_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47745_gshared (FlexibleDictionaryWrapper_2_t1885 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47745(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1885 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47745_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47747_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47747(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47747_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7183  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47749_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7256  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47749(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7183  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47749_gshared)(__this /* static, unused */, ___pair, method)
