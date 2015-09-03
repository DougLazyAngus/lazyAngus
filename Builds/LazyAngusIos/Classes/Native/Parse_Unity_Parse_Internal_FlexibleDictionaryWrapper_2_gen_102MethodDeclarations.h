#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>
struct FlexibleDictionaryWrapper_2_t1970;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9836;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7570;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8204;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7810;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56540_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56540(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56540_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56541_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56541(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56541_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56542_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56542(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56542_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56543_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56543(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56543_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56544_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56544(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56544_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56545_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56545(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56545_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56546_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56546(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56546_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56547_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56547(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56547_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56548_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56548(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56548_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56549_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56549(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56549_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56550_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56550(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56550_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56551_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56551(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56551_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56552_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2U5BU5D_t8204* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56552(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2U5BU5D_t8204*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56552_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56553_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56553(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56553_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56554_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56554(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56554_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56555_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56555(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1970 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56555_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56556_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56556(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56556_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56557_gshared (FlexibleDictionaryWrapper_2_t1970 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56557(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1970 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56557_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56558_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56558(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56558_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7805  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56559_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7626  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56559(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7805  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56559_gshared)(__this /* static, unused */, ___pair, method)
