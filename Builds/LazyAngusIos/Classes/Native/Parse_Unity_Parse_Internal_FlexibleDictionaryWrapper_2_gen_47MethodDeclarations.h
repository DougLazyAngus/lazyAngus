#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1926;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9845;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7957;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7783;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53404_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53404(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53404_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53405_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53405(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53405_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53406_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53406(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53406_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53407_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53407(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53407_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53408_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53408(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53408_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53409_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53409(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53409_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53410_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53410(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53410_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53411_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53411(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53411_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53412_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53412(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53412_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53413_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53413(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53413_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53414_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53414(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53414_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53415_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53415(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53415_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53416_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2U5BU5D_t7957* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53416(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2U5BU5D_t7957*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53416_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53417_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53417(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53417_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53418_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53418(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53418_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53419_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53419(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53419_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53420_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53420(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53420_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53421_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53421(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53421_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53422_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53422(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53422_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7778  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53423_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7840  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53423(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7778  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53423_gshared)(__this /* static, unused */, ___pair, method)
