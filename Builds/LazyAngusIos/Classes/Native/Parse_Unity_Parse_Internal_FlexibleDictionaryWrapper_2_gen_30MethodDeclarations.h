#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1913;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9778;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7880;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7772;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52508_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52508(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52508_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52510_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52510(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52510_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52512_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52512(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52512_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52514_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52514(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52514_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52516_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52516(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52516_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52518_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52518(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52518_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52520_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52520(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52520_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52522_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52522(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52522_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52524_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52524(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52524_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52526_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7767  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52526(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52526_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52528_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52528(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52528_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52530_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7767  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52530(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52530_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52532_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2U5BU5D_t7880* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52532(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2U5BU5D_t7880*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52532_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52534_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52534(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52534_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52536_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52536(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52536_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52538_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7767  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52538(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52538_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52540_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52540(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52540_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52542_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52542(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52542_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52544_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52544(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52544_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7767  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52546_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7840  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52546(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7767  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52546_gshared)(__this /* static, unused */, ___pair, method)
