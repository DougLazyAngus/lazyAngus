#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1934;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9834;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7752;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8074;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7792;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54552_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54552(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54552_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54554_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54554(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54554_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54556_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54556(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54556_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54558_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54558(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54558_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54560_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54560(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54560_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54562_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54562(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54562_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54564_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54564(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54564_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54566_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54566(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54566_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54568_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54568(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54568_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54570_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54570(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54570_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54572_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54572(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54572_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54574_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54574(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54574_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54576_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, KeyValuePair_2U5BU5D_t8074* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54576(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1934 *, KeyValuePair_2U5BU5D_t8074*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54576_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54578_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54578(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54578_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54580_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54580(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54580_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54582_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54582(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1934 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54582_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54584_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54584(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54584_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54586_gshared (FlexibleDictionaryWrapper_2_t1934 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54586(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1934 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54586_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54588_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54588(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54588_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7787  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54590_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7754  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54590(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7787  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54590_gshared)(__this /* static, unused */, ___pair, method)
