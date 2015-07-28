#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1858;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9099;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7100;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7422;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7140;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49090_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49090(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49090_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49092_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49092(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49092_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49094_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49094(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49094_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49096_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49096(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49096_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49098_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49098(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49098_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49100_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49100(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49100_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49102_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49102(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49102_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49104_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49104(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49104_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49106_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49106(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49106_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49108_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49108(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49108_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49110_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49110(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49110_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49112_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49112(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49112_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49114_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2U5BU5D_t7422* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49114(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2U5BU5D_t7422*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49114_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49116_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49116(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49116_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49118_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49118(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49118_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49120_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49120(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1858 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49120_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49122_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49122(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49122_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49124_gshared (FlexibleDictionaryWrapper_2_t1858 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49124(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1858 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49124_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49126_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49126(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49126_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49128_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7102  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49128(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49128_gshared)(__this /* static, unused */, ___pair, method)
