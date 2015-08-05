#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>
struct FlexibleDictionaryWrapper_2_t1851;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6935;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7129;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48005_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48005(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48005_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48006_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48006(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48006_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48007_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48007(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48007_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48008_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48008(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48008_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48009_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48009(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48009_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48010_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48010(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48010_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48011_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48011(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48011_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48012_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48012(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48012_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48013_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48013(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48013_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48014_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48014(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48014_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48015_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48015(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48015_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48016_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48016(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48016_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48017_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2U5BU5D_t7303* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48017(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48017_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48018_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48018(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48018_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48019_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48019(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48019_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48020_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48020(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1851 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48020_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48021_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48021(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48021_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48022_gshared (FlexibleDictionaryWrapper_2_t1851 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48022(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1851 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48022_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48023_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48023(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48023_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7124  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48024_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7005  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48024(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7124  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48024_gshared)(__this /* static, unused */, ___pair, method)
