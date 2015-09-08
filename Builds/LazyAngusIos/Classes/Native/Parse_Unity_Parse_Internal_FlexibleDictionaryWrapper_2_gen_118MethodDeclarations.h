#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1990;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9844;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8340;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7838;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57685_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57685(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57685_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57687_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57687(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57687_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57689_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57689(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57689_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57691_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57691(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57691_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57693_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57693(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57693_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57695_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57695(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57695_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57697_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57697(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57697_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57699_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57699(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57699_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57701_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57701(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57701_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57703_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57703(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57703_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57705_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57705(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57705_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57707_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57707(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57707_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57709_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2U5BU5D_t8340* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57709(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2U5BU5D_t8340*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57709_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57711_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57711(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57711_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57713_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57713(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57713_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57715_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57715(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1990 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57715_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57717_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57717(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57717_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57719_gshared (FlexibleDictionaryWrapper_2_t1990 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57719(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1990 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57719_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57721_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57721(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57721_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7833  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57723_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7760  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57723(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7833  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57723_gshared)(__this /* static, unused */, ___pair, method)
