#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>
struct FlexibleDictionaryWrapper_2_t1977;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9120;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t768;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t7942;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7925;
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
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55100_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55100(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55100_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55101_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, ParseGeoPoint_t1196  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55101(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, ParseGeoPoint_t1196 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55101_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55102_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55102(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55102_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55103_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55103(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55103_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55104_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55104(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55104_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55105_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, ParseGeoPoint_t1196 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55105(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, ParseGeoPoint_t1196 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55105_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55106_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55106(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55106_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Item(System.String)
extern "C" ParseGeoPoint_t1196  FlexibleDictionaryWrapper_2_get_Item_m55107_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55107(__this, ___key, method) (( ParseGeoPoint_t1196  (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55107_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55108_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, ParseGeoPoint_t1196  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55108(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, ParseGeoPoint_t1196 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55108_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55109_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2_t7058  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55109(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2_t7058 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55109_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55110_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55110(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55110_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55111_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2_t7058  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55111(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2_t7058 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55111_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55112_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2U5BU5D_t7942* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55112(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2U5BU5D_t7942*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55112_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55113_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55113(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55113_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55114_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55114(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55114_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55115_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2_t7058  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55115(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2_t7058 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55115_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55116_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55116(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55116_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55117_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55117(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55117_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<get_Values>b__0(TIn)
extern "C" ParseGeoPoint_t1196  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55118_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55118(__this /* static, unused */, ___item, method) (( ParseGeoPoint_t1196  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55118_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7058  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55119_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t730  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55119(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7058  (*) (Object_t * /* static, unused */, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55119_gshared)(__this /* static, unused */, ___pair, method)
