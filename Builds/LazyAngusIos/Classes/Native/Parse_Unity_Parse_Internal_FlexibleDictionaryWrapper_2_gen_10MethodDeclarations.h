#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>
struct FlexibleDictionaryWrapper_2_t1802;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6924;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1353;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1340;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46061_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46061(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46061_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46062_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46062(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46062_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46063_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46063(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46063_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46064_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46064(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46064_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46065_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46065(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46065_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46066_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46066(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46066_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46067_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46067(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46067_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46068_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46068(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46068_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46069_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46069(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46069_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46070_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46070(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46070_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46071_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46071(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46071_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46072_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46072(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46072_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46073_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2U5BU5D_t1353* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46073(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2U5BU5D_t1353*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46073_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46074_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46074(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46074_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46075_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46075(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46075_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46076_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46076(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1802 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46076_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46077_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46077(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46077_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46078_gshared (FlexibleDictionaryWrapper_2_t1802 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46078(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1802 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46078_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46079_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46079(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46079_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t720  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46080_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6994  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46080(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t720  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46080_gshared)(__this /* static, unused */, ___pair, method)
