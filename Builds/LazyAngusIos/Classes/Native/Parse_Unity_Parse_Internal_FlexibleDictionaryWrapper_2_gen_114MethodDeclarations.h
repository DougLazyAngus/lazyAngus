#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>
struct FlexibleDictionaryWrapper_2_t1912;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8979;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6931;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7624;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7176;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51859_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51859(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51859_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51860_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51860(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51860_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51861_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51861(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51861_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51862_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51862(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51862_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51863_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51863(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51863_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51864_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51864(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51864_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51865_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51865(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51865_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51866_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51866(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51866_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51867_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51867(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51867_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51868_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51868(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51868_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51869_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51869(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51869_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51870_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51870(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51870_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51871_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2U5BU5D_t7624* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51871(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2U5BU5D_t7624*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51871_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51872_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51872(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51872_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51873_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51873(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51873_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51874_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51874(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51874_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51875_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51875(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51875_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51876_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51876(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51876_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51877_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51877(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51877_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7171  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51878_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7001  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51878(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7171  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51878_gshared)(__this /* static, unused */, ___pair, method)
