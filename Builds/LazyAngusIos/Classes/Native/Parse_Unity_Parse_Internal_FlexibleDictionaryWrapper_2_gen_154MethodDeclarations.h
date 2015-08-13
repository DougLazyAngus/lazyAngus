#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>
struct FlexibleDictionaryWrapper_2_t2005;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6999;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7841;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7271;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54468_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54468(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54468_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54469_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54469(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54469_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54470_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54470(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54470_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54471_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54471(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54471_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54472_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54472(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54472_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54473_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54473(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54473_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54474_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54474(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54474_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54475_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54475(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54475_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54476_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54476(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54476_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54477_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54477(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54477_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54478_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54478(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54478_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54479_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54479(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54479_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54480_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, KeyValuePair_2U5BU5D_t7841* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54480(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2005 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54480_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54481_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54481(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54481_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54482_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54482(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54482_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54483_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54483(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2005 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54483_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54484_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54484(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54484_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54485_gshared (FlexibleDictionaryWrapper_2_t2005 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54485(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2005 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54485_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54486_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54486(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54486_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7075  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54487_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7055  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54487(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7075  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54487_gshared)(__this /* static, unused */, ___pair, method)
