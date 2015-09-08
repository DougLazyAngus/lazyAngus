#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>
struct FlexibleDictionaryWrapper_2_t1872;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1241;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7773;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1430;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1417;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51158_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51158(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51158_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51159_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51159(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51159_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51160_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51160(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51160_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51161_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51161(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51161_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51162_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51162(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51162_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51163_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51163(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51163_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51164_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51164(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51164_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m51165_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51165(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51165_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51166_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51166(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51166_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51167_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51167(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51167_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51168_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51168(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51168_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51169_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51169(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51169_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51170_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2U5BU5D_t1430* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51170(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2U5BU5D_t1430*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51170_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51171_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51171(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51171_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51172_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51172(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51172_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51173_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, KeyValuePair_2_t792  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51173(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1872 *, KeyValuePair_2_t792 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51173_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51174_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51174(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51174_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51175_gshared (FlexibleDictionaryWrapper_2_t1872 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51175(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1872 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51175_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51176_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51176(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51176_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t792  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51177_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7777  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51177(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t792  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7777 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51177_gshared)(__this /* static, unused */, ___pair, method)
