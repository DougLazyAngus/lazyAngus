#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1912;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7950;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7776;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53023_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53023(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53023_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53025_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53025(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53025_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53027_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53027(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53027_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53029_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53029(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53029_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53031_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53031(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53031_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53033_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53033(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53033_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53035_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53035(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53035_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53037_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53037(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53037_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53039_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53039(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53039_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53041_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53041(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53041_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53043_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53043(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53043_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53045_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53045(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53045_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53047_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2U5BU5D_t7950* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53047(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2U5BU5D_t7950*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53047_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53049_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53049(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53049_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53051_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53051(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53051_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53053_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53053(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1912 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53053_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53055_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53055(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53055_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53057_gshared (FlexibleDictionaryWrapper_2_t1912 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53057(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1912 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53057_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53059_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53059(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53059_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7771  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53061_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7760  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53061(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7771  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53061_gshared)(__this /* static, unused */, ___pair, method)
