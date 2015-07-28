#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>
struct FlexibleDictionaryWrapper_2_t1961;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t6934;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1352;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1339;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54589_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54589(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54589_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54590_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54590(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54590_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54591_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54591(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54591_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54592_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54592(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54592_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54593_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54593(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54593_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54594_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54594(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54594_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54595_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54595(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54595_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m54596_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54596(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54596_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54597_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54597(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54597_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54598_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, KeyValuePair_2_t719  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54598(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54598_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54599_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54599(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54599_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54600_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, KeyValuePair_2_t719  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54600(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54600_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54601_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, KeyValuePair_2U5BU5D_t1352* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54601(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1961 *, KeyValuePair_2U5BU5D_t1352*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54601_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54602_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54602(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54602_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54603_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54603(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54603_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54604_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, KeyValuePair_2_t719  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54604(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1961 *, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54604_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54605_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54605(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54605_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54606_gshared (FlexibleDictionaryWrapper_2_t1961 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54606(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1961 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54606_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54607_gshared (Object_t * __this /* static, unused */, DateTime_t287  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54607(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54607_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t719  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54608_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7019  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54608(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t719  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7019 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54608_gshared)(__this /* static, unused */, ___pair, method)
