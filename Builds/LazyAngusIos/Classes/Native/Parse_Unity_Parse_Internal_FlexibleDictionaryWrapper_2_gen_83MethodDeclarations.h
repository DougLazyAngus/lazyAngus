#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>
struct FlexibleDictionaryWrapper_2_t1881;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8632;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6921;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7494;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7154;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50109_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50109(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50109_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50110_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50110(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50110_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50111_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50111(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50111_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50112_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50112(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50112_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50113_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50113(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50113_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50114_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50114(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50114_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50115_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50115(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50115_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50116_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50116(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50116_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50117_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50117(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50117_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50118_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50118(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50118_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50119_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50119(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50119_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50120_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50120(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50120_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50121_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2U5BU5D_t7494* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50121(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2U5BU5D_t7494*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50121_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50122_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50122(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50122_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50123_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50123(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50123_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50124_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50124(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1881 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50124_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50125_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50125(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50125_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50126_gshared (FlexibleDictionaryWrapper_2_t1881 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50126(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1881 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50126_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50127_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50127(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50127_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5495  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50128_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5495  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50128(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5495  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50128_gshared)(__this /* static, unused */, ___pair, method)
