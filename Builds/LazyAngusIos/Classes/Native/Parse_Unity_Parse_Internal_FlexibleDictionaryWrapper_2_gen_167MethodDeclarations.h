#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>
struct FlexibleDictionaryWrapper_2_t2016;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8936;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7003;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7910;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7282;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55334_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55334(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55334_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55335_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55335(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55335_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55336_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55336(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55336_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55337_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55337(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55337_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55338_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55338(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55338_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55339_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55339(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55339_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55340_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55340(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55340_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m55341_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55341(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55341_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55342_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55342(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55342_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55343_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55343(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55343_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55344_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55344(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55344_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55345_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55345(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55345_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55346_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2U5BU5D_t7910* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55346(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2016 *, KeyValuePair_2U5BU5D_t7910*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55346_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55347_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55347(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55347_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55348_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55348(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55348_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55349_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, KeyValuePair_2_t7059  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55349(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2016 *, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55349_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55350_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55350(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55350_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55351_gshared (FlexibleDictionaryWrapper_2_t2016 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55351(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2016 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55351_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55352_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55352(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55352_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7059  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55353_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7059  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55353(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7059  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7059 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55353_gshared)(__this /* static, unused */, ___pair, method)
