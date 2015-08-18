#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>
struct FlexibleDictionaryWrapper_2_t1905;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9198;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7190;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7438;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7210;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49123_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49123(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49123_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49124_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49124(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49124_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49125_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49125(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49125_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49126_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49126(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49126_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49127_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49127(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49127_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49128_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49128(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49128_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49129_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49129(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49129_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49130_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49130(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49130_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49131_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49131(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49131_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49132_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49132(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49132_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49133_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49133(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49133_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49134_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49134(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49134_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49135_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2U5BU5D_t7438* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49135(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2U5BU5D_t7438*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49135_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49136_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49136(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49136_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49137_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49137(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49137_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49138_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49138(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1905 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49138_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49139_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49139(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49139_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49140_gshared (FlexibleDictionaryWrapper_2_t1905 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49140(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1905 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49140_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49141_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49141(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49141_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7205  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49142_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7194  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49142(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7205  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49142_gshared)(__this /* static, unused */, ___pair, method)
