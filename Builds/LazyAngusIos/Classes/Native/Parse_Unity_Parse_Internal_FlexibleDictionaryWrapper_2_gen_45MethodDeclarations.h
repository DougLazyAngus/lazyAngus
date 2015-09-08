#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1917;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7807;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7950;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7776;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53261_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53261(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53261_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53262_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53262(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53262_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53263_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53263(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53263_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53264_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53264(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53264_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53265_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53265(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53265_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53266_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53266(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53266_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53267_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53267(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53267_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53268_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53268(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53268_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53269_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53269(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53269_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53270_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53270(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53270_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53271_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53271(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53271_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53272_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53272(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53272_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53273_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2U5BU5D_t7950* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53273(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2U5BU5D_t7950*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53273_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53274_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53274(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53274_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53275_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53275(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53275_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53276_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53276(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53276_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53277_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53277(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53277_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53278_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53278(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53278_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53279_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53279(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53279_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7771  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53280_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7811  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53280(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7771  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53280_gshared)(__this /* static, unused */, ___pair, method)
