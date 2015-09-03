#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>
struct FlexibleDictionaryWrapper_2_t1957;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7570;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8139;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7799;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55763_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55763(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55763_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55764_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55764(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55764_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55765_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55765(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55765_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55766_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55766(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55766_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55767_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55767(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55767_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55768_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55768(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55768_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55769_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55769(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55769_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55770_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55770(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55770_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55771_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55771(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55771_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55772_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55772(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55772_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55773_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55773(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55773_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55774_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55774(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55774_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55775_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, KeyValuePair_2U5BU5D_t8139* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55775(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1957 *, KeyValuePair_2U5BU5D_t8139*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55775_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55776_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55776(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55776_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55777_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55777(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55777_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55778_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55778(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1957 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55778_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55779_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55779(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55779_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55780_gshared (FlexibleDictionaryWrapper_2_t1957 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55780(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1957 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55780_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55781_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55781(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55781_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6093  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55782_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7626  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55782(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6093  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55782_gshared)(__this /* static, unused */, ___pair, method)
