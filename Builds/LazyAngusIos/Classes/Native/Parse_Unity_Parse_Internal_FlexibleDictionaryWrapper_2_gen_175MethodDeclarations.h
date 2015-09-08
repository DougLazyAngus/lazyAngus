#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>
struct FlexibleDictionaryWrapper_2_t2044;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9845;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t837;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8584;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t8567;
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
extern "C" void FlexibleDictionaryWrapper_2__ctor_m60497_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m60497(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2044 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m60497_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60498_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, String_t* ___key, ParseGeoPoint_t1265  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60498(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2044 *, String_t*, ParseGeoPoint_t1265 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60498_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m60499_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m60499(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2044 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m60499_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60500_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m60500(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2044 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m60500_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60501_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60501(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2044 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60501_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m60502_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, String_t* ___key, ParseGeoPoint_t1265 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m60502(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2044 *, String_t*, ParseGeoPoint_t1265 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m60502_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m60503_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m60503(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2044 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m60503_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Item(System.String)
extern "C" ParseGeoPoint_t1265  FlexibleDictionaryWrapper_2_get_Item_m60504_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m60504(__this, ___key, method) (( ParseGeoPoint_t1265  (*) (FlexibleDictionaryWrapper_2_t2044 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m60504_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m60505_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, String_t* ___key, ParseGeoPoint_t1265  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m60505(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2044 *, String_t*, ParseGeoPoint_t1265 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m60505_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60506_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, KeyValuePair_2_t7700  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60506(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2044 *, KeyValuePair_2_t7700 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60506_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m60507_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m60507(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2044 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m60507_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m60508_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, KeyValuePair_2_t7700  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m60508(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2044 *, KeyValuePair_2_t7700 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m60508_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m60509_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, KeyValuePair_2U5BU5D_t8584* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m60509(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2044 *, KeyValuePair_2U5BU5D_t8584*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m60509_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m60510_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m60510(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2044 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m60510_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60511_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m60511(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2044 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m60511_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60512_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, KeyValuePair_2_t7700  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60512(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2044 *, KeyValuePair_2_t7700 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60512_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60513_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m60513(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2044 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m60513_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60514_gshared (FlexibleDictionaryWrapper_2_t2044 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60514(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2044 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60514_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<get_Values>b__0(TIn)
extern "C" ParseGeoPoint_t1265  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60515_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60515(__this /* static, unused */, ___item, method) (( ParseGeoPoint_t1265  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60515_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7700  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60516_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t792  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60516(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7700  (*) (Object_t * /* static, unused */, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60516_gshared)(__this /* static, unused */, ___pair, method)
