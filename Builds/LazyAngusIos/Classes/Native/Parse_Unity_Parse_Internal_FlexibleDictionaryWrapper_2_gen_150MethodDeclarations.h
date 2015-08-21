#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>
struct FlexibleDictionaryWrapper_2_t1999;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9213;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7245;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7845;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7275;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54403_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54403(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54403_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54404_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54404(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54404_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54405_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54405(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54405_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54406_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54406(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54406_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54407_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54407(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54407_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54408_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54408(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54408_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54409_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54409(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54409_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54410_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54410(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54410_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54411_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54411(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54411_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54412_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, KeyValuePair_2_t7079  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54412(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54412_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54413_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54413(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54413_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54414_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, KeyValuePair_2_t7079  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54414(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54414_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54415_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, KeyValuePair_2U5BU5D_t7845* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54415(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1999 *, KeyValuePair_2U5BU5D_t7845*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54415_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54416_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54416(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54416_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54417_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54417(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54417_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54418_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, KeyValuePair_2_t7079  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54418(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1999 *, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54418_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54419_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54419(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54419_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54420_gshared (FlexibleDictionaryWrapper_2_t1999 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54420(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1999 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54420_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54421_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54421(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54421_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7079  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54422_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7249  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54422(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7079  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54422_gshared)(__this /* static, unused */, ___pair, method)
