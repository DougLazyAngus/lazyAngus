#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>
struct FlexibleDictionaryWrapper_2_t1982;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9720;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8282;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7834;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56665_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56665(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56665_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56666_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56666(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56666_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56667_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56667(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56667_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56668_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56668(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56668_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56669_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56669(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56669_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56670_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56670(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56670_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56671_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56671(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56671_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m56672_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56672(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56672_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56673_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56673(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56673_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56674_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56674(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56674_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56675_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56675(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56675_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56676_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56676(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56676_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56677_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2U5BU5D_t8282* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56677(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2U5BU5D_t8282*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56677_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56678_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56678(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56678_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56679_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56679(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56679_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56680_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t7829  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56680(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56680_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56681_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56681(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56681_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56682_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56682(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56682_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56683_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56683(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56683_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7829  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56684_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t802  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56684(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7829  (*) (Object_t * /* static, unused */, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56684_gshared)(__this /* static, unused */, ___pair, method)
