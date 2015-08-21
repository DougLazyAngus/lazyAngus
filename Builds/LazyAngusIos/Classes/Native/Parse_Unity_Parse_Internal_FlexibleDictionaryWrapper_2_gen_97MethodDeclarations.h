#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1946;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9209;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7234;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7637;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7243;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51717_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51717(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51717_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51718_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51718(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51718_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51719_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51719(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51719_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51720_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51720(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51720_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51721_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51721(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51721_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51722_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51722(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51722_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51723_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51723(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51723_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51724_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51724(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51724_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51725_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51725(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51725_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51726_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51726(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51726_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51727_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51727(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51727_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51728_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51728(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51728_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51729_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2U5BU5D_t7637* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51729(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2U5BU5D_t7637*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51729_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51730_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51730(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51730_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51731_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51731(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51731_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51732_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7238  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51732(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51732_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51733_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51733(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51733_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51734_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51734(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51734_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51735_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51735(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51735_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7238  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51736_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7238  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51736(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7238  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7238 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51736_gshared)(__this /* static, unused */, ___pair, method)
