#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1969;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9203;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7763;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7261;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52945_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52945(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52945_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52947_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52947(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52947_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52949_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52949(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52949_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52951_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52951(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52951_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52953_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52953(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52953_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52955_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52955(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52957_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52957(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52957_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52959_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52959(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52959_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52961_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52961(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52961_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52963_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52963(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52963_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52965_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52965(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52965_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52967_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52967(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52967_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52969_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2U5BU5D_t7763* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52969(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2U5BU5D_t7763*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52969_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52971_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52971(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52971_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52973_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52973(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52973_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52975_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2_t7256  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52975(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52975_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52977_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52977(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52977_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52979_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52979(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52979_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52981_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52981(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52981_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7256  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52983_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7183  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52983(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7256  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52983_gshared)(__this /* static, unused */, ___pair, method)
