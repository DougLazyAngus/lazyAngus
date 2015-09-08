#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>
struct FlexibleDictionaryWrapper_2_t2036;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9561;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7829;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8483;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59875_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59875(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59875_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59876_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59876(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59876_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59877_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59877(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59877_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59878_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59878(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59878_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59879_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59879(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59879_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59880_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59880(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59880_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59881_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59881(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59881_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59882_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59882(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59882_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59883_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59883(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59883_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59884_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59884(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59884_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59885_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59885(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59885_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59886_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59886(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59886_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59887_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, KeyValuePair_2U5BU5D_t8483* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59887(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2036 *, KeyValuePair_2U5BU5D_t8483*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59887_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59888_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59888(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59888_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59889_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59889(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59889_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59890_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59890(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2036 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59890_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59891_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59891(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59891_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59892_gshared (FlexibleDictionaryWrapper_2_t2036 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59892(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2036 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59892_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59893_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59893(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59893_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7632  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59894_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7833  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59894(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7632  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7833 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59894_gshared)(__this /* static, unused */, ___pair, method)
