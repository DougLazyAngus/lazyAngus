#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>
struct FlexibleDictionaryWrapper_2_t1982;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9120;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7041;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7734;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7286;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53012_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53012(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53012_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53013_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53013(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53013_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53014_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53014(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53014_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53015_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53015(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53015_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53016_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53016(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53016_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53017_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53017(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53017_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53018_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53018(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53018_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m53019_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53019(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53019_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53020_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53020(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53020_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53021_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t7281  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53021(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2_t7281 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53021_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53022_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53022(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53022_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53023_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t7281  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53023(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2_t7281 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53023_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53024_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2U5BU5D_t7734* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53024(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2U5BU5D_t7734*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53025_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53025(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53025_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53026_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53026(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53026_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53027_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, KeyValuePair_2_t7281  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53027(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1982 *, KeyValuePair_2_t7281 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53027_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53028_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53028(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53028_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53029_gshared (FlexibleDictionaryWrapper_2_t1982 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53029(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1982 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53029_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53030_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53030(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53030_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7281  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53031_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7111  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53031(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7281  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53031_gshared)(__this /* static, unused */, ___pair, method)
