#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>
struct FlexibleDictionaryWrapper_2_t1958;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9836;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8204;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7810;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55806_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55806(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55806_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55807_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55807(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55807_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55808_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55808(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55808_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55809_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55809(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55809_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55810_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55810(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55810_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55811_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55811(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55811_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55812_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55812(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55812_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m55813_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55813(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55813_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55814_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55814(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55814_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55815_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55815(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55815_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55816_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55816(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55816_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55817_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55817(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55817_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55818_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2U5BU5D_t8204* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55818(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2U5BU5D_t8204*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55818_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55819_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55819(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55819_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55820_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55820(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55820_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55821_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55821(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55821_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55822_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55822(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55822_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55823_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55823(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55823_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55824_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55824(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55824_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7805  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55825_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t791  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55825(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7805  (*) (Object_t * /* static, unused */, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55825_gshared)(__this /* static, unused */, ___pair, method)
