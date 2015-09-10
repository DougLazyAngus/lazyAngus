#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>
struct FlexibleDictionaryWrapper_2_t2046;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9580;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7583;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8490;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7862;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m60042_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m60042(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2046 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m60042_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60043_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60043(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2046 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60043_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m60044_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m60044(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2046 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m60044_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60045_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m60045(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2046 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m60045_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60046_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60046(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2046 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60046_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m60047_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m60047(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2046 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m60047_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m60048_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m60048(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2046 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m60048_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m60049_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m60049(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2046 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m60049_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m60050_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m60050(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2046 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m60050_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60051_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, KeyValuePair_2_t7639  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60051(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2046 *, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60051_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m60052_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m60052(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2046 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m60052_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m60053_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, KeyValuePair_2_t7639  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m60053(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2046 *, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m60053_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m60054_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, KeyValuePair_2U5BU5D_t8490* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m60054(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2046 *, KeyValuePair_2U5BU5D_t8490*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m60054_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m60055_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m60055(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2046 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m60055_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60056_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m60056(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2046 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m60056_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60057_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, KeyValuePair_2_t7639  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60057(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2046 *, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60057_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60058_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m60058(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2046 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m60058_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60059_gshared (FlexibleDictionaryWrapper_2_t2046 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60059(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2046 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60059_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60060_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60060(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60060_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7639  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60061_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7639  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60061(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7639  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60061_gshared)(__this /* static, unused */, ___pair, method)
