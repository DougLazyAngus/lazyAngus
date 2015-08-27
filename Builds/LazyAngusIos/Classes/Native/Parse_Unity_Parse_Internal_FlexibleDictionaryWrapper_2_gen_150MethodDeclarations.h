#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>
struct FlexibleDictionaryWrapper_2_t2002;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9216;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7248;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7848;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54436_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54436(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2002 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54436_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54437_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54437(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2002 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54437_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54438_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54438(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2002 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54438_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54439_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54439(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2002 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54439_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54440_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54440(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2002 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54440_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54441_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54441(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2002 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54441_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54442_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54442(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2002 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54442_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54443_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54443(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2002 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54443_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54444_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54444(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2002 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54444_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54445_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54445(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2002 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54445_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54446_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54446(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2002 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54446_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54447_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54447(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2002 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54447_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54448_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, KeyValuePair_2U5BU5D_t7848* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54448(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2002 *, KeyValuePair_2U5BU5D_t7848*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54448_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54449_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54449(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2002 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54449_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54450_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54450(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2002 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54450_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54451_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54451(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2002 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54451_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54452_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54452(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2002 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54452_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54453_gshared (FlexibleDictionaryWrapper_2_t2002 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54453(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2002 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54453_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54454_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54454(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54454_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7082  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54455_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7252  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54455(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7082  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54455_gshared)(__this /* static, unused */, ___pair, method)
