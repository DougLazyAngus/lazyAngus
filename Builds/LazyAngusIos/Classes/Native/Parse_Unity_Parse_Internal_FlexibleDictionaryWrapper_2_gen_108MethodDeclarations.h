#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1959;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9072;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7212;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7698;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7250;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52320_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52320(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52320_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52321_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52321(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52321_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52322_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52322(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52322_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52323_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52323(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52323_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52324_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52324(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52324_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52325_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52325(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52325_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52326_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52326(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52326_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m52327_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52327(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52327_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52328_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52328(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52328_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52329_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52329(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52329_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52330_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52330(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52330_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52331_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52331(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52331_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52332_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2U5BU5D_t7698* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52332(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2U5BU5D_t7698*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52332_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52333_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52333(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52333_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52334_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52334(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52334_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52335_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, KeyValuePair_2_t7245  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52335(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1959 *, KeyValuePair_2_t7245 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52335_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52336_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52336(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52336_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52337_gshared (FlexibleDictionaryWrapper_2_t1959 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52337(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1959 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52337_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52338_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52338(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52338_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7245  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52339_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7216  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52339(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7245  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52339_gshared)(__this /* static, unused */, ___pair, method)
