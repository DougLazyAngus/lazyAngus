#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>
struct FlexibleDictionaryWrapper_2_t1915;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9102;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7159;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7681;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7179;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52479_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52479(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52479_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52480_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52480(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52480_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52481_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52481(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52481_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52482_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52482(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52482_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52483_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52483(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52483_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52484_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52484(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52484_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52485_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52485(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52485_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52486_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52486(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52486_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52487_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52487(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52487_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52488_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52488(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52488_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52489_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52489(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52489_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52490_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52490(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52490_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52491_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2U5BU5D_t7681* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52491(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2U5BU5D_t7681*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52491_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52492_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52492(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52492_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52493_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52493(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52493_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52494_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52494(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52494_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52495_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52495(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52495_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52496_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52496(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52496_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52497_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52497(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52497_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7174  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52498_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7163  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52498(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7174  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52498_gshared)(__this /* static, unused */, ___pair, method)
