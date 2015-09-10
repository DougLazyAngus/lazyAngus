#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>
struct FlexibleDictionaryWrapper_2_t2027;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9853;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7579;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8425;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59026_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59026(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59026_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59027_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59027(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59027_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59028_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59028(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59028_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59029_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59029(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59029_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59030_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59030(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59030_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59031_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59031(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59031_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59032_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59032(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59032_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m59033_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59033(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59033_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59034_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59034(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59034_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59035_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59035(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59035_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59036_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59036(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59036_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59037_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59037(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59037_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59038_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2U5BU5D_t8425* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59038(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2U5BU5D_t8425*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59038_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59039_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59039(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59039_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59040_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59040(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59040_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59041_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59041(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59041_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59042_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59042(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59042_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59043_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59043(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59043_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59044_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59044(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59044_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7659  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59045_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6104  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59045(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7659  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59045_gshared)(__this /* static, unused */, ___pair, method)
