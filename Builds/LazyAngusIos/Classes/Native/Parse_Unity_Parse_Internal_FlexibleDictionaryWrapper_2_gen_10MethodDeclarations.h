#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>
struct FlexibleDictionaryWrapper_2_t1861;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7005;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1399;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46808_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46808(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46808_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46809_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46809(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46809_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46810_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46810(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46810_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46811_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46811(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46811_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46812_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46812(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46812_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46813_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46813(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46813_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46814_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46814(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46814_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46815_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46815(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46815_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46816_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46816(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46816_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46817_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46817(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46817_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46818_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46818(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46818_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46819_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46819(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46819_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46820_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, KeyValuePair_2U5BU5D_t1412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46820(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, KeyValuePair_2U5BU5D_t1412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46820_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46821_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46821(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46821_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46822_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46822(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46822_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46823_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46823(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46823_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46824_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46824(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46824_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46825_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46825(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46825_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46826_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46826(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46826_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t777  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46827_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7075  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46827(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t777  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46827_gshared)(__this /* static, unused */, ___pair, method)
