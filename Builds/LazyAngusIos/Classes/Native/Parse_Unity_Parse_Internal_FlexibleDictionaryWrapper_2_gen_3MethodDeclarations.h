#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>
struct FlexibleDictionaryWrapper_2_t1804;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1171;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7130;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1362;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1349;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45753_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45753(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45753_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45754_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45754(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45754_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45755_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45755(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45755_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45756_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45756(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45756_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45757_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45757(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45757_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45758_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45758(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45758_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45759_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45759(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45759_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45760_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45760(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45760_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45761_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45761(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45761_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45762_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45762(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45762_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45763_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45763(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45763_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45764_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45764(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45764_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45765_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, KeyValuePair_2U5BU5D_t1362* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45765(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1804 *, KeyValuePair_2U5BU5D_t1362*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45765_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45766_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45766(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45766_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45767_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45767(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45767_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45768_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, KeyValuePair_2_t728  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45768(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1804 *, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45768_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45769_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45769(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45769_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45770_gshared (FlexibleDictionaryWrapper_2_t1804 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45770(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1804 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45770_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45771_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45771(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45771_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t728  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45772_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7134  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45772(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t728  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45772_gshared)(__this /* static, unused */, ___pair, method)
