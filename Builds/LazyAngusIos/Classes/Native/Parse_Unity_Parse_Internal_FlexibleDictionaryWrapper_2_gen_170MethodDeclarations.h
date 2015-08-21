#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>
struct FlexibleDictionaryWrapper_2_t2019;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t7020;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1410;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1397;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.DateTime>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55424_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55424(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55424_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55425_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55425(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55425_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55426_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55426(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55426_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55427_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55427(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55427_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55428_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55428(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55428_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55429_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55429(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55429_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55430_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55430(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55430_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m55431_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55431(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55431_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55432_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55432(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55432_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55433_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55433(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55433_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55434_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55434(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55434_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55435_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55435(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55435_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55436_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, KeyValuePair_2U5BU5D_t1410* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55436(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2019 *, KeyValuePair_2U5BU5D_t1410*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55436_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55437_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55437(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55437_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55438_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55438(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55438_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55439_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55439(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2019 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55439_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55440_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55440(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55440_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55441_gshared (FlexibleDictionaryWrapper_2_t2019 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55441(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2019 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55441_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55442_gshared (Object_t * __this /* static, unused */, DateTime_t287  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55442(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, DateTime_t287 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55442_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.DateTime>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t775  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55443_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7105  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55443(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t775  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7105 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55443_gshared)(__this /* static, unused */, ___pair, method)
