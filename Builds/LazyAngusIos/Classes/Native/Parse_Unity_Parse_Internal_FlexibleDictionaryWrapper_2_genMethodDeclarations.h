#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
struct FlexibleDictionaryWrapper_2_t1791;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1353;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1340;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m30644_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m30644(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1791 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30644_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m30645_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m30645(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1791 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30645_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m30646_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m30646(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1791 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30646_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m30647_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m30647(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1791 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30647_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m30648_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m30648(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1791 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30648_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m30649_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m30649(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1791 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30649_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m30650_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m30650(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1791 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30650_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m30651_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m30651(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1791 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30651_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m30652_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m30652(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1791 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30652_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m30653_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m30653(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1791 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30653_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m30654_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m30654(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1791 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30654_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m30655_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m30655(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1791 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30655_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m30656_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, KeyValuePair_2U5BU5D_t1353* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m30656(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1791 *, KeyValuePair_2U5BU5D_t1353*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30656_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m30657_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m30657(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1791 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30657_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m30658_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m30658(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1791 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30658_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m30659_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m30659(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1791 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30659_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m30660_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m30660(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1791 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30660_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30661_gshared (FlexibleDictionaryWrapper_2_t1791 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30661(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1791 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30661_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30662_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30662(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30662_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t720  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30663_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t720  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30663(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t720  (*) (Object_t * /* static, unused */, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30663_gshared)(__this /* static, unused */, ___pair, method)
