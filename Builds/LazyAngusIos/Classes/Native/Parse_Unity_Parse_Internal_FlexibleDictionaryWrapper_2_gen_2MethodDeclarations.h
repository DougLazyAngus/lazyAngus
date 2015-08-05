#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>
struct FlexibleDictionaryWrapper_2_t1804;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7120;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1363;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1350;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45697_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45697(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45697_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45698_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45698(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45698_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45699_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45699(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45699_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45700_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45700(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45700_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45701_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45701(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45701_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45702_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45702(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45702_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45703_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45703(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45703_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45704_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45704(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45704_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45705_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45705(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45705_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45706_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, KeyValuePair_2_t729  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45706(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, KeyValuePair_2_t729 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45706_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45707_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45707(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45707_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45708_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, KeyValuePair_2_t729  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45708(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, KeyValuePair_2_t729 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45708_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45709_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, KeyValuePair_2U5BU5D_t1363* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45709(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, KeyValuePair_2U5BU5D_t1363*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45709_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45710_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45710(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45710_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45711_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45711(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45711_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45712_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, KeyValuePair_2_t729  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45712(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, KeyValuePair_2_t729 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45712_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45713_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45713(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45713_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45714_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45714(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45714_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45715_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45715(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45715_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t729  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45716_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7124  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45716(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t729  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45716_gshared)(__this /* static, unused */, ___pair, method)
