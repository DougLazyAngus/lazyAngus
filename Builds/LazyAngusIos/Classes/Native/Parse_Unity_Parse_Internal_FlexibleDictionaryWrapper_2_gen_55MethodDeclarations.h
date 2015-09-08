#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>
struct FlexibleDictionaryWrapper_2_t1927;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7778;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8015;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7787;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53909_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53909(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53909_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53910_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53910(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53910_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53911_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53911(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53911_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53912_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53912(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53912_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53913_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53913(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53913_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53914_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53914(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53914_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53915_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53915(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53915_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m53916_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53916(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53916_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53917_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53917(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53917_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53918_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53918(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53918_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53919_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53919(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53919_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53920_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53920(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53920_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53921_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2U5BU5D_t8015* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53921(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2U5BU5D_t8015*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53921_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53922_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53922(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53922_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53923_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53923(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53923_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53924_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53924(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53924_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53925_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53925(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53925_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53926_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53926(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53926_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53927_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53927(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53927_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7782  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53928_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7782  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53928(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7782  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53928_gshared)(__this /* static, unused */, ___pair, method)
