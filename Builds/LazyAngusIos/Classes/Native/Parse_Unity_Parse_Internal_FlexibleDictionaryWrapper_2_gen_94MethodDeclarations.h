#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>
struct FlexibleDictionaryWrapper_2_t1886;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9101;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7120;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7552;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7158;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50753_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50753(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50753_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50754_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50754(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50754_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50755_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50755(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50755_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50756_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50756(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50756_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50757_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50757(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50757_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50758_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50758(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50758_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50759_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50759(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50759_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50760_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50760(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50760_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50761_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50761(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50761_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50762_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50762(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50762_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50763_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50763(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50763_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50764_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50764(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50764_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50765_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2U5BU5D_t7552* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50765(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2U5BU5D_t7552*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50765_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50766_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50766(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50766_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50767_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50767(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50767_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50768_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2_t7153  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50768(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50768_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50769_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50769(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50769_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50770_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50770(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50770_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50771_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50771(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50771_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7153  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50772_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7124  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50772(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7153  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50772_gshared)(__this /* static, unused */, ___pair, method)
