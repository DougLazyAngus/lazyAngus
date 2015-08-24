#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>
struct FlexibleDictionaryWrapper_2_t2016;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8939;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7259;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7913;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7285;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55256_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55256(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55256_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55257_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55257(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55257_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55258_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55258(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55258_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55259_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55259(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55259_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55260_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55260(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55260_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55261_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55261(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55261_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55262_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55262(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55262_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55263_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55263(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55263_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55264_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55264(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55264_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55265_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55265(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55265_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55266_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55266(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55266_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55267_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55267(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55267_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55268_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2U5BU5D_t7913* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55268(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, KeyValuePair_2U5BU5D_t7913*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55268_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55269_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55269(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55269_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55270_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55270(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55270_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55271_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55271(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55271_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55272_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55272(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55272_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55273_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55273(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55273_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55274_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55274(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55274_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7062  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55275_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7263  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55275(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7062  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7263 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55275_gshared)(__this /* static, unused */, ___pair, method)
