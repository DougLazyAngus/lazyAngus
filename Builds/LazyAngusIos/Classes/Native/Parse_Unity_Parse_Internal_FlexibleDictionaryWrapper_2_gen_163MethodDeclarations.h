#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>
struct FlexibleDictionaryWrapper_2_t1955;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8832;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7160;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7825;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7197;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54345_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54345(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54345_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54346_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54346(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54346_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54347_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54347(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54347_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54348_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54348(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54348_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54349_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54349(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54349_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54350_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54350(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54350_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54351_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54351(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54351_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54352_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54352(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54352_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54353_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54353(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54353_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54354_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54354(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54354_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54355_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54355(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54355_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54356_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54356(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54356_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54357_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2U5BU5D_t7825* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54357(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2U5BU5D_t7825*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54357_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54358_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54358(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54358_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54359_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54359(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54359_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54360_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, KeyValuePair_2_t6974  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54360(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1955 *, KeyValuePair_2_t6974 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54360_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54361_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54361(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54361_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54362_gshared (FlexibleDictionaryWrapper_2_t1955 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54362(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1955 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54362_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54363_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54363(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54363_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6974  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54364_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7164  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54364(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6974  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54364_gshared)(__this /* static, unused */, ___pair, method)
