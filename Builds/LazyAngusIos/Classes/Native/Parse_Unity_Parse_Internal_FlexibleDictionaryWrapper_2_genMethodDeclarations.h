#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
struct FlexibleDictionaryWrapper_2_t1871;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1433;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1420;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m36106_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m36106(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m36106_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m36107_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m36107(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m36107_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m36108_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m36108(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m36108_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m36109_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m36109(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m36109_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m36110_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m36110(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m36110_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m36111_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m36111(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m36111_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m36112_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m36112(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m36112_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m36113_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m36113(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m36113_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m36114_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m36114(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m36114_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m36115_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m36115(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m36115_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m36116_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m36116(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m36116_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m36117_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m36117(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m36117_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m36118_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2U5BU5D_t1433* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m36118(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2U5BU5D_t1433*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m36118_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m36119_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m36119(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m36119_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m36120_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m36120(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m36120_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m36121_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m36121(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m36121_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m36122_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m36122(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m36122_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m36123_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m36123(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m36123_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m36124_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m36124(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m36124_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t795  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m36125_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t795  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m36125(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t795  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m36125_gshared)(__this /* static, unused */, ___pair, method)
