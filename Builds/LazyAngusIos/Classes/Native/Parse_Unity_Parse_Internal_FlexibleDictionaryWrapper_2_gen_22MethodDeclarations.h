#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1881;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7212;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7296;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7188;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47443_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47443(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47443_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47445_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47445(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47445_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47447_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47447(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47447_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47449_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47449(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47449_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47451_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47451(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47451_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47453_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47453(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47453_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47455_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47455(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47455_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47457_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47457(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47457_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47459_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47459(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47459_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47461_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47461(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47461_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47463_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47463(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47463_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47465_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47465(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47465_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47467_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2U5BU5D_t7296* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47467(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2U5BU5D_t7296*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47467_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47469_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47469(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47469_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47471_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47471(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47471_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47473_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47473(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47473_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47475_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47475(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47475_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47477_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47477(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47477_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47479_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47479(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47479_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7183  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47481_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7216  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47481(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7183  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47481_gshared)(__this /* static, unused */, ___pair, method)
