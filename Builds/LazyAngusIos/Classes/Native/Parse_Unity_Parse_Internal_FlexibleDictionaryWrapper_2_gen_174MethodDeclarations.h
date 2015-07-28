#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>
struct FlexibleDictionaryWrapper_2_t1966;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseGeoPoint>
struct IDictionary_2_t6944;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1353;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1340;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_60.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54979_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54979(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54979_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54980_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54980(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54980_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54981_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54981(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54981_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54982_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54982(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54982_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54983_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54983(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54983_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54984_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54984(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54984_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54985_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54985(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54985_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m54986_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54986(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54986_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54987_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54987(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54987_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54988_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54988(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54988_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54989_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54989(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54989_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54990_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54990(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54990_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54991_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2U5BU5D_t1353* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54991(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2U5BU5D_t1353*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54991_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54992_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54992(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54992_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54993_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54993(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54993_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54994_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54994(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1966 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54994_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54995_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54995(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54995_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54996_gshared (FlexibleDictionaryWrapper_2_t1966 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54996(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1966 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54996_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54997_gshared (Object_t * __this /* static, unused */, ParseGeoPoint_t1186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54997(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, ParseGeoPoint_t1186 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54997_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,Parse.ParseGeoPoint>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t720  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54998_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7047  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54998(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t720  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7047 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54998_gshared)(__this /* static, unused */, ___pair, method)
