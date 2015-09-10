#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1948;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9847;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7796;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8087;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7805;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54786_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54786(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54786_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54787_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54787(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54787_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54788_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54788(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54788_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54789_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54789(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54789_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54790_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54790(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54790_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54791_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54791(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54791_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54792_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54792(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54792_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54793_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54793(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54793_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54794_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54794(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54794_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54795_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7800  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54795(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54795_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54796_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54796(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54796_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54797_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7800  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54797(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54797_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54798_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2U5BU5D_t8087* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54798(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2U5BU5D_t8087*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54798_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54799_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54799(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54799_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54800_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54800(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54800_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54801_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, KeyValuePair_2_t7800  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54801(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1948 *, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54801_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54802_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54802(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54802_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54803_gshared (FlexibleDictionaryWrapper_2_t1948 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54803(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1948 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54803_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54804_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54804(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54804_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7800  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54805_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7800  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54805(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7800  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54805_gshared)(__this /* static, unused */, ___pair, method)
