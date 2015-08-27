#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>
struct FlexibleDictionaryWrapper_2_t2018;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8939;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t7012;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7913;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7285;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55323_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55323(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55323_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55324_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55324(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55324_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55325_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55325(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55325_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55326_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55326(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55326_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55327_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55327(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55327_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55328_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55328(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55328_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55329_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55329(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55329_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55330_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55330(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55330_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55331_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55331(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55331_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55332_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55332(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55332_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55333_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55333(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55333_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55334_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55334(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55334_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55335_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2U5BU5D_t7913* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55335(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2U5BU5D_t7913*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55335_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55336_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55336(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55336_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55337_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55337(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55337_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55338_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, KeyValuePair_2_t7062  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55338(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2018 *, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55338_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55339_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55339(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55339_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55340_gshared (FlexibleDictionaryWrapper_2_t2018 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55340(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2018 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55340_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55341_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55341(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55341_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7062  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55342_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7082  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55342(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7062  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55342_gshared)(__this /* static, unused */, ___pair, method)
