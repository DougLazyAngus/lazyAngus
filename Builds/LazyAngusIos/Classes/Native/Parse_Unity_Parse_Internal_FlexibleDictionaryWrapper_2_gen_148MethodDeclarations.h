#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>
struct FlexibleDictionaryWrapper_2_t1999;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6995;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7841;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7271;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54229_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54229(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54229_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54230_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54230(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54230_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54231_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54231(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54231_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54232_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54232(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54232_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54233_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54233(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54233_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54234_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54234(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54234_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54235_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54235(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54235_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54236_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54236(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54236_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54237_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54237(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54237_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54238_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54238(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54238_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54239_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54239(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54239_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54240_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54240(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54240_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54241_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, KeyValuePair_2U5BU5D_t7841* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54241(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54241_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54242_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54242(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54242_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54243_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54243(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54243_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54244_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54244(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54244_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54245_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54245(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54245_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54246_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54246(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54246_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54247_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54247(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54247_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7075  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54248_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5543  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54248(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7075  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54248_gshared)(__this /* static, unused */, ___pair, method)
