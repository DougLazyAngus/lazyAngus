#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1940;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9835;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7802;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8075;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7793;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54803_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54803(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54803_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54804_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54804(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54804_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54805_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54805(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54805_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54806_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54806(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54806_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54807_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54807(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54807_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54808_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54808(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54808_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54809_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54809(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54809_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54810_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54810(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54810_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54811_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54811(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54811_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54812_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t7788  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54812(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54812_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54813_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54813(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54813_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54814_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t7788  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54814(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54814_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54815_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2U5BU5D_t8075* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54815(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2U5BU5D_t8075*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54815_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54816_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54816(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54816_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54817_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54817(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54817_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54818_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t7788  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54818(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54818_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54819_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54819(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54819_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54820_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54820(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54820_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54821_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54821(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54821_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7788  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54822_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7806  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54822(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7788  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7806 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54822_gshared)(__this /* static, unused */, ___pair, method)
