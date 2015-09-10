#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>
struct FlexibleDictionaryWrapper_2_t1969;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9849;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8217;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7823;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55888_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55888(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55888_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55889_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55889(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55889_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55890_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55890(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55890_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55891_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55891(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55891_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55892_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55892(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55892_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55893_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55893(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55893_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55894_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55894(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55894_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m55895_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55895(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55895_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55896_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55896(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55896_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55897_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55897(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55897_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55898_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55898(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55898_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55899_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55899(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55899_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55900_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2U5BU5D_t8217* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55900(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2U5BU5D_t8217*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55900_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55901_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55901(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55901_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55902_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55902(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55902_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55903_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55903(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55903_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55904_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55904(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55904_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55905_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55905(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55905_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55906_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55906(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55906_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7818  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55907_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t802  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55907(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7818  (*) (Object_t * /* static, unused */, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55907_gshared)(__this /* static, unused */, ___pair, method)
