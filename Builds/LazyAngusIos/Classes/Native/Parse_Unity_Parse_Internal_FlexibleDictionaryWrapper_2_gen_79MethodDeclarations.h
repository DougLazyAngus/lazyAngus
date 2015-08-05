#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1881;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8636;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7111;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7498;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7158;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49945_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49945(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49945_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49947_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49947(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49947_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49949_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49949(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49949_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49951_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49951(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49951_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49953_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49953(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49953_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49955_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49955(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49957_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49957(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49957_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m49959_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49959(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49959_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49961_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49961(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49961_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49963_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49963(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49963_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49965_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49965(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49965_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49967_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49967(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49967_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49969_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2U5BU5D_t7498* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49969(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2U5BU5D_t7498*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49969_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49971_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49971(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49971_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49973_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49973(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49973_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49975_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49975(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49975_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49977_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49977(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49977_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49979_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49979(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49979_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49981_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49981(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49981_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5499  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49983_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7113  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49983(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5499  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49983_gshared)(__this /* static, unused */, ___pair, method)
