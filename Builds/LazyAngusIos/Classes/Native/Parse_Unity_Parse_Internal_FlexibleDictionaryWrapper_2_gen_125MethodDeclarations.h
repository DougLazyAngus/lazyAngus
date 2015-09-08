#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1994;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7824;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8335;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7833;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57997_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57997(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57997_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57998_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57998(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57998_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57999_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57999(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57999_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m58000_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m58000(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m58000_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58001_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58001(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58001_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m58002_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m58002(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m58002_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m58003_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m58003(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m58003_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m58004_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m58004(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m58004_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m58005_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m58005(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m58005_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m58006_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7828  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m58006(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m58006_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m58007_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m58007(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m58007_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m58008_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7828  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m58008(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m58008_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m58009_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2U5BU5D_t8335* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m58009(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2U5BU5D_t8335*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m58009_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m58010_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m58010(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m58010_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m58011_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m58011(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m58011_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m58012_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7828  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m58012(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m58012_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58013_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58013(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58013_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58014_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58014(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58014_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58015_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58015(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58015_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7828  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58016_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7828  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58016(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7828  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58016_gshared)(__this /* static, unused */, ___pair, method)
