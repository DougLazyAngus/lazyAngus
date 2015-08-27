#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>
struct FlexibleDictionaryWrapper_2_t1859;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7248;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1400;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46777_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46777(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46777_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46778_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46778(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46778_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46779_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46779(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46779_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46780_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46780(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46780_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46781_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46781(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46781_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46782_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46782(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46782_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46783_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46783(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46783_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46784_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46784(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46784_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46785_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46785(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46785_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46786_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46786(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46786_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46787_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46787(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46787_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46788_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46788(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46788_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46789_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, KeyValuePair_2U5BU5D_t1413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46789(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1859 *, KeyValuePair_2U5BU5D_t1413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46789_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46790_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46790(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46790_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46791_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46791(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46791_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46792_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46792(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1859 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46792_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46793_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46793(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46793_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46794_gshared (FlexibleDictionaryWrapper_2_t1859 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46794(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1859 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46794_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46795_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46795(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46795_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t778  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46796_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7252  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46796(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t778  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46796_gshared)(__this /* static, unused */, ___pair, method)
