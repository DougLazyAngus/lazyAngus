#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1896;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9765;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7761;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7867;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7759;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52024_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52024(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52024_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52026_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52026(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52026_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52028_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52028(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52028_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52030_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52030(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52030_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52032_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52032(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52032_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52034_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52034(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52034_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52036_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52036(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52036_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52038_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52038(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52038_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52040_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52040(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52040_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52042_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52042(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52042_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52044_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52044(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52044_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52046_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52046(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52046_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52048_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2U5BU5D_t7867* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52048(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2U5BU5D_t7867*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52048_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52050_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52050(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52050_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52052_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52052(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52052_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52054_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52054(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52054_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52056_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52056(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52056_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52058_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52058(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52058_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52060_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52060(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52060_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7754  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52062_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7765  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52062(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7754  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7765 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52062_gshared)(__this /* static, unused */, ___pair, method)
