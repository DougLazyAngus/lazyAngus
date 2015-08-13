#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>
struct FlexibleDictionaryWrapper_2_t1876;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9130;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t822;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7296;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7188;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46895_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46895(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46895_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46897_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46897(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46897_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46899_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46899(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46899_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46901_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46901(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46901_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46903_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46903(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46903_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46905_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46905(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46905_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46907_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46907(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46907_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46909_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46909(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46909_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46911_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46911(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46911_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46913_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46913(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46913_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46915_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46915(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46915_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46917_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46917(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46917_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46919_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2U5BU5D_t7296* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46919(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2U5BU5D_t7296*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46919_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46921_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46921(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46921_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46923_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46923(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46923_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46925_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, KeyValuePair_2_t7183  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46925(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1876 *, KeyValuePair_2_t7183 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46925_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46927_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46927(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46927_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46929_gshared (FlexibleDictionaryWrapper_2_t1876 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46929(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1876 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46929_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46931_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46931(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46931_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7183  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46933_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t777  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46933(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7183  (*) (Object_t * /* static, unused */, KeyValuePair_2_t777 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46933_gshared)(__this /* static, unused */, ___pair, method)
