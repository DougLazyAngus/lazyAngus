#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1913;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8982;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7627;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7179;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51815_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51815(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51815_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51816_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51816(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51816_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51817_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51817(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51817_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51818_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51818(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51818_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51819_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51819(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51819_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51820_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51820(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51820_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51821_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51821(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51821_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51822_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51822(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51822_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51823_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51823(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51823_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51824_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51824(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51824_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51825_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51825(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51825_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51826_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51826(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51826_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51827_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2U5BU5D_t7627* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51827(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2U5BU5D_t7627*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51827_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51828_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51828(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51828_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51829_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51829(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51829_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51830_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51830(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51830_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51831_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51831(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51831_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51832_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51832(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51832_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51833_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51833(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51833_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7174  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51834_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7185  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51834(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7174  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51834_gshared)(__this /* static, unused */, ___pair, method)
