#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>
struct FlexibleDictionaryWrapper_2_t1950;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9116;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6925;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7771;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7201;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53560_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53560(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53560_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53561_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53561(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53561_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53562_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53562(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53562_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53563_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53563(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53563_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53564_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53564(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53564_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53565_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53565(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53565_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53566_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53566(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53566_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53567_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53567(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53567_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53568_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53568(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53568_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53569_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53569(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53569_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53570_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53570(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53570_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53571_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53571(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53571_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53572_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2U5BU5D_t7771* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53572(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53572_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53573_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53573(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53573_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53574_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53574(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53574_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53575_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53575(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53575_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53576_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53576(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53576_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53577_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53577(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53577_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53578_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53578(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53578_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7005  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53579_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5499  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53579(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7005  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53579_gshared)(__this /* static, unused */, ___pair, method)
