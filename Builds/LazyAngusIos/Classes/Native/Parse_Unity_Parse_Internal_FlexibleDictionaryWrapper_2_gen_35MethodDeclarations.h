#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>
struct FlexibleDictionaryWrapper_2_t1888;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6999;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7296;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7188;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47869_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47869(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47869_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47871_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47871(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47871_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47873_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47873(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47873_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47875_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47875(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47875_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47877_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47877(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47877_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47879_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47879(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47879_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47881_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47881(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47881_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47883_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47883(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47883_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47885_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47885(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47885_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47887_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47887(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47887_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47889_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47889(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47889_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47891_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47891(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47891_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47893_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, KeyValuePair_2U5BU5D_t7296* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47893(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, KeyValuePair_2U5BU5D_t7296*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47893_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47895_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47895(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47895_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47897_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47897(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47897_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47899_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47899(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47899_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47901_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47901(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47901_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47903_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47903(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47903_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47905_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47905(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47905_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7183  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47907_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7055  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47907(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7183  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47907_gshared)(__this /* static, unused */, ___pair, method)
