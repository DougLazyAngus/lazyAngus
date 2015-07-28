#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1848;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9098;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7131;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t7357;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7129;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48465_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48465(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48465_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48466_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48466(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48466_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48467_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48467(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48467_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48468_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48468(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48468_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48469_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48469(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48469_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48470_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48470(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48470_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48471_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48471(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48471_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m48472_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48472(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48472_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48473_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48473(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48473_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48474_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48474(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48474_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48475_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48475(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48475_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48476_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48476(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48476_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48477_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2U5BU5D_t7357* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48477(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2U5BU5D_t7357*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48477_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48478_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48478(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48478_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48479_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48479(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48479_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48480_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7124  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48480(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7124 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48480_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48481_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48481(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48481_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48482_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48482(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48482_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48483_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48483(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48483_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7124  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48484_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7135  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48484(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7124  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48484_gshared)(__this /* static, unused */, ___pair, method)
