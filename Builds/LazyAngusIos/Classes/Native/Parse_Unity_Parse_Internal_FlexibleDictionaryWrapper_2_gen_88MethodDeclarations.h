#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>
struct FlexibleDictionaryWrapper_2_t1940;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8713;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7012;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7575;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7235;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51126_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51126(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51126_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51127_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51127(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51127_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51128_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51128(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51128_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51129_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51129(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51129_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51130_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51130(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51130_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51131_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51131(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51131_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51132_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51132(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51132_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m51133_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51133(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51133_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51134_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51134(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51134_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51135_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t5544  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51135(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51135_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51136_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51136(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51136_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51137_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t5544  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51137(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51137_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51138_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2U5BU5D_t7575* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51138(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2U5BU5D_t7575*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51138_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51139_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51139(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51139_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51140_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51140(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51140_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51141_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, KeyValuePair_2_t5544  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51141(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1940 *, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51141_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51142_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51142(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51142_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51143_gshared (FlexibleDictionaryWrapper_2_t1940 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51143(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1940 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51143_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51144_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51144(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51144_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5544  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51145_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7082  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51145(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5544  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51145_gshared)(__this /* static, unused */, ___pair, method)
