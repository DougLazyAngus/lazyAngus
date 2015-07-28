#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>
struct FlexibleDictionaryWrapper_2_t1869;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8625;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7487;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7147;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49567_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49567(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49567_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49568_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49568(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49568_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49569_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49569(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49569_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49570_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49570(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49570_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49571_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49571(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49571_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49572_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49572(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49572_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49573_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49573(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49573_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m49574_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49574(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49574_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49575_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49575(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49575_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49576_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49576(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49576_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49577_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49577(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49577_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49578_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49578(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49578_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49579_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2U5BU5D_t7487* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49579(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2U5BU5D_t7487*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49579_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49580_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49580(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49580_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49581_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49581(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49581_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49582_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, KeyValuePair_2_t5488  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49582(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1869 *, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49582_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49583_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49583(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49583_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49584_gshared (FlexibleDictionaryWrapper_2_t1869 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49584(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1869 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49584_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49585_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49585(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49585_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5488  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49586_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t720  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49586(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5488  (*) (Object_t * /* static, unused */, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49586_gshared)(__this /* static, unused */, ___pair, method)
