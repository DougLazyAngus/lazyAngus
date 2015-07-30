#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>
struct FlexibleDictionaryWrapper_2_t1959;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6921;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7832;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7204;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54306_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54306(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54306_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54307_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54307(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54307_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54308_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54308(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54308_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54309_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54309(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54309_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54310_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54310(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54310_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54311_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54311(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54311_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54312_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54312(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54312_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54313_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54313(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54313_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54314_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54314(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54314_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54315_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t6981  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54315(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54315_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54316_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54316(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54316_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54317_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t6981  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54317(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54317_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54318_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2U5BU5D_t7832* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54318(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2U5BU5D_t7832*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54318_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54319_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54319(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54319_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54320_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54320(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54320_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54321_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t6981  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54321(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54321_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54322_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54322(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54322_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54323_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54323(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54323_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54324_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54324(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54324_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6981  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54325_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5495  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54325(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6981  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54325_gshared)(__this /* static, unused */, ___pair, method)
