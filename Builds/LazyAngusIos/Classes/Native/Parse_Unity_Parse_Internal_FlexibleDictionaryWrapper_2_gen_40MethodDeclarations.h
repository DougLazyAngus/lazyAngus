#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1841;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9107;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7110;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7302;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7128;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47606_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47606(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47606_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47608_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47608(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47608_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47610_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47610(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47610_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47612_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47612(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47612_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47614_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47614(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47614_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47616_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47616(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47616_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47618_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47618(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47618_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47620_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47620(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47620_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47622_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47622(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47622_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47624_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47624(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47624_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47626_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47626(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47626_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47628_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47628(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47628_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47630_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, KeyValuePair_2U5BU5D_t7302* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47630(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1841 *, KeyValuePair_2U5BU5D_t7302*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47630_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47632_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47632(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47632_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47634_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47634(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47634_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47636_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47636(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1841 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47636_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47638_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47638(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47638_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47640_gshared (FlexibleDictionaryWrapper_2_t1841 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47640(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1841 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47640_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47642_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47642(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47642_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7123  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47644_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7112  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47644(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7123  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47644_gshared)(__this /* static, unused */, ___pair, method)
