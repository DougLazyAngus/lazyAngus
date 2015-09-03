#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1954;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7823;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8139;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7799;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55653_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55653(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55653_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55654_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55654(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55654_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55655_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55655(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55655_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55656_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55656(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55656_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55657_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55657(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55657_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55658_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55658(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55658_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55659_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55659(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55659_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55660_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55660(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55660_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55661_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55661(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55661_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55662_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55662(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55662_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55663_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55663(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55663_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55664_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55664(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55664_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55665_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2U5BU5D_t8139* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55665(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2U5BU5D_t8139*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55665_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55666_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55666(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55666_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55667_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55667(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55667_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55668_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55668(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55668_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55669_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55669(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55669_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55670_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55670(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55670_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55671_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55671(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55671_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6093  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55672_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7827  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55672(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6093  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55672_gshared)(__this /* static, unused */, ___pair, method)
