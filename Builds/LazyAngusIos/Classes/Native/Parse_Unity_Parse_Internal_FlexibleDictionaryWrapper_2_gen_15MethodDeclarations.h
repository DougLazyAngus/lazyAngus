#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1878;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7181;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7296;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7188;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m47218_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m47218(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m47218_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47220_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47220(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47220_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m47222_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m47222(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m47222_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m47224_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m47224(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m47224_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47226_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47226(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47226_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m47228_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m47228(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m47228_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m47230_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m47230(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m47230_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m47232_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m47232(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m47232_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m47234_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m47234(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m47234_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m47236_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m47236(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m47236_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m47238_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m47238(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m47238_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m47240_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m47240(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m47240_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m47242_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2U5BU5D_t7296* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m47242(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2U5BU5D_t7296*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m47242_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m47244_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m47244(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m47244_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m47246_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m47246(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m47246_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m47248_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m47248(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1878 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m47248_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m47250_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m47250(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m47250_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47252_gshared (FlexibleDictionaryWrapper_2_t1878 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47252(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1878 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m47252_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47254_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47254(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m47254_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7183  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47256_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7183  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47256(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7183  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m47256_gshared)(__this /* static, unused */, ___pair, method)
