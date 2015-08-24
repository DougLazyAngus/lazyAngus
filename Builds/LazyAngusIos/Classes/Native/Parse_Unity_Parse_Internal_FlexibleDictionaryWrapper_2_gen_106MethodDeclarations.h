#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>
struct FlexibleDictionaryWrapper_2_t1958;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9083;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7197;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7705;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7257;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52355_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52355(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52355_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52356_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52356(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52356_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52357_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52357(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52357_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52358_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52358(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52358_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52359_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52359(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52359_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52360_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52360(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52360_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52361_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52361(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52361_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Item(System.String)
extern "C" int64_t FlexibleDictionaryWrapper_2_get_Item_m52362_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52362(__this, ___key, method) (( int64_t (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52362_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52363_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52363(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52363_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52364_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t7252  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52364(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52364_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52365_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52365(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52365_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52366_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t7252  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52366(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52366_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52367_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2U5BU5D_t7705* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52367(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2U5BU5D_t7705*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52367_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52368_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52368(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52368_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52369_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52369(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52369_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52370_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, KeyValuePair_2_t7252  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52370(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1958 *, KeyValuePair_2_t7252 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52370_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52371_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52371(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52371_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52372_gshared (FlexibleDictionaryWrapper_2_t1958 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52372(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1958 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52372_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::<get_Values>b__0(TIn)
extern "C" int64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52373_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52373(__this /* static, unused */, ___item, method) (( int64_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52373_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7252  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52374_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7201  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52374(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7252  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7201 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52374_gshared)(__this /* static, unused */, ___pair, method)
