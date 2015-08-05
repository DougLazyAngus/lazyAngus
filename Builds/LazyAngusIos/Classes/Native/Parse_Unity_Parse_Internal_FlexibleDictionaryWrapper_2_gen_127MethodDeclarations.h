#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>
struct FlexibleDictionaryWrapper_2_t1929;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9114;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6935;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7693;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7191;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52667_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52667(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52667_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52668_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52668(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52668_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52669_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52669(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52669_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52670_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52670(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52670_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52671_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52671(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52671_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52672_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52672(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52672_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52673_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52673(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52673_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52674_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52674(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52674_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52675_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52675(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52675_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52676_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52676(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52676_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52677_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52677(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52677_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52678_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52678(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52678_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52679_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2U5BU5D_t7693* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52679(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2U5BU5D_t7693*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52679_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52680_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52680(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52680_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52681_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52681(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52681_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52682_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52682(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52682_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52683_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52683(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52683_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52684_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52684(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52684_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52685_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52685(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52685_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7186  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52686_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7005  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52686(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7186  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52686_gshared)(__this /* static, unused */, ___pair, method)
