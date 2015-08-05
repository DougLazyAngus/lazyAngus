#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1860;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9109;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7160;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7140;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48629_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48629(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48629_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48630_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48630(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48630_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48631_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48631(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48631_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48632_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48632(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48632_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48633_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48633(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48633_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48634_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48634(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48634_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48635_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48635(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48635_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48636_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48636(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48636_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48637_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48637(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48637_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48638_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48638(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48638_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48639_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48639(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48639_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48640_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48640(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48640_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48641_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2U5BU5D_t7368* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48641(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2U5BU5D_t7368*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48641_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48642_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48642(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48642_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48643_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48643(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48643_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48644_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48644(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48644_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48645_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48645(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48645_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48646_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48646(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48646_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48647_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48647(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48647_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48648_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7164  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48648(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48648_gshared)(__this /* static, unused */, ___pair, method)
