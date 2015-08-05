#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>
struct FlexibleDictionaryWrapper_2_t1895;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7120;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7563;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7169;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50788_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50788(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50788_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50789_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50789(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50789_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50790_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50790(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50790_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50791_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50791(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50791_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50792_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50792(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50792_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50793_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50793(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50793_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50794_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50794(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50794_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50795_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50795(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50795_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50796_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50796(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50796_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50797_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50797(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50797_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50798_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50798(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50798_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50799_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50799(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50799_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50800_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2U5BU5D_t7563* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50800(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2U5BU5D_t7563*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50800_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50801_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50801(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50801_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50802_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50802(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50802_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50803_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50803(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50803_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50804_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50804(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50804_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50805_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50805(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50805_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50806_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50806(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50806_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7164  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50807_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7124  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50807(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7164  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50807_gshared)(__this /* static, unused */, ___pair, method)
