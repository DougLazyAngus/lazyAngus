#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>
struct FlexibleDictionaryWrapper_2_t1839;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9107;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7302;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7128;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47306_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47306(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1839 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47306_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47307_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47307(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1839 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47307_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47308_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47308(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1839 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47308_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47309_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47309(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1839 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47309_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47310_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47310(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1839 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47310_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47311_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47311(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1839 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47311_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47312_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47312(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1839 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47312_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47313_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47313(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1839 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47313_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47314_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47314(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1839 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47314_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47315_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47315(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1839 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47315_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47316_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47316(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1839 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47316_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47317_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47317(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1839 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47317_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47318_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, KeyValuePair_2U5BU5D_t7302* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47318(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1839 *, KeyValuePair_2U5BU5D_t7302*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47318_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47319_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47319(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1839 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47319_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47320_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47320(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1839 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47320_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47321_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, KeyValuePair_2_t7123  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47321(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1839 *, KeyValuePair_2_t7123 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47321_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47322_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47322(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1839 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47322_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47323_gshared (FlexibleDictionaryWrapper_2_t1839 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47323(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1839 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47323_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47324_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47324(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47324_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7123  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47325_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t728  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47325(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7123  (*) (Object_t * /* static, unused */, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47325_gshared)(__this /* static, unused */, ___pair, method)
