#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1891;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9197;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7373;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7199;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48280_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48280(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48280_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48282_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48282(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48282_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48284_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48284(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48284_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48286_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48286(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48286_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48288_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48288(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48288_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48290_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48290(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48290_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48292_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48292(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48292_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48294_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48294(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48294_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48296_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48296(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48296_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48298_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48298(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48298_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48300_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48300(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48300_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48302_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48302(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48302_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48304_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2U5BU5D_t7373* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48304(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2U5BU5D_t7373*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48304_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48306_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48306(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48306_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48308_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48308(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48308_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48310_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, KeyValuePair_2_t7194  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48310(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1891 *, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48310_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48312_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48312(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48312_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48314_gshared (FlexibleDictionaryWrapper_2_t1891 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48314(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1891 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48314_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48316_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48316(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48316_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7194  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48318_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7183  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48318(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7194  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48318_gshared)(__this /* static, unused */, ___pair, method)
