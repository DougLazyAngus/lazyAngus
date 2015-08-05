#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1835;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9040;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7225;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7117;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47034_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47034(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47034_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47036_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47036(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47036_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47038_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47038(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47038_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47040_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47040(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47040_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47042_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47042(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47042_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47044_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47044(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47044_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47046_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47046(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47046_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47048_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47048(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47048_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47050_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47050(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47050_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47052_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47052(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47052_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47054_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47054(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47054_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47056_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47056(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47056_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47058_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, KeyValuePair_2U5BU5D_t7225* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47058(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1835 *, KeyValuePair_2U5BU5D_t7225*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47058_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47060_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47060(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47060_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47062_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47062(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47062_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47064_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47064(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1835 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47064_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47066_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47066(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47066_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47068_gshared (FlexibleDictionaryWrapper_2_t1835 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47068(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1835 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47068_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47070_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47070(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47070_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7112  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47072_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7185  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47072(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7112  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47072_gshared)(__this /* static, unused */, ___pair, method)
