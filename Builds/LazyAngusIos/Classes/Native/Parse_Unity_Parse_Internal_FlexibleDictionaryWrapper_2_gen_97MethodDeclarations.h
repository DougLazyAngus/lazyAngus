#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1948;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9201;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7230;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7633;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7239;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51626_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51626(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51626_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51627_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51627(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51627_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51628_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51628(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51628_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51629_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51629(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51629_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51630_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51630(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51630_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51631_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51631(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51631_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51632_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51632(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51632_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51633_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51633(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51633_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51634_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51634(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51634_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51635_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51635(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51635_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51636_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51636(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51636_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51637_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51637(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51637_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51638_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2U5BU5D_t7633* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51638(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2U5BU5D_t7633*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51638_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51639_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51639(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51639_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51640_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51640(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51640_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51641_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51641(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51641_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51642_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51642(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51642_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51643_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51643(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51643_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51644_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51644(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51644_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7234  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51645_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7234  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51645(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7234  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51645_gshared)(__this /* static, unused */, ___pair, method)
