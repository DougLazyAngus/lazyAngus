#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1932;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t7765;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8022;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7794;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53857_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53857(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53857_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53859_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53859(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53859_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53861_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53861(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53861_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53863_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53863(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53863_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53865_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53865(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53865_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53867_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53867(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53867_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53869_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53869(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53869_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m53871_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53871(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53871_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53873_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53873(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53873_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53875_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53875(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53875_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53877_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53877(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53877_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53879_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53879(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53879_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53881_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, KeyValuePair_2U5BU5D_t8022* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53881(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1932 *, KeyValuePair_2U5BU5D_t8022*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53881_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53883_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53883(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53883_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53885_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53885(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53885_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53887_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53887(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1932 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53887_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53889_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53889(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53889_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53891_gshared (FlexibleDictionaryWrapper_2_t1932 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53891(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1932 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53891_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53893_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53893(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53893_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7789  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53895_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7767  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53895(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7789  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53895_gshared)(__this /* static, unused */, ___pair, method)
