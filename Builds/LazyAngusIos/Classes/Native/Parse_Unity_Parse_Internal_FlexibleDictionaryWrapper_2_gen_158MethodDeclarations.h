#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>
struct FlexibleDictionaryWrapper_2_t1950;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8832;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7109;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7825;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7197;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54130_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54130(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54130_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54131_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54131(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54131_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54132_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54132(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54132_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54133_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54133(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54133_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54134_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54134(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54134_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54135_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54135(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54135_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54136_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54136(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54136_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54137_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54137(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54137_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54138_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54138(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54138_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54139_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54139(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54139_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54140_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54140(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54140_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54141_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54141(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54141_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54142_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2U5BU5D_t7825* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54142(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2U5BU5D_t7825*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54142_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54143_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54143(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54143_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54144_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54144(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54144_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54145_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54145(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54145_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54146_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54146(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54146_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54147_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54147(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54147_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54148_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54148(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54148_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6974  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54149_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7113  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54149(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6974  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54149_gshared)(__this /* static, unused */, ___pair, method)
