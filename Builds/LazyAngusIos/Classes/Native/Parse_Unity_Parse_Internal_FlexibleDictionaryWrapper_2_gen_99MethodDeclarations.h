#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1951;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9212;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7259;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7640;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7246;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51836_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51836(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51836_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51837_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51837(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51837_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51838_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51838(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51838_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51839_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51839(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51839_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51840_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51840(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51840_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51841_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51841(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51841_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51842_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51842(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51842_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51843_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51843(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51843_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51844_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51844(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51844_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51845_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51845(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51845_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51846_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51846(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51846_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51847_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51847(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51847_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51848_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2U5BU5D_t7640* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51848(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2U5BU5D_t7640*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51848_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51849_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51849(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51849_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51850_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51850(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51850_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51851_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51851(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51851_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51852_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51852(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51852_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51853_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51853(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51853_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51854_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51854(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51854_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7241  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51855_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7263  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51855(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7241  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51855_gshared)(__this /* static, unused */, ___pair, method)
