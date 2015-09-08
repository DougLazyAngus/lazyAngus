#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1980;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9713;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7789;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8275;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7827;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57060_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57060(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1980 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57060_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57061_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57061(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1980 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57061_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57062_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57062(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1980 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57062_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57063_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57063(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57063_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57064_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57064(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1980 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57064_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57065_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57065(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1980 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57065_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57066_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57066(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57066_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57067_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57067(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1980 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57067_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57068_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57068(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1980 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57068_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57069_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57069(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1980 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57069_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57070_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57070(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57070_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57071_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57071(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1980 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57071_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57072_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, KeyValuePair_2U5BU5D_t8275* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57072(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1980 *, KeyValuePair_2U5BU5D_t8275*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57072_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57073_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57073(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57073_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57074_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57074(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57074_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57075_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57075(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1980 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57075_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57076_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57076(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57076_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57077_gshared (FlexibleDictionaryWrapper_2_t1980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57077(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57077_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57078_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57078(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57078_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7822  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57079_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7793  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57079(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7822  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57079_gshared)(__this /* static, unused */, ___pair, method)
