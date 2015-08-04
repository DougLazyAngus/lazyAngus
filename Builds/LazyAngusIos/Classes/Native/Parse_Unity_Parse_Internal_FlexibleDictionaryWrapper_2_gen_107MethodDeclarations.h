#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>
struct FlexibleDictionaryWrapper_2_t1907;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8981;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7129;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7626;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7178;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51593_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51593(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51593_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51594_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51594(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51594_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51595_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51595(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51595_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51596_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51596(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51596_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51597_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51597(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51597_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51598_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51598(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51598_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51599_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51599(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51599_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51600_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51600(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51600_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51601_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51601(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51601_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51602_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51602(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51602_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51603_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51603(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51603_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51604_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51604(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51604_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51605_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2U5BU5D_t7626* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51605(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2U5BU5D_t7626*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51605_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51606_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51606(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51606_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51607_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51607(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51607_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51608_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51608(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51608_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51609_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51609(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51609_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51610_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51610(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51610_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51611_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51611(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51611_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7173  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51612_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7133  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51612(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7173  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7133 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51612_gshared)(__this /* static, unused */, ___pair, method)
