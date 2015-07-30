#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1916;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9110;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7107;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7689;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7187;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52245_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52245(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52245_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52247_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52247(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52247_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52249_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52249(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52249_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52251_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52251(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52251_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52253_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52253(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52253_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52255_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52255(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52255_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52257_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52257(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52257_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52259_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52259(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52259_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52261_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52261(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52261_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52263_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7182  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52263(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52263_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52265_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52265(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52265_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52267_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7182  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52267(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52267_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52269_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2U5BU5D_t7689* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52269(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2U5BU5D_t7689*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52269_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52271_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52271(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52271_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52273_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52273(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52273_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52275_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7182  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52275(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52275_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52277_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52277(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52277_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52279_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52279(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52279_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52281_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52281(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52281_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7182  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52283_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7109  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52283(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7182  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52283_gshared)(__this /* static, unused */, ___pair, method)
