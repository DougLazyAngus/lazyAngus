#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>
struct FlexibleDictionaryWrapper_2_t1945;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9105;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6924;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7760;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7190;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53678_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53678(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53678_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53679_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53679(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53679_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53680_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53680(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53680_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53681_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53681(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53681_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53682_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53682(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53682_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53683_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53683(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53683_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53684_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53684(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53684_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53685_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53685(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53685_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53686_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53686(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53686_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53687_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t6994  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53687(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53687_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53688_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53688(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53688_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53689_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t6994  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53689(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53689_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53690_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2U5BU5D_t7760* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53690(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2U5BU5D_t7760*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53690_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53691_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53691(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53691_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53692_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53692(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53692_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53693_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t6994  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53693(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53693_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53694_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53694(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53694_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53695_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53695(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53695_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53696_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53696(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53696_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6994  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53697_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6994  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53697(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6994  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53697_gshared)(__this /* static, unused */, ___pair, method)
