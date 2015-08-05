#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1898;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9111;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7159;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7562;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7168;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50952_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50952(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50952_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50953_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50953(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50953_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50954_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50954(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50954_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50955_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50955(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50955_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50956_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50956(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50956_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50957_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50957(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50957_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50958_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50958(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50958_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50959_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50959(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50959_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50960_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50960(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50960_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50961_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50961(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50961_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50962_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50962(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50962_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50963_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50963(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50963_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50964_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2U5BU5D_t7562* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50964(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2U5BU5D_t7562*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50964_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50965_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50965(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50965_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50966_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50966(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50966_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50967_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, KeyValuePair_2_t7163  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50967(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1898 *, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50967_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50968_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50968(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50968_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50969_gshared (FlexibleDictionaryWrapper_2_t1898 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50969(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1898 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50969_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50970_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50970(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50970_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7163  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50971_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7163  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50971(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7163  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50971_gshared)(__this /* static, unused */, ___pair, method)
