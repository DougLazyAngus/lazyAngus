#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>
struct FlexibleDictionaryWrapper_2_t2025;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9555;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7752;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8477;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7849;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59526_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59526(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59526_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59528_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59528(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59528_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59530_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59530(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59530_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59532_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59532(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59532_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59534_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59534(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59534_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59536_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59536(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59536_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59538_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59538(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59538_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59540_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59540(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59540_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59542_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59542(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59542_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59544_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59544(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59544_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59546_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59546(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59546_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59548_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59548(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59548_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59550_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2U5BU5D_t8477* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59550(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2U5BU5D_t8477*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59550_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59552_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59552(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59552_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59554_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59554(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59554_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59556_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59556(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2025 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59556_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59558_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59558(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59558_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59560_gshared (FlexibleDictionaryWrapper_2_t2025 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59560(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2025 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59560_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59562_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59562(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59562_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7626  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59564_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7754  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59564(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7626  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59564_gshared)(__this /* static, unused */, ___pair, method)
