#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>
struct FlexibleDictionaryWrapper_2_t1942;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9212;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7640;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7246;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51212_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51212(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51212_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51213_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51213(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51213_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51214_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51214(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51214_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51215_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51215(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51215_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51216_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51216(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51216_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51217_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51217(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51217_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51218_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51218(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51218_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51219_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51219(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51219_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51220_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51220(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51220_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51221_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51221(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51221_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51222_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51222(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51222_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51223_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51223(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51223_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51224_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2U5BU5D_t7640* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51224(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2U5BU5D_t7640*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51224_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51225_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51225(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51225_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51226_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51226(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51226_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51227_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51227(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51227_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51228_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51228(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51228_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51229_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51229(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51229_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51230_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51230(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51230_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7241  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51231_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51231(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7241  (*) (Object_t * /* static, unused */, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51231_gshared)(__this /* static, unused */, ___pair, method)
