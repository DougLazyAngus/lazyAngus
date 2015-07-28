#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>
struct FlexibleDictionaryWrapper_2_t1843;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9098;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7357;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7129;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48013_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48013(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48013_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48014_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48014(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48014_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48015_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48015(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48015_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48016_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48016(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48016_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48017_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48017(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48017_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48018_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48018(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48018_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48019_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48019(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48019_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48020_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48020(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48020_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48021_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48021(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48021_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48022_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48022(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48022_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48023_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48023(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48023_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48024_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48024(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48024_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48025_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, KeyValuePair_2U5BU5D_t7357* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48025(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1843 *, KeyValuePair_2U5BU5D_t7357*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48025_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48026_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48026(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48026_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48027_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48027(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48027_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48028_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48028(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1843 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48028_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48029_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48029(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48029_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48030_gshared (FlexibleDictionaryWrapper_2_t1843 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48030(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1843 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48030_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48031_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48031(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48031_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7124  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48032_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t720  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48032(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7124  (*) (Object_t * /* static, unused */, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48032_gshared)(__this /* static, unused */, ___pair, method)
