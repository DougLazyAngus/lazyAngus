#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1938;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9104;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7130;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7759;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7189;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53439_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53439(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1938 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53439_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53440_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53440(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1938 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53440_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53441_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53441(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1938 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53441_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53442_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53442(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1938 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53442_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53443_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53443(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1938 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53443_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53444_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53444(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1938 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53444_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53445_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53445(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1938 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53445_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53446_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53446(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1938 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53446_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53447_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53447(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1938 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53447_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53448_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53448(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1938 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53448_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53449_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53449(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1938 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53449_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53450_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53450(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1938 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53450_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53451_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, KeyValuePair_2U5BU5D_t7759* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53451(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1938 *, KeyValuePair_2U5BU5D_t7759*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53451_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53452_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53452(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1938 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53452_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53453_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53453(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1938 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53453_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53454_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, KeyValuePair_2_t6993  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53454(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1938 *, KeyValuePair_2_t6993 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53454_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53455_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53455(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1938 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53455_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53456_gshared (FlexibleDictionaryWrapper_2_t1938 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53456(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1938 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53456_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53457_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53457(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53457_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6993  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53458_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7134  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53458(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6993  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7134 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53458_gshared)(__this /* static, unused */, ___pair, method)
