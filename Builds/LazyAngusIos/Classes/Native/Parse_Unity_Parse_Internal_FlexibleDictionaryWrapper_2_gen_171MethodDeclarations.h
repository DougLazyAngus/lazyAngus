#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>
struct FlexibleDictionaryWrapper_2_t2043;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.DateTime>
struct ICollection_1_t9848;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>[]
struct KeyValuePair_2U5BU5D_t8557;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>>
struct IEnumerator_1_t8540;
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
extern "C" void FlexibleDictionaryWrapper_2__ctor_m60119_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m60119(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m60119_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60120_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, DateTime_t287  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60120(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60120_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m60121_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m60121(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m60121_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m60122_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m60122(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m60122_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60123_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60123(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60123_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m60124_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, DateTime_t287 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m60124(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, DateTime_t287 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m60124_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m60125_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m60125(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m60125_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Item(System.String)
extern "C" DateTime_t287  FlexibleDictionaryWrapper_2_get_Item_m60126_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m60126(__this, ___key, method) (( DateTime_t287  (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m60126_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m60127_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, String_t* ___key, DateTime_t287  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m60127(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, String_t*, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m60127_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m60128_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2_t7678  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m60128(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, KeyValuePair_2_t7678 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m60128_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m60129_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m60129(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m60129_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m60130_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2_t7678  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m60130(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, KeyValuePair_2_t7678 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m60130_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m60131_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2U5BU5D_t8557* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m60131(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2043 *, KeyValuePair_2U5BU5D_t8557*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m60131_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m60132_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m60132(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m60132_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m60133_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m60133(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m60133_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m60134_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, KeyValuePair_2_t7678  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m60134(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2043 *, KeyValuePair_2_t7678 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m60134_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m60135_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m60135(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m60135_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60136_gshared (FlexibleDictionaryWrapper_2_t2043 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60136(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2043 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m60136_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::<get_Values>b__0(TIn)
extern "C" DateTime_t287  FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60137_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60137(__this /* static, unused */, ___item, method) (( DateTime_t287  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m60137_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.DateTime,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7678  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60138_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t795  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60138(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7678  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m60138_gshared)(__this /* static, unused */, ___pair, method)
