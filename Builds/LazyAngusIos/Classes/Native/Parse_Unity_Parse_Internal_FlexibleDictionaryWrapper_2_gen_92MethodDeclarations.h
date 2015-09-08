#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1964;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9842;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8210;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7816;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56131_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56131(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56131_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56133_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56133(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56133_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56135_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56135(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56135_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56137_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56137(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56137_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56139_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56139(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56139_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56141_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56141(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56141_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56143_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56143(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56143_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56145_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56145(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56145_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56147_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56147(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56147_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56149_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56149(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56149_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56151_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56151(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56151_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56153_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56153(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56153_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56155_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2U5BU5D_t8210* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56155(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2U5BU5D_t8210*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56155_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56157_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56157(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56157_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56159_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56159(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56159_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56161_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56161(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56161_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56163_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56163(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56163_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56165_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56165(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56165_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56167_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56167(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56167_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7811  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56169_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7760  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56169(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7811  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56169_gshared)(__this /* static, unused */, ___pair, method)
