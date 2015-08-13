#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>
struct FlexibleDictionaryWrapper_2_t2025;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>
struct IDictionary_2_t7025;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1399;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_61.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55726_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55726(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55726_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55727_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55727(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55727_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55728_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55728(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55728_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55729_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55729(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55729_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55730_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55730(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55730_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55731_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55731(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55731_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55732_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55732(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55732_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m55733_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55733(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55733_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55734_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55734(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55734_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55735_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55735(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55735_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55736_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55736(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55736_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55737_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55737(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55737_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55738_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2U5BU5D_t1412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55738(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2U5BU5D_t1412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55738_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55739_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55739(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55739_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55740_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55740(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55740_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55741_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55741(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55741_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55742_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55742(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55742_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55743_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55743(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55743_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55744_gshared (Object_t * __this /* static, unused */, ParseGeoPoint_t1247  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55744(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, ParseGeoPoint_t1247 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55744_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t777  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55745_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7128  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55745(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t777  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7128 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55745_gshared)(__this /* static, unused */, ___pair, method)
