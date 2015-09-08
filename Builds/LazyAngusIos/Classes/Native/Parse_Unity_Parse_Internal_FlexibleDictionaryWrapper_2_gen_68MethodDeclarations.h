#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>
struct FlexibleDictionaryWrapper_2_t1937;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9835;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7773;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8075;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7793;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54674_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54674(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54674_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54675_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54675(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54675_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54676_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54676(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54676_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54677_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54677(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54677_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54678_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54678(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54678_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54679_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54679(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54679_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54680_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54680(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54680_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54681_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54681(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54681_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54682_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54682(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54682_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54683_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2_t7788  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54683(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54683_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54684_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54684(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54684_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54685_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2_t7788  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54685(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54685_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54686_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2U5BU5D_t8075* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54686(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2U5BU5D_t8075*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54686_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54687_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54687(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54687_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54688_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54688(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54688_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54689_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2_t7788  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54689(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2_t7788 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54689_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54690_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54690(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54690_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54691_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54691(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54691_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54692_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54692(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54692_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7788  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54693_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7777  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54693(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7788  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7777 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54693_gshared)(__this /* static, unused */, ___pair, method)
