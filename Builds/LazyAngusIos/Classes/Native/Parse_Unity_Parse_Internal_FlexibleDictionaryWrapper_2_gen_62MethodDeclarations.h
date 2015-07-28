#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>
struct FlexibleDictionaryWrapper_2_t1854;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9098;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6924;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7357;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7129;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48704_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48704(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48704_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48705_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48705(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48705_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48706_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48706(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48706_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48707_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48707(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48707_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48708_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48708(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48708_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48709_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48709(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48709_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48710_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48710(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48710_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48711_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48711(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48711_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48712_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48712(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48712_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48713_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48713(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48713_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48714_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48714(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48714_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48715_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48715(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48715_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48716_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2U5BU5D_t7357* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48716(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2U5BU5D_t7357*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48716_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48717_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48717(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48717_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48718_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48718(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48718_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48719_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48719(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48719_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48720_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48720(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48720_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48721_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48721(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48721_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48722_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48722(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48722_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7124  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48723_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6994  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48723(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7124  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48723_gshared)(__this /* static, unused */, ___pair, method)
