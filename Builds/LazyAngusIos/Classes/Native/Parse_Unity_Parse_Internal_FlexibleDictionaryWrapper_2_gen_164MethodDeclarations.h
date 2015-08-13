#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>
struct FlexibleDictionaryWrapper_2_t2015;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8932;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7252;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7906;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55135_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55135(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55135_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55136_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55136(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55136_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55137_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55137(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55137_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55138_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55138(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55138_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55139_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55139(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55139_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55140_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55140(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55140_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55141_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55141(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55141_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55142_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55142(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55142_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55143_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55143(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55143_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55144_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55144(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55144_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55145_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55145(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55145_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55146_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55146(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55146_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55147_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2U5BU5D_t7906* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55147(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55147_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55148_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55148(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55148_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55149_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55149(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55149_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55150_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55150(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2015 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55150_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55151_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55151(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55151_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55152_gshared (FlexibleDictionaryWrapper_2_t2015 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55152(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2015 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55152_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55153_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55153(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55153_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7055  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55154_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7256  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55154(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7055  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7256 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55154_gshared)(__this /* static, unused */, ___pair, method)
