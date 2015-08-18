#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>
struct FlexibleDictionaryWrapper_2_t2026;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9209;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8012;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7995;
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
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55766_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55766(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55766_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55767_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55767(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, ParseGeoPoint_t1247 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55767_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55768_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55768(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55768_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55769_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55769(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55769_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55770_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55770(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55770_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55771_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, ParseGeoPoint_t1247 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55771(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, ParseGeoPoint_t1247 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55771_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55772_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55772(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55772_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Item(System.String)
extern "C" ParseGeoPoint_t1247  FlexibleDictionaryWrapper_2_get_Item_m55773_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55773(__this, ___key, method) (( ParseGeoPoint_t1247  (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55773_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55774_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, ParseGeoPoint_t1247  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55774(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, ParseGeoPoint_t1247 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55774_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55775_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2_t7128  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55775(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2_t7128 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55775_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55776_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55776(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55776_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55777_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2_t7128  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55777(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2_t7128 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55777_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55778_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2U5BU5D_t8012* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55778(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2U5BU5D_t8012*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55778_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55779_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55779(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55779_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55780_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55780(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55780_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55781_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2_t7128  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55781(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2_t7128 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55781_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55782_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55782(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55782_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55783_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55783(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55783_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<get_Values>b__0(TIn)
extern "C" ParseGeoPoint_t1247  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55784_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55784(__this /* static, unused */, ___item, method) (( ParseGeoPoint_t1247  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55784_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7128  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55785_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t777  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55785(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7128  (*) (Object_t * /* static, unused */, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55785_gshared)(__this /* static, unused */, ___pair, method)
