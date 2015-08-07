#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>
struct FlexibleDictionaryWrapper_2_t1975;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9118;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t7940;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7923;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55085_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55085(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55085_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55086_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, ParseGeoPoint_t1194  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55086(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, ParseGeoPoint_t1194 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55086_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55087_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55087(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55087_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55088_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55088(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55088_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55089_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55089(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55089_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55090_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, ParseGeoPoint_t1194 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55090(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, ParseGeoPoint_t1194 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55090_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55091_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55091(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55091_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Item(System.String)
extern "C" ParseGeoPoint_t1194  FlexibleDictionaryWrapper_2_get_Item_m55092_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55092(__this, ___key, method) (( ParseGeoPoint_t1194  (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55092_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55093_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, String_t* ___key, ParseGeoPoint_t1194  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55093(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, String_t*, ParseGeoPoint_t1194 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55093_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55094_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t7056  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55094(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t7056 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55094_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55095_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55095(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55095_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55096_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t7056  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55096(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t7056 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55096_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55097_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2U5BU5D_t7940* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55097(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2U5BU5D_t7940*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55097_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55098_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55098(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55098_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55099_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55099(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55099_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55100_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, KeyValuePair_2_t7056  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55100(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1975 *, KeyValuePair_2_t7056 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55100_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55101_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55101(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55101_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55102_gshared (FlexibleDictionaryWrapper_2_t1975 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55102(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1975 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55102_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<get_Values>b__0(TIn)
extern "C" ParseGeoPoint_t1194  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55103_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55103(__this /* static, unused */, ___item, method) (( ParseGeoPoint_t1194  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55103_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7056  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55104_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t728  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55104(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7056  (*) (Object_t * /* static, unused */, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55104_gshared)(__this /* static, unused */, ___pair, method)
