#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1924;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9845;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7814;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7957;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7783;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53318_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53318(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53318_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53319_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53319(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53319_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53320_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53320(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53320_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53321_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53321(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53321_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53322_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53322(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53322_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53323_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53323(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53323_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53324_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53324(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53324_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53325_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53325(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53325_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53326_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53326(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53326_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53327_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53327(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53327_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53328_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53328(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53328_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53329_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53329(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53329_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53330_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2U5BU5D_t7957* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53330(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2U5BU5D_t7957*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53330_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53331_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53331(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53331_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53332_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53332(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53332_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53333_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53333(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53333_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53334_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53334(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53334_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53335_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53335(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53335_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53336_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53336(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53336_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7778  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53337_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7818  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53337(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7778  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53337_gshared)(__this /* static, unused */, ___pair, method)
