#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>
struct FlexibleDictionaryWrapper_2_t1910;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9778;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7579;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7880;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7772;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52307_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52307(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52307_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52309_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52309(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52309_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52311_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52311(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52311_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52313_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52313(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52313_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52315_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52315(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52315_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52317_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52317(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52317_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52319_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52319(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52319_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m52321_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52321(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52321_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52323_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52323(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52323_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52325_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t7767  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52325(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52325_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52327_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52327(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52327_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52329_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t7767  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52329(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52329_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52331_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2U5BU5D_t7880* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52331(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2U5BU5D_t7880*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52331_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52333_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52333(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52333_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52335_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52335(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52335_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52337_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, KeyValuePair_2_t7767  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52337(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1910 *, KeyValuePair_2_t7767 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52337_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52339_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52339(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52339_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52341_gshared (FlexibleDictionaryWrapper_2_t1910 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52341(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1910 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52341_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52343_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52343(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52343_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7767  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52345_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6104  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52345(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7767  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6104 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52345_gshared)(__this /* static, unused */, ___pair, method)
