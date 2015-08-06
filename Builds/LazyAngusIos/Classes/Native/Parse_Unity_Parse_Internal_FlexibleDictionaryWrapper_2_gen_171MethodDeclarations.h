#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>
struct FlexibleDictionaryWrapper_2_t1971;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9116;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t765;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t7908;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t7891;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54695_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54695(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54695_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54696_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, DateTime_t287  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54696(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54696_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54697_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54697(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54697_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54698_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54698(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54698_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54699_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54699(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54699_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54700_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54700(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, DateTime_t287 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54700_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54701_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54701(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54701_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Item(System.String)
extern "C" DateTime_t287  FlexibleDictionaryWrapper_2_get_Item_m54702_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54702(__this, ___key, method) (( DateTime_t287  (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54702_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54703_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, String_t* ___key, DateTime_t287  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54703(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, String_t*, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54703_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54704_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7029  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54704(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7029 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54704_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54705_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54705(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54705_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54706_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7029  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54706(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7029 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54706_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54707_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2U5BU5D_t7908* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54707(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2U5BU5D_t7908*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54707_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54708_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54708(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54708_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54709_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54709(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54709_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54710_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, KeyValuePair_2_t7029  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54710(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1971 *, KeyValuePair_2_t7029 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54710_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54711_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54711(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54711_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54712_gshared (FlexibleDictionaryWrapper_2_t1971 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54712(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1971 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54712_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::<get_Values>b__0(TIn)
extern "C" DateTime_t287  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54713_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54713(__this /* static, unused */, ___item, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54713_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7029  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54714_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t727  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54714(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7029  (*) (Object_t * /* static, unused */, KeyValuePair_2_t727 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54714_gshared)(__this /* static, unused */, ___pair, method)
