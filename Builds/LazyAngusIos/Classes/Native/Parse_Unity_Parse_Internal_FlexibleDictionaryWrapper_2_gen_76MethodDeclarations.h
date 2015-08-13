#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>
struct FlexibleDictionaryWrapper_2_t1927;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9199;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6999;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7503;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7221;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50271_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50271(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50271_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50272_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50272(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50272_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50273_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50273(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50273_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50274_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50274(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50274_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50275_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50275(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50275_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50276_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50276(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50276_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50277_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50277(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50277_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m50278_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50278(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50278_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50279_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50279(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50279_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50280_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2_t7216  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50280(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50280_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50281_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50281(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50281_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50282_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2_t7216  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50282(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50282_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50283_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2U5BU5D_t7503* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50283(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2U5BU5D_t7503*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50283_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50284_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50284(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50284_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50285_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50285(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50285_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50286_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, KeyValuePair_2_t7216  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50286(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1927 *, KeyValuePair_2_t7216 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50286_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50287_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50287(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50287_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50288_gshared (FlexibleDictionaryWrapper_2_t1927 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50288(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1927 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50288_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50289_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50289(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50289_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7216  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50290_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7055  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50290(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7216  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50290_gshared)(__this /* static, unused */, ___pair, method)
