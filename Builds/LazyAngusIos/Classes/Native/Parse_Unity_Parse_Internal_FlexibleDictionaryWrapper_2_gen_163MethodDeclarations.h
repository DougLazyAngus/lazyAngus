#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>
struct FlexibleDictionaryWrapper_2_t2035;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9561;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7818;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8483;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59832_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59832(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59832_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59833_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59833(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59833_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59834_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59834(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59834_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59835_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59835(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59835_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59836_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59836(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59836_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59837_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59837(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59837_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59838_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59838(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59838_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59839_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59839(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59839_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59840_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59840(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59840_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59841_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59841(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59841_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59842_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59842(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59842_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59843_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59843(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59843_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59844_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, KeyValuePair_2U5BU5D_t8483* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59844(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2035 *, KeyValuePair_2U5BU5D_t8483*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59844_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59845_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59845(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59845_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59846_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59846(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59846_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59847_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59847(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2035 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59847_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59848_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59848(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59848_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59849_gshared (FlexibleDictionaryWrapper_2_t2035 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59849(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2035 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59849_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59850_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59850(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59850_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7632  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59851_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7822  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59851(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7632  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59851_gshared)(__this /* static, unused */, ___pair, method)
