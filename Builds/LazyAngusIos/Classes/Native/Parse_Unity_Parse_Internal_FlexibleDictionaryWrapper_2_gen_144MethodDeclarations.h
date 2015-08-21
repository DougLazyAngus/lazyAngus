#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>
struct FlexibleDictionaryWrapper_2_t1993;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9213;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7185;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7845;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7275;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54122_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54122(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54122_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54124_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54124(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54124_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54126_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54126(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54126_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54128_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54128(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54128_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54130_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54130(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54130_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54132_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54132(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54132_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54134_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54134(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54134_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54136_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54136(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54136_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54138_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54138(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54138_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54140_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, KeyValuePair_2_t7079  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54140(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54140_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54142_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54142(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54142_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54144_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, KeyValuePair_2_t7079  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54144(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54144_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54146_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, KeyValuePair_2U5BU5D_t7845* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54146(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, KeyValuePair_2U5BU5D_t7845*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54146_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54148_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54148(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54148_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54150_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54150(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54150_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54152_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, KeyValuePair_2_t7079  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54152(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54152_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54154_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54154(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54154_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54156_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54156(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54156_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54158_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54158(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54158_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7079  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54160_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7187  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54160(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7079  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7187 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54160_gshared)(__this /* static, unused */, ___pair, method)
