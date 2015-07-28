#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>
struct FlexibleDictionaryWrapper_2_t1880;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8625;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6924;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7487;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7147;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50258_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50258(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50258_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50259_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50259(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50259_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50260_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50260(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50260_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50261_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50261(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50261_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50262_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50262(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50262_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50263_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50263(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50263_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50264_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50264(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50264_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50265_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50265(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50265_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50266_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50266(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50266_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50267_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50267(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50267_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50268_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50268(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50268_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50269_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50269(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50269_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50270_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2U5BU5D_t7487* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50270(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2U5BU5D_t7487*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50270_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50271_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50271(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50271_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50272_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50272(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50272_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50273_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50273(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50273_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50274_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50274(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50274_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50275_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50275(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50275_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50276_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50276(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50276_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5488  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50277_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6994  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50277(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5488  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50277_gshared)(__this /* static, unused */, ___pair, method)
