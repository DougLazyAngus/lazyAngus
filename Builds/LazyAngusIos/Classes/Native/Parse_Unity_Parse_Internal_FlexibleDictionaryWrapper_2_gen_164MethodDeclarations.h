#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1956;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8832;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7825;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7197;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54388_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54388(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54388_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54389_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54389(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54389_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54390_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54390(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54390_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54391_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54391(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54391_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54392_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54392(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54392_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54393_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54393(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54393_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54394_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54394(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54394_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54395_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54395(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54395_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54396_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54396(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54396_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54397_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54397(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54397_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54398_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54398(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54398_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54399_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54399(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54399_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54400_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2U5BU5D_t7825* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54400(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2U5BU5D_t7825*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54400_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54401_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54401(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54401_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54402_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54402(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54402_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54403_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54403(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54403_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54404_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54404(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54404_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54405_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54405(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54405_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54406_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54406(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54406_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6974  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54407_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7175  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54407(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6974  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54407_gshared)(__this /* static, unused */, ___pair, method)
