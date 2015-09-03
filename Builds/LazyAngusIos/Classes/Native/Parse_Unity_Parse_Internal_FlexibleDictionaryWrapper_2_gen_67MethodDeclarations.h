#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>
struct FlexibleDictionaryWrapper_2_t1935;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9834;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7761;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8074;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7792;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54618_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54618(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54618_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54619_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54619(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54619_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54620_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54620(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54620_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54621_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54621(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54621_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54622_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54622(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54622_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54623_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54623(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54623_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54624_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54624(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54624_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54625_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54625(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54625_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54626_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54626(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54626_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54627_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54627(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54627_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54628_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54628(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54628_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54629_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54629(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54629_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54630_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, KeyValuePair_2U5BU5D_t8074* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54630(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1935 *, KeyValuePair_2U5BU5D_t8074*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54630_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54631_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54631(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54631_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54632_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54632(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54632_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54633_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54633(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1935 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54633_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54634_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54634(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54634_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54635_gshared (FlexibleDictionaryWrapper_2_t1935 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54635(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1935 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54635_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54636_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54636(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54636_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7787  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54637_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7765  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54637(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7787  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54637_gshared)(__this /* static, unused */, ___pair, method)
