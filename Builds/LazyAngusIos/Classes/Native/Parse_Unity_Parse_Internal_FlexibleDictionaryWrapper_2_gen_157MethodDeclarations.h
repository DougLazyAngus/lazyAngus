#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>
struct FlexibleDictionaryWrapper_2_t2025;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8968;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7217;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7942;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7314;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55264_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55264(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55264_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55266_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55266(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55266_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55268_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55268(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55268_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55270_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55270(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55270_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55272_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55272(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55272_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55274_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55274(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55274_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55276_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55276(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55276_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55278_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55278(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55278_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55280_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55280(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55280_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55282_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55282(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55282_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55284_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55284(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55284_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55286_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55286(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55286_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55288_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2U5BU5D_t7942* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55288(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2U5BU5D_t7942*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55288_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55290_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55290(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55290_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55292_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55292(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55292_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55294_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55294(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55294_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55296_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55296(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55296_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55298_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55298(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55298_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55300_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55300(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55300_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7091  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55302_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7219  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55302(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7091  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7219 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55302_gshared)(__this /* static, unused */, ___pair, method)
