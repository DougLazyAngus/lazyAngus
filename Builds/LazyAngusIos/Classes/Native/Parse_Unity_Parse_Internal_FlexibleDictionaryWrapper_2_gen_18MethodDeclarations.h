#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1879;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7190;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7296;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7188;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47309_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47309(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47309_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47311_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47311(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47311_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47313_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47313(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47313_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47315_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47315(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47315_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47317_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47317(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47317_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47319_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47319(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47319_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47321_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47321(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47321_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47323_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47323(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47323_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47325_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47325(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47325_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47327_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47327(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47327_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47329_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47329(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47329_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47331_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47331(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47331_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47333_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2U5BU5D_t7296* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47333(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2U5BU5D_t7296*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47333_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47335_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47335(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47335_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47337_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47337(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47337_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47339_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47339(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1879 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47339_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47341_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47341(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47341_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47343_gshared (FlexibleDictionaryWrapper_2_t1879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47343(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47343_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47345_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47345(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47345_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7183  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47347_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7194  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47347(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7183  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7194 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47347_gshared)(__this /* static, unused */, ___pair, method)
