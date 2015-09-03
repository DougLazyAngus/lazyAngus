#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>
struct FlexibleDictionaryWrapper_2_t1983;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9707;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7570;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8269;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7821;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57317_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57317(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57317_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57318_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57318(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57318_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57319_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57319(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57319_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57320_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57320(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57320_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57321_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57321(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57321_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57322_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57322(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57322_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57323_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57323(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57323_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57324_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57324(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57324_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57325_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57325(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57325_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57326_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57326(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57326_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57327_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57327(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57327_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57328_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57328(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57328_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57329_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, KeyValuePair_2U5BU5D_t8269* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57329(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1983 *, KeyValuePair_2U5BU5D_t8269*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57329_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57330_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57330(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57330_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57331_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57331(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57331_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57332_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57332(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1983 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57332_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57333_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57333(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57333_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57334_gshared (FlexibleDictionaryWrapper_2_t1983 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57334(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1983 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57334_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57335_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57335(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57335_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7816  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57336_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7626  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57336(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7816  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57336_gshared)(__this /* static, unused */, ___pair, method)
