#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1867;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9109;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7110;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7432;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7150;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49160_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49160(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49160_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49162_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49162(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49162_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49164_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49164(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49164_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49166_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49166(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49166_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49168_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49168(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49168_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49170_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49170(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49170_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49172_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49172(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49172_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49174_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49174(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49174_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49176_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49176(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49176_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49178_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49178(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49178_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49180_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49180(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49180_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49182_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49182(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49182_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49184_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, KeyValuePair_2U5BU5D_t7432* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49184(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, KeyValuePair_2U5BU5D_t7432*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49184_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49186_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49186(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49186_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49188_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49188(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49188_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49190_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49190(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49190_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49192_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49192(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49192_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49194_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49194(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49194_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49196_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49196(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49196_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7145  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49198_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7112  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49198(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7145  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49198_gshared)(__this /* static, unused */, ___pair, method)
