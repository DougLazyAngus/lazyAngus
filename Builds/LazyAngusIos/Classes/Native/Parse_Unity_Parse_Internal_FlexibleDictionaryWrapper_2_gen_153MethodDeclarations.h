#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>
struct FlexibleDictionaryWrapper_2_t1951;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6931;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7767;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7197;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53725_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53725(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53725_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53726_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53726(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53726_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53727_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53727(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53727_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53728_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53728(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53728_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53729_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53729(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53729_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53730_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53730(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53730_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53731_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53731(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53731_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53732_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53732(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53732_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53733_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53733(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53733_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53734_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53734(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53734_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53735_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53735(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53735_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53736_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53736(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53736_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53737_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2U5BU5D_t7767* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53737(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2U5BU5D_t7767*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53737_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53738_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53738(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53738_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53739_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53739(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53739_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53740_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53740(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1951 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53740_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53741_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53741(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53741_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53742_gshared (FlexibleDictionaryWrapper_2_t1951 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53742(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1951 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53742_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53743_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53743(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53743_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7001  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53744_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7001  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53744(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7001  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53744_gshared)(__this /* static, unused */, ___pair, method)
