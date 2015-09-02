#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1965;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9249;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7266;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7669;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7275;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52082_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52082(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52082_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52083_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52083(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52083_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52084_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52084(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52084_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52085_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52085(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52085_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52086_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52086(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52086_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52087_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52087(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52087_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52088_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52088(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52088_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m52089_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52089(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52089_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52090_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52090(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52090_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52091_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7270  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52091(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7270 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52091_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52092_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52092(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52092_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52093_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7270  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52093(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7270 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52093_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52094_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2U5BU5D_t7669* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52094(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2U5BU5D_t7669*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52094_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52095_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52095(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52095_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52096_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52096(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52096_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52097_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, KeyValuePair_2_t7270  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52097(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1965 *, KeyValuePair_2_t7270 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52097_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52098_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52098(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52098_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52099_gshared (FlexibleDictionaryWrapper_2_t1965 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52099(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1965 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52099_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52100_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52100(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52100_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7270  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52101_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7270  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52101(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7270  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7270 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52101_gshared)(__this /* static, unused */, ___pair, method)
