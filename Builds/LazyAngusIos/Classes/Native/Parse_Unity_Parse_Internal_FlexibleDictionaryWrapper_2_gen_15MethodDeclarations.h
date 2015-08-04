#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1827;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1160;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9039;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7109;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7224;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7116;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46534_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46534(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46534_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46536_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46536(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46536_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46538_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46538(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46538_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46540_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46540(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46540_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46542_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46542(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46542_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46544_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46544(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46544_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46546_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46546(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46546_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46548_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46548(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46548_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46550_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46550(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46550_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46552_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46552(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46552_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46554_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46554(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46554_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46556_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46556(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46556_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46558_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2U5BU5D_t7224* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46558(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2U5BU5D_t7224*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46558_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46560_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46560(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46560_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46562_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46562(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46562_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46564_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, KeyValuePair_2_t7111  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46564(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1827 *, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46564_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46566_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46566(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46566_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46568_gshared (FlexibleDictionaryWrapper_2_t1827 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46568(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1827 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46568_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46570_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46570(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46570_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7111  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46572_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7111  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46572(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7111  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7111 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46572_gshared)(__this /* static, unused */, ___pair, method)
