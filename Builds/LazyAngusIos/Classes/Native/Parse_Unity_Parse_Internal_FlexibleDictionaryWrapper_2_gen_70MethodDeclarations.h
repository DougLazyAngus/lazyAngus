#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>
struct FlexibleDictionaryWrapper_2_t1942;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9840;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7572;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8080;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7798;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54772_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54772(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54772_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54773_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54773(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54773_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54774_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54774(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54774_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54775_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54775(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54775_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54776_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54776(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54776_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54777_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54777(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54777_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54778_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54778(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54778_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54779_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54779(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54779_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54780_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54780(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54780_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54781_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54781(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54781_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54782_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54782(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54782_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54783_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54783(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54783_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54784_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2U5BU5D_t8080* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54784(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2U5BU5D_t8080*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54784_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54785_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54785(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54785_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54786_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54786(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54786_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54787_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, KeyValuePair_2_t7793  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54787(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1942 *, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54787_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54788_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54788(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54788_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54789_gshared (FlexibleDictionaryWrapper_2_t1942 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54789(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1942 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54789_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54790_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54790(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54790_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7793  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54791_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6097  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54791(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7793  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54791_gshared)(__this /* static, unused */, ___pair, method)
