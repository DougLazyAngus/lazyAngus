#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1907;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9198;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7212;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7438;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7210;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49209_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49209(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49209_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49210_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49210(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49210_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49211_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49211(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49211_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49212_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49212(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49212_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49213_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49213(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49213_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49214_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49214(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49214_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49215_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49215(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49215_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m49216_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49216(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49216_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49217_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49217(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49217_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49218_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49218(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49218_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49219_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49219(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49219_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49220_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49220(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49220_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49221_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2U5BU5D_t7438* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49221(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2U5BU5D_t7438*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49221_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49222_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49222(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49222_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49223_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49223(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49223_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49224_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, KeyValuePair_2_t7205  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49224(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1907 *, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49224_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49225_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49225(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49225_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49226_gshared (FlexibleDictionaryWrapper_2_t1907 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49226(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1907 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49226_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49227_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49227(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49227_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7205  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49228_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7216  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49228(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7205  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49228_gshared)(__this /* static, unused */, ___pair, method)
