#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>
struct FlexibleDictionaryWrapper_2_t1967;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8842;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6934;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7835;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7207;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54525_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54525(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54525_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54526_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54526(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54526_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54527_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54527(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54527_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54528_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54528(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54528_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54529_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54529(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54529_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54530_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54530(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54530_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54531_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54531(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54531_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54532_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54532(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54532_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54533_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54533(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54533_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54534_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, KeyValuePair_2_t6984  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54534(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, KeyValuePair_2_t6984 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54534_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54535_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54535(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54535_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54536_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, KeyValuePair_2_t6984  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54536(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, KeyValuePair_2_t6984 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54536_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54537_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, KeyValuePair_2U5BU5D_t7835* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54537(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, KeyValuePair_2U5BU5D_t7835*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54537_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54538_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54538(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54538_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54539_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54539(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54539_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54540_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, KeyValuePair_2_t6984  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54540(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, KeyValuePair_2_t6984 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54540_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54541_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54541(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54541_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54542_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54542(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54542_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54543_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54543(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54543_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6984  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54544_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7004  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54544(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6984  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7004 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54544_gshared)(__this /* static, unused */, ___pair, method)
