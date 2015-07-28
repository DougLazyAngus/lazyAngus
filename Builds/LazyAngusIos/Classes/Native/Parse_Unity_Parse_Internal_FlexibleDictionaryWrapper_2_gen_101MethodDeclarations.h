#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>
struct FlexibleDictionaryWrapper_2_t1893;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9101;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6924;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7552;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7158;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51035_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51035(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51035_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51036_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51036(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51036_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51037_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51037(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51037_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51038_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51038(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51038_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51039_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51039(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51039_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51040_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51040(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51040_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51041_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51041(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51041_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51042_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51042(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51042_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51043_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51043(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51043_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51044_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51044(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51044_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51045_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51045(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51045_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51046_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51046(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51046_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51047_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2U5BU5D_t7552* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51047(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2U5BU5D_t7552*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51047_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51048_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51048(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51048_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51049_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51049(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51049_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51050_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51050(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51050_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51051_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51051(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51051_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51052_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51052(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51052_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51053_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51053(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51053_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7153  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51054_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6994  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51054(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7153  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51054_gshared)(__this /* static, unused */, ___pair, method)
