#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>
struct FlexibleDictionaryWrapper_2_t1865;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9109;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6929;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7140;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48825_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48825(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1865 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48825_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48826_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48826(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1865 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48826_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48827_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48827(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1865 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48827_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48828_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48828(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48828_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48829_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48829(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1865 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48829_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48830_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48830(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1865 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48830_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48831_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48831(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48831_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48832_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48832(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1865 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48832_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48833_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48833(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1865 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48833_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48834_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48834(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1865 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48834_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48835_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48835(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48835_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48836_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48836(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1865 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48836_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48837_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, KeyValuePair_2U5BU5D_t7368* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48837(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1865 *, KeyValuePair_2U5BU5D_t7368*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48837_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48838_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48838(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48838_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48839_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48839(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48839_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48840_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48840(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1865 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48840_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48841_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48841(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48841_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48842_gshared (FlexibleDictionaryWrapper_2_t1865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48842(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48842_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48843_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48843(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48843_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48844_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6985  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48844(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48844_gshared)(__this /* static, unused */, ___pair, method)
