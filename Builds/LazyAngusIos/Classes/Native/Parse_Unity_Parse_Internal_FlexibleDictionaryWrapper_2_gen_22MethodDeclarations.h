#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1902;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9771;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7789;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7873;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7765;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52183_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52183(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52183_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52185_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52185(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52185_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52187_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52187(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52187_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52189_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52189(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52189_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52191_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52191(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52191_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52193_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52193(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52193_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52195_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52195(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52195_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52197_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52197(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52197_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52199_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52199(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52199_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52201_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52201(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52201_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52203_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52203(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52203_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52205_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52205(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52205_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52207_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2U5BU5D_t7873* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52207(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1902 *, KeyValuePair_2U5BU5D_t7873*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52207_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52209_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52209(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52209_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52211_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52211(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52211_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52213_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, KeyValuePair_2_t7760  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52213(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1902 *, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52213_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52215_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52215(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52215_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52217_gshared (FlexibleDictionaryWrapper_2_t1902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52217(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52217_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52219_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52219(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52219_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7760  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52221_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7793  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52221(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7760  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52221_gshared)(__this /* static, unused */, ___pair, method)
