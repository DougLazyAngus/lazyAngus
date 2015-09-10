#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>
struct FlexibleDictionaryWrapper_2_t2054;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9857;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t847;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8596;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8579;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_61.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m60566_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m60566(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2054 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m60566_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60567_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, String_t* ___key, ParseGeoPoint_t1275  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60567(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2054 *, String_t*, ParseGeoPoint_t1275 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60567_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m60568_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m60568(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2054 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m60568_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60569_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m60569(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2054 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m60569_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60570_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60570(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2054 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60570_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m60571_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, String_t* ___key, ParseGeoPoint_t1275 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m60571(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2054 *, String_t*, ParseGeoPoint_t1275 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m60571_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m60572_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m60572(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2054 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m60572_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Item(System.String)
extern "C" ParseGeoPoint_t1275  FlexibleDictionaryWrapper_2_get_Item_m60573_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m60573(__this, ___key, method) (( ParseGeoPoint_t1275  (*) (FlexibleDictionaryWrapper_2_t2054 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m60573_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m60574_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, String_t* ___key, ParseGeoPoint_t1275  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m60574(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2054 *, String_t*, ParseGeoPoint_t1275 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m60574_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60575_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, KeyValuePair_2_t7712  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60575(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2054 *, KeyValuePair_2_t7712 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60575_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m60576_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m60576(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2054 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m60576_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m60577_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, KeyValuePair_2_t7712  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m60577(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2054 *, KeyValuePair_2_t7712 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m60577_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m60578_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, KeyValuePair_2U5BU5D_t8596* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m60578(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2054 *, KeyValuePair_2U5BU5D_t8596*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m60578_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m60579_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m60579(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2054 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m60579_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60580_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m60580(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2054 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m60580_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60581_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, KeyValuePair_2_t7712  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60581(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2054 *, KeyValuePair_2_t7712 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60581_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60582_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m60582(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2054 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m60582_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60583_gshared (FlexibleDictionaryWrapper_2_t2054 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60583(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2054 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60583_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<get_Values>b__0(TIn)
extern "C" ParseGeoPoint_t1275  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60584_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60584(__this /* static, unused */, ___item, method) (( ParseGeoPoint_t1275  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60584_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7712  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60585_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t802  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60585(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7712  (*) (Object_t * /* static, unused */, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60585_gshared)(__this /* static, unused */, ___pair, method)
