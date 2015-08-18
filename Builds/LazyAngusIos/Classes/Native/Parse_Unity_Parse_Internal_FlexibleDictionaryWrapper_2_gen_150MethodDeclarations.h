#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>
struct FlexibleDictionaryWrapper_2_t2001;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7241;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7841;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7271;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54312_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54312(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54312_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54313_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54313(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54313_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54314_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54314(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54314_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54315_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54315(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54315_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54316_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54316(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54316_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54317_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54317(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54317_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54318_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54318(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54318_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54319_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54319(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54319_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54320_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54320(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54320_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54321_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54321(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54321_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54322_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54322(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54322_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54323_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54323(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54323_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54324_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2U5BU5D_t7841* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54324(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2001 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54324_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54325_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54325(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54325_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54326_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54326(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54326_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54327_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54327(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2001 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54327_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54328_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54328(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54328_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54329_gshared (FlexibleDictionaryWrapper_2_t2001 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54329(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2001 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54329_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54330_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54330(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54330_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7075  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54331_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7245  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54331(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7075  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54331_gshared)(__this /* static, unused */, ___pair, method)
