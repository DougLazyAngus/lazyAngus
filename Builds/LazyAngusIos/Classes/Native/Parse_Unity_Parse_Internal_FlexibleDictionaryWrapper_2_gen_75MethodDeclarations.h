#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>
struct FlexibleDictionaryWrapper_2_t1867;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9099;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6924;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7422;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7140;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49481_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49481(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49481_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49482_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49482(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49482_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49483_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49483(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49483_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49484_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49484(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49484_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49485_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49485(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49485_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49486_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49486(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49486_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49487_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49487(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49487_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49488_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49488(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49488_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49489_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49489(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49489_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49490_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49490(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49490_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49491_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49491(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49491_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49492_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49492(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49492_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49493_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, KeyValuePair_2U5BU5D_t7422* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49493(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1867 *, KeyValuePair_2U5BU5D_t7422*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49493_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49494_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49494(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49494_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49495_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49495(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49495_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49496_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49496(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1867 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49496_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49497_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49497(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49497_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49498_gshared (FlexibleDictionaryWrapper_2_t1867 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49498(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1867 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49498_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49499_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49499(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49499_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49500_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6994  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49500(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6994 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49500_gshared)(__this /* static, unused */, ___pair, method)
