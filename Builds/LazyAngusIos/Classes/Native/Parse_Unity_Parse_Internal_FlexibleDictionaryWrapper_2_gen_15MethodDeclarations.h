#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>
struct FlexibleDictionaryWrapper_2_t1829;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9041;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7111;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7226;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7118;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46549_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46549(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46549_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46551_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46551(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46551_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46553_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46553(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46553_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46555_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46555(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46555_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46557_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46557(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46557_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46559_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46559(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46559_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46561_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46561(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46561_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46563_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46563(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46563_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46565_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46565(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46565_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46567_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46567(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46567_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46569_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46569(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46569_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46571_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46571(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46571_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46573_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, KeyValuePair_2U5BU5D_t7226* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46573(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1829 *, KeyValuePair_2U5BU5D_t7226*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46573_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46575_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46575(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46575_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46577_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46577(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46577_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46579_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, KeyValuePair_2_t7113  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46579(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1829 *, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46579_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46581_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46581(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46581_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46583_gshared (FlexibleDictionaryWrapper_2_t1829 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46583(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1829 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46583_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46585_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46585(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46585_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7113  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46587_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7113  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46587(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7113  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46587_gshared)(__this /* static, unused */, ___pair, method)
