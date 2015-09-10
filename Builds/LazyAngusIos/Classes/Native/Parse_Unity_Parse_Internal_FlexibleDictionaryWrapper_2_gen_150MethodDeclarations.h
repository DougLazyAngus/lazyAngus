#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>
struct FlexibleDictionaryWrapper_2_t2029;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9853;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7825;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8425;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59112_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59112(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59112_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59113_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59113(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59113_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59114_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59114(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59114_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59115_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59115(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59115_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59116_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59116(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59116_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59117_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59117(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59117_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59118_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59118(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59118_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m59119_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59119(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59119_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59120_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59120(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59120_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59121_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59121(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59121_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59122_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59122(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59122_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59123_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59123(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59123_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59124_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2U5BU5D_t8425* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59124(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, KeyValuePair_2U5BU5D_t8425*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59124_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59125_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59125(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59125_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59126_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59126(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59126_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59127_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59127(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59127_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59128_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59128(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59128_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59129_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59129(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59129_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59130_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59130(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59130_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7659  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59131_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7829  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59131(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7659  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7829 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59131_gshared)(__this /* static, unused */, ___pair, method)
