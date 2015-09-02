#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>
struct FlexibleDictionaryWrapper_2_t2022;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9253;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7035;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7877;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7307;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54921_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54921(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54921_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54922_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54922(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54922_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54923_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54923(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54923_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54924_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54924(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54924_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54925_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54925(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54925_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54926_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54926(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54926_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54927_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54927(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54927_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54928_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54928(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54928_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54929_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54929(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54929_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54930_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54930(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54930_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54931_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54931(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54931_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54932_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54932(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54932_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54933_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2U5BU5D_t7877* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54933(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2U5BU5D_t7877*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54933_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54934_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54934(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54934_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54935_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54935(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54935_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54936_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54936(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2022 *, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54936_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54937_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54937(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54937_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54938_gshared (FlexibleDictionaryWrapper_2_t2022 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54938(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2022 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54938_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54939_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54939(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54939_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7111  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54940_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7091  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54940(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7111  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54940_gshared)(__this /* static, unused */, ___pair, method)
