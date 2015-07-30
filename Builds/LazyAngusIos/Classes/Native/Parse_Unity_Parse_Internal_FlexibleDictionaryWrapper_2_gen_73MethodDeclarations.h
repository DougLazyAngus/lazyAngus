#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1871;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9106;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7178;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7429;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7147;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49461_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49461(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49461_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49462_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49462(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49462_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49463_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49463(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49463_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49464_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49464(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49464_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49465_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49465(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49465_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49466_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49466(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49466_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49467_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49467(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49467_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49468_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49468(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49468_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49469_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49469(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49469_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49470_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49470(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49470_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49471_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49471(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49471_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49472_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49472(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49472_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49473_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2U5BU5D_t7429* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49473(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2U5BU5D_t7429*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49473_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49474_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49474(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49474_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49475_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49475(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49475_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49476_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, KeyValuePair_2_t7142  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49476(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1871 *, KeyValuePair_2_t7142 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49476_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49477_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49477(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49477_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49478_gshared (FlexibleDictionaryWrapper_2_t1871 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49478(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1871 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49478_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49479_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49479(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49479_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7142  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49480_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7182  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49480(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7142  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49480_gshared)(__this /* static, unused */, ___pair, method)
