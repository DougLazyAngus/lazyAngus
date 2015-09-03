#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>
struct FlexibleDictionaryWrapper_2_t1922;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9833;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7761;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8009;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7781;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53841_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53841(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53841_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53842_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53842(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53842_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53843_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53843(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53843_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53844_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53844(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53844_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53845_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53845(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53845_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53846_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53846(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53846_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53847_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53847(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53847_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m53848_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53848(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53848_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53849_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53849(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53849_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53850_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53850(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53850_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53851_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53851(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53851_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53852_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53852(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53852_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53853_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2U5BU5D_t8009* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53853(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2U5BU5D_t8009*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53853_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53854_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53854(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53854_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53855_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53855(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53855_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53856_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7776  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53856(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53856_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53857_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53857(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53857_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53858_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53858(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53858_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53859_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53859(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53859_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7776  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53860_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7765  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53860(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7776  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53860_gshared)(__this /* static, unused */, ___pair, method)
