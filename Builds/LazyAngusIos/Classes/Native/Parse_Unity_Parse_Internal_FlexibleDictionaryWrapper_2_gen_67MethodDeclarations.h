#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>
struct FlexibleDictionaryWrapper_2_t1946;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9847;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7774;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8087;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7805;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54700_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54700(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54700_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54701_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54701(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54701_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54702_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54702(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54702_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54703_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54703(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54703_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54704_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54704(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54704_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54705_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54705(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54705_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54706_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54706(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54706_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54707_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54707(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54707_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54708_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54708(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54708_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54709_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7800  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54709(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54709_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54710_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54710(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54710_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54711_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7800  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54711(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54711_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54712_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2U5BU5D_t8087* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54712(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2U5BU5D_t8087*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54712_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54713_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54713(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54713_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54714_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54714(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54714_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54715_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, KeyValuePair_2_t7800  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54715(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1946 *, KeyValuePair_2_t7800 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54715_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54716_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54716(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54716_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54717_gshared (FlexibleDictionaryWrapper_2_t1946 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54717(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1946 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54717_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54718_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54718(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54718_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7800  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54719_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7778  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54719(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7800  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7778 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54719_gshared)(__this /* static, unused */, ___pair, method)
