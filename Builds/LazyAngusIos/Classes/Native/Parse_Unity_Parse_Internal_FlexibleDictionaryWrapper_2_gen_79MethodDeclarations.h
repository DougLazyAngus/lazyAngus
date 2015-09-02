#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1947;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8742;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7217;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7604;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7264;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51067_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51067(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51067_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51069_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51069(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51069_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51071_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51071(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51071_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51073_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51073(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51073_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51075_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51075(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51075_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51077_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51077(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51077_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51079_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51079(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51079_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m51081_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51081(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51081_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51083_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51083(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51083_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51085_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t5560  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51085(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t5560 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51085_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51087_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51087(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51087_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51089_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t5560  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51089(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t5560 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51089_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51091_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2U5BU5D_t7604* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51091(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2U5BU5D_t7604*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51091_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51093_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51093(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51093_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51095_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51095(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51095_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51097_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t5560  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51097(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t5560 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51097_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51099_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51099(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51099_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51101_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51101(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51101_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51103_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51103(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51103_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5560  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51105_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7219  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51105(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5560  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7219 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51105_gshared)(__this /* static, unused */, ___pair, method)
