#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>
struct FlexibleDictionaryWrapper_2_t1943;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9834;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8074;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7792;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54943_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54943(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54943_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54944_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54944(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54944_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54945_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54945(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54945_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54946_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54946(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54946_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54947_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54947(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54947_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54948_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54948(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54948_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54949_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54949(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54949_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54950_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54950(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54950_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54951_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54951(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54951_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54952_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54952(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54952_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54953_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54953(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54953_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54954_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54954(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54954_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54955_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, KeyValuePair_2U5BU5D_t8074* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54955(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1943 *, KeyValuePair_2U5BU5D_t8074*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54955_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54956_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54956(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54956_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54957_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54957(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54957_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54958_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54958(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1943 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54958_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54959_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54959(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54959_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54960_gshared (FlexibleDictionaryWrapper_2_t1943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54960(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54960_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54961_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54961(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54961_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7787  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54962_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7646  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54962(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7787  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54962_gshared)(__this /* static, unused */, ___pair, method)
