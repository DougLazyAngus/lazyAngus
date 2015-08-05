#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>
struct FlexibleDictionaryWrapper_2_t1882;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8635;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7130;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7497;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7157;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50046_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50046(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50046_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50047_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50047(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50047_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50048_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50048(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50048_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50049_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50049(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50049_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50050_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50050(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50050_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50051_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50051(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50051_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50052_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50052(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50052_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50053_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50053(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50053_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50054_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50054(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50054_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50055_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t5498  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50055(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t5498 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50055_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50056_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50056(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50056_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50057_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t5498  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50057(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t5498 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50057_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50058_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2U5BU5D_t7497* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50058(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2U5BU5D_t7497*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50058_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50059_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50059(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50059_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50060_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50060(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50060_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50061_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t5498  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50061(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t5498 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50061_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50062_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50062(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50062_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50063_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50063(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50063_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50064_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50064(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50064_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5498  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50065_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7134  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50065(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5498  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50065_gshared)(__this /* static, unused */, ___pair, method)
