#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>
struct FlexibleDictionaryWrapper_2_t1809;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1168;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6925;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1359;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1346;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46151_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46151(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1809 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46151_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46152_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46152(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1809 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46152_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46153_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46153(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1809 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46153_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46154_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46154(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1809 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46154_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46155_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46155(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1809 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46155_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46156_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46156(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1809 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46156_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46157_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46157(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1809 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46157_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46158_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46158(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1809 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46158_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46159_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46159(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1809 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46159_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46160_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46160(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1809 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46160_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46161_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46161(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1809 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46161_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46162_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46162(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1809 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46162_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46163_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, KeyValuePair_2U5BU5D_t1359* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46163(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1809 *, KeyValuePair_2U5BU5D_t1359*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46163_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46164_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46164(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1809 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46164_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46165_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46165(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1809 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46165_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46166_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46166(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1809 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46166_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46167_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46167(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1809 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46167_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46168_gshared (FlexibleDictionaryWrapper_2_t1809 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46168(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1809 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46168_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46169_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46169(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46169_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t727  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46170_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6981  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46170(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t727  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46170_gshared)(__this /* static, unused */, ___pair, method)
