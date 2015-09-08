#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>
struct FlexibleDictionaryWrapper_2_t2034;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9561;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7807;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8483;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59789_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59789(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59789_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59790_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59790(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59790_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59791_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59791(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59791_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59792_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59792(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59792_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59793_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59793(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59793_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59794_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59794(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59794_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59795_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59795(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59795_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59796_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59796(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59796_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59797_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59797(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59797_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59798_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59798(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59798_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59799_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59799(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59799_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59800_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59800(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59800_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59801_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2U5BU5D_t8483* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59801(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2U5BU5D_t8483*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59801_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59802_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59802(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59802_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59803_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59803(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59803_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59804_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59804(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59804_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59805_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59805(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59805_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59806_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59806(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59806_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59807_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59807(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59807_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7632  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59808_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7811  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59808(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7632  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59808_gshared)(__this /* static, unused */, ___pair, method)
