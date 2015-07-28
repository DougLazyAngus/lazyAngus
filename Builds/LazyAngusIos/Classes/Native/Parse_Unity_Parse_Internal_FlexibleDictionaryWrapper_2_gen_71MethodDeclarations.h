#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1863;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9099;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7149;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7422;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7140;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49328_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49328(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49328_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49329_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49329(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49329_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49330_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49330(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49330_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49331_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49331(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49331_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49332_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49332(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49332_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49333_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49333(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49333_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49334_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49334(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49334_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49335_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49335(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49335_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49336_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49336(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49336_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49337_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49337(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49337_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49338_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49338(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49338_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49339_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49339(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49339_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49340_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, KeyValuePair_2U5BU5D_t7422* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49340(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1863 *, KeyValuePair_2U5BU5D_t7422*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49340_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49341_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49341(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49341_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49342_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49342(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49342_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49343_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49343(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1863 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49343_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49344_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49344(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49344_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49345_gshared (FlexibleDictionaryWrapper_2_t1863 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49345(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1863 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49345_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49346_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49346(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49346_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49347_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7153  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49347(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49347_gshared)(__this /* static, unused */, ___pair, method)
