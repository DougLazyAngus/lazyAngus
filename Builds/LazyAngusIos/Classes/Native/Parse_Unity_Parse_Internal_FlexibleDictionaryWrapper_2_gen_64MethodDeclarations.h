﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>
struct FlexibleDictionaryWrapper_2_t1916;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9210;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7510;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7228;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49658_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49658(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49658_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49659_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49659(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49659_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49660_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49660(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49660_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49661_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49661(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49661_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49662_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49662(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49662_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49663_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49663(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49663_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49664_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49664(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49664_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49665_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49665(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49665_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49666_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49666(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49666_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49667_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49667(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49667_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49668_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49668(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49668_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49669_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49669(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49669_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49670_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2U5BU5D_t7510* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49670(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2U5BU5D_t7510*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49670_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49671_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49671(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49671_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49672_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49672(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49672_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49673_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49673(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49673_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49674_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49674(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49674_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49675_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49675(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49675_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49676_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49676(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49676_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7223  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49677_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49677(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7223  (*) (Object_t * /* static, unused */, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49677_gshared)(__this /* static, unused */, ___pair, method)
