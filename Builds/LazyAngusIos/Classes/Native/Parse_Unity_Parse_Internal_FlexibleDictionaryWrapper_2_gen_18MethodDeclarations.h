#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1897;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9766;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7762;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7868;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7760;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52037_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52037(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52037_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52039_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52039(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52039_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52041_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52041(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52041_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52043_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52043(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52043_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52045_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52045(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52045_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52047_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52047(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52047_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52049_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52049(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52049_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52051_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52051(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52051_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52053_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52053(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52053_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52055_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7755  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52055(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7755 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52055_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52057_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52057(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52057_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52059_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7755  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52059(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7755 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52059_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52061_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2U5BU5D_t7868* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52061(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2U5BU5D_t7868*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52061_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52063_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52063(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52063_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52065_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52065(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52065_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52067_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7755  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52067(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7755 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52067_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52069_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52069(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52069_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52071_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52071(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52071_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52073_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52073(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52073_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7755  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52075_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7766  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52075(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7755  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7766 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52075_gshared)(__this /* static, unused */, ___pair, method)
