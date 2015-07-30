#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>
struct FlexibleDictionaryWrapper_2_t1968;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1168;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t6942;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1359;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1346;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54636_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54636(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54636_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54637_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54637(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54637_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54638_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54638(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54638_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54639_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54639(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54639_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54640_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54640(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54640_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54641_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54641(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54641_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54642_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54642(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54642_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m54643_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54643(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54643_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54644_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54644(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54644_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54645_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54645(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54645_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54646_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54646(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54646_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54647_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54647(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54647_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54648_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, KeyValuePair_2U5BU5D_t1359* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54648(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, KeyValuePair_2U5BU5D_t1359*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54648_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54649_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54649(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54649_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54650_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54650(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54650_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54651_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54651(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54651_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54652_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54652(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54652_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54653_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54653(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54653_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54654_gshared (Object_t * __this /* static, unused */, DateTime_t287  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54654(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54654_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t727  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54655_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7027  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54655(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t727  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7027 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54655_gshared)(__this /* static, unused */, ___pair, method)
