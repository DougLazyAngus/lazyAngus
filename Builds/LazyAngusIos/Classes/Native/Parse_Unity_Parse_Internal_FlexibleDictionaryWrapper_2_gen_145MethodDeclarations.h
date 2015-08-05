#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>
struct FlexibleDictionaryWrapper_2_t1947;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9116;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7120;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7771;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7201;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53428_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53428(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53428_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53429_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53429(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53429_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53430_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53430(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53430_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53431_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53431(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53431_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53432_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53432(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53432_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53433_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53433(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53433_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53434_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53434(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53434_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53435_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53435(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53435_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53436_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53436(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53436_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53437_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53437(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53437_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53438_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53438(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53438_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53439_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53439(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53439_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53440_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2U5BU5D_t7771* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53440(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53440_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53441_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53441(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53441_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53442_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53442(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53442_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53443_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53443(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1947 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53443_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53444_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53444(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53444_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53445_gshared (FlexibleDictionaryWrapper_2_t1947 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53445(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1947 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53445_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53446_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53446(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53446_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7005  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53447_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7124  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53447(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7005  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53447_gshared)(__this /* static, unused */, ___pair, method)
