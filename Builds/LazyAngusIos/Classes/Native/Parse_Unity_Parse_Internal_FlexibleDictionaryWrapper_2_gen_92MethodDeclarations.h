#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1894;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9112;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7111;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7563;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7169;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50722_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50722(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50722_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50724_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50724(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50724_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50726_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50726(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50726_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50728_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50728(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50728_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50730_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50730(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50730_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50732_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50732(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50732_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50734_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50734(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50734_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50736_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50736(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50736_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50738_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50738(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50738_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50740_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50740(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50740_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50742_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50742(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50742_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50744_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50744(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50744_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50746_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2U5BU5D_t7563* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50746(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2U5BU5D_t7563*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50746_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50748_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50748(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50748_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50750_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50750(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50750_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50752_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, KeyValuePair_2_t7164  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50752(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1894 *, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50752_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50754_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50754(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50754_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50756_gshared (FlexibleDictionaryWrapper_2_t1894 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50756(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1894 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50756_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50758_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50758(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50758_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7164  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50760_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7113  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50760(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7164  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50760_gshared)(__this /* static, unused */, ___pair, method)
