#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1887;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8635;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7497;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7157;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50261_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50261(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50261_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50262_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50262(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50262_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50263_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50263(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50263_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50264_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50264(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50264_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50265_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50265(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50265_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50266_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50266(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50266_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50267_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50267(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50267_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50268_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50268(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50268_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50269_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50269(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50269_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50270_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2_t5498  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50270(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2_t5498 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50270_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50271_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50271(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50271_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50272_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2_t5498  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50272(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2_t5498 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50272_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50273_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2U5BU5D_t7497* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50273(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2U5BU5D_t7497*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50273_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50274_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50274(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50274_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50275_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50275(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50275_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50276_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, KeyValuePair_2_t5498  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50276(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1887 *, KeyValuePair_2_t5498 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50276_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50277_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50277(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50277_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50278_gshared (FlexibleDictionaryWrapper_2_t1887 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50278(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1887 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50278_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50279_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50279(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50279_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5498  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50280_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7185  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50280(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5498  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50280_gshared)(__this /* static, unused */, ___pair, method)
