#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>
struct FlexibleDictionaryWrapper_2_t2000;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9216;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7002;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7848;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7278;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54350_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54350(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54350_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54351_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54351(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54351_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54352_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54352(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54352_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54353_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54353(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54353_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54354_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54354(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54354_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54355_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54355(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54355_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54356_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54356(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54356_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m54357_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54357(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54357_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54358_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54358(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54358_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54359_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54359(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54359_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54360_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54360(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54360_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54361_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54361(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54361_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54362_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2U5BU5D_t7848* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54362(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2U5BU5D_t7848*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54362_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54363_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54363(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54363_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54364_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54364(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54364_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54365_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, KeyValuePair_2_t7082  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54365(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2000 *, KeyValuePair_2_t7082 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54365_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54366_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54366(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54366_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54367_gshared (FlexibleDictionaryWrapper_2_t2000 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54367(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2000 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54367_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54368_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54368(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54368_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Int32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7082  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54369_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t5544  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54369(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7082  (*) (Object_t * /* static, unused */, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54369_gshared)(__this /* static, unused */, ___pair, method)
