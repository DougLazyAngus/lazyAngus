#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>
struct FlexibleDictionaryWrapper_2_t2049;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1251;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t7600;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1440;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1427;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m60133_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m60133(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m60133_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60134_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60134(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60134_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m60135_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m60135(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m60135_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60136_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m60136(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m60136_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60137_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60137(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60137_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m60138_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m60138(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m60138_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m60139_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m60139(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m60139_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m60140_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m60140(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m60140_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m60141_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m60141(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m60141_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60142_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, KeyValuePair_2_t802  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60142(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60142_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m60143_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m60143(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m60143_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m60144_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, KeyValuePair_2_t802  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m60144(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m60144_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m60145_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, KeyValuePair_2U5BU5D_t1440* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m60145(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2049 *, KeyValuePair_2U5BU5D_t1440*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m60145_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m60146_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m60146(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m60146_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60147_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m60147(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m60147_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60148_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, KeyValuePair_2_t802  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60148(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2049 *, KeyValuePair_2_t802 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60148_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60149_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m60149(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m60149_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60150_gshared (FlexibleDictionaryWrapper_2_t2049 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60150(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2049 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60150_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60151_gshared (Object_t * __this /* static, unused */, DateTime_t287  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60151(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60151_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t802  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60152_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7685  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60152(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t802  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7685 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60152_gshared)(__this /* static, unused */, ___pair, method)
