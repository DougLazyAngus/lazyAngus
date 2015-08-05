#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>
struct FlexibleDictionaryWrapper_2_t1890;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8636;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6935;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7498;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7158;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50336_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50336(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50336_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50337_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50337(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50337_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50338_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50338(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50338_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50339_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50339(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50339_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50340_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50340(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50340_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50341_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50341(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50341_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50342_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50342(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50342_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50343_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50343(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50343_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50344_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50344(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50344_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50345_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50345(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50345_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50346_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50346(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50346_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50347_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50347(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50347_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50348_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, KeyValuePair_2U5BU5D_t7498* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50348(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, KeyValuePair_2U5BU5D_t7498*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50348_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50349_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50349(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50349_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50350_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50350(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50350_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50351_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, KeyValuePair_2_t5499  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50351(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50351_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50352_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50352(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50352_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50353_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50353(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50353_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50354_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50354(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50354_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5499  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50355_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7005  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50355(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5499  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50355_gshared)(__this /* static, unused */, ___pair, method)
