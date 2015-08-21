#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1996;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9213;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7216;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7845;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7275;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54274_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54274(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54274_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54275_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54275(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54275_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54276_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54276(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54276_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54277_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54277(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54277_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54278_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54278(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54278_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54279_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54279(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54279_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54280_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54280(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54280_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54281_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54281(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54281_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54282_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54282(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54282_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54283_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2_t7079  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54283(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54283_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54284_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54284(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54284_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54285_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2_t7079  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54285(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54285_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54286_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2U5BU5D_t7845* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54286(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2U5BU5D_t7845*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54286_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54287_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54287(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54287_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54288_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54288(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54288_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54289_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2_t7079  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54289(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54289_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54290_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54290(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54290_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54291_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54291(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54291_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54292_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54292(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54292_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7079  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54293_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7220  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54293(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7079  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54293_gshared)(__this /* static, unused */, ___pair, method)
