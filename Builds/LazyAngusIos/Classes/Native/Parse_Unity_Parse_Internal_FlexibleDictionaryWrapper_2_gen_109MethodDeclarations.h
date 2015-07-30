#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>
struct FlexibleDictionaryWrapper_2_t1907;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8979;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6921;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7624;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7176;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51663_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51663(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51663_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51664_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51664(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51664_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51665_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51665(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51665_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51666_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51666(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51666_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51667_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51667(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51667_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51668_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51668(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51668_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51669_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51669(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51669_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51670_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51670(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51670_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51671_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51671(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51671_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51672_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51672(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51672_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51673_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51673(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51673_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51674_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51674(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51674_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51675_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2U5BU5D_t7624* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51675(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2U5BU5D_t7624*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51675_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51676_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51676(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51676_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51677_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51677(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51677_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51678_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51678(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51678_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51679_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51679(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51679_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51680_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51680(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51680_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51681_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51681(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51681_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7171  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51682_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5495  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51682(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7171  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51682_gshared)(__this /* static, unused */, ___pair, method)
