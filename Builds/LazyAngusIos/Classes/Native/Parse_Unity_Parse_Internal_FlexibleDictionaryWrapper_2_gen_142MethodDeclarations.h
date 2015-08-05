#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>
struct FlexibleDictionaryWrapper_2_t1944;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9116;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t768;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7771;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7201;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53065_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53065(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53065_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53066_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53066(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53066_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53067_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53067(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53067_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53068_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53068(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53068_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53069_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53069(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53069_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53070_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53070(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53070_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53071_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53071(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53071_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53072_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53072(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53072_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53073_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53073(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53073_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53074_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53074(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53074_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53075_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53075(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53075_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53076_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53076(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53076_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53077_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2U5BU5D_t7771* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53077(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53077_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53078_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53078(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53078_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53079_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53079(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53079_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53080_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53080(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53080_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53081_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53081(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53081_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53082_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53082(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53082_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53083_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53083(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53083_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7005  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53084_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t730  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53084(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7005  (*) (Object_t * /* static, unused */, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53084_gshared)(__this /* static, unused */, ___pair, method)
