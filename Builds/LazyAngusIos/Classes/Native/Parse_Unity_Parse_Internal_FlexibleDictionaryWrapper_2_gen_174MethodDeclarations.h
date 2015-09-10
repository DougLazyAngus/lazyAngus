#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>
struct FlexibleDictionaryWrapper_2_t2053;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>
struct IDictionary_2_t7609;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1440;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1427;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_61.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m60523_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m60523(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2053 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m60523_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60524_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60524(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2053 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60524_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m60525_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m60525(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2053 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m60525_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60526_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m60526(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2053 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m60526_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60527_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60527(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2053 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60527_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m60528_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m60528(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2053 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m60528_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m60529_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m60529(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2053 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m60529_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m60530_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m60530(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2053 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m60530_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m60531_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m60531(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2053 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m60531_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60532_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, KeyValuePair_2_t802  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60532(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2053 *, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60532_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m60533_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m60533(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2053 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m60533_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m60534_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, KeyValuePair_2_t802  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m60534(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2053 *, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m60534_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m60535_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, KeyValuePair_2U5BU5D_t1440* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m60535(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2053 *, KeyValuePair_2U5BU5D_t1440*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m60535_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m60536_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m60536(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2053 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m60536_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60537_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m60537(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2053 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m60537_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60538_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, KeyValuePair_2_t802  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60538(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2053 *, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60538_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60539_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m60539(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2053 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m60539_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60540_gshared (FlexibleDictionaryWrapper_2_t2053 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60540(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2053 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60540_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60541_gshared (Object_t * __this /* static, unused */, ParseGeoPoint_t1275  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60541(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, ParseGeoPoint_t1275 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60541_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t802  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60542_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7712  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60542(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t802  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7712 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60542_gshared)(__this /* static, unused */, ___pair, method)
