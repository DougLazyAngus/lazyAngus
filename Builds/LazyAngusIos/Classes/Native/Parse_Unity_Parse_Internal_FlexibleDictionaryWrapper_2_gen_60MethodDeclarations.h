#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1911;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9198;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7252;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7438;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7210;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49381_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49381(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49381_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49382_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49382(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49382_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49383_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49383(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49383_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49384_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49384(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49384_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49385_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49385(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49385_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49386_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49386(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49386_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49387_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49387(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49387_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49388_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49388(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49388_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49389_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49389(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49389_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49390_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49390(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49390_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49391_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49391(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49391_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49392_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49392(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49392_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49393_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2U5BU5D_t7438* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49393(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2U5BU5D_t7438*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49393_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49394_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49394(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49394_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49395_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49395(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49395_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49396_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49396(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49396_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49397_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49397(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49397_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49398_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49398(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49398_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49399_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49399(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49399_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7205  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49400_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7256  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49400(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7205  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49400_gshared)(__this /* static, unused */, ___pair, method)
