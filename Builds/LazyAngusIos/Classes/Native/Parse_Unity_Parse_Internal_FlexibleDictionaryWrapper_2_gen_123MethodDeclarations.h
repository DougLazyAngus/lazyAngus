#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1991;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9251;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7266;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7799;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7297;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53636_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53636(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1991 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53636_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53637_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53637(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1991 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53637_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53638_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53638(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1991 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53638_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53639_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53639(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1991 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53639_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53640_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53640(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1991 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53640_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53641_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53641(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1991 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53641_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53642_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53642(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1991 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53642_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m53643_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53643(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1991 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53643_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53644_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53644(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1991 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53644_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53645_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, KeyValuePair_2_t7292  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53645(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1991 *, KeyValuePair_2_t7292 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53645_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53646_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53646(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1991 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53646_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53647_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, KeyValuePair_2_t7292  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53647(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1991 *, KeyValuePair_2_t7292 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53647_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53648_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, KeyValuePair_2U5BU5D_t7799* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53648(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1991 *, KeyValuePair_2U5BU5D_t7799*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53648_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53649_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53649(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1991 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53649_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53650_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53650(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1991 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53650_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53651_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, KeyValuePair_2_t7292  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53651(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1991 *, KeyValuePair_2_t7292 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53651_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53652_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53652(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1991 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53652_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53653_gshared (FlexibleDictionaryWrapper_2_t1991 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53653(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1991 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53653_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53654_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53654(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53654_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7292  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53655_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7270  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53655(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7292  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7270 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53655_gshared)(__this /* static, unused */, ___pair, method)
