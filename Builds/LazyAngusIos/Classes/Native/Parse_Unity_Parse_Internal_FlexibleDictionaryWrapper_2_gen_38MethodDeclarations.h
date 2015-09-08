#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>
struct FlexibleDictionaryWrapper_2_t1910;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7950;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7776;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52723_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52723(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52723_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52724_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52724(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52724_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52725_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52725(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52725_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52726_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52726(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52726_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52727_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52727(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52727_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52728_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52728(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52728_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52729_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52729(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52729_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m52730_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52730(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52730_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52731_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52731(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52731_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52732_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52732(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52732_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52733_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52733(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52733_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52734_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52734(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52734_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52735_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2U5BU5D_t7950* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52735(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2U5BU5D_t7950*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52735_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52736_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52736(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52736_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52737_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52737(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52737_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52738_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52738(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52738_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52739_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52739(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52739_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52740_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52740(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52740_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52741_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52741(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52741_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7771  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52742_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t795  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52742(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7771  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52742_gshared)(__this /* static, unused */, ___pair, method)
