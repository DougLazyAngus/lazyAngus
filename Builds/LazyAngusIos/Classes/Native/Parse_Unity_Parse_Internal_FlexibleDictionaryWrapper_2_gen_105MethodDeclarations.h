#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>
struct FlexibleDictionaryWrapper_2_t1977;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9713;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7758;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8275;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7827;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56908_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56908(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56908_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56910_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56910(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56910_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56912_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56912(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56912_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56914_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56914(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56914_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56916_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56916(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56916_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56918_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56918(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56918_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56920_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56920(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56920_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m56922_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56922(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56922_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56924_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56924(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56924_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56926_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56926(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56926_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56928_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56928(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56928_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56930_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56930(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56930_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56932_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2U5BU5D_t8275* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56932(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2U5BU5D_t8275*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56932_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56934_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56934(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56934_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56936_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56936(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56936_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56938_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, KeyValuePair_2_t7822  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56938(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1977 *, KeyValuePair_2_t7822 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56938_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56940_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56940(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56940_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56942_gshared (FlexibleDictionaryWrapper_2_t1977 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56942(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1977 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56942_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56944_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56944(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56944_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7822  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56946_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7760  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56946(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7822  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7760 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56946_gshared)(__this /* static, unused */, ___pair, method)
