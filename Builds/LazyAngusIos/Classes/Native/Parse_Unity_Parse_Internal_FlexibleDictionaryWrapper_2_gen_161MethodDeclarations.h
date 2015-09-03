#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>
struct FlexibleDictionaryWrapper_2_t2029;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9555;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7566;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8477;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7849;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59721_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59721(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59721_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59722_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59722(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59722_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59723_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59723(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59723_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59724_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59724(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59724_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59725_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59725(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59725_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59726_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59726(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59726_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59727_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59727(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59727_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59728_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59728(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59728_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59729_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59729(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59729_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59730_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59730(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59730_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59731_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59731(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59731_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59732_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59732(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59732_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59733_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2U5BU5D_t8477* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59733(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2029 *, KeyValuePair_2U5BU5D_t8477*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59733_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59734_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59734(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59734_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59735_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59735(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59735_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59736_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59736(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2029 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59736_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59737_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59737(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59737_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59738_gshared (FlexibleDictionaryWrapper_2_t2029 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59738(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2029 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59738_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59739_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59739(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59739_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7626  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59740_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6093  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59740(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7626  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59740_gshared)(__this /* static, unused */, ___pair, method)
