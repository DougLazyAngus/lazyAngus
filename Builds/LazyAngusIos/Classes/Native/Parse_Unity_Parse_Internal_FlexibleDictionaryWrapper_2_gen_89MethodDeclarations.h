#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>
struct FlexibleDictionaryWrapper_2_t1887;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8632;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6925;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7494;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7154;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50348_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50348(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50348_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50349_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50349(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50349_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50350_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50350(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50350_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50351_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50351(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50351_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50352_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50352(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50352_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50353_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50353(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50353_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50354_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50354(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50354_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50355_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50355(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50355_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50356_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50356(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50356_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50357_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50357(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50357_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50358_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50358(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50358_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50359_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50359(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50359_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50360_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2U5BU5D_t7494* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50360(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2U5BU5D_t7494*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50360_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50361_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50361(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50361_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50362_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50362(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50362_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50363_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50363(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50363_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50364_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50364(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50364_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50365_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50365(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50365_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50366_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50366(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50366_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5495  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50367_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6981  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50367(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5495  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50367_gshared)(__this /* static, unused */, ___pair, method)
