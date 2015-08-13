#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>
struct FlexibleDictionaryWrapper_2_t1880;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7201;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7296;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7188;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47376_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47376(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47376_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47378_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47378(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47378_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47380_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47380(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47380_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47382_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47382(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47382_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47384_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47384(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47384_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47386_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47386(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47386_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47388_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47388(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47388_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47390_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47390(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47390_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47392_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47392(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47392_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47394_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47394(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47394_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47396_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47396(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47396_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47398_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47398(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47398_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47400_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2U5BU5D_t7296* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47400(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2U5BU5D_t7296*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47400_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47402_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47402(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47402_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47404_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47404(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47404_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47406_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47406(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1880 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47406_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47408_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47408(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47408_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47410_gshared (FlexibleDictionaryWrapper_2_t1880 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47410(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1880 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47410_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47412_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47412(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47412_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7183  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47414_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7205  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47414(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7183  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7205 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47414_gshared)(__this /* static, unused */, ___pair, method)
