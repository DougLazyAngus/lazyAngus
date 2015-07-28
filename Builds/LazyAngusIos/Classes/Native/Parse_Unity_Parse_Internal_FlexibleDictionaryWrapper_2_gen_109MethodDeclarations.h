#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>
struct FlexibleDictionaryWrapper_2_t1901;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8972;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6914;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7617;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7169;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51616_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51616(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51616_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51617_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51617(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51617_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51618_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51618(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51618_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51619_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51619(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51619_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51620_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51620(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51620_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51621_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51621(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51621_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51622_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51622(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51622_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51623_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51623(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51623_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51624_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51624(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51624_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51625_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51625(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51625_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51626_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51626(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51626_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51627_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51627(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51627_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51628_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2U5BU5D_t7617* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51628(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2U5BU5D_t7617*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51628_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51629_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51629(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51629_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51630_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51630(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51630_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51631_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51631(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51631_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51632_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51632(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51632_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51633_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51633(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51633_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51634_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51634(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51634_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7164  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51635_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5488  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51635(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7164  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51635_gshared)(__this /* static, unused */, ___pair, method)
