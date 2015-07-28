#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>
struct FlexibleDictionaryWrapper_2_t1793;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7100;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1353;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1340;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45550_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45550(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1793 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45550_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45552_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45552(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1793 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45552_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45554_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45554(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1793 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45554_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45556_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45556(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1793 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45556_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45558_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45558(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1793 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45558_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45560_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45560(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1793 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45560_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45562_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45562(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1793 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45562_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45564_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45564(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1793 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45564_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45566_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45566(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1793 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45566_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45568_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45568(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1793 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45568_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45570_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45570(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1793 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45570_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45572_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45572(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1793 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45572_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45574_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, KeyValuePair_2U5BU5D_t1353* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45574(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1793 *, KeyValuePair_2U5BU5D_t1353*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45574_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45576_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45576(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1793 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45576_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45578_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45578(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1793 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45578_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45580_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45580(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1793 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45580_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45582_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45582(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1793 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45582_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45584_gshared (FlexibleDictionaryWrapper_2_t1793 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45584(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1793 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45584_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45586_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45586(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45586_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t720  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45588_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7102  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45588(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t720  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45588_gshared)(__this /* static, unused */, ___pair, method)
