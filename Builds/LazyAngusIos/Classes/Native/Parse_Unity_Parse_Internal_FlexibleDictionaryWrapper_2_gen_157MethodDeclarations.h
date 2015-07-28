#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>
struct FlexibleDictionaryWrapper_2_t1948;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8831;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7099;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7824;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7196;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54064_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54064(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54064_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54066_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54066(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54066_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54068_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54068(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54068_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54070_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54070(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54070_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54072_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54072(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54072_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54074_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54074(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54074_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54076_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54076(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54076_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54078_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54078(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54078_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54080_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54080(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54080_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54082_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t6973  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54082(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t6973 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54082_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54084_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54084(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54084_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54086_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t6973  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54086(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t6973 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54086_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54088_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2U5BU5D_t7824* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54088(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2U5BU5D_t7824*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54088_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54090_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54090(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54090_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54092_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54092(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54092_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54094_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t6973  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54094(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t6973 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54094_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54096_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54096(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54096_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54098_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54098(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54098_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54100_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54100(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54100_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6973  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54102_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7101  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54102(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6973  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54102_gshared)(__this /* static, unused */, ___pair, method)
