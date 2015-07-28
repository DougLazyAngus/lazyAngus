﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1826;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9030;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7215;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7107;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46964_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46964(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46964_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46966_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46966(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46966_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46968_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46968(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46968_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46970_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46970(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46970_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46972_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46972(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46972_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46974_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46974(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46974_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46976_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46976(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46976_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46978_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46978(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46978_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46980_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46980(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46980_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46982_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, KeyValuePair_2_t7102  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46982(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46982_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46984_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46984(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46984_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46986_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, KeyValuePair_2_t7102  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46986(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46986_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46988_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, KeyValuePair_2U5BU5D_t7215* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46988(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1826 *, KeyValuePair_2U5BU5D_t7215*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46988_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46990_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46990(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46990_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46992_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46992(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46992_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46994_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, KeyValuePair_2_t7102  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46994(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1826 *, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46994_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46996_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46996(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46996_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46998_gshared (FlexibleDictionaryWrapper_2_t1826 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46998(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1826 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46998_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47000_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47000(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47000_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7102  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47002_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7175  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47002(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7102  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47002_gshared)(__this /* static, unused */, ___pair, method)
