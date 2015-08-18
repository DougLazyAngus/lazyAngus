#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>
struct FlexibleDictionaryWrapper_2_t1910;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9198;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7241;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7438;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7210;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49338_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49338(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49338_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49339_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49339(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49339_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49340_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49340(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49340_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49341_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49341(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49341_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49342_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49342(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49342_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49343_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49343(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49343_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49344_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49344(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49344_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49345_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49345(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49345_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49346_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49346(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49346_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49347_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49347(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49347_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49348_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49348(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49348_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49349_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49349(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49349_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49350_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2U5BU5D_t7438* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49350(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2U5BU5D_t7438*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49350_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49351_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49351(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49351_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49352_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49352(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49352_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49353_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49353(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49353_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49354_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49354(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49354_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49355_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49355(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49355_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49356_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49356(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49356_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7205  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49357_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7245  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49357(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7205  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49357_gshared)(__this /* static, unused */, ___pair, method)
