#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>
struct FlexibleDictionaryWrapper_2_t2017;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9253;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7266;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7877;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7307;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54725_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54725(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54725_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54726_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54726(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54726_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54727_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54727(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54727_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54728_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54728(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54728_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54729_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54729(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54729_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54730_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54730(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54730_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54731_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54731(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54731_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54732_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54732(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54732_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54733_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54733(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54733_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54734_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54734(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54734_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54735_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54735(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54735_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54736_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54736(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54736_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54737_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, KeyValuePair_2U5BU5D_t7877* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54737(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2017 *, KeyValuePair_2U5BU5D_t7877*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54737_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54738_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54738(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54738_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54739_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54739(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54739_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54740_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54740(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2017 *, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54740_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54741_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54741(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54741_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54742_gshared (FlexibleDictionaryWrapper_2_t2017 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54742(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2017 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54742_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54743_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54743(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54743_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7111  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54744_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7270  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54744(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7111  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7270 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54744_gshared)(__this /* static, unused */, ___pair, method)
