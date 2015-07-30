#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>
struct FlexibleDictionaryWrapper_2_t1925;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9110;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6931;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7689;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7187;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52636_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52636(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52636_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52637_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52637(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52637_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52638_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52638(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52638_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52639_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52639(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52639_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52640_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52640(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52640_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52641_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52641(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52641_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52642_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52642(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52642_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52643_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52643(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52643_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52644_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52644(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52644_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52645_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2_t7182  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52645(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52645_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52646_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52646(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52646_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52647_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2_t7182  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52647(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52647_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52648_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2U5BU5D_t7689* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52648(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2U5BU5D_t7689*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52648_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52649_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52649(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52649_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52650_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52650(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52650_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52651_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, KeyValuePair_2_t7182  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52651(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1925 *, KeyValuePair_2_t7182 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52651_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52652_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52652(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52652_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52653_gshared (FlexibleDictionaryWrapper_2_t1925 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52653(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1925 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52653_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52654_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52654(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52654_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7182  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52655_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7001  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52655(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7182  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52655_gshared)(__this /* static, unused */, ___pair, method)
