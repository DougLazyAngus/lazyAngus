#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>
struct FlexibleDictionaryWrapper_2_t1917;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9845;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7957;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7783;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52780_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52780(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52780_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52781_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52781(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52781_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52782_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52782(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52782_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52783_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52783(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52783_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52784_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52784(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52784_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52785_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52785(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52785_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52786_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52786(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52786_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m52787_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52787(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52787_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52788_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52788(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52788_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52789_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52789(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52789_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52790_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52790(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52790_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52791_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52791(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52791_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52792_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2U5BU5D_t7957* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52792(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2U5BU5D_t7957*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52792_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52793_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52793(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52793_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52794_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52794(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52794_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52795_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52795(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52795_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52796_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52796(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52796_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52797_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52797(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52797_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52798_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52798(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52798_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7778  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52799_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t802  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52799(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7778  (*) (Object_t * /* static, unused */, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52799_gshared)(__this /* static, unused */, ___pair, method)
