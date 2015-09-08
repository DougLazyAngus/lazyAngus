#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1932;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7829;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8015;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7787;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54124_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54124(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54124_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54125_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54125(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54125_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54126_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54126(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54126_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54127_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54127(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54127_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54128_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54128(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54128_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54129_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54129(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54129_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54130_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54130(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54130_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m54131_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54131(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54131_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54132_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54132(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54132_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54133_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54133(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54133_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54134_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54134(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54134_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54135_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54135(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54135_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54136_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, KeyValuePair_2U5BU5D_t8015* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54136(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, KeyValuePair_2U5BU5D_t8015*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54136_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54137_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54137(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54137_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54138_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54138(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54138_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54139_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54139(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54139_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54140_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54140(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54140_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54141_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54141(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54141_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54142_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54142(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54142_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7782  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54143_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7833  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54143(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7782  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54143_gshared)(__this /* static, unused */, ___pair, method)
