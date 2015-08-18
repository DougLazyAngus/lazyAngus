#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>
struct FlexibleDictionaryWrapper_2_t1996;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7190;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7841;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7271;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54097_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54097(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54097_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54098_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54098(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54098_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54099_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54099(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54099_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54100_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54100(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54100_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54101_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54101(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54101_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54102_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54102(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54102_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54103_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54103(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54103_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54104_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54104(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54104_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54105_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54105(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54105_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54106_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54106(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54106_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54107_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54107(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54107_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54108_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54108(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54108_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54109_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2U5BU5D_t7841* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54109(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54109_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54110_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54110(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54110_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54111_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54111(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54111_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54112_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54112(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1996 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54112_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54113_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54113(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54113_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54114_gshared (FlexibleDictionaryWrapper_2_t1996 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54114(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1996 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54114_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54115_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54115(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54115_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7075  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54116_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7194  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54116(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7075  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54116_gshared)(__this /* static, unused */, ___pair, method)
