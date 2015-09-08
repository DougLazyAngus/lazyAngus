#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1929;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9834;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7824;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8010;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7782;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54112_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54112(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54112_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54113_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54113(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54113_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54114_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54114(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54114_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54115_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54115(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54115_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54116_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54116(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54116_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54117_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54117(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54117_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54118_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54118(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54118_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m54119_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54119(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54119_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54120_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54120(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54120_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54121_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t7777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54121(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t7777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54121_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54122_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54122(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54122_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54123_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t7777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54123(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t7777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54123_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54124_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2U5BU5D_t8010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54124(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2U5BU5D_t8010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54124_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54125_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54125(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54125_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54126_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54126(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54126_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54127_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t7777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54127(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t7777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54127_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54128_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54128(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54128_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54129_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54129(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54129_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54130_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54130(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54130_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7777  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54131_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7828  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54131(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7777  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54131_gshared)(__this /* static, unused */, ___pair, method)
