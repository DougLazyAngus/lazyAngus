﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>
struct FlexibleDictionaryWrapper_2_t1828;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9029;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6917;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7214;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7106;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47122_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47122(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1828 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47122_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47124_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47124(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1828 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47124_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47126_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47126(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1828 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47126_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47128_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47128(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1828 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47128_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47130_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47130(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1828 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47130_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47132_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47132(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1828 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47132_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47134_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47134(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1828 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47134_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47136_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47136(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1828 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47136_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47138_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47138(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1828 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47138_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47140_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, KeyValuePair_2_t7101  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47140(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1828 *, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47140_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47142_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47142(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1828 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47142_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47144_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, KeyValuePair_2_t7101  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47144(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1828 *, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47144_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47146_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, KeyValuePair_2U5BU5D_t7214* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47146(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1828 *, KeyValuePair_2U5BU5D_t7214*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47146_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47148_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47148(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1828 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47148_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47150_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47150(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1828 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47150_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47152_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, KeyValuePair_2_t7101  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47152(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1828 *, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47152_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47154_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47154(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1828 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47154_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47156_gshared (FlexibleDictionaryWrapper_2_t1828 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47156(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1828 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47156_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47158_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47158(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47158_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7101  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47160_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6973  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47160(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7101  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6973 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47160_gshared)(__this /* static, unused */, ___pair, method)