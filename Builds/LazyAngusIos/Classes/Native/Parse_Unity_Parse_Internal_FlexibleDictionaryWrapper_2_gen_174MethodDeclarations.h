#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>
struct FlexibleDictionaryWrapper_2_t2043;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1241;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>
struct IDictionary_2_t7597;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1430;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1417;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_61.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m60454_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m60454(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m60454_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60455_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60455(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60455_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m60456_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m60456(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m60456_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60457_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m60457(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m60457_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60458_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60458(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60458_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m60459_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m60459(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m60459_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m60460_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m60460(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m60460_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m60461_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m60461(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m60461_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m60462_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m60462(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m60462_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60463_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60463(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60463_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m60464_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m60464(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m60464_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m60465_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m60465(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m60465_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m60466_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2U5BU5D_t1430* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m60466(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, KeyValuePair_2U5BU5D_t1430*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m60466_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m60467_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m60467(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m60467_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60468_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m60468(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m60468_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60469_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60469(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60469_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60470_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m60470(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m60470_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60471_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60471(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60471_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60472_gshared (Object_t * __this /* static, unused */, ParseGeoPoint_t1265  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60472(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, ParseGeoPoint_t1265 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60472_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t792  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60473_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7700  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60473(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t792  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7700 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60473_gshared)(__this /* static, unused */, ___pair, method)
