#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>
struct FlexibleDictionaryWrapper_2_t2011;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8939;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7208;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7913;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7285;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55041_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55041(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55041_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55042_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55042(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55042_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55043_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55043(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55043_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55044_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55044(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55044_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55045_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55045(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55045_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55046_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55046(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55046_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55047_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55047(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55047_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55048_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55048(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55048_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55049_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55049(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55049_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55050_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55050(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55050_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55051_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55051(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55051_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55052_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55052(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55052_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55053_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2U5BU5D_t7913* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55053(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2U5BU5D_t7913*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55053_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55054_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55054(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55054_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55055_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55055(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55055_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55056_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55056(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2011 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55056_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55057_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55057(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55057_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55058_gshared (FlexibleDictionaryWrapper_2_t2011 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55058(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2011 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55058_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55059_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55059(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55059_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7062  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55060_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7212  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55060(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7062  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7212 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55060_gshared)(__this /* static, unused */, ___pair, method)
