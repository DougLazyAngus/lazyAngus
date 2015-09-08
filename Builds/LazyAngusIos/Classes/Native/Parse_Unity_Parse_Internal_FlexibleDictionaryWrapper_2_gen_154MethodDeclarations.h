#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>
struct FlexibleDictionaryWrapper_2_t2026;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9846;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t8418;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7848;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59208_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59208(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59208_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59209_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59209(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59209_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59210_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59210(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59210_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59211_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59211(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59211_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59212_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59212(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59212_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59213_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59213(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59213_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59214_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59214(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59214_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Item(System.String)
extern "C" double FlexibleDictionaryWrapper_2_get_Item_m59215_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59215(__this, ___key, method) (( double (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59215_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59216_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59216(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59216_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59217_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59217(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59217_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59218_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59218(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59218_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59219_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59219(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59219_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59220_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2U5BU5D_t8418* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59220(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2U5BU5D_t8418*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59220_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59221_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59221(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59221_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59222_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59222(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59222_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59223_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, KeyValuePair_2_t7652  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59223(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2026 *, KeyValuePair_2_t7652 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59223_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59224_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59224(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59224_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59225_gshared (FlexibleDictionaryWrapper_2_t2026 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59225(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2026 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59225_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::<get_Values>b__0(TIn)
extern "C" double FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59226_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59226(__this /* static, unused */, ___item, method) (( double (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59226_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7652  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59227_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7632  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59227(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7652  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59227_gshared)(__this /* static, unused */, ___pair, method)
