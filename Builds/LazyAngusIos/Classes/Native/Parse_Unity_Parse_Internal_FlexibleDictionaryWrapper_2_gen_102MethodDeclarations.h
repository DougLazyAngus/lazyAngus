#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>
struct FlexibleDictionaryWrapper_2_t1981;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9849;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7583;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8217;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7823;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56622_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56622(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56622_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56623_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56623(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56623_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56624_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56624(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56624_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56625_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56625(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56625_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56626_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56626(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56626_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56627_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56627(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56627_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56628_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56628(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56628_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56629_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56629(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56629_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56630_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56630(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56630_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56631_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56631(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56631_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56632_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56632(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56632_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56633_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56633(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56633_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56634_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, KeyValuePair_2U5BU5D_t8217* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56634(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1981 *, KeyValuePair_2U5BU5D_t8217*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56634_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56635_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56635(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56635_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56636_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56636(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56636_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56637_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56637(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1981 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56637_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56638_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56638(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56638_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56639_gshared (FlexibleDictionaryWrapper_2_t1981 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56639(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1981 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56639_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56640_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56640(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56640_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7818  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56641_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7639  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56641(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7818  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7639 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56641_gshared)(__this /* static, unused */, ___pair, method)
