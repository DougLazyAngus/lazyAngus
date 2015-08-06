#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1858;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9107;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7158;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7366;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7138;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48614_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48614(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48614_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48615_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48615(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48615_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48616_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48616(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48616_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48617_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48617(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48617_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48618_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48618(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48618_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48619_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48619(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48619_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48620_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48620(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48620_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48621_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48621(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48621_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48622_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48622(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48622_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48623_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48623(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2_t7133 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48623_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48624_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48624(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48624_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48625_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48625(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2_t7133 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48625_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48626_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2U5BU5D_t7366* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48626(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2U5BU5D_t7366*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48626_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48627_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48627(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48627_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48628_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48628(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48628_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48629_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2_t7133  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48629(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2_t7133 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48629_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48630_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48630(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48630_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48631_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48631(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48631_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48632_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48632(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48632_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7133  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48633_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7162  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48633(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7133  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7162 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48633_gshared)(__this /* static, unused */, ___pair, method)
