#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>
struct FlexibleDictionaryWrapper_2_t1934;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7582;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8015;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7787;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54191_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54191(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54191_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54192_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54192(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54192_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54193_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54193(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54193_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54194_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54194(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54194_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54195_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54195(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54195_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54196_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54196(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54196_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54197_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54197(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54197_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m54198_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54198(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54198_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54199_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54199(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54199_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54200_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54200(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54200_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54201_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54201(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54201_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54202_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54202(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54202_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54203_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, KeyValuePair_2U5BU5D_t8015* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54203(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, KeyValuePair_2U5BU5D_t8015*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54203_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54204_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54204(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54204_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54205_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54205(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54205_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54206_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54206(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54206_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54207_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54207(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54207_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54208_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54208(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54208_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54209_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54209(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54209_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7782  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54210_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7652  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54210(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7782  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54210_gshared)(__this /* static, unused */, ___pair, method)
