#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1844;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9097;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7099;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7356;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7128;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48313_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48313(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48313_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48315_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48315(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48315_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48317_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48317(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48317_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48319_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48319(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48319_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48321_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48321(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48321_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48323_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48323(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48323_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48325_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48325(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48325_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48327_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48327(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48327_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48329_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48329(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48329_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48331_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48331(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48331_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48333_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48333(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48333_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48335_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48335(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48335_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48337_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2U5BU5D_t7356* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48337(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2U5BU5D_t7356*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48337_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48339_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48339(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48339_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48341_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48341(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48341_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48343_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48343(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1844 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48343_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48345_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48345(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48345_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48347_gshared (FlexibleDictionaryWrapper_2_t1844 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48347(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1844 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48347_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48349_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48349(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48349_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7123  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48351_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7101  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48351(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7123  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48351_gshared)(__this /* static, unused */, ___pair, method)
