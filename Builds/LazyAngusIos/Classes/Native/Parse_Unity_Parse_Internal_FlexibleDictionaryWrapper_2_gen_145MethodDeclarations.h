#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>
struct FlexibleDictionaryWrapper_2_t2013;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9840;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7761;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7842;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58815_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58815(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58815_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58816_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58816(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58816_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58817_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58817(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58817_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58818_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58818(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58818_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58819_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58819(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58819_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58820_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58820(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58820_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58821_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58821(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58821_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58822_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58822(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58822_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58823_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58823(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58823_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58824_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58824(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58824_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58825_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58825(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58825_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58826_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58826(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58826_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58827_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2U5BU5D_t8412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58827(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2U5BU5D_t8412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58827_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58828_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58828(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58828_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58829_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58829(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58829_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58830_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58830(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58830_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58831_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58831(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58831_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58832_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58832(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58832_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58833_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58833(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58833_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7646  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58834_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7765  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58834(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7646  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58834_gshared)(__this /* static, unused */, ___pair, method)
