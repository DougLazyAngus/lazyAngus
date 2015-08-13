#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>
struct FlexibleDictionaryWrapper_2_t1997;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7201;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7841;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7271;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54143_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54143(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1997 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54143_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54144_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54144(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1997 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54144_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54145_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54145(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1997 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54145_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54146_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54146(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54146_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54147_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54147(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1997 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54147_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54148_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54148(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1997 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54148_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54149_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54149(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54149_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54150_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54150(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1997 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54150_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54151_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54151(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1997 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54151_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54152_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54152(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1997 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54152_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54153_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54153(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54153_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54154_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54154(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1997 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54154_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54155_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, KeyValuePair_2U5BU5D_t7841* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54155(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1997 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54155_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54156_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54156(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54156_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54157_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54157(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54157_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54158_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54158(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1997 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54158_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54159_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54159(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54159_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54160_gshared (FlexibleDictionaryWrapper_2_t1997 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54160(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1997 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54160_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54161_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54161(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54161_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7075  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54162_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7205  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54162(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7075  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54162_gshared)(__this /* static, unused */, ___pair, method)
