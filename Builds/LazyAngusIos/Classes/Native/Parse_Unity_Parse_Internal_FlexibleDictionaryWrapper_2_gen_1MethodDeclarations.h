#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>
struct FlexibleDictionaryWrapper_2_t1803;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7111;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1363;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1350;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45625_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45625(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45625_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45627_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45627(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45627_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45629_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45629(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45629_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45631_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45631(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45631_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45633_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45633(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45633_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45635_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45635(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45635_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45637_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45637(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45637_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45639_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45639(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45639_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45641_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45641(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45641_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45643_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, KeyValuePair_2_t729  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45643(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, KeyValuePair_2_t729 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45643_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45645_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45645(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45645_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45647_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, KeyValuePair_2_t729  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45647(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, KeyValuePair_2_t729 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45647_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45649_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, KeyValuePair_2U5BU5D_t1363* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45649(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1803 *, KeyValuePair_2U5BU5D_t1363*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45649_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45651_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45651(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45651_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45653_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45653(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45653_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45655_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, KeyValuePair_2_t729  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45655(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1803 *, KeyValuePair_2_t729 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45655_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45657_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45657(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45657_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45659_gshared (FlexibleDictionaryWrapper_2_t1803 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45659(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1803 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45659_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45661_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45661(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45661_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t729  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45663_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7113  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45663(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t729  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45663_gshared)(__this /* static, unused */, ___pair, method)
