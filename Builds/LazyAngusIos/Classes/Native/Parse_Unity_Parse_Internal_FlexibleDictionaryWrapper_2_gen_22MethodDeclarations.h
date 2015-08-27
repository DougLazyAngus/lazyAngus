#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1882;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9141;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7219;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7303;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7195;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47564_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47564(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47564_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47566_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47566(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47566_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47568_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47568(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47568_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47570_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47570(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47570_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47572_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47572(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47572_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47574_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47574(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47574_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47576_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47576(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47576_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47578_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47578(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47578_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47580_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47580(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47580_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47582_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47582(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47582_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47584_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47584(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47584_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47586_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47586(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47586_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47588_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2U5BU5D_t7303* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47588(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2U5BU5D_t7303*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47588_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47590_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47590(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47590_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47592_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47592(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47592_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47594_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, KeyValuePair_2_t7190  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47594(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1882 *, KeyValuePair_2_t7190 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47594_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47596_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47596(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47596_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47598_gshared (FlexibleDictionaryWrapper_2_t1882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47598(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47598_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47600_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47600(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47600_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7190  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47602_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7223  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47602(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7190  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47602_gshared)(__this /* static, unused */, ___pair, method)
