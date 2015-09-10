#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>
struct FlexibleDictionaryWrapper_2_t1929;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9845;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7583;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7957;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7783;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53514_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53514(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53514_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53515_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53515(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53515_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53516_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53516(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53516_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53517_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53517(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53517_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53518_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53518(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53518_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53519_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53519(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53519_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53520_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53520(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53520_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53521_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53521(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53521_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53522_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53522(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53522_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53523_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53523(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53523_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53524_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53524(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53524_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53525_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53525(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53525_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53526_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2U5BU5D_t7957* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53526(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2U5BU5D_t7957*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53526_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53527_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53527(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53527_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53528_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53528(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53528_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53529_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53529(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53529_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53530_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53530(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53530_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53531_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53531(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53531_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53532_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53532(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53532_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7778  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53533_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7639  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53533(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7778  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53533_gshared)(__this /* static, unused */, ___pair, method)
