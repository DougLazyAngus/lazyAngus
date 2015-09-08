#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1915;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7789;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7950;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7776;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53175_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53175(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53175_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53176_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53176(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53176_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53177_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53177(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53177_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53178_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53178(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53178_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53179_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53179(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53179_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53180_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53180(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53180_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53181_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53181(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53181_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53182_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53182(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53182_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53183_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53183(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53183_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53184_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53184(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53184_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53185_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53185(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53185_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53186_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53186(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53186_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53187_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2U5BU5D_t7950* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53187(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2U5BU5D_t7950*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53187_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53188_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53188(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53188_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53189_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53189(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53189_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53190_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53190(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1915 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53190_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53191_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53191(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53191_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53192_gshared (FlexibleDictionaryWrapper_2_t1915 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53192(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1915 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53192_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53193_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53193(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53193_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7771  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53194_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7793  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53194(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7771  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53194_gshared)(__this /* static, unused */, ___pair, method)
