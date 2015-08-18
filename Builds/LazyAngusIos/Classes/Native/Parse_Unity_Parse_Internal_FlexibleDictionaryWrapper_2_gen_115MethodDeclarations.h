#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>
struct FlexibleDictionaryWrapper_2_t1966;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9072;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6999;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7698;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7250;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52599_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52599(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52599_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52600_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52600(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52600_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52601_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52601(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52601_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52602_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52602(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52602_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52603_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52603(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52603_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52604_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52604(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52604_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52605_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52605(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52605_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m52606_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52606(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52606_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52607_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52607(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52607_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52608_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52608(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52608_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52609_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52609(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52609_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52610_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52610(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52610_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52611_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2U5BU5D_t7698* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52611(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2U5BU5D_t7698*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52611_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52612_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52612(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52612_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52613_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52613(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52613_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52614_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52614(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52614_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52615_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52615(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52615_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52616_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52616(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52616_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52617_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52617(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52617_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7245  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52618_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7055  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52618(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7245  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52618_gshared)(__this /* static, unused */, ___pair, method)
