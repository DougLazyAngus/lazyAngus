#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1909;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9102;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7099;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7681;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7179;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52198_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52198(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52198_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52200_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52200(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52200_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52202_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52202(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52202_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52204_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52204(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52204_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52206_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52206(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52206_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52208_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52208(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52208_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52210_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52210(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52210_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52212_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52212(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52212_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52214_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52214(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52214_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52216_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52216(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52216_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52218_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52218(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52218_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52220_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52220(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52220_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52222_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2U5BU5D_t7681* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52222(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2U5BU5D_t7681*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52222_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52224_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52224(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52224_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52226_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52226(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52226_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52228_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, KeyValuePair_2_t7174  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52228(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1909 *, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52228_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52230_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52230(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52230_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52232_gshared (FlexibleDictionaryWrapper_2_t1909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52232(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52232_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52234_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52234(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52234_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7174  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52236_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7101  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52236(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7174  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52236_gshared)(__this /* static, unused */, ___pair, method)
