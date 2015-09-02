#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1986;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9251;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7217;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7799;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7297;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53398_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53398(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53398_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53400_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53400(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53400_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53402_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53402(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53402_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53404_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53404(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53404_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53406_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53406(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53406_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53408_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53408(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53408_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53410_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53410(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53410_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53412_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53412(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53412_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53414_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53414(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53414_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53416_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t7292  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53416(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2_t7292 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53416_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53418_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53418(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53418_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53420_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t7292  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53420(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2_t7292 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53420_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53422_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2U5BU5D_t7799* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53422(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2U5BU5D_t7799*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53422_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53424_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53424(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53424_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53426_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53426(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53426_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53428_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, KeyValuePair_2_t7292  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53428(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1986 *, KeyValuePair_2_t7292 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53428_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53430_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53430(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53430_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53432_gshared (FlexibleDictionaryWrapper_2_t1986 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53432(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1986 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53432_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53434_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53434(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53434_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7292  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53436_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7219  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53436(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7292  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7219 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53436_gshared)(__this /* static, unused */, ___pair, method)
