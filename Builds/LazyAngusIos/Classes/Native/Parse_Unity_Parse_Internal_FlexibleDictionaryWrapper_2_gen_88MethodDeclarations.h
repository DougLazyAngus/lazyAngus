#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>
struct FlexibleDictionaryWrapper_2_t1886;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8632;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6931;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7494;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7154;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50305_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50305(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50305_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50306_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50306(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50306_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50307_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50307(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50307_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50308_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50308(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50308_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50309_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50309(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50309_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50310_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50310(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50310_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50311_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50311(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50311_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50312_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50312(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50312_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50313_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50313(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50313_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50314_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50314(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50314_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50315_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50315(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50315_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50316_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50316(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50316_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50317_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2U5BU5D_t7494* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50317(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2U5BU5D_t7494*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50317_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50318_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50318(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50318_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50319_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50319(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50319_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50320_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, KeyValuePair_2_t5495  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50320(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1886 *, KeyValuePair_2_t5495 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50320_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50321_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50321(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50321_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50322_gshared (FlexibleDictionaryWrapper_2_t1886 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50322(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1886 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50322_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50323_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50323(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50323_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5495  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50324_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7001  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50324(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5495  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7001 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50324_gshared)(__this /* static, unused */, ___pair, method)
