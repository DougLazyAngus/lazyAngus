#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>
struct FlexibleDictionaryWrapper_2_t1941;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9201;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7633;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7239;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51088_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51088(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51088_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51089_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51089(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51089_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51090_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51090(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51090_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51091_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51091(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51091_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51092_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51092(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51092_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51093_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51093(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51093_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51094_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51094(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51094_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51095_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51095(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51095_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51096_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51096(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51096_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51097_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51097(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51097_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51098_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51098(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51098_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51099_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51099(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51099_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51100_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, KeyValuePair_2U5BU5D_t7633* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51100(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1941 *, KeyValuePair_2U5BU5D_t7633*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51100_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51101_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51101(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51101_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51102_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51102(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51102_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51103_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, KeyValuePair_2_t7234  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51103(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1941 *, KeyValuePair_2_t7234 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51103_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51104_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51104(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51104_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51105_gshared (FlexibleDictionaryWrapper_2_t1941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51105(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51105_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51106_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51106(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51106_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7234  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51107_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t777  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51107(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7234  (*) (Object_t * /* static, unused */, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51107_gshared)(__this /* static, unused */, ___pair, method)
