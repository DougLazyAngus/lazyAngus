#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>
struct FlexibleDictionaryWrapper_2_t1924;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9114;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6925;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7693;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7191;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52468_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52468(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52468_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52469_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52469(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52469_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52470_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52470(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52470_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52471_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52471(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52471_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52472_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52472(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52472_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52473_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52473(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52473_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52474_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52474(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52474_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52475_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52475(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52475_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52476_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52476(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52476_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52477_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52477(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52477_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52478_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52478(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52478_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52479_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52479(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52479_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52480_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2U5BU5D_t7693* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52480(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2U5BU5D_t7693*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52480_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52481_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52481(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52481_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52482_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52482(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52482_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52483_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7186  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52483(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52483_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52484_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52484(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52484_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52485_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52485(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52485_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52486_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52486(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52486_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7186  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52487_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5499  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52487(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7186  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5499 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52487_gshared)(__this /* static, unused */, ___pair, method)
