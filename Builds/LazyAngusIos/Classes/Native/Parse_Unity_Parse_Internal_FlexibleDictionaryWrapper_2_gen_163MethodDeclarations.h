#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>
struct FlexibleDictionaryWrapper_2_t2014;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8932;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7241;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7906;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55089_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55089(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55089_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55090_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55090(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55090_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55091_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55091(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55091_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55092_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55092(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55092_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55093_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55093(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55093_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55094_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55094(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55094_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55095_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55095(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55095_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55096_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55096(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55096_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55097_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55097(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55097_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55098_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55098(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55098_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55099_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55099(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55099_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55100_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55100(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55100_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55101_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2U5BU5D_t7906* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55101(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55101_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55102_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55102(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55102_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55103_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55103(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55103_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55104_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55104(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2014 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55104_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55105_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55105(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55105_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55106_gshared (FlexibleDictionaryWrapper_2_t2014 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55106(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2014 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55106_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55107_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55107(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55107_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7055  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55108_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7245  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55108(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7055  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55108_gshared)(__this /* static, unused */, ___pair, method)
