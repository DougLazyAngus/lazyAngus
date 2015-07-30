#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1806;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1168;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7178;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1359;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1346;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46017_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46017(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1806 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46017_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46018_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46018(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1806 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46018_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46019_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46019(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1806 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46019_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46020_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46020(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1806 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46020_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46021_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46021(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1806 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46021_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46022_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46022(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1806 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46022_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46023_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46023(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1806 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46023_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46024_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46024(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1806 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46024_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46025_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46025(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1806 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46025_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46026_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46026(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1806 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46026_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46027_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46027(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1806 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46027_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46028_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46028(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1806 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46028_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46029_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, KeyValuePair_2U5BU5D_t1359* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46029(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1806 *, KeyValuePair_2U5BU5D_t1359*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46029_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46030_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46030(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1806 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46030_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46031_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46031(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1806 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46031_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46032_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46032(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1806 *, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46032_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46033_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46033(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1806 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46033_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46034_gshared (FlexibleDictionaryWrapper_2_t1806 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46034(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1806 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46034_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46035_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46035(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46035_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t727  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46036_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7182  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46036(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t727  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46036_gshared)(__this /* static, unused */, ___pair, method)
