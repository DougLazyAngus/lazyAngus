#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1875;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9110;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7182;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7433;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7151;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49492_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49492(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49492_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49493_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49493(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49493_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49494_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49494(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49494_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49495_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49495(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49495_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49496_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49496(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49496_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49497_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49497(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49497_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49498_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49498(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49498_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49499_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49499(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49499_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49500_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49500(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49500_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49501_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, KeyValuePair_2_t7146  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49501(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, KeyValuePair_2_t7146 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49501_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49502_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49502(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49502_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49503_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, KeyValuePair_2_t7146  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49503(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, KeyValuePair_2_t7146 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49503_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49504_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, KeyValuePair_2U5BU5D_t7433* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49504(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1875 *, KeyValuePair_2U5BU5D_t7433*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49504_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49505_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49505(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49505_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49506_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49506(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49506_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49507_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, KeyValuePair_2_t7146  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49507(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1875 *, KeyValuePair_2_t7146 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49507_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49508_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49508(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49508_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49509_gshared (FlexibleDictionaryWrapper_2_t1875 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49509(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1875 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49509_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49510_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49510(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49510_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7146  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49511_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7186  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49511(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7146  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49511_gshared)(__this /* static, unused */, ___pair, method)
