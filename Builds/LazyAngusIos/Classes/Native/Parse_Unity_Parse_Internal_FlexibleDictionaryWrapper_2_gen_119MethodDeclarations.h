#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>
struct FlexibleDictionaryWrapper_2_t1998;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9851;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7774;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8347;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7845;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57808_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57808(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1998 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57808_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57809_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57809(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1998 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57809_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57810_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57810(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1998 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57810_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57811_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57811(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1998 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57811_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57812_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57812(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1998 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57812_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57813_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57813(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1998 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57813_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57814_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57814(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1998 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57814_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57815_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57815(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1998 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57815_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57816_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57816(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1998 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57816_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57817_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57817(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1998 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57817_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57818_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57818(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1998 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57818_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57819_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57819(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1998 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57819_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57820_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, KeyValuePair_2U5BU5D_t8347* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57820(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1998 *, KeyValuePair_2U5BU5D_t8347*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57820_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57821_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57821(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1998 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57821_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57822_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57822(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1998 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57822_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57823_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, KeyValuePair_2_t7840  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57823(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1998 *, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57823_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57824_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57824(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1998 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57824_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57825_gshared (FlexibleDictionaryWrapper_2_t1998 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57825(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1998 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57825_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57826_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57826(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57826_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7840  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57827_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7778  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57827(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7840  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57827_gshared)(__this /* static, unused */, ___pair, method)
