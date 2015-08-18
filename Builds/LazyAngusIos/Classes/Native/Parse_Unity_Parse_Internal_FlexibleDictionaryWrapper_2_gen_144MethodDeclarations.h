#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>
struct FlexibleDictionaryWrapper_2_t1995;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7841;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7271;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54031_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54031(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54031_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54033_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54033(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54033_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54035_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54035(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54035_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54037_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54037(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54037_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54039_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54039(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54039_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54041_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54041(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54041_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54043_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54043(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54043_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54045_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54045(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54045_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54047_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54047(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54047_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54049_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54049(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54049_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54051_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54051(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54051_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54053_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54053(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54053_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54055_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, KeyValuePair_2U5BU5D_t7841* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54055(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1995 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54055_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54057_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54057(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54057_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54059_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54059(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54059_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54061_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54061(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1995 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54061_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54063_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54063(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54063_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54065_gshared (FlexibleDictionaryWrapper_2_t1995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54065(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54065_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54067_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54067(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54067_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7075  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54069_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7183  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54069(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7075  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54069_gshared)(__this /* static, unused */, ___pair, method)
