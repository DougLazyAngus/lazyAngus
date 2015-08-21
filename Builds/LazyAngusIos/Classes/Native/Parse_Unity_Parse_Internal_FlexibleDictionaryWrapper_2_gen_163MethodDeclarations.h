#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>
struct FlexibleDictionaryWrapper_2_t2012;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8936;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7245;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7910;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7282;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55180_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55180(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55180_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55181_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55181(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55181_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55182_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55182(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55182_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55183_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55183(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55183_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55184_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55184(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55184_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55185_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55185(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55185_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55186_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55186(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55186_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55187_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55187(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55187_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55188_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55188(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55188_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55189_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55189(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55189_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55190_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55190(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55190_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55191_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55191(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55191_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55192_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, KeyValuePair_2U5BU5D_t7910* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55192(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2012 *, KeyValuePair_2U5BU5D_t7910*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55192_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55193_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55193(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55193_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55194_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55194(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55194_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55195_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55195(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2012 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55195_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55196_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55196(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55196_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55197_gshared (FlexibleDictionaryWrapper_2_t2012 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55197(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2012 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55197_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55198_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55198(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55198_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7059  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55199_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7249  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55199(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7059  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55199_gshared)(__this /* static, unused */, ___pair, method)
