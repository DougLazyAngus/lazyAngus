#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>
struct FlexibleDictionaryWrapper_2_t1850;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1412;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1399;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m31395_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m31395(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m31395_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m31396_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m31396(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31396_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m31397_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m31397(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m31397_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m31398_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m31398(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m31398_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m31399_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m31399(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31399_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m31400_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m31400(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m31400_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m31401_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m31401(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m31401_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m31402_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m31402(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m31402_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m31403_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m31403(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m31403_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m31404_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m31404(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m31404_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m31405_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m31405(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m31405_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m31406_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m31406(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m31406_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m31407_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2U5BU5D_t1412* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m31407(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2U5BU5D_t1412*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m31407_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m31408_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m31408(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m31408_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m31409_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m31409(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m31409_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m31410_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, KeyValuePair_2_t777  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m31410(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1850 *, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m31410_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m31411_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m31411(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m31411_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31412_gshared (FlexibleDictionaryWrapper_2_t1850 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31412(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1850 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m31412_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m31413_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m31413(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m31413_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t777  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m31414_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t777  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m31414(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t777  (*) (Object_t * /* static, unused */, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m31414_gshared)(__this /* static, unused */, ___pair, method)
