#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1884;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8634;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7158;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7496;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7156;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50168_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50168(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50168_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50169_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50169(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50169_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50170_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50170(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50170_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50171_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50171(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50171_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50172_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50172(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50172_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50173_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50173(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50173_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50174_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50174(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50174_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50175_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50175(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50175_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50176_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50176(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50176_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50177_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2_t5497  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50177(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2_t5497 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50177_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50178_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50178(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50178_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50179_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2_t5497  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50179(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2_t5497 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50179_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50180_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2U5BU5D_t7496* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50180(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2U5BU5D_t7496*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50180_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50181_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50181(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50181_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50182_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50182(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50182_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50183_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2_t5497  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50183(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2_t5497 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50183_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50184_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50184(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50184_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50185_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50185(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50185_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50186_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50186(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50186_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5497  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50187_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7162  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50187(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5497  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7162 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50187_gshared)(__this /* static, unused */, ___pair, method)
