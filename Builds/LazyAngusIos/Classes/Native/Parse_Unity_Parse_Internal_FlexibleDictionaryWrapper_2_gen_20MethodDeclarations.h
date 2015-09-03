#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>
struct FlexibleDictionaryWrapper_2_t1897;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9765;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7772;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7867;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7759;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52091_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52091(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52091_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52093_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52093(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52093_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52095_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52095(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52095_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52097_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52097(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52097_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52099_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52099(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52099_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52101_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52101(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52101_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52103_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52103(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52103_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52105_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52105(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52105_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52107_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52107(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52107_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52109_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52109(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52109_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52111_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52111(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52111_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52113_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52113(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52113_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52115_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2U5BU5D_t7867* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52115(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2U5BU5D_t7867*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52115_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52117_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52117(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52117_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52119_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52119(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52119_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52121_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, KeyValuePair_2_t7754  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52121(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1897 *, KeyValuePair_2_t7754 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52121_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52123_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52123(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52123_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52125_gshared (FlexibleDictionaryWrapper_2_t1897 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52125(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1897 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52125_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52127_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52127(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52127_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7754  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52129_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7776  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52129(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7754  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52129_gshared)(__this /* static, unused */, ___pair, method)
