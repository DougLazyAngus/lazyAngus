#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>
struct FlexibleDictionaryWrapper_2_t2018;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8932;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6999;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7906;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55242_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55242(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55242_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55243_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55243(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55243_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55244_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55244(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55244_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55245_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55245(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55245_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55246_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55246(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55246_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55247_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55247(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55247_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55248_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55248(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55248_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55249_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55249(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55249_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55250_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55250(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55250_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55251_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55251(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55251_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55252_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55252(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55252_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55253_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55253(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55253_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55254_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2U5BU5D_t7906* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55254(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2U5BU5D_t7906*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55254_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55255_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55255(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55255_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55256_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55256(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55256_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55257_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2_t7055  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55257(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55257_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55258_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55258(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55258_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55259_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55259(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55259_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55260_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55260(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55260_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7055  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55261_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7055  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55261(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7055  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7055 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55261_gshared)(__this /* static, unused */, ___pair, method)
