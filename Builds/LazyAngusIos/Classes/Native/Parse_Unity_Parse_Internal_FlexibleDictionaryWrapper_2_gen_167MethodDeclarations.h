#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>
struct FlexibleDictionaryWrapper_2_t1959;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8832;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6918;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7825;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7197;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54498_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54498(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54498_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54499_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54499(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54499_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54500_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54500(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54500_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54501_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54501(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54501_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54502_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54502(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54502_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54503_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54503(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54503_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54504_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54504(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54504_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54505_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54505(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54505_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54506_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54506(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54506_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54507_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54507(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54507_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54508_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54508(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54508_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54509_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54509(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54509_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54510_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2U5BU5D_t7825* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54510(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2U5BU5D_t7825*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54510_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54511_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54511(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54511_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54512_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54512(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54512_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54513_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54513(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54513_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54514_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54514(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54514_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54515_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54515(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54515_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54516_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54516(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54516_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6974  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54517_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6974  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54517(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6974  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54517_gshared)(__this /* static, unused */, ___pair, method)
