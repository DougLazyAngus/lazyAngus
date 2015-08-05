#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>
struct FlexibleDictionaryWrapper_2_t1902;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9111;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6934;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7562;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7168;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51105_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51105(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51105_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51106_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51106(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51106_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51107_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51107(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51107_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51108_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51108(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51108_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51109_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51109(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51109_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51110_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51110(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51110_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51111_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51111(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51111_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51112_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51112(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51112_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51113_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51113(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51113_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51114_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51114(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51114_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51115_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51115(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51115_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51116_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51116(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51116_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51117_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2U5BU5D_t7562* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51117(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, KeyValuePair_2U5BU5D_t7562*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51117_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51118_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51118(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51118_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51119_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51119(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51119_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51120_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51120(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51120_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51121_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51121(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51121_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51122_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51122(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51122_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51123_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51123(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51123_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7163  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51124_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7004  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51124(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7163  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7004 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51124_gshared)(__this /* static, unused */, ___pair, method)
