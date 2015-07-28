#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>
struct FlexibleDictionaryWrapper_2_t1908;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9103;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7682;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7180;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51898_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51898(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51898_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51899_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51899(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51899_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51900_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51900(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51900_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51901_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51901(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51901_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51902_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51902(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51902_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51903_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51903(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51903_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51904_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51904(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51904_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m51905_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51905(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51905_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51906_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51906(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51906_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51907_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51907(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51907_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51908_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51908(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51908_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51909_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51909(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51909_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51910_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2U5BU5D_t7682* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51910(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2U5BU5D_t7682*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51910_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51911_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51911(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51911_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51912_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51912(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51912_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51913_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51913(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51913_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51914_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51914(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51914_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51915_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51915(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51915_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51916_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51916(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51916_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7175  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51917_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t720  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51917(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7175  (*) (Object_t * /* static, unused */, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51917_gshared)(__this /* static, unused */, ___pair, method)
