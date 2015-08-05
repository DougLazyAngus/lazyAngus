#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>
struct FlexibleDictionaryWrapper_2_t1968;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8842;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6928;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7835;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7207;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54568_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54568(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54568_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54569_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54569(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54569_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54570_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54570(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54570_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54571_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54571(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54571_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54572_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54572(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54572_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54573_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54573(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54573_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54574_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54574(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54574_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54575_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54575(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54575_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54576_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54576(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54576_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54577_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, KeyValuePair_2_t6984  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54577(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, KeyValuePair_2_t6984 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54577_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54578_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54578(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54578_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54579_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, KeyValuePair_2_t6984  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54579(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, KeyValuePair_2_t6984 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54579_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54580_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, KeyValuePair_2U5BU5D_t7835* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54580(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1968 *, KeyValuePair_2U5BU5D_t7835*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54580_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54581_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54581(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54581_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54582_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54582(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54582_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54583_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, KeyValuePair_2_t6984  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54583(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1968 *, KeyValuePair_2_t6984 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54583_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54584_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54584(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54584_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54585_gshared (FlexibleDictionaryWrapper_2_t1968 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54585(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1968 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54585_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54586_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54586(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54586_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6984  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54587_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6984  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54587(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6984  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6984 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54587_gshared)(__this /* static, unused */, ___pair, method)
