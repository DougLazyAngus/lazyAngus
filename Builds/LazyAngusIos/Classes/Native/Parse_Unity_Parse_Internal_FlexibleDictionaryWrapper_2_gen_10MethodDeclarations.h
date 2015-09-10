#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>
struct FlexibleDictionaryWrapper_2_t1889;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7589;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1440;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1427;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51605_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51605(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51605_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51606_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51606(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51606_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51607_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51607(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51607_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51608_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51608(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51608_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51609_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51609(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51609_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51610_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51610(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51610_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51611_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51611(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51611_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51612_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51612(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51612_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51613_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51613(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51613_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51614_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2_t802  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51614(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51614_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51615_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51615(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51615_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51616_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2_t802  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51616(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51616_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51617_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2U5BU5D_t1440* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51617(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2U5BU5D_t1440*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51617_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51618_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51618(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51618_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51619_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51619(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51619_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51620_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, KeyValuePair_2_t802  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51620(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1889 *, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51620_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51621_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51621(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51621_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51622_gshared (FlexibleDictionaryWrapper_2_t1889 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51622(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1889 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51622_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51623_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51623(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51623_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t802  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51624_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7659  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51624(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t802  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7659 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51624_gshared)(__this /* static, unused */, ___pair, method)
