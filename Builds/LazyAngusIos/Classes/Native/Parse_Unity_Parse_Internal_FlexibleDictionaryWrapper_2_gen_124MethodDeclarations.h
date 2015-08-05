#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>
struct FlexibleDictionaryWrapper_2_t1926;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9114;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7693;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7191;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52557_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52557(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52557_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52558_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52558(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52558_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52559_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52559(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52559_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52560_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52560(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52560_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52561_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52561(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52561_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52562_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52562(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52562_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52563_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52563(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52563_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52564_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52564(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52564_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52565_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52565(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52565_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52566_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52566(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52566_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52567_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52567(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52567_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52568_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52568(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52568_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52569_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2U5BU5D_t7693* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52569(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2U5BU5D_t7693*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52569_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52570_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52570(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52570_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52571_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52571(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52571_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52572_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52572(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1926 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52572_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52573_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52573(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52573_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52574_gshared (FlexibleDictionaryWrapper_2_t1926 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52574(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1926 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52574_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52575_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52575(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52575_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7186  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52576_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7175  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52576(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7186  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52576_gshared)(__this /* static, unused */, ___pair, method)
