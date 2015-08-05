#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1859;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7159;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7367;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7139;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48621_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48621(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48621_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48622_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48622(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48622_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48623_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48623(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48623_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48624_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48624(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48624_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48625_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48625(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48625_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48626_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48626(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48626_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48627_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48627(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48627_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48628_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48628(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48628_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48629_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48629(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48629_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48630_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, KeyValuePair_2_t7134  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48630(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48630_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48631_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48631(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48631_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48632_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, KeyValuePair_2_t7134  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48632(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48632_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48633_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, KeyValuePair_2U5BU5D_t7367* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48633(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, KeyValuePair_2U5BU5D_t7367*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48633_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48634_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48634(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48634_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48635_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48635(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48635_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48636_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, KeyValuePair_2_t7134  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48636(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48636_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48637_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48637(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48637_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48638_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48638(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48638_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48639_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48639(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48639_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7134  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48640_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7163  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48640(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7134  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48640_gshared)(__this /* static, unused */, ___pair, method)
