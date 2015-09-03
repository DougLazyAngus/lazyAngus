#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>
struct FlexibleDictionaryWrapper_2_t1971;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9707;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8269;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7821;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56583_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56583(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56583_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56584_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56584(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56584_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56585_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56585(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56585_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56586_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56586(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56586_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56587_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56587(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56587_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56588_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56588(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56588_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56589_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56589(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56589_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m56590_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56590(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56590_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56591_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56591(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56591_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56592_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56592(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56592_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56593_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56593(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56593_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56594_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56594(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56594_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56595_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2U5BU5D_t8269* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56595(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2U5BU5D_t8269*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56595_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56596_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56596(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56596_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56597_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56597(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56597_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56598_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56598(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56598_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56599_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56599(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56599_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56600_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56600(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56600_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56601_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56601(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56601_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7816  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56602_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t791  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56602(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7816  (*) (Object_t * /* static, unused */, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56602_gshared)(__this /* static, unused */, ___pair, method)
