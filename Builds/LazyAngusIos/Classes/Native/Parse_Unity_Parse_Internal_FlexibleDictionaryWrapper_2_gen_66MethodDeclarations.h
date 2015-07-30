#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1864;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9106;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7107;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7429;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7147;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49137_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49137(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1864 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49137_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49139_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49139(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1864 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49139_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49141_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49141(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1864 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49141_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49143_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49143(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49143_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49145_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49145(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1864 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49145_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49147_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49147(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1864 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49147_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49149_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49149(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49149_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49151_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49151(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1864 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49151_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49153_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49153(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1864 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49153_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49155_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49155(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1864 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49155_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49157_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49157(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49157_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49159_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49159(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1864 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49159_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49161_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, KeyValuePair_2U5BU5D_t7429* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49161(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1864 *, KeyValuePair_2U5BU5D_t7429*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49161_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49163_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49163(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49163_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49165_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49165(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49165_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49167_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49167(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1864 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49167_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49169_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49169(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49169_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49171_gshared (FlexibleDictionaryWrapper_2_t1864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49171(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49171_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49173_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49173(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49173_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7142  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49175_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7109  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49175(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7142  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49175_gshared)(__this /* static, unused */, ___pair, method)
