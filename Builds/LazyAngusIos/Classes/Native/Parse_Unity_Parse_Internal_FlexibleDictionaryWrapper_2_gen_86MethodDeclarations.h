#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1958;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9335;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7829;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8145;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7805;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55678_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55678(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55678_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55679_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55679(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55679_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55680_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55680(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55680_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55681_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55681(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55681_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55682_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55682(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55682_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55683_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55683(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55683_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55684_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55684(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55684_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55685_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55685(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55685_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55686_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55686(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55686_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55687_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55687(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55687_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55688_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55688(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55688_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55689_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55689(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55689_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55690_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2U5BU5D_t8145* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55690(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2U5BU5D_t8145*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55690_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55691_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55691(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55691_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55692_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55692(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55692_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55693_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t6097  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55693(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55693_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55694_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55694(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55694_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55695_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55695(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55695_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55696_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55696(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55696_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6097  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55697_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7833  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55697(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6097  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55697_gshared)(__this /* static, unused */, ___pair, method)
