#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1937;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7814;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8022;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7794;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54095_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54095(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54095_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54096_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54096(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54096_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54097_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54097(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54097_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54098_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54098(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54098_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54099_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54099(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54099_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54100_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54100(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54100_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54101_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54101(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54101_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m54102_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54102(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54102_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54103_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54103(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54103_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54104_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54104(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54104_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54105_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54105(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54105_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54106_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54106(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54106_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54107_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2U5BU5D_t8022* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54107(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2U5BU5D_t8022*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54107_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54108_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54108(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54108_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54109_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54109(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54109_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54110_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, KeyValuePair_2_t7789  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54110(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1937 *, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54110_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54111_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54111(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54111_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54112_gshared (FlexibleDictionaryWrapper_2_t1937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54112(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54112_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54113_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54113(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54113_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7789  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54114_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7818  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54114(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7789  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54114_gshared)(__this /* static, unused */, ___pair, method)
