#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>
struct FlexibleDictionaryWrapper_2_t2015;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8936;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7009;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7910;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7282;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55290_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55290(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55290_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55291_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55291(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55291_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55292_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55292(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55292_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55293_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55293(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55293_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55294_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55294(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55294_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55295_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55295(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55295_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55296_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55296(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55296_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55297_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55297(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55297_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55298_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55298(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55298_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55299_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55299(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55299_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55300_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55300(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55300_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55301_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55301(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55301_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55302_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2U5BU5D_t7910* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55302(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2U5BU5D_t7910*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55302_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55303_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55303(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55303_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55304_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55304(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55304_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55305_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55305(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55305_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55306_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55306(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55306_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55307_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55307(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55307_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55308_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55308(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55308_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7059  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55309_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7079  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55309(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7059  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55309_gshared)(__this /* static, unused */, ___pair, method)
