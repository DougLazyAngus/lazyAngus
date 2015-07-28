#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>
struct FlexibleDictionaryWrapper_2_t1911;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9103;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7109;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7682;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7180;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52264_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52264(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52264_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52265_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52265(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52265_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52266_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52266(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52266_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52267_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52267(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52267_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52268_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52268(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52268_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52269_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52269(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52269_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52270_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52270(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52270_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52271_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52271(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52271_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52272_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52272(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52272_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52273_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52273(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52273_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52274_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52274(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52274_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52275_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52275(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52275_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52276_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2U5BU5D_t7682* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52276(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2U5BU5D_t7682*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52276_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52277_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52277(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52277_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52278_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52278(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52278_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52279_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52279(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52279_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52280_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52280(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52280_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52281_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52281(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52281_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52282_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52282(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52282_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7175  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52283_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7113  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52283(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7175  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52283_gshared)(__this /* static, unused */, ___pair, method)
