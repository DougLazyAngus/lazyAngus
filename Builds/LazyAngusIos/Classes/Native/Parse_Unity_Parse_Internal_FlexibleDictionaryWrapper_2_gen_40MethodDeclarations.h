#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1908;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9832;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7752;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7944;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7770;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52998_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52998(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52998_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53000_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53000(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53000_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53002_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53002(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53002_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53004_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53004(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53004_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53006_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53006(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53006_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53008_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53008(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53008_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53010_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53010(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53010_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53012_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53012(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53012_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53014_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53014(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53014_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53016_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53016(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53016_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53018_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53018(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53018_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53020_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53020(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53020_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53022_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2U5BU5D_t7944* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53022(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2U5BU5D_t7944*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53022_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53024_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53024(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53024_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53026_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53026(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53026_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53028_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, KeyValuePair_2_t7765  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53028(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1908 *, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53028_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53030_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53030(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53030_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53032_gshared (FlexibleDictionaryWrapper_2_t1908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53032(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53032_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53034_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53034(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53034_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7765  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53036_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7754  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53036(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7765  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53036_gshared)(__this /* static, unused */, ___pair, method)
