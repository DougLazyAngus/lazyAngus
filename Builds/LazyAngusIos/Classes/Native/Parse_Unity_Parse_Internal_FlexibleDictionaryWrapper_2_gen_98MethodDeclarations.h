#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>
struct FlexibleDictionaryWrapper_2_t1949;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9201;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7241;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7633;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7239;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51672_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51672(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51672_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51673_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51673(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51673_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51674_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51674(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51674_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51675_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51675(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51675_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51676_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51676(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51676_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51677_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51677(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51677_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51678_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51678(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51678_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51679_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51679(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51679_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51680_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51680(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51680_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51681_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51681(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51681_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51682_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51682(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51682_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51683_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51683(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51683_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51684_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2U5BU5D_t7633* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51684(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2U5BU5D_t7633*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51684_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51685_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51685(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51685_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51686_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51686(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51686_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51687_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51687(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51687_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51688_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51688(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51688_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51689_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51689(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51689_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51690_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51690(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51690_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7234  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51691_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7245  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51691(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7234  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51691_gshared)(__this /* static, unused */, ___pair, method)
