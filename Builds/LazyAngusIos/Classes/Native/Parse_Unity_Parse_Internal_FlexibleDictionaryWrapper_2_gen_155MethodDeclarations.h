#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>
struct FlexibleDictionaryWrapper_2_t2027;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9561;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8483;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59251_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59251(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59251_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59252_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59252(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59252_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59253_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59253(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59253_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59254_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59254(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59254_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59255_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59255(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59255_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59256_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59256(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59256_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59257_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59257(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59257_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59258_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59258(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59258_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59259_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59259(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59259_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59260_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59260(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59260_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59261_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59261(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59261_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59262_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59262(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59262_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59263_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2U5BU5D_t8483* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59263(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2U5BU5D_t8483*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59263_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59264_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59264(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59264_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59265_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59265(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59265_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59266_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59266(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59266_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59267_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59267(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59267_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59268_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59268(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59268_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59269_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59269(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59269_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7632  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59270_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t795  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59270(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7632  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59270_gshared)(__this /* static, unused */, ___pair, method)
