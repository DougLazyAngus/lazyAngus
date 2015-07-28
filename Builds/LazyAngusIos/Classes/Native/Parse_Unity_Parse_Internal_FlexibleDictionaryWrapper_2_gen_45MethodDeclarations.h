#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1836;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9096;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7148;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7291;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7117;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47774_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47774(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47774_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47775_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47775(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47775_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47776_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47776(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47776_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47777_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47777(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47777_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47778_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47778(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47778_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47779_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47779(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47779_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47780_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47780(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47780_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47781_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47781(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47781_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47782_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47782(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47782_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47783_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47783(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47783_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47784_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47784(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47784_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47785_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47785(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47785_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47786_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, KeyValuePair_2U5BU5D_t7291* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47786(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1836 *, KeyValuePair_2U5BU5D_t7291*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47786_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47787_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47787(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47787_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47788_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47788(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47788_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47789_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47789(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1836 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47789_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47790_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47790(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47790_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47791_gshared (FlexibleDictionaryWrapper_2_t1836 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47791(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1836 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47791_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47792_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47792(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47792_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7112  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47793_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7152  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47793(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7112  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7152 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47793_gshared)(__this /* static, unused */, ___pair, method)
