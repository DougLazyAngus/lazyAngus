#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1831;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9096;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7099;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7291;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7117;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47536_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47536(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1831 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47536_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47538_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47538(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1831 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47538_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47540_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47540(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1831 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47540_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47542_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47542(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1831 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47542_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47544_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47544(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1831 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47544_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47546_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47546(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1831 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47546_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47548_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47548(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1831 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47548_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m47550_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47550(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1831 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47550_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47552_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47552(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1831 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47552_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47554_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47554(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1831 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47554_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47556_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47556(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1831 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47556_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47558_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47558(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1831 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47558_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47560_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, KeyValuePair_2U5BU5D_t7291* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47560(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1831 *, KeyValuePair_2U5BU5D_t7291*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47560_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47562_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47562(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1831 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47562_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47564_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47564(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1831 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47564_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47566_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, KeyValuePair_2_t7112  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47566(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1831 *, KeyValuePair_2_t7112 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47566_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47568_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47568(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1831 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47568_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47570_gshared (FlexibleDictionaryWrapper_2_t1831 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47570(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1831 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47570_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47572_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47572(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47572_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7112  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47574_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7101  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47574(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7112  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47574_gshared)(__this /* static, unused */, ___pair, method)
