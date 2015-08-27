#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>
struct FlexibleDictionaryWrapper_2_t1889;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9141;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7006;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7195;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47990_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47990(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47990_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47992_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47992(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47992_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47994_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47994(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47994_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47996_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47996(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47996_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47998_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47998(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47998_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48000_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48000(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48000_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48002_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48002(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48002_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m48004_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48004(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48004_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48006_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48006(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48006_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48008_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48008(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48008_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48010_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48010(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48010_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48012_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48012(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48012_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48014_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2U5BU5D_t7303* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48014(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48014_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48016_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48016(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48016_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48018_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48018(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48018_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48020_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48020(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48020_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48022_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48022(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48022_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48024_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48024(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48024_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48026_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48026(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48026_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7190  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48028_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7062  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48028(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7190  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48028_gshared)(__this /* static, unused */, ___pair, method)
