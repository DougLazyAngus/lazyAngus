#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>
struct FlexibleDictionaryWrapper_2_t1940;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t764;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7767;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7197;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53034_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53034(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53034_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53035_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53035(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53035_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53036_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53036(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53036_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53037_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53037(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53037_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53038_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53038(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53038_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53039_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53039(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53039_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53040_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53040(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53040_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53041_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53041(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53041_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53042_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53042(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53042_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53043_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53043(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53043_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53044_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53044(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53044_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53045_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53045(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53045_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53046_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2U5BU5D_t7767* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53046(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2U5BU5D_t7767*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53046_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53047_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53047(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53047_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53048_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53048(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53048_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53049_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53049(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53049_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53050_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53050(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53050_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53051_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53051(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53051_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53052_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53052(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53052_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7001  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53053_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t727  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53053(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7001  (*) (Object_t * /* static, unused */, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53053_gshared)(__this /* static, unused */, ___pair, method)
