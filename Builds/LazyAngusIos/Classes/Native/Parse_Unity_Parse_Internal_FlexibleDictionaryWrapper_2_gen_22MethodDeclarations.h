#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1909;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9778;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7796;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7880;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7772;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52240_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52240(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52240_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52242_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52242(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52242_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52244_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52244(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52244_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52246_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52246(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52246_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52248_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52248(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52248_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52250_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52250(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52250_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52252_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52252(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52252_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52254_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52254(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52254_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52256_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52256(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52256_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52258_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7767  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52258(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52258_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52260_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52260(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52260_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52262_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7767  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52262(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52262_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52264_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2U5BU5D_t7880* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52264(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2U5BU5D_t7880*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52264_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52266_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52266(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52266_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52268_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52268(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52268_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52270_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7767  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52270(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52270_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52272_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52272(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52272_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52274_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52274(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52274_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52276_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52276(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52276_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7767  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52278_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7800  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52278(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7767  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52278_gshared)(__this /* static, unused */, ___pair, method)
