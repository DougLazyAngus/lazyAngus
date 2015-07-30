#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>
struct FlexibleDictionaryWrapper_2_t1956;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7116;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7832;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7204;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54177_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54177(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54177_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54178_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54178(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54178_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54179_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54179(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54179_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54180_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54180(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54180_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54181_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54181(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54181_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54182_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54182(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54182_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54183_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54183(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54183_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54184_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54184(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54184_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54185_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54185(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54185_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54186_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t6981  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54186(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54186_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54187_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54187(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54187_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54188_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t6981  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54188(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54188_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54189_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2U5BU5D_t7832* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54189(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2U5BU5D_t7832*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54189_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54190_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54190(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54190_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54191_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54191(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54191_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54192_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t6981  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54192(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54192_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54193_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54193(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54193_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54194_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54194(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54194_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54195_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54195(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54195_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6981  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54196_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7120  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54196(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6981  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54196_gshared)(__this /* static, unused */, ___pair, method)
