#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>
struct FlexibleDictionaryWrapper_2_t1856;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9099;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7422;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7140;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48790_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48790(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48790_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48791_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48791(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48791_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48792_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48792(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48792_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48793_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48793(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48793_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48794_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48794(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48794_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48795_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48795(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48795_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48796_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48796(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48796_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m48797_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48797(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48797_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48798_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48798(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48798_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48799_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48799(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48799_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48800_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48800(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48800_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48801_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48801(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48801_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48802_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2U5BU5D_t7422* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48802(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2U5BU5D_t7422*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48802_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48803_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48803(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48803_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48804_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48804(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48804_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48805_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48805(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48805_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48806_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48806(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48806_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48807_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48807(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48807_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48808_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48808(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48808_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48809_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t720  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48809(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48809_gshared)(__this /* static, unused */, ___pair, method)
