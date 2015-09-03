#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1895;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9765;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7752;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7867;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7759;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51933_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51933(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51933_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51935_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51935(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51935_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51937_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51937(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51937_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51939_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51939(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51939_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51941_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51941(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51941_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51943_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51943(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51943_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51945_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51945(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51945_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m51947_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51947(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51947_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51949_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51949(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51949_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51951_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51951(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51951_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51953_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51953(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51953_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51955_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51955(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51955_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51957_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2U5BU5D_t7867* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51957(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2U5BU5D_t7867*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51957_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51959_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51959(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51959_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51961_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51961(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51961_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51963_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51963(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1895 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51963_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51965_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51965(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51965_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51967_gshared (FlexibleDictionaryWrapper_2_t1895 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51967(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1895 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51967_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51969_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51969(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51969_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7754  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51971_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7754  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51971(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7754  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51971_gshared)(__this /* static, unused */, ___pair, method)
