#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>
struct FlexibleDictionaryWrapper_2_t2034;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8968;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7041;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7942;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7314;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55655_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55655(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55655_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55656_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55656(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55656_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55657_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55657(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55657_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55658_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55658(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55658_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55659_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55659(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55659_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55660_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55660(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55660_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55661_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55661(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55661_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55662_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55662(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55662_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55663_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55663(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55663_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55664_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55664(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55664_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55665_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55665(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55665_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55666_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55666(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55666_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55667_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2U5BU5D_t7942* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55667(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2U5BU5D_t7942*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55667_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55668_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55668(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55668_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55669_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55669(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55669_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55670_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, KeyValuePair_2_t7091  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55670(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2034 *, KeyValuePair_2_t7091 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55670_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55671_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55671(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55671_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55672_gshared (FlexibleDictionaryWrapper_2_t2034 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55672(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2034 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55672_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55673_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55673(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55673_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7091  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55674_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7111  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55674(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7091  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55674_gshared)(__this /* static, unused */, ___pair, method)
