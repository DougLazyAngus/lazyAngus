#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>
struct FlexibleDictionaryWrapper_2_t2027;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9220;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8019;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8002;
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
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55890_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55890(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55890_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55891_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55891(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, ParseGeoPoint_t1248 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55891_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55892_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55892(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55892_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55893_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55893(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55893_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55894_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55894(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55894_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55895_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, ParseGeoPoint_t1248 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55895(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, ParseGeoPoint_t1248 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55895_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55896_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55896(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55896_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Item(System.String)
extern "C" ParseGeoPoint_t1248  FlexibleDictionaryWrapper_2_get_Item_m55897_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55897(__this, ___key, method) (( ParseGeoPoint_t1248  (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55897_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55898_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, ParseGeoPoint_t1248  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55898(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, ParseGeoPoint_t1248 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55898_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55899_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55899(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55899_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55900_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55900(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55900_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55901_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55901(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55901_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55902_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2U5BU5D_t8019* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55902(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2U5BU5D_t8019*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55902_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55903_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55903(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55903_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55904_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55904(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55904_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55905_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55905(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55905_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55906_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55906(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55906_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55907_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55907(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55907_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<get_Values>b__0(TIn)
extern "C" ParseGeoPoint_t1248  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55908_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55908(__this /* static, unused */, ___item, method) (( ParseGeoPoint_t1248  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55908_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55909_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55909(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55909_gshared)(__this /* static, unused */, ___pair, method)
