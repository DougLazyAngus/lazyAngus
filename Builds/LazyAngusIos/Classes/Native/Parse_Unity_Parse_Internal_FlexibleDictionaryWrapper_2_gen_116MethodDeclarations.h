#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>
struct FlexibleDictionaryWrapper_2_t1965;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9211;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7767;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7265;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52733_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52733(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52733_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52734_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52734(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52734_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52735_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52735(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52735_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52736_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52736(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52736_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52737_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52737(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52737_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52738_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52738(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52738_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52739_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52739(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52739_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52740_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52740(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52740_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52741_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52741(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52741_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52742_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7260  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52742(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52742_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52743_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52743(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52743_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52744_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7260  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52744(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52744_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52745_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2U5BU5D_t7767* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52745(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2U5BU5D_t7767*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52745_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52746_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52746(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52746_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52747_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52747(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52747_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52748_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7260  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52748(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52748_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52749_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52749(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52749_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52750_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52750(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52750_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52751_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52751(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52751_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7260  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52752_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t775  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52752(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7260  (*) (Object_t * /* static, unused */, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52752_gshared)(__this /* static, unused */, ___pair, method)
