#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>
struct FlexibleDictionaryWrapper_2_t1833;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9041;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6925;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7226;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7118;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46841_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46841(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1833 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46841_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46843_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46843(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1833 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46843_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46845_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46845(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1833 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46845_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46847_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46847(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1833 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46847_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46849_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46849(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1833 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46849_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46851_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46851(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1833 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46851_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46853_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46853(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1833 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46853_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46855_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46855(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1833 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46855_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46857_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46857(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1833 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46857_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46859_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46859(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1833 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46859_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46861_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46861(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1833 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46861_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46863_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46863(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1833 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46863_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46865_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, KeyValuePair_2U5BU5D_t7226* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46865(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1833 *, KeyValuePair_2U5BU5D_t7226*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46865_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46867_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46867(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1833 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46867_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46869_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46869(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1833 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46869_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46871_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46871(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1833 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46871_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46873_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46873(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1833 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46873_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46875_gshared (FlexibleDictionaryWrapper_2_t1833 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46875(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1833 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46875_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46877_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46877(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46877_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7113  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46879_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5499  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46879(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7113  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46879_gshared)(__this /* static, unused */, ___pair, method)
