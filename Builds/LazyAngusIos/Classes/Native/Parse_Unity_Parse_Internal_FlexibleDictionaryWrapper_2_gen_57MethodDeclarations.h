#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>
struct FlexibleDictionaryWrapper_2_t1936;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7579;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8022;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7794;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54052_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54052(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54052_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54053_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54053(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54053_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54054_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54054(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54054_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54055_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54055(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54055_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54056_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54056(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54056_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54057_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54057(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54057_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54058_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54058(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54058_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m54059_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54059(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54059_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54060_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54060(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54060_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54061_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54061(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54061_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54062_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54062(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54062_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54063_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54063(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54063_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54064_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2U5BU5D_t8022* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54064(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1936 *, KeyValuePair_2U5BU5D_t8022*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54064_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54065_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54065(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54065_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54066_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54066(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54066_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54067_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54067(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1936 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54067_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54068_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54068(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54068_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54069_gshared (FlexibleDictionaryWrapper_2_t1936 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54069(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1936 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54069_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54070_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54070(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54070_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7789  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54071_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6104  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54071(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7789  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54071_gshared)(__this /* static, unused */, ___pair, method)
