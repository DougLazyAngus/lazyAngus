#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>
struct FlexibleDictionaryWrapper_2_t2004;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7005;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7841;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7271;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54422_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54422(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54422_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54423_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54423(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54423_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54424_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54424(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54424_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54425_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54425(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54425_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54426_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54426(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54426_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54427_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54427(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54427_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54428_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54428(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54428_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54429_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54429(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54429_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54430_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54430(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54430_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54431_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54431(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54431_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54432_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54432(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54432_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54433_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54433(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54433_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54434_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, KeyValuePair_2U5BU5D_t7841* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54434(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2004 *, KeyValuePair_2U5BU5D_t7841*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54434_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54435_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54435(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54435_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54436_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54436(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54436_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54437_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, KeyValuePair_2_t7075  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54437(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2004 *, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54437_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54438_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54438(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54438_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54439_gshared (FlexibleDictionaryWrapper_2_t2004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54439(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54439_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54440_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54440(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54440_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7075  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54441_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7075  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54441(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7075  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54441_gshared)(__this /* static, unused */, ___pair, method)
