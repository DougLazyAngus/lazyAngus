#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>
struct FlexibleDictionaryWrapper_2_t2026;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9556;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7753;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8478;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7850;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59539_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59539(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59539_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59541_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59541(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59541_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59543_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59543(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59543_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59545_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59545(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59545_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59547_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59547(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59547_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59549_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59549(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59549_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59551_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59551(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59551_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59553_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59553(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59553_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59555_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59555(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59555_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59557_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2_t7627  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59557(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2_t7627 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59557_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59559_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59559(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59559_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59561_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2_t7627  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59561(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2_t7627 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59561_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59563_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2U5BU5D_t8478* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59563(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2U5BU5D_t8478*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59563_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59565_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59565(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59565_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59567_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59567(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59567_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59569_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2_t7627  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59569(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2_t7627 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59569_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59571_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59571(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59571_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59573_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59573(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59573_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59575_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59575(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59575_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7627  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59577_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7755  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59577(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7627  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7755 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59577_gshared)(__this /* static, unused */, ___pair, method)
