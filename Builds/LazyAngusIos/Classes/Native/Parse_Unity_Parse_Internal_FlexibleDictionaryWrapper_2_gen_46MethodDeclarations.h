#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>
struct FlexibleDictionaryWrapper_2_t1848;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7129;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47895_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47895(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47895_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47896_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47896(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47896_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47897_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47897(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47897_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47898_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47898(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47898_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47899_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47899(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47899_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47900_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47900(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47900_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47901_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47901(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47901_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47902_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47902(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47902_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47903_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47903(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47903_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47904_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47904(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47904_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47905_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47905(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47905_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47906_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47906(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47906_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47907_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2U5BU5D_t7303* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47907(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47907_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47908_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47908(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47908_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47909_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47909(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47909_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47910_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47910(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47910_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47911_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47911(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47911_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47912_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47912(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47912_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47913_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47913(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47913_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7124  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47914_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7175  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47914(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7124  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47914_gshared)(__this /* static, unused */, ___pair, method)
