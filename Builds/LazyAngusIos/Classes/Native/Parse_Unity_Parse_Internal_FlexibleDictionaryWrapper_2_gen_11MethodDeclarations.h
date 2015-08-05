#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>
struct FlexibleDictionaryWrapper_2_t1813;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6929;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1363;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1350;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46182_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46182(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1813 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46182_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46183_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46183(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1813 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46183_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46184_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46184(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1813 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46184_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46185_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46185(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46185_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46186_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46186(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1813 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46186_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46187_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46187(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1813 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46187_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46188_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46188(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46188_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46189_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46189(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1813 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46189_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46190_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46190(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1813 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46190_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46191_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46191(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1813 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46191_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46192_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46192(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46192_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46193_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46193(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1813 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46193_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46194_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, KeyValuePair_2U5BU5D_t1363* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46194(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1813 *, KeyValuePair_2U5BU5D_t1363*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46194_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46195_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46195(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46195_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46196_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46196(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46196_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46197_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46197(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1813 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46197_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46198_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46198(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46198_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46199_gshared (FlexibleDictionaryWrapper_2_t1813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46199(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46199_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46200_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46200(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46200_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t730  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46201_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6985  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46201(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t730  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46201_gshared)(__this /* static, unused */, ___pair, method)
