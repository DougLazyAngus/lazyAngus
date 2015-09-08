#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1992;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7802;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8335;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7833;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57911_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57911(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1992 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57911_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57912_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57912(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1992 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57912_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57913_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57913(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1992 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57913_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57914_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57914(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1992 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57914_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57915_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57915(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1992 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57915_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57916_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57916(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1992 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57916_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57917_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57917(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1992 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57917_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57918_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57918(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1992 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57918_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57919_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57919(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1992 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57919_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57920_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, KeyValuePair_2_t7828  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57920(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1992 *, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57920_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57921_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57921(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1992 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57921_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57922_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, KeyValuePair_2_t7828  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57922(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1992 *, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57922_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57923_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, KeyValuePair_2U5BU5D_t8335* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57923(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1992 *, KeyValuePair_2U5BU5D_t8335*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57923_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57924_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57924(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1992 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57924_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57925_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57925(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1992 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57925_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57926_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, KeyValuePair_2_t7828  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57926(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1992 *, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57926_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57927_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57927(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1992 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57927_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57928_gshared (FlexibleDictionaryWrapper_2_t1992 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57928(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1992 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57928_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57929_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57929(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57929_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7828  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57930_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7806  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57930(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7828  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7806 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57930_gshared)(__this /* static, unused */, ___pair, method)
