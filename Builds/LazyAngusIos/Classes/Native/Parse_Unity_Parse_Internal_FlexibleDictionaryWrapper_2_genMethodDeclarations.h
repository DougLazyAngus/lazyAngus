#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
struct FlexibleDictionaryWrapper_2_t1800;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1362;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1349;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m30714_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m30714(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m30714_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m30715_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m30715(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30715_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m30716_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m30716(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m30716_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m30717_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m30717(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m30717_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m30718_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m30718(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30718_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m30719_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m30719(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m30719_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m30720_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m30720(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m30720_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m30721_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m30721(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m30721_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m30722_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m30722(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m30722_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m30723_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m30723(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m30723_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m30724_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m30724(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m30724_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m30725_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m30725(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m30725_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m30726_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, KeyValuePair_2U5BU5D_t1362* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m30726(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1800 *, KeyValuePair_2U5BU5D_t1362*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m30726_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m30727_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m30727(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m30727_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m30728_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m30728(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m30728_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m30729_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m30729(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1800 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m30729_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m30730_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m30730(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m30730_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30731_gshared (FlexibleDictionaryWrapper_2_t1800 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30731(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1800 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m30731_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30732_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30732(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m30732_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t728  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30733_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t728  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30733(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t728  (*) (Object_t * /* static, unused */, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m30733_gshared)(__this /* static, unused */, ___pair, method)
