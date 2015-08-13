#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>
struct FlexibleDictionaryWrapper_2_t1882;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6995;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7296;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7188;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47510_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47510(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47510_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47512_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47512(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47512_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47514_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47514(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47514_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47516_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47516(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47516_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47518_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47518(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47518_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47520_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47520(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47520_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47522_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47522(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47522_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47524_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47524(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47524_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47526_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47526(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47526_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47528_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47528(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47528_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47530_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47530(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47530_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47532_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47532(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47532_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47534_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2U5BU5D_t7296* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47534(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2U5BU5D_t7296*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47534_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47536_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47536(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47536_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47538_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47538(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47538_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47540_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47540(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47540_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47542_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47542(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47542_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47544_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47544(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47544_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47546_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47546(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47546_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7183  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47548_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5543  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47548(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7183  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47548_gshared)(__this /* static, unused */, ___pair, method)
