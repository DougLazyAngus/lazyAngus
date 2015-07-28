#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1886;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9100;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7130;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7551;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7157;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50796_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50796(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50796_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50797_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50797(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50797_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50798_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50798(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50798_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50799_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50799(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50799_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50800_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50800(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50800_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50801_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50801(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50801_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50802_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50802(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50802_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50803_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50803(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50803_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50804_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50804(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50804_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50805_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2_t7152  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50805(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2_t7152 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50805_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50806_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50806(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50806_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50807_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2_t7152  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50807(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2_t7152 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50807_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50808_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2U5BU5D_t7551* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50808(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2U5BU5D_t7551*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50808_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50809_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50809(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50809_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50810_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50810(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50810_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50811_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2_t7152  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50811(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2_t7152 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50811_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50812_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50812(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50812_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50813_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50813(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50813_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50814_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50814(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50814_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7152  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50815_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7134  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50815(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7152  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50815_gshared)(__this /* static, unused */, ___pair, method)
