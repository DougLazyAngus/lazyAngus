#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>
struct FlexibleDictionaryWrapper_2_t1896;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9110;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t6923;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7561;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7167;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50902_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50902(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50902_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50903_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50903(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50903_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50904_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50904(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50904_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50905_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50905(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50905_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50906_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50906(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50906_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50907_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50907(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50907_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50908_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50908(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50908_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50909_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50909(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50909_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50910_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50910(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50910_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50911_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50911(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7162 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50911_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50912_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50912(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50912_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50913_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50913(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7162 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50913_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50914_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2U5BU5D_t7561* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50914(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2U5BU5D_t7561*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50914_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50915_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50915(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50915_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50916_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50916(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50916_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50917_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7162  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50917(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7162 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50917_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50918_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50918(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50918_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50919_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50919(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50919_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50920_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50920(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50920_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7162  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50921_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5497  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50921(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7162  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5497 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50921_gshared)(__this /* static, unused */, ___pair, method)
