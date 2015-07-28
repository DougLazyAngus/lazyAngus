#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1884;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9101;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7100;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7552;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7158;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50644_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50644(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50644_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50646_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50646(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50646_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50648_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50648(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50648_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50650_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50650(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50650_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50652_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50652(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50652_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50654_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50654(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50654_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50656_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50656(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50656_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50658_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50658(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50658_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50660_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50660(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50660_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50662_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50662(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50662_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50664_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50664(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50664_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50666_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50666(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50666_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50668_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2U5BU5D_t7552* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50668(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2U5BU5D_t7552*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50668_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50670_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50670(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50670_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50672_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50672(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50672_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50674_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50674(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1884 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50674_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50676_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50676(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50676_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50678_gshared (FlexibleDictionaryWrapper_2_t1884 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50678(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1884 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50678_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50680_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50680(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50680_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7153  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50682_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7102  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50682(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7153  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50682_gshared)(__this /* static, unused */, ___pair, method)
