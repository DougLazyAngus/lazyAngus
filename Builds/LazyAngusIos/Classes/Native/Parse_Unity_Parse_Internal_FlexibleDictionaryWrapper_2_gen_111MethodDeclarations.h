#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>
struct FlexibleDictionaryWrapper_2_t1911;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8981;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7169;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7626;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7178;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51765_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51765(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51765_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51766_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51766(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51766_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51767_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51767(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51767_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51768_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51768(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51768_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51769_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51769(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51769_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51770_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51770(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51770_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51771_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51771(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51771_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51772_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51772(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51772_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51773_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51773(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51773_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51774_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51774(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51774_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51775_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51775(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51775_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51776_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51776(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51776_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51777_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2U5BU5D_t7626* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51777(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2U5BU5D_t7626*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51777_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51778_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51778(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51778_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51779_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51779(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51779_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51780_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, KeyValuePair_2_t7173  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51780(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1911 *, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51780_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51781_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51781(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51781_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51782_gshared (FlexibleDictionaryWrapper_2_t1911 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51782(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1911 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51782_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51783_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51783(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51783_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7173  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51784_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7173  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51784(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7173  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51784_gshared)(__this /* static, unused */, ___pair, method)
