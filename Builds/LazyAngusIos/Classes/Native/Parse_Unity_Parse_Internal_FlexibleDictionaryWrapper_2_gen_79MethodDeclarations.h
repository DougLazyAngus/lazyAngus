#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1947;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7752;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8139;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7799;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55329_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55329(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55329_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55331_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55331(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55331_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55333_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55333(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55333_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55335_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55335(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55335_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55337_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55337(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55337_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55339_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55339(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55339_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55341_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55341(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55341_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55343_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55343(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55343_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55345_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55345(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55345_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55347_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55347(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55347_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55349_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55349(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55349_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55351_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55351(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55351_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55353_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2U5BU5D_t8139* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55353(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2U5BU5D_t8139*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55353_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55355_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55355(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55355_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55357_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55357(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55357_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55359_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55359(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55359_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55361_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55361(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55361_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55363_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55363(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55363_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55365_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55365(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55365_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6093  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55367_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7754  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55367(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6093  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55367_gshared)(__this /* static, unused */, ___pair, method)
