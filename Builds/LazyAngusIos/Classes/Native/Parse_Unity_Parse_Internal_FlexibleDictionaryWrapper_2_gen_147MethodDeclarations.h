#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>
struct FlexibleDictionaryWrapper_2_t2015;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9840;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7783;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7842;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m58901_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m58901(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m58901_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58902_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58902(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58902_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m58903_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m58903(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m58903_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58904_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58904(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58904_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58905_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58905(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58905_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58906_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58906(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58906_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58907_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58907(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58907_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m58908_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58908(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58908_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58909_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58909(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58909_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58910_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58910(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58910_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58911_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58911(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58911_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58912_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58912(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58912_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58913_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2U5BU5D_t8412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58913(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2U5BU5D_t8412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58913_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58914_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58914(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58914_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58915_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58915(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58915_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58916_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7646  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58916(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58916_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58917_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58917(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58917_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58918_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58918(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58918_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58919_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58919(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58919_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7646  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58920_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7787  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58920(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7646  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58920_gshared)(__this /* static, unused */, ___pair, method)
