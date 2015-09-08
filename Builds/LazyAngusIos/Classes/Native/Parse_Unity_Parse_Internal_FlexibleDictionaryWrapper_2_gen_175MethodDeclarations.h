#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>
struct FlexibleDictionaryWrapper_2_t2047;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9850;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8589;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8572;
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
extern "C" void FlexibleDictionaryWrapper_2__ctor_m60509_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m60509(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m60509_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60510_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, String_t* ___key, ParseGeoPoint_t1268  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60510(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, ParseGeoPoint_t1268 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60510_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m60511_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m60511(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m60511_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60512_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m60512(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m60512_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60513_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60513(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60513_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m60514_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, String_t* ___key, ParseGeoPoint_t1268 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m60514(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, ParseGeoPoint_t1268 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m60514_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m60515_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m60515(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m60515_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Item(System.String)
extern "C" ParseGeoPoint_t1268  FlexibleDictionaryWrapper_2_get_Item_m60516_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m60516(__this, ___key, method) (( ParseGeoPoint_t1268  (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m60516_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m60517_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, String_t* ___key, ParseGeoPoint_t1268  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m60517(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, String_t*, ParseGeoPoint_t1268 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m60517_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60518_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, KeyValuePair_2_t7705  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60518(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, KeyValuePair_2_t7705 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60518_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m60519_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m60519(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m60519_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m60520_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, KeyValuePair_2_t7705  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m60520(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, KeyValuePair_2_t7705 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m60520_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m60521_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, KeyValuePair_2U5BU5D_t8589* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m60521(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2047 *, KeyValuePair_2U5BU5D_t8589*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m60521_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m60522_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m60522(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m60522_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60523_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m60523(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m60523_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60524_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, KeyValuePair_2_t7705  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60524(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2047 *, KeyValuePair_2_t7705 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60524_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60525_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m60525(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m60525_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60526_gshared (FlexibleDictionaryWrapper_2_t2047 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60526(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2047 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60526_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<get_Values>b__0(TIn)
extern "C" ParseGeoPoint_t1268  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60527_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60527(__this /* static, unused */, ___item, method) (( ParseGeoPoint_t1268  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60527_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7705  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60528_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t795  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60528(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7705  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60528_gshared)(__this /* static, unused */, ___pair, method)
