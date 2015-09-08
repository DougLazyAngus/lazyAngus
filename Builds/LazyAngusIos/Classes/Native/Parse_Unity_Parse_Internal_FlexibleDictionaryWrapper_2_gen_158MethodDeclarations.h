#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>
struct FlexibleDictionaryWrapper_2_t2030;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9561;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7767;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8483;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7855;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59617_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59617(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59617_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59618_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59618(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59618_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59619_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59619(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59619_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59620_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59620(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59620_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59621_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59621(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59621_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59622_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59622(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59622_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59623_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59623(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59623_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59624_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59624(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59624_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59625_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59625(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59625_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59626_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59626(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59626_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59627_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59627(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59627_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59628_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59628(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59628_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59629_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, KeyValuePair_2U5BU5D_t8483* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59629(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2030 *, KeyValuePair_2U5BU5D_t8483*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59630_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59630(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59630_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59631_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59631(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59631_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59632_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, KeyValuePair_2_t7632  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59632(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2030 *, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59632_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59633_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59633(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59633_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59634_gshared (FlexibleDictionaryWrapper_2_t2030 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59634(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2030 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59634_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59635_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59635(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59635_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7632  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59636_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7771  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59636(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7632  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59636_gshared)(__this /* static, unused */, ___pair, method)
