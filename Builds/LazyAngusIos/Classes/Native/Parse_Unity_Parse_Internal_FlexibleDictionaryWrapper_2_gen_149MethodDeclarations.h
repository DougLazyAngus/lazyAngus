#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>
struct FlexibleDictionaryWrapper_2_t2021;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7807;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8418;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7848;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59012_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59012(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59012_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59013_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59013(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59013_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59014_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59014(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59014_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59015_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59015(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59015_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59016_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59016(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59016_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59017_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59017(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59017_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59018_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59018(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59018_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m59019_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59019(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59019_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59020_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59020(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59020_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59021_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59021(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59021_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59022_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59022(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59022_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59023_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59023(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59023_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59024_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2U5BU5D_t8418* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59024(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2U5BU5D_t8418*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59024_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59025_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59025(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59025_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59026_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59026(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59026_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59027_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59027(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2021 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59027_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59028_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59028(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59028_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59029_gshared (FlexibleDictionaryWrapper_2_t2021 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59029(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2021 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59029_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59030_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59030(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59030_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7652  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59031_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7811  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59031(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7652  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59031_gshared)(__this /* static, unused */, ___pair, method)
