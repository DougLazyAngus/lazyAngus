#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>
struct FlexibleDictionaryWrapper_2_t1877;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8632;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7107;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7494;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7154;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49914_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49914(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49914_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49916_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49916(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49916_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49918_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49918(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49918_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49920_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49920(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49920_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49922_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49922(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49922_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49924_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49924(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49924_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49926_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49926(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49926_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m49928_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49928(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49928_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49930_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49930(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49930_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49932_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49932(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49932_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49934_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49934(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49934_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49936_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49936(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49936_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49938_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, KeyValuePair_2U5BU5D_t7494* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49938(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1877 *, KeyValuePair_2U5BU5D_t7494*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49938_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49940_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49940(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49940_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49942_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49942(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49942_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49944_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49944(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1877 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49944_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49946_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49946(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49946_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49948_gshared (FlexibleDictionaryWrapper_2_t1877 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49948(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1877 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49948_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49950_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49950(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49950_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5495  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49952_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7109  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49952(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5495  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7109 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49952_gshared)(__this /* static, unused */, ___pair, method)
