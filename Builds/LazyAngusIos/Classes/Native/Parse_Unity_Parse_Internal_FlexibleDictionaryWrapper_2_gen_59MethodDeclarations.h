#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>
struct FlexibleDictionaryWrapper_2_t1927;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9833;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7812;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8009;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7781;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54056_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54056(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54056_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54057_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54057(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54057_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54058_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54058(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54058_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54059_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54059(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54059_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54060_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54060(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54060_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54061_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54061(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54061_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54062_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54062(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54062_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m54063_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54063(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54063_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54064_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54064(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54064_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54065_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54065(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54065_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54066_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54066(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54066_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54067_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54067(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54067_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54068_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2U5BU5D_t8009* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54068(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2U5BU5D_t8009*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54068_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54069_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54069(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54069_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54070_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54070(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54070_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54071_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54071(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54071_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54072_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54072(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54072_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54073_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54073(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54073_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54074_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54074(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54074_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7776  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54075_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7816  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54075(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7776  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54075_gshared)(__this /* static, unused */, ___pair, method)
