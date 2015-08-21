#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>
struct FlexibleDictionaryWrapper_2_t1924;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9207;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7009;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7507;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7225;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50316_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50316(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50316_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50317_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50317(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50317_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50318_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50318(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50318_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50319_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50319(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50319_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50320_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50320(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50320_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50321_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50321(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50321_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50322_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50322(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50322_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m50323_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50323(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50323_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50324_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50324(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50324_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50325_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7220  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50325(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50325_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50326_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50326(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50326_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50327_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7220  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50327(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50327_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50328_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2U5BU5D_t7507* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50328(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2U5BU5D_t7507*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50328_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50329_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50329(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50329_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50330_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50330(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50330_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50331_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, KeyValuePair_2_t7220  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50331(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1924 *, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50331_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50332_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50332(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50332_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50333_gshared (FlexibleDictionaryWrapper_2_t1924 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50333(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1924 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50333_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50334_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50334(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50334_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7220  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50335_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7079  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50335(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7220  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7079 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50335_gshared)(__this /* static, unused */, ___pair, method)
