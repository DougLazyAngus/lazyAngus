#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1953;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9116;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7182;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7771;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7201;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53686_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53686(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1953 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53686_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53687_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53687(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1953 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53687_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53688_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53688(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1953 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53688_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53689_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53689(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1953 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53689_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53690_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53690(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1953 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53690_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53691_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53691(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1953 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53691_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53692_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53692(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1953 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53692_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m53693_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53693(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t1953 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53693_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53694_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53694(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1953 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53694_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53695_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53695(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1953 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53695_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53696_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53696(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1953 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53696_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53697_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53697(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1953 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53697_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53698_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, KeyValuePair_2U5BU5D_t7771* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53698(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1953 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53698_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53699_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53699(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1953 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53699_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53700_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53700(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1953 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53700_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53701_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, KeyValuePair_2_t7005  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53701(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1953 *, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53701_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53702_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53702(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1953 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53702_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53703_gshared (FlexibleDictionaryWrapper_2_t1953 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53703(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1953 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53703_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53704_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53704(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53704_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7005  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53705_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7186  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53705(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7005  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7186 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53705_gshared)(__this /* static, unused */, ___pair, method)
