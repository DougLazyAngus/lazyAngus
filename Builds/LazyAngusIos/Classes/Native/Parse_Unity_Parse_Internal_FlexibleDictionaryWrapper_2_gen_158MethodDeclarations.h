#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>
struct FlexibleDictionaryWrapper_2_t2027;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9556;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7762;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8478;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7850;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59605_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59605(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59605_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59606_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59606(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59606_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59607_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59607(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59607_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59608_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59608(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59608_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59609_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59609(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59609_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59610_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59610(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59610_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59611_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59611(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59611_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59612_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59612(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59612_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59613_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59613(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59613_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59614_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7627  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59614(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7627 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59614_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59615_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59615(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59615_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59616_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7627  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59616(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7627 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59616_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59617_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2U5BU5D_t8478* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59617(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2U5BU5D_t8478*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59617_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59618_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59618(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59618_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59619_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59619(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59619_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59620_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, KeyValuePair_2_t7627  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59620(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2027 *, KeyValuePair_2_t7627 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59620_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59621_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59621(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59621_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59622_gshared (FlexibleDictionaryWrapper_2_t2027 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59622(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2027 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59622_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59623_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59623(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59623_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7627  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59624_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7766  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59624(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7627  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7766 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59624_gshared)(__this /* static, unused */, ___pair, method)
