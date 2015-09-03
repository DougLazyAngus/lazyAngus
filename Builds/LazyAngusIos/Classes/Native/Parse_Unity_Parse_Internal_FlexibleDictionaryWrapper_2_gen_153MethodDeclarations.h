#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>
struct FlexibleDictionaryWrapper_2_t2021;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9840;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7842;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59140_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59140(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59140_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59141_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59141(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59141_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59142_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59142(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59142_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59143_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59143(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59143_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59144_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59144(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59144_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59145_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59145(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59145_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59146_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59146(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59146_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m59147_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59147(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59147_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59148_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59148(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59148_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59149_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59149(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59149_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59150_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59150(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59150_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59151_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59151(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59151_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59152_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2U5BU5D_t8412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59152(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2U5BU5D_t8412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59152_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59153_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59153(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59153_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59154_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59154(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59154_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59155_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59155(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59155_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59156_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59156(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59156_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59157_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59157(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59157_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59158_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59158(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59158_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7646  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59159_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7646  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59159(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7646  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59159_gshared)(__this /* static, unused */, ___pair, method)
