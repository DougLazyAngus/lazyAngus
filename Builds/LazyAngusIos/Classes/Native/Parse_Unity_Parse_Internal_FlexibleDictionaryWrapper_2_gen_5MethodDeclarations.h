#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>
struct FlexibleDictionaryWrapper_2_t1854;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6999;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1410;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1397;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46640_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46640(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46640_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46641_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46641(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46641_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46642_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46642(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46642_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46643_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46643(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46643_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46644_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46644(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46644_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46645_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46645(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46645_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46646_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46646(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46646_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46647_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46647(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46647_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46648_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46648(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46648_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46649_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46649(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46649_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46650_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46650(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46650_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46651_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46651(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46651_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46652_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2U5BU5D_t1410* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46652(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2U5BU5D_t1410*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46652_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46653_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46653(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46653_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46654_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46654(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46654_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46655_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46655(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1854 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46655_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46656_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46656(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46656_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46657_gshared (FlexibleDictionaryWrapper_2_t1854 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46657(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1854 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46657_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46658_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46658(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46658_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t775  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46659_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5541  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46659(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t775  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5541 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46659_gshared)(__this /* static, unused */, ___pair, method)
