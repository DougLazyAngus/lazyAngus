#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1974;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9211;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7256;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7767;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7265;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53357_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53357(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53357_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53358_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53358(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53358_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53359_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53359(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53359_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53360_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53360(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53360_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53361_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53361(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53361_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53362_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53362(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53362_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53363_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53363(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53363_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53364_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53364(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53364_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53365_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53365(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53365_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53366_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2_t7260  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53366(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53366_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53367_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53367(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53367_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53368_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2_t7260  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53368(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53368_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53369_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2U5BU5D_t7767* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53369(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2U5BU5D_t7767*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53369_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53370_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53370(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53370_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53371_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53371(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53371_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53372_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, KeyValuePair_2_t7260  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53372(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1974 *, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53372_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53373_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53373(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53373_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53374_gshared (FlexibleDictionaryWrapper_2_t1974 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53374(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1974 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53374_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53375_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53375(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53375_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7260  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53376_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7260  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53376(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7260  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53376_gshared)(__this /* static, unused */, ___pair, method)
