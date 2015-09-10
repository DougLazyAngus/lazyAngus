#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>
struct FlexibleDictionaryWrapper_2_t2036;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9580;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7765;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8490;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7862;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59608_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59608(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59608_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59610_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59610(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59610_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59612_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59612(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59612_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59614_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59614(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59614_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59616_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59616(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59616_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59618_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59618(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59618_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59620_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59620(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59620_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59622_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59622(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59622_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59624_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59624(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59624_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59626_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, KeyValuePair_2_t7639  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59626(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59626_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59628_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59628(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59628_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59630_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, KeyValuePair_2_t7639  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59630(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59630_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59632_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, KeyValuePair_2U5BU5D_t8490* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59632(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, KeyValuePair_2U5BU5D_t8490*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59632_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59634_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59634(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59634_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59636_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59636(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59636_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59638_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, KeyValuePair_2_t7639  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59638(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59638_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59640_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59640(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59640_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59642_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59642(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59642_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59644_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59644(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59644_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7639  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59646_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7767  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59646(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7639  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59646_gshared)(__this /* static, unused */, ___pair, method)
