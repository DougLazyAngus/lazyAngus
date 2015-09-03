#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>
struct FlexibleDictionaryWrapper_2_t1969;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9836;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8204;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7810;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56497_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56497(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56497_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56498_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56498(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56498_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56499_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56499(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56499_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56500_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56500(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56500_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56501_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56501(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56501_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56502_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56502(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56502_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56503_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56503(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56503_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56504_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56504(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56504_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56505_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56505(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56505_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56506_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56506(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56506_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56507_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56507(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56507_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56508_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56508(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56508_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56509_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2U5BU5D_t8204* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56509(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2U5BU5D_t8204*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56509_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56510_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56510(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56510_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56511_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56511(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56511_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56512_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56512(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1969 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56512_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56513_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56513(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56513_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56514_gshared (FlexibleDictionaryWrapper_2_t1969 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56514(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1969 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56514_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56515_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56515(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56515_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7805  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56516_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7646  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56516(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7805  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56516_gshared)(__this /* static, unused */, ___pair, method)
