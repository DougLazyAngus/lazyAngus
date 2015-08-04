#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>
struct FlexibleDictionaryWrapper_2_t1919;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7118;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7691;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7189;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52327_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52327(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52327_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52328_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52328(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52328_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52329_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52329(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52329_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52330_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52330(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52330_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52331_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52331(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52331_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52332_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52332(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52332_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52333_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52333(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52333_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52334_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52334(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52334_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52335_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52335(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52335_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52336_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2_t7184  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52336(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2_t7184 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52336_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52337_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52337(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52337_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52338_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2_t7184  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52338(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2_t7184 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52338_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52339_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2U5BU5D_t7691* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52339(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2U5BU5D_t7691*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52339_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52340_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52340(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52340_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52341_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52341(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52341_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52342_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, KeyValuePair_2_t7184  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52342(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1919 *, KeyValuePair_2_t7184 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52342_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52343_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52343(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52343_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52344_gshared (FlexibleDictionaryWrapper_2_t1919 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52344(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1919 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52344_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52345_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52345(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52345_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7184  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52346_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7122  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52346(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7184  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7122 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52346_gshared)(__this /* static, unused */, ___pair, method)
