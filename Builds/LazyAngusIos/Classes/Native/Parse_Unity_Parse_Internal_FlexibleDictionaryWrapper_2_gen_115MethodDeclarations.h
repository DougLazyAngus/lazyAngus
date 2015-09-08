#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>
struct FlexibleDictionaryWrapper_2_t1987;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9713;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8275;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7827;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57342_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57342(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1987 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57342_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57343_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57343(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1987 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57343_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57344_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57344(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1987 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57344_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57345_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57345(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1987 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57345_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57346_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57346(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1987 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57346_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57347_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57347(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1987 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57347_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57348_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57348(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1987 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57348_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m57349_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57349(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1987 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57349_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57350_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57350(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1987 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57350_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57351_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57351(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1987 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57351_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57352_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57352(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1987 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57352_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57353_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57353(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1987 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57353_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57354_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, KeyValuePair_2U5BU5D_t8275* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57354(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1987 *, KeyValuePair_2U5BU5D_t8275*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57354_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57355_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57355(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1987 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57355_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57356_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57356(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1987 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57356_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57357_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57357(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1987 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57357_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57358_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57358(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1987 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57358_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57359_gshared (FlexibleDictionaryWrapper_2_t1987 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57359(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1987 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57359_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57360_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57360(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57360_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7822  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57361_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7632  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57361(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7822  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57361_gshared)(__this /* static, unused */, ___pair, method)
