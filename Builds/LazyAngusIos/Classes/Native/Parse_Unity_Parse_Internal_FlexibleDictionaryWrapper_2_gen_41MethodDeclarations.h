#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1893;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9208;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7197;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7380;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7206;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48470_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48470(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48470_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48471_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48471(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48471_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48472_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48472(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48472_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48473_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48473(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48473_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48474_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48474(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48474_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48475_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48475(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48475_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48476_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48476(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48476_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48477_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48477(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48477_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48478_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48478(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48478_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48479_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48479(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48479_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48480_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48480(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48480_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48481_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48481(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48481_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48482_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2U5BU5D_t7380* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48482(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2U5BU5D_t7380*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48482_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48483_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48483(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48483_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48484_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48484(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48484_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48485_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, KeyValuePair_2_t7201  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48485(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1893 *, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48485_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48486_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48486(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48486_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48487_gshared (FlexibleDictionaryWrapper_2_t1893 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48487(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1893 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48487_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48488_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48488(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48488_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7201  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48489_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7201  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48489(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7201  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48489_gshared)(__this /* static, unused */, ___pair, method)
