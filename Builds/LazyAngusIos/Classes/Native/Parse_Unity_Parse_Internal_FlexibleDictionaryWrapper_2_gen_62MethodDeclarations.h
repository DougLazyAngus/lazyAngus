#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>
struct FlexibleDictionaryWrapper_2_t1860;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9105;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6931;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7364;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7136;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48751_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48751(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48751_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48752_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48752(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48752_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48753_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48753(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48753_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48754_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48754(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48754_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48755_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48755(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48755_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48756_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48756(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48756_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48757_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48757(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48757_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48758_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48758(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48758_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48759_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48759(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48759_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48760_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t7131  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48760(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48760_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48761_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48761(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48761_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48762_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t7131  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48762(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48762_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48763_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2U5BU5D_t7364* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48763(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2U5BU5D_t7364*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48763_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48764_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48764(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48764_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48765_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48765(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48765_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48766_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, KeyValuePair_2_t7131  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48766(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1860 *, KeyValuePair_2_t7131 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48766_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48767_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48767(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48767_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48768_gshared (FlexibleDictionaryWrapper_2_t1860 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48768(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1860 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48768_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48769_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48769(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48769_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7131  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48770_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7001  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48770(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7131  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48770_gshared)(__this /* static, unused */, ___pair, method)
