#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>
struct FlexibleDictionaryWrapper_2_t1963;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9080;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7009;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7702;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7254;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52647_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52647(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1963 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52647_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52648_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52648(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1963 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52648_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52649_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52649(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1963 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52649_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52650_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52650(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1963 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52650_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52651_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52651(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1963 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52651_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52652_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52652(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1963 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52652_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52653_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52653(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1963 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52653_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m52654_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52654(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1963 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52654_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52655_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52655(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1963 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52655_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52656_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52656(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1963 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52656_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52657_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52657(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1963 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52657_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52658_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52658(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1963 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52658_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52659_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, KeyValuePair_2U5BU5D_t7702* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52659(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1963 *, KeyValuePair_2U5BU5D_t7702*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52659_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52660_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52660(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1963 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52660_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52661_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52661(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1963 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52661_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52662_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, KeyValuePair_2_t7249  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52662(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1963 *, KeyValuePair_2_t7249 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52662_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52663_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52663(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1963 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52663_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52664_gshared (FlexibleDictionaryWrapper_2_t1963 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52664(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1963 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52664_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52665_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52665(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52665_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7249  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52666_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7079  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52666(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7249  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52666_gshared)(__this /* static, unused */, ___pair, method)
