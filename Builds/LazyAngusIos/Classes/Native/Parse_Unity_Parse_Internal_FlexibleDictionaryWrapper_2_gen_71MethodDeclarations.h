#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1872;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9109;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7159;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7432;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7150;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49398_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49398(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49398_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49399_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49399(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49399_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49400_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49400(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49400_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49401_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49401(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49401_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49402_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49402(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49402_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49403_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49403(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49403_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49404_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49404(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49404_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49405_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49405(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49405_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49406_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49406(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49406_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49407_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49407(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49407_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49408_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49408(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49408_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49409_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49409(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49409_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49410_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2U5BU5D_t7432* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49410(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2U5BU5D_t7432*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49410_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49411_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49411(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49411_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49412_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49412(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49412_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49413_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49413(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49413_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49414_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49414(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49414_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49415_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49415(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49415_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49416_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49416(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49416_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7145  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49417_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7163  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49417(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7145  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7163 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49417_gshared)(__this /* static, unused */, ___pair, method)
