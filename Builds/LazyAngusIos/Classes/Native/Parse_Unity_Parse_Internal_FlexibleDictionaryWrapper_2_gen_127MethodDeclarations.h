#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>
struct FlexibleDictionaryWrapper_2_t1978;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9203;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7005;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7763;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7261;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53336_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53336(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53336_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53337_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53337(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53337_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53338_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53338(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53338_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53339_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53339(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53339_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53340_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53340(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53340_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53341_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53341(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53341_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53342_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53342(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53342_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53343_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53343(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53343_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53344_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53344(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53344_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53345_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53345(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53345_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53346_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53346(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53346_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53347_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53347(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53347_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53348_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, KeyValuePair_2U5BU5D_t7763* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53348(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1978 *, KeyValuePair_2U5BU5D_t7763*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53348_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53349_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53349(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53349_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53350_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53350(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53350_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53351_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53351(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1978 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53351_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53352_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53352(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53352_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53353_gshared (FlexibleDictionaryWrapper_2_t1978 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53353(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1978 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53353_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53354_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53354(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53354_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7256  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53355_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7075  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53355(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7256  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7075 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53355_gshared)(__this /* static, unused */, ___pair, method)
