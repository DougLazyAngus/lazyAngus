#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>
struct FlexibleDictionaryWrapper_2_t1807;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6925;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1363;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1350;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45883_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45883(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45883_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45884_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45884(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45884_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45885_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45885(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45885_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45886_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45886(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45886_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45887_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45887(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45887_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45888_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45888(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45888_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45889_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45889(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45889_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45890_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45890(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45890_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45891_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45891(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45891_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45892_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45892(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45892_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45893_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45893(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45893_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45894_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45894(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45894_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45895_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, KeyValuePair_2U5BU5D_t1363* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45895(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1807 *, KeyValuePair_2U5BU5D_t1363*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45895_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45896_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45896(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45896_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45897_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45897(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45897_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45898_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45898(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1807 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45898_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45899_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45899(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45899_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45900_gshared (FlexibleDictionaryWrapper_2_t1807 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45900(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1807 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45900_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45901_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45901(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45901_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t730  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45902_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5499  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45902(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t730  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45902_gshared)(__this /* static, unused */, ___pair, method)
