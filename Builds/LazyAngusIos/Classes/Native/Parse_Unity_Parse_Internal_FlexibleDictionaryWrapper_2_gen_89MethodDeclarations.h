#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>
struct FlexibleDictionaryWrapper_2_t1940;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6999;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7568;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7228;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51048_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51048(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51048_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51049_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51049(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51049_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51050_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51050(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51050_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51051_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51051(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51051_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51052_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51052(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51052_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51053_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51053(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51053_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51054_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51054(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51054_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m51055_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51055(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51055_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51056_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51056(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51056_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51057_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51057(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51057_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51058_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51058(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51058_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51059_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51059(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51059_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51060_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2U5BU5D_t7568* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51060(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2U5BU5D_t7568*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51060_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51061_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51061(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51061_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51062_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51062(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51062_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51063_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t5543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51063(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51063_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51064_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51064(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51064_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51065_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51065(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51065_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51066_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51066(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51066_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5543  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51067_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7055  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51067(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5543  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51067_gshared)(__this /* static, unused */, ___pair, method)
