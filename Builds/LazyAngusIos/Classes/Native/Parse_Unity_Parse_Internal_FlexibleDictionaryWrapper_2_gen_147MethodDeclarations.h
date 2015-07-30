#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1945;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7138;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7767;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7197;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53486_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53486(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53486_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53487_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53487(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53487_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53488_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53488(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53488_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53489_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53489(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53489_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53490_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53490(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53490_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53491_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53491(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53491_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53492_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53492(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53492_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53493_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53493(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53493_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53494_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53494(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53494_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53495_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53495(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53495_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53496_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53496(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53496_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53497_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53497(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53497_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53498_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2U5BU5D_t7767* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53498(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2U5BU5D_t7767*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53498_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53499_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53499(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53499_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53500_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53500(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53500_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53501_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, KeyValuePair_2_t7001  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53501(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1945 *, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53501_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53502_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53502(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53502_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53503_gshared (FlexibleDictionaryWrapper_2_t1945 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53503(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1945 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53503_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53504_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53504(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53504_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7001  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53505_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7142  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53505(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7001  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53505_gshared)(__this /* static, unused */, ___pair, method)
