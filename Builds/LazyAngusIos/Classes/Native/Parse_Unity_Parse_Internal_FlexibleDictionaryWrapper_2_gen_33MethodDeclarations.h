#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>
struct FlexibleDictionaryWrapper_2_t1904;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9765;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7867;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7759;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52517_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52517(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52517_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52519_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52519(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52519_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52521_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52521(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52521_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52523_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52523(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52523_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52525_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52525(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52525_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52527_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52527(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52527_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52529_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52529(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52529_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52531_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52531(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52531_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52533_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52533(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52533_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52535_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52535(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52535_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52537_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52537(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52537_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52539_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52539(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52539_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52541_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2U5BU5D_t7867* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52541(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1904 *, KeyValuePair_2U5BU5D_t7867*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52541_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52543_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52543(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52543_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52545_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52545(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52545_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52547_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52547(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1904 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52547_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52549_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52549(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52549_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52551_gshared (FlexibleDictionaryWrapper_2_t1904 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52551(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1904 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52551_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52553_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52553(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52553_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7754  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52555_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7646  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52555(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7754  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7646 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52555_gshared)(__this /* static, unused */, ___pair, method)
