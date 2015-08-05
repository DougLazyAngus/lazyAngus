#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>
struct FlexibleDictionaryWrapper_2_t1916;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t8983;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6935;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7628;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7180;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51890_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51890(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51890_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51891_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51891(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51891_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51892_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51892(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51892_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51893_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51893(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51893_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51894_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51894(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51894_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51895_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51895(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51895_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51896_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51896(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51896_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m51897_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51897(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51897_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51898_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51898(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51898_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51899_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51899(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51899_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51900_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51900(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51900_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51901_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51901(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51901_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51902_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2U5BU5D_t7628* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51902(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2U5BU5D_t7628*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51902_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51903_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51903(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51903_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51904_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51904(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51904_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51905_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51905(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1916 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51905_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51906_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51906(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51906_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51907_gshared (FlexibleDictionaryWrapper_2_t1916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51907(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51907_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51908_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51908(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51908_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7175  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51909_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7005  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51909(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7175  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51909_gshared)(__this /* static, unused */, ___pair, method)
