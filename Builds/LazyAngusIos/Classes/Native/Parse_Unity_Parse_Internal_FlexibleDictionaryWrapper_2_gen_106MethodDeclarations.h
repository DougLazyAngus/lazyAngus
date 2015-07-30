#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>
struct FlexibleDictionaryWrapper_2_t1904;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8979;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7116;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7624;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7176;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51534_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51534(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51534_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51535_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51535(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51535_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51536_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51536(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51536_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51537_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51537(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51537_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51538_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51538(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51538_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51539_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51539(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51539_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51540_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51540(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51540_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51541_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51541(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51541_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51542_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51542(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51542_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51543_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51543(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51543_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51544_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51544(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51544_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51545_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51545(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51545_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51546_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2U5BU5D_t7624* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51546(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, KeyValuePair_2U5BU5D_t7624*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51546_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51547_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51547(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51547_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51548_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51548(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51548_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51549_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2_t7171  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51549(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51549_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51550_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51550(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51550_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51551_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51551(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51551_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51552_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51552(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51552_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7171  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51553_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7120  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51553(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7171  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51553_gshared)(__this /* static, unused */, ___pair, method)
