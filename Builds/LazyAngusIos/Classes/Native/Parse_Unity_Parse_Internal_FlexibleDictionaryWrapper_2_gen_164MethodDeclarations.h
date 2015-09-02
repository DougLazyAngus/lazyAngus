#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>
struct FlexibleDictionaryWrapper_2_t2032;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8968;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7288;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7942;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7314;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55588_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55588(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55588_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55589_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55589(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55589_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55590_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55590(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55590_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55591_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55591(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55591_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55592_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55592(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55592_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55593_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55593(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55593_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55594_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55594(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55594_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55595_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55595(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55595_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55596_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55596(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55596_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55597_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55597(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55597_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55598_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55598(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55598_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55599_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55599(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55599_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55600_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2U5BU5D_t7942* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55600(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2U5BU5D_t7942*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55600_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55601_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55601(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55601_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55602_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55602(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55602_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55603_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55603(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55603_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55604_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55604(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55604_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55605_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55605(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55605_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55606_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55606(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55606_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7091  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55607_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7292  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55607(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7091  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7292 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55607_gshared)(__this /* static, unused */, ___pair, method)
