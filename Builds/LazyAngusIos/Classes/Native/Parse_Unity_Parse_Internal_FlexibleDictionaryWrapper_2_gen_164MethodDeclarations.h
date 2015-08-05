#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1966;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8843;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7182;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7836;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7208;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54466_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54466(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54466_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54467_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54467(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54467_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54468_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54468(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54468_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54469_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54469(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54469_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54470_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54470(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54470_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54471_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54471(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54471_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54472_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54472(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54472_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54473_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54473(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54473_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54474_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54474(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54474_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54475_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t6985  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54475(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54475_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54476_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54476(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54476_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54477_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t6985  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54477(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54477_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54478_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2U5BU5D_t7836* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54478(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2U5BU5D_t7836*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54478_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54479_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54479(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54479_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54480_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54480(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54480_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54481_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t6985  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54481(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54481_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54482_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54482(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54482_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54483_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54483(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54483_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54484_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54484(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54484_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6985  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54485_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7186  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54485(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6985  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54485_gshared)(__this /* static, unused */, ___pair, method)
