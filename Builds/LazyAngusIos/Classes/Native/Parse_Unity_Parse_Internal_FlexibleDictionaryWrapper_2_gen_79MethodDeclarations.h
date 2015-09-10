#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1958;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9342;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7765;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8152;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7812;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55411_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55411(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55411_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55413_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55413(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55413_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55415_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55415(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55415_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55417_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55417(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55417_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55419_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55419(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55419_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55421_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55421(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55421_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55423_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55423(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55423_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55425_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55425(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55425_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55427_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55427(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55427_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55429_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t6104  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55429(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55429_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55431_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55431(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55431_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55433_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t6104  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55433(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55433_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55435_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2U5BU5D_t8152* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55435(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2U5BU5D_t8152*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55435_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55437_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55437(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55437_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55439_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55439(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55439_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55441_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t6104  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55441(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55441_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55443_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55443(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55443_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55445_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55445(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55445_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55447_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55447(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55447_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6104  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55449_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7767  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55449(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6104  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55449_gshared)(__this /* static, unused */, ___pair, method)
