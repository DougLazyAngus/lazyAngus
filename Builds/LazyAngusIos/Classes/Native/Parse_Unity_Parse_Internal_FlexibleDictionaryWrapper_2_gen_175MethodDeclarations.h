#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>
struct FlexibleDictionaryWrapper_2_t2024;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t9217;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t8016;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t7999;
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
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55858_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55858(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2024 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55858_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55859_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, String_t* ___key, ParseGeoPoint_t1245  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55859(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2024 *, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55859_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55860_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55860(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2024 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55860_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55861_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55861(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2024 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55861_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55862_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55862(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2024 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55862_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55863_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, String_t* ___key, ParseGeoPoint_t1245 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55863(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2024 *, String_t*, ParseGeoPoint_t1245 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55863_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55864_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55864(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2024 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55864_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Item(System.String)
extern "C" ParseGeoPoint_t1245  FlexibleDictionaryWrapper_2_get_Item_m55865_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55865(__this, ___key, method) (( ParseGeoPoint_t1245  (*) (FlexibleDictionaryWrapper_2_t2024 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55865_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55866_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, String_t* ___key, ParseGeoPoint_t1245  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55866(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2024 *, String_t*, ParseGeoPoint_t1245 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55866_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55867_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, KeyValuePair_2_t7132  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55867(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2024 *, KeyValuePair_2_t7132 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55867_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55868_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55868(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2024 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55868_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55869_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, KeyValuePair_2_t7132  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55869(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2024 *, KeyValuePair_2_t7132 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55869_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55870_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, KeyValuePair_2U5BU5D_t8016* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55870(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2024 *, KeyValuePair_2U5BU5D_t8016*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55870_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55871_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55871(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2024 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55871_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55872_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55872(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2024 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55872_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55873_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, KeyValuePair_2_t7132  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55873(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2024 *, KeyValuePair_2_t7132 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55873_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55874_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55874(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2024 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55874_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55875_gshared (FlexibleDictionaryWrapper_2_t2024 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55875(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2024 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55875_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<get_Values>b__0(TIn)
extern "C" ParseGeoPoint_t1245  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55876_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55876(__this /* static, unused */, ___item, method) (( ParseGeoPoint_t1245  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55876_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7132  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55877_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t775  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55877(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7132  (*) (Object_t * /* static, unused */, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55877_gshared)(__this /* static, unused */, ___pair, method)
