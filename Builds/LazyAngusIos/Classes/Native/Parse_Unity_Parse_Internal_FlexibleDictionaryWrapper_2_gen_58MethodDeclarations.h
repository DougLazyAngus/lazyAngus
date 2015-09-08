#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1930;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7807;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8015;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7787;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54038_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54038(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54038_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54039_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54039(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54039_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54040_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54040(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54040_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54041_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54041(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54041_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54042_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54042(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54042_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54043_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54043(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54043_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54044_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54044(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54044_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m54045_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54045(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54045_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54046_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54046(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54046_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54047_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54047(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54047_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54048_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54048(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54048_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54049_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54049(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54049_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54050_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2U5BU5D_t8015* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54050(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2U5BU5D_t8015*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54050_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54051_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54051(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54051_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54052_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54052(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54052_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54053_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54053(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1930 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54053_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54054_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54054(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54054_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54055_gshared (FlexibleDictionaryWrapper_2_t1930 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54055(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1930 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54055_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54056_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54056(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54056_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7782  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54057_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7811  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54057(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7782  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54057_gshared)(__this /* static, unused */, ___pair, method)
