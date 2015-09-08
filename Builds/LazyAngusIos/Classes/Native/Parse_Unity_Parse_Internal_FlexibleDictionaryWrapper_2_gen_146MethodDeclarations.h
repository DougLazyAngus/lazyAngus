#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>
struct FlexibleDictionaryWrapper_2_t2015;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9841;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7773;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7843;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58871_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58871(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58871_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58872_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58872(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58872_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58873_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58873(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58873_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58874_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58874(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58874_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58875_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58875(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58875_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58876_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58876(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58876_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58877_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58877(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58877_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58878_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58878(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58878_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58879_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58879(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58879_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58880_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58880(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58880_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58881_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58881(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58881_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58882_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58882(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58882_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58883_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2U5BU5D_t8413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58883(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2U5BU5D_t8413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58883_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58884_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58884(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58884_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58885_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58885(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58885_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58886_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7647  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58886(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7647 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58886_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58887_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58887(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58887_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58888_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58888(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58888_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58889_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58889(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58889_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7647  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58890_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7777  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58890(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7647  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7777 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58890_gshared)(__this /* static, unused */, ___pair, method)
