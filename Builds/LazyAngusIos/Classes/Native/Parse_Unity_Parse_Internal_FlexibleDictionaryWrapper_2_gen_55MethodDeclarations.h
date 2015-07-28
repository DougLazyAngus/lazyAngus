#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>
struct FlexibleDictionaryWrapper_2_t1847;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9098;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7120;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7357;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7129;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48422_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48422(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1847 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48422_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48423_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48423(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1847 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48423_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48424_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48424(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1847 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48424_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48425_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48425(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1847 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48425_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48426_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48426(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1847 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48426_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48427_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48427(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1847 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48427_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48428_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48428(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1847 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48428_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48429_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48429(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1847 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48429_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48430_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48430(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1847 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48430_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48431_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48431(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1847 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48431_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48432_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48432(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1847 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48432_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48433_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48433(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1847 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48433_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48434_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, KeyValuePair_2U5BU5D_t7357* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48434(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1847 *, KeyValuePair_2U5BU5D_t7357*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48434_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48435_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48435(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1847 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48435_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48436_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48436(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1847 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48436_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48437_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48437(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1847 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48437_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48438_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48438(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1847 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48438_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48439_gshared (FlexibleDictionaryWrapper_2_t1847 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48439(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1847 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48439_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48440_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48440(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48440_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7124  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48441_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7124  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48441(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7124  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48441_gshared)(__this /* static, unused */, ___pair, method)
