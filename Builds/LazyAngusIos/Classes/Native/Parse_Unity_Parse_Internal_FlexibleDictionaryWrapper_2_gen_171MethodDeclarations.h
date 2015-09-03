#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>
struct FlexibleDictionaryWrapper_2_t2039;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9842;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t836;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8551;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t8534;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m60094_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m60094(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2039 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m60094_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60095_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, String_t* ___key, DateTime_t287  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60095(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2039 *, String_t*, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60095_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m60096_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m60096(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2039 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m60096_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60097_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m60097(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2039 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m60097_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60098_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60098(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2039 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60098_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m60099_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, String_t* ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m60099(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2039 *, String_t*, DateTime_t287 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m60099_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m60100_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m60100(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2039 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m60100_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Item(System.String)
extern "C" DateTime_t287  FlexibleDictionaryWrapper_2_get_Item_m60101_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m60101(__this, ___key, method) (( DateTime_t287  (*) (FlexibleDictionaryWrapper_2_t2039 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m60101_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m60102_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, String_t* ___key, DateTime_t287  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m60102(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2039 *, String_t*, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m60102_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60103_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, KeyValuePair_2_t7672  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60103(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2039 *, KeyValuePair_2_t7672 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60103_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m60104_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m60104(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2039 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m60104_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m60105_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, KeyValuePair_2_t7672  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m60105(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2039 *, KeyValuePair_2_t7672 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m60105_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m60106_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, KeyValuePair_2U5BU5D_t8551* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m60106(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2039 *, KeyValuePair_2U5BU5D_t8551*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m60106_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m60107_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m60107(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2039 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m60107_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60108_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m60108(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2039 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m60108_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60109_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, KeyValuePair_2_t7672  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60109(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2039 *, KeyValuePair_2_t7672 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60109_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60110_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m60110(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2039 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m60110_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60111_gshared (FlexibleDictionaryWrapper_2_t2039 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60111(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2039 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60111_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::<get_Values>b__0(TIn)
extern "C" DateTime_t287  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60112_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60112(__this /* static, unused */, ___item, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60112_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7672  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60113_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t791  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60113(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7672  (*) (Object_t * /* static, unused */, KeyValuePair_2_t791 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60113_gshared)(__this /* static, unused */, ___pair, method)
