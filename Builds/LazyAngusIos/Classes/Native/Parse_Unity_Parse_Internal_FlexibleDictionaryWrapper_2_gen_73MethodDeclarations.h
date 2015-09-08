#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1942;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9835;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7824;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8075;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7793;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54889_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54889(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54889_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54890_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54890(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54890_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54891_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54891(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54891_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54892_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54892(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54892_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54893_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54893(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54893_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54894_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54894(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54894_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54895_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54895(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54895_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54896_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54896(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54896_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54897_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54897(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54897_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54898_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t7788  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54898(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54898_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54899_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54899(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54899_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54900_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t7788  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54900(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54900_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54901_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2U5BU5D_t8075* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54901(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2U5BU5D_t8075*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54901_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54902_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54902(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54902_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54903_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54903(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54903_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54904_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t7788  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54904(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54904_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54905_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54905(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54905_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54906_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54906(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54906_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54907_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54907(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54907_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7788  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54908_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7828  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54908(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7788  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54908_gshared)(__this /* static, unused */, ___pair, method)
