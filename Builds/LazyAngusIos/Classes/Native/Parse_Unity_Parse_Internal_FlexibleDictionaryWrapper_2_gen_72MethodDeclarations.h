#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>
struct FlexibleDictionaryWrapper_2_t1944;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9840;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7818;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8080;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7798;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54858_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54858(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54858_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54859_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54859(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54859_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54860_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54860(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54860_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54861_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54861(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54861_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54862_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54862(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54862_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54863_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54863(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54863_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54864_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54864(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54864_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54865_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54865(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54865_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54866_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54866(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54866_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54867_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54867(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54867_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54868_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54868(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54868_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54869_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54869(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54869_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54870_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2U5BU5D_t8080* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54870(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2U5BU5D_t8080*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54870_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54871_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54871(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54871_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54872_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54872(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54872_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54873_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54873(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54873_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54874_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54874(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54874_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54875_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54875(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54875_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54876_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54876(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54876_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7793  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54877_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7822  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54877(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7793  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54877_gshared)(__this /* static, unused */, ___pair, method)
