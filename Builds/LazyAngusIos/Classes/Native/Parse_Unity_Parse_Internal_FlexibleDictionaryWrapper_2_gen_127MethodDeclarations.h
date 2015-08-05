#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>
struct FlexibleDictionaryWrapper_2_t1928;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9113;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6934;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7692;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7190;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52659_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52659(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52659_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52660_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52660(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52660_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52661_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52661(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52661_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52662_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52662(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52662_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52663_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52663(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52663_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52664_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52664(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52664_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52665_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52665(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52665_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52666_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52666(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52666_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52667_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52667(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52667_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52668_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, KeyValuePair_2_t7185  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52668(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52668_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52669_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52669(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52669_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52670_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, KeyValuePair_2_t7185  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52670(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52670_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52671_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, KeyValuePair_2U5BU5D_t7692* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52671(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1928 *, KeyValuePair_2U5BU5D_t7692*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52671_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52672_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52672(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52672_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52673_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52673(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52673_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52674_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, KeyValuePair_2_t7185  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52674(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1928 *, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52674_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52675_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52675(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52675_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52676_gshared (FlexibleDictionaryWrapper_2_t1928 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52676(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1928 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52676_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52677_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52677(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52677_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7185  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52678_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7004  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52678(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7185  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7004 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52678_gshared)(__this /* static, unused */, ___pair, method)
