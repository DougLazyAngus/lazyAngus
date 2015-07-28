#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>
struct FlexibleDictionaryWrapper_2_t1868;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9099;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6918;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7422;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7140;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49524_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49524(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1868 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49524_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49525_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49525(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1868 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49525_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49526_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49526(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1868 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49526_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49527_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49527(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1868 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49527_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49528_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49528(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1868 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49528_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49529_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49529(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1868 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49529_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49530_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49530(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1868 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49530_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49531_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49531(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1868 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49531_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49532_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49532(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1868 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49532_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49533_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49533(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1868 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49533_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49534_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49534(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1868 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49534_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49535_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49535(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1868 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49535_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49536_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, KeyValuePair_2U5BU5D_t7422* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49536(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1868 *, KeyValuePair_2U5BU5D_t7422*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49536_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49537_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49537(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1868 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49537_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49538_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49538(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1868 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49538_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49539_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, KeyValuePair_2_t7135  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49539(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1868 *, KeyValuePair_2_t7135 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49539_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49540_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49540(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1868 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49540_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49541_gshared (FlexibleDictionaryWrapper_2_t1868 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49541(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1868 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49541_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49542_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49542(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49542_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7135  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49543_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6974  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49543(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7135  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49543_gshared)(__this /* static, unused */, ___pair, method)
