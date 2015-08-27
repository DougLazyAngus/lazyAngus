#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>
struct FlexibleDictionaryWrapper_2_t2013;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8939;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7002;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7913;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7285;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55127_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55127(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55127_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55128_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55128(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55128_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55129_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55129(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55129_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55130_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55130(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55130_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55131_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55131(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55131_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55132_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55132(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55132_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55133_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55133(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55133_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55134_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55134(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55134_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55135_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55135(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55135_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55136_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55136(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55136_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55137_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55137(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55137_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55138_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55138(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55138_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55139_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2U5BU5D_t7913* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55139(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2U5BU5D_t7913*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55139_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55140_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55140(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55140_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55141_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55141(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55141_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55142_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55142(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2013 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55142_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55143_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55143(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55143_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55144_gshared (FlexibleDictionaryWrapper_2_t2013 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55144(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2013 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55144_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55145_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55145(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55145_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7062  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55146_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5544  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55146(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7062  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55146_gshared)(__this /* static, unused */, ___pair, method)
