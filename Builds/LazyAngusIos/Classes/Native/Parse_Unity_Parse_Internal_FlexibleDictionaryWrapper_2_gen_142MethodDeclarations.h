#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>
struct FlexibleDictionaryWrapper_2_t2021;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9853;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8425;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58531_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58531(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58531_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58532_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58532(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58532_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58533_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58533(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58533_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58534_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58534(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58534_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58535_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58535(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58535_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58536_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58536(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58536_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58537_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58537(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58537_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58538_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58538(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58538_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58539_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58539(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58539_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58540_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58540(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58540_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58541_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58541(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58541_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58542_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58542(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58542_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58543_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2U5BU5D_t8425* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58543(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2U5BU5D_t8425*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58543_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58544_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58544(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58544_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58545_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58545(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58545_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58546_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2_t7659  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58546(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58546_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58547_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58547(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58547_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58548_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58548(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58548_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58549_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58549(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58549_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7659  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58550_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t802  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58550(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7659  (*) (Object_t * /* static, unused */, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58550_gshared)(__this /* static, unused */, ___pair, method)
