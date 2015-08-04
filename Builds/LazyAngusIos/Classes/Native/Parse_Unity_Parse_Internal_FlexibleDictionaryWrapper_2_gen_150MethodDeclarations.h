#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>
struct FlexibleDictionaryWrapper_2_t1950;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9114;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7169;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7769;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7199;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53631_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53631(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53631_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53632_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53632(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53632_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53633_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53633(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53633_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53634_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53634(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53634_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53635_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53635(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53635_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53636_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53636(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53636_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53637_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53637(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53637_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53638_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53638(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53638_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53639_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53639(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53639_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53640_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53640(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53640_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53641_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53641(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53641_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53642_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53642(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53642_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53643_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2U5BU5D_t7769* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53643(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2U5BU5D_t7769*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53643_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53644_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53644(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53644_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53645_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53645(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53645_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53646_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t7003  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53646(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t7003 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53646_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53647_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53647(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53647_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53648_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53648(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53648_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53649_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53649(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53649_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7003  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53650_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7173  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53650(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7003  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7173 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53650_gshared)(__this /* static, unused */, ___pair, method)
