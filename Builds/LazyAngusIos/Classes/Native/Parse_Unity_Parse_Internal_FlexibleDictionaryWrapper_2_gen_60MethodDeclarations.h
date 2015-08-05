#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1861;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7367;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7139;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48707_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48707(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48707_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48708_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48708(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48708_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48709_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48709(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48709_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48710_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48710(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48710_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48711_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48711(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48711_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48712_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48712(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48712_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48713_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48713(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48713_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48714_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48714(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48714_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48715_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48715(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48715_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48716_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, KeyValuePair_2_t7134  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48716(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48716_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48717_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48717(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48717_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48718_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, KeyValuePair_2_t7134  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48718(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48718_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48719_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, KeyValuePair_2U5BU5D_t7367* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48719(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1861 *, KeyValuePair_2U5BU5D_t7367*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48719_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48720_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48720(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48720_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48721_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48721(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48721_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48722_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, KeyValuePair_2_t7134  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48722(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1861 *, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48722_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48723_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48723(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48723_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48724_gshared (FlexibleDictionaryWrapper_2_t1861 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48724(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1861 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48724_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48725_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48725(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48725_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7134  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48726_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7185  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48726(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7134  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48726_gshared)(__this /* static, unused */, ___pair, method)
