#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>
struct FlexibleDictionaryWrapper_2_t1887;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8636;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7498;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7158;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50223_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50223(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50223_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50224_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50224(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50224_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50225_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50225(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50225_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50226_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50226(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50226_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50227_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50227(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50227_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50228_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50228(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50228_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50229_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50229(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50229_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50230_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50230(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50230_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50231_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50231(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50231_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50232_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50232(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50232_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50233_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50233(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50233_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50234_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50234(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50234_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50235_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2U5BU5D_t7498* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50235(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2U5BU5D_t7498*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50235_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50236_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50236(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50236_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50237_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50237(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50237_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50238_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50238(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50238_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50239_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50239(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50239_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50240_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50240(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50240_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50241_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50241(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50241_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5499  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50242_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7175  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50242(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5499  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50242_gshared)(__this /* static, unused */, ___pair, method)
