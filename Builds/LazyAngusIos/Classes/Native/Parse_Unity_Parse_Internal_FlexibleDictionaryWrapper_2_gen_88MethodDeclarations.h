#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>
struct FlexibleDictionaryWrapper_2_t1956;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8139;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7799;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55720_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55720(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55720_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55721_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55721(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55721_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55722_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55722(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55722_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55723_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55723(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55723_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55724_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55724(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55724_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55725_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55725(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55725_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55726_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55726(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55726_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55727_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55727(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55727_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55728_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55728(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55728_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55729_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55729(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55729_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55730_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55730(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55730_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55731_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55731(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55731_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55732_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2U5BU5D_t8139* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55732(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2U5BU5D_t8139*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55732_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55733_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55733(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55733_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55734_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55734(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55734_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55735_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55735(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1956 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55735_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55736_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55736(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55736_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55737_gshared (FlexibleDictionaryWrapper_2_t1956 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55737(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1956 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55737_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55738_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55738(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55738_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6093  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55739_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7646  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55739(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6093  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55739_gshared)(__this /* static, unused */, ___pair, method)
