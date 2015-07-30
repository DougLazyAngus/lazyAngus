#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1832;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9037;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7178;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7222;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7114;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47011_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47011(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1832 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47011_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47013_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47013(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1832 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47013_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47015_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47015(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1832 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47015_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47017_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47017(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1832 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47017_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47019_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47019(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1832 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47019_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47021_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47021(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1832 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47021_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47023_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47023(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1832 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47023_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47025_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47025(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1832 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47025_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47027_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47027(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1832 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47027_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47029_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, KeyValuePair_2_t7109  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47029(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1832 *, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47029_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47031_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47031(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1832 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47031_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47033_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, KeyValuePair_2_t7109  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47033(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1832 *, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47033_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47035_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, KeyValuePair_2U5BU5D_t7222* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47035(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1832 *, KeyValuePair_2U5BU5D_t7222*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47035_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47037_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47037(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1832 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47037_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47039_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47039(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1832 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47039_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47041_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, KeyValuePair_2_t7109  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47041(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1832 *, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47041_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47043_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47043(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1832 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47043_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47045_gshared (FlexibleDictionaryWrapper_2_t1832 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47045(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1832 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47045_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47047_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47047(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47047_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7109  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47049_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7182  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47049(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7109  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47049_gshared)(__this /* static, unused */, ___pair, method)
