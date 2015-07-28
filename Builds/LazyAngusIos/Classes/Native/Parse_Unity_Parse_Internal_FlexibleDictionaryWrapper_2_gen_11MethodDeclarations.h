#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>
struct FlexibleDictionaryWrapper_2_t1803;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6918;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1353;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1340;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46104_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46104(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46104_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46105_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46105(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46105_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46106_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46106(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46106_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46107_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46107(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46107_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46108_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46108(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46108_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46109_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46109(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46109_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46110_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46110(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46110_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46111_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46111(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46111_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46112_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46112(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46112_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46113_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46113(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46113_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46114_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46114(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46114_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46115_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46115(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46115_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46116_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, KeyValuePair_2U5BU5D_t1353* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46116(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, KeyValuePair_2U5BU5D_t1353*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46116_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46117_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46117(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46117_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46118_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46118(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46118_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46119_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46119(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46119_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46120_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46120(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46120_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46121_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46121(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46121_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46122_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46122(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46122_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t720  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46123_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6974  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46123(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t720  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46123_gshared)(__this /* static, unused */, ___pair, method)
