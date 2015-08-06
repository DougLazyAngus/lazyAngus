#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>
struct FlexibleDictionaryWrapper_2_t1946;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9114;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7129;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7769;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7199;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53459_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53459(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53459_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53460_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53460(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53460_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53461_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53461(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53461_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53462_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53462(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53462_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53463_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53463(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53463_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53464_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53464(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53464_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53465_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53465(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53465_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53466_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53466(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53466_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53467_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53467(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53467_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53468_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53468(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53468_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53469_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53469(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53469_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53470_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53470(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53470_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53471_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2U5BU5D_t7769* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53471(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2U5BU5D_t7769*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53471_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53472_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53472(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53472_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53473_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53473(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53473_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53474_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53474(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53474_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53475_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53475(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53475_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53476_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53476(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53476_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53477_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53477(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53477_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7003  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53478_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7133  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53478(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7003  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7133 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53478_gshared)(__this /* static, unused */, ___pair, method)
