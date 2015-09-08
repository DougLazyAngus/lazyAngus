#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>
struct FlexibleDictionaryWrapper_2_t1949;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9335;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7805;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55054_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55054(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55054_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55055_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55055(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55055_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55056_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55056(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55056_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55057_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55057(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55057_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55058_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55058(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55058_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55059_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55059(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55059_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55060_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55060(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55060_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55061_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55061(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55061_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55062_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55062(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55062_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55063_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55063(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55063_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55064_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55064(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55064_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55065_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55065(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55065_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55066_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2U5BU5D_t8145* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55066(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2U5BU5D_t8145*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55066_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55067_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55067(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55067_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55068_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55068(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55068_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55069_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55069(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55069_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55070_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55070(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55070_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55071_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55071(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55071_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55072_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55072(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55072_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6097  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55073_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t795  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55073(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6097  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55073_gshared)(__this /* static, unused */, ___pair, method)
