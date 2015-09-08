#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>
struct FlexibleDictionaryWrapper_2_t1909;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9771;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7873;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7765;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52609_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52609(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52609_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52611_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52611(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52611_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52613_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52613(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52613_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52615_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52615(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52615_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52617_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52617(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52617_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52619_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52619(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52619_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52621_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52621(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52621_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52623_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52623(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52623_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52625_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52625(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52625_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52627_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52627(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52627_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52629_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52629(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52629_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52631_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52631(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52631_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52633_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2U5BU5D_t7873* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52633(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2U5BU5D_t7873*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52633_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52635_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52635(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52635_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52637_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52637(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52637_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52639_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52639(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52639_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52641_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52641(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52641_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52643_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52643(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52643_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52645_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52645(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52645_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7760  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52647_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7632  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52647(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7760  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52647_gshared)(__this /* static, unused */, ___pair, method)
