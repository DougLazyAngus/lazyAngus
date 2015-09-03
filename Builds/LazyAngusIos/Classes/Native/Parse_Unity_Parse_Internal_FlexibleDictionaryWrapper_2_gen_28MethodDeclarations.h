#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>
struct FlexibleDictionaryWrapper_2_t1901;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9765;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7812;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7867;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7759;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52359_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52359(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52359_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52361_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52361(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52361_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52363_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52363(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52363_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52365_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52365(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52365_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52367_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52367(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52367_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52369_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52369(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52369_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52371_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52371(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52371_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52373_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52373(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52373_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52375_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52375(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52375_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52377_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52377(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52377_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52379_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52379(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52379_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52381_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52381(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52381_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52383_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2U5BU5D_t7867* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52383(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2U5BU5D_t7867*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52383_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52385_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52385(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52385_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52387_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52387(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52387_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52389_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52389(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1901 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52389_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52391_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52391(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52391_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52393_gshared (FlexibleDictionaryWrapper_2_t1901 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52393(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1901 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52393_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52395_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52395(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52395_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7754  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52397_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7816  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52397(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7754  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52397_gshared)(__this /* static, unused */, ___pair, method)
