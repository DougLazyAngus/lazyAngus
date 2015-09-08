#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>
struct FlexibleDictionaryWrapper_2_t1973;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9842;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7582;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8210;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7816;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56522_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56522(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56522_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56523_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56523(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56523_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56524_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56524(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56524_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56525_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56525(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56525_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56526_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56526(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56526_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56527_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56527(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56527_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56528_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56528(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56528_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56529_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56529(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56529_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56530_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56530(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56530_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56531_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56531(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56531_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56532_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56532(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56532_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56533_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56533(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56533_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56534_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2U5BU5D_t8210* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56534(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2U5BU5D_t8210*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56534_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56535_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56535(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56535_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56536_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56536(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56536_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56537_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56537(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56537_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56538_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56538(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56538_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56539_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56539(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56539_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56540_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56540(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56540_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7811  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56541_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7652  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56541(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7811  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56541_gshared)(__this /* static, unused */, ___pair, method)
