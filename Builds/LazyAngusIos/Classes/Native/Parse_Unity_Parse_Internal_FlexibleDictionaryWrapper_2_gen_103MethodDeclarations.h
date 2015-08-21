#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>
struct FlexibleDictionaryWrapper_2_t1952;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9080;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7702;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7254;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51956_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51956(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1952 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51956_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51957_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51957(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1952 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51957_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51958_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51958(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1952 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51958_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51959_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51959(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51959_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51960_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51960(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1952 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51960_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51961_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51961(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1952 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51961_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51962_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51962(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51962_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51963_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51963(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1952 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51963_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51964_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51964(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1952 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51964_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51965_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51965(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1952 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51965_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51966_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51966(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51966_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51967_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51967(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1952 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51967_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51968_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, KeyValuePair_2U5BU5D_t7702* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51968(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1952 *, KeyValuePair_2U5BU5D_t7702*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51968_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51969_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51969(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51969_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51970_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51970(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51970_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51971_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51971(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1952 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51971_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51972_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51972(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51972_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51973_gshared (FlexibleDictionaryWrapper_2_t1952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51973(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51973_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51974_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51974(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51974_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7249  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51975_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t775  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51975(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7249  (*) (Object_t * /* static, unused */, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51975_gshared)(__this /* static, unused */, ___pair, method)
