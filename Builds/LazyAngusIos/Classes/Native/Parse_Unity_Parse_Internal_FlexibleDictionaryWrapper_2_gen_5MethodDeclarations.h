#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>
struct FlexibleDictionaryWrapper_2_t1874;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1241;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7567;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1430;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1417;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51280_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51280(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51280_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51281_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51281(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51281_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51282_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51282(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51282_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51283_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51283(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51283_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51284_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51284(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51284_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51285_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51285(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51285_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51286_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51286(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51286_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51287_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51287(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51287_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51288_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51288(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51288_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51289_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51289(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51289_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51290_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51290(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51290_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51291_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51291(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51291_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51292_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, KeyValuePair_2U5BU5D_t1430* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51292(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1874 *, KeyValuePair_2U5BU5D_t1430*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51292_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51293_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51293(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51293_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51294_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51294(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51294_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51295_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51295(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1874 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51295_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51296_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51296(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51296_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51297_gshared (FlexibleDictionaryWrapper_2_t1874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51297(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51297_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51298_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51298(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51298_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t792  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51299_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6094  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51299(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t792  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6094 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51299_gshared)(__this /* static, unused */, ___pair, method)
