#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>
struct FlexibleDictionaryWrapper_2_t1888;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9101;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6914;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7552;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7158;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50839_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50839(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50839_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50840_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50840(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50840_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50841_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50841(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50841_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50842_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50842(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50842_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50843_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50843(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50843_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50844_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50844(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50844_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50845_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50845(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50845_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50846_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50846(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50846_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50847_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50847(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50847_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50848_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50848(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50848_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50849_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50849(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50849_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50850_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50850(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50850_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50851_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, KeyValuePair_2U5BU5D_t7552* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50851(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1888 *, KeyValuePair_2U5BU5D_t7552*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50851_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50852_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50852(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50852_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50853_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50853(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50853_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50854_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50854(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1888 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50854_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50855_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50855(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50855_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50856_gshared (FlexibleDictionaryWrapper_2_t1888 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50856(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1888 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50856_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50857_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50857(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50857_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7153  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50858_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5488  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50858(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7153  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5488 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50858_gshared)(__this /* static, unused */, ___pair, method)
