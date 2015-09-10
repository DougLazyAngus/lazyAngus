#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1939;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8022;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7794;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54181_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54181(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54181_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54182_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54182(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54182_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54183_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54183(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54183_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54184_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54184(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54184_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54185_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54185(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54185_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54186_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54186(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54186_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54187_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54187(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54187_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m54188_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54188(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54188_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54189_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54189(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54189_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54190_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54190(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54190_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54191_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54191(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54191_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54192_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54192(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54192_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54193_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2U5BU5D_t8022* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54193(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2U5BU5D_t8022*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54193_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54194_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54194(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54194_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54195_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54195(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54195_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54196_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54196(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1939 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54196_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54197_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54197(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54197_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54198_gshared (FlexibleDictionaryWrapper_2_t1939 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54198(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1939 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54198_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54199_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54199(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54199_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7789  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54200_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7840  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54200(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7789  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7840 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54200_gshared)(__this /* static, unused */, ___pair, method)
