#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>
struct FlexibleDictionaryWrapper_2_t1908;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9198;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6995;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7438;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7210;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49255_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49255(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49255_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49256_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49256(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49256_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49257_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49257(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49257_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49258_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49258(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49258_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49259_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49259(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49259_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49260_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49260(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49260_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49261_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49261(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49261_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49262_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49262(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49262_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49263_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49263(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49263_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49264_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49264(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49264_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49265_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49265(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49265_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49266_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49266(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49266_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49267_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2U5BU5D_t7438* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49267(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2U5BU5D_t7438*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49267_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49268_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49268(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49268_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49269_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49269(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49269_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49270_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49270(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49270_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49271_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49271(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49271_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49272_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49272(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49272_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49273_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49273(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49273_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7205  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49274_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5543  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49274(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7205  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5543 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49274_gshared)(__this /* static, unused */, ___pair, method)
