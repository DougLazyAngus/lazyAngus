#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>
struct FlexibleDictionaryWrapper_2_t1957;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9335;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7818;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7805;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55635_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55635(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55635_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55636_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55636(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55636_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55637_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55637(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55637_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55638_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55638(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55638_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55639_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55639(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55639_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55640_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55640(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55640_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55641_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55641(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55641_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55642_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55642(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55642_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55643_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55643(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55643_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55644_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55644(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55644_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55645_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55645(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55645_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55646_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55646(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55646_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55647_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, KeyValuePair_2U5BU5D_t8145* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55647(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, KeyValuePair_2U5BU5D_t8145*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55647_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55648_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55648(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55648_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55649_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55649(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55649_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55650_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55650(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55650_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55651_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55651(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55651_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55652_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55652(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55652_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55653_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55653(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55653_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6097  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55654_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7822  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55654(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6097  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55654_gshared)(__this /* static, unused */, ___pair, method)
