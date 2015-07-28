#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>
struct FlexibleDictionaryWrapper_2_t1940;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9105;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6914;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7760;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7190;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53482_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53482(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53482_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53483_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53483(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53483_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53484_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53484(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53484_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53485_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53485(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53485_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53486_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53486(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53486_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53487_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53487(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53487_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53488_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53488(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53488_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53489_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53489(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53489_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53490_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53490(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53490_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53491_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t6994  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53491(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53491_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53492_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53492(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53492_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53493_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t6994  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53493(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53493_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53494_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2U5BU5D_t7760* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53494(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2U5BU5D_t7760*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53494_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53495_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53495(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53495_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53496_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53496(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53496_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53497_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t6994  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53497(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53497_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53498_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53498(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53498_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53499_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53499(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53499_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53500_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53500(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53500_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6994  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53501_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5488  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53501(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6994  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53501_gshared)(__this /* static, unused */, ___pair, method)
