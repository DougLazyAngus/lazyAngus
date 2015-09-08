#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>
struct FlexibleDictionaryWrapper_2_t1994;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9844;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7572;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8340;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7838;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57880_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57880(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57880_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57881_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57881(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57881_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57882_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57882(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57882_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57883_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57883(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57883_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57884_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57884(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57884_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57885_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57885(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57885_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57886_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57886(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57886_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57887_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57887(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57887_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57888_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57888(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57888_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57889_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57889(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57889_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57890_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57890(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57890_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57891_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57891(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57891_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57892_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2U5BU5D_t8340* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57892(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2U5BU5D_t8340*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57892_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57893_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57893(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57893_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57894_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57894(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57894_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57895_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, KeyValuePair_2_t7833  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57895(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1994 *, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57895_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m57896_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m57896(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m57896_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57897_gshared (FlexibleDictionaryWrapper_2_t1994 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57897(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1994 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m57897_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57898_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57898(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m57898_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7833  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57899_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6097  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57899(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7833  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6097 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m57899_gshared)(__this /* static, unused */, ___pair, method)
