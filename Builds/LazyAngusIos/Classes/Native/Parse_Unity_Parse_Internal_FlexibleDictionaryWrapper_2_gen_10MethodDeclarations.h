#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>
struct FlexibleDictionaryWrapper_2_t1812;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1172;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6935;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1363;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1350;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46139_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46139(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1812 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46139_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46140_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46140(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1812 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46140_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46141_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46141(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1812 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46141_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46142_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46142(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1812 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46142_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46143_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46143(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1812 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46143_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46144_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46144(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1812 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46144_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46145_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46145(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1812 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46145_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46146_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46146(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1812 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46146_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46147_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46147(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1812 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46147_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46148_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46148(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1812 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46148_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46149_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46149(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1812 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46149_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46150_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46150(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1812 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46150_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46151_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, KeyValuePair_2U5BU5D_t1363* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46151(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1812 *, KeyValuePair_2U5BU5D_t1363*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46151_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46152_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46152(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1812 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46152_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46153_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46153(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1812 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46153_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46154_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, KeyValuePair_2_t730  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46154(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1812 *, KeyValuePair_2_t730 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46154_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46155_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46155(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1812 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46155_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46156_gshared (FlexibleDictionaryWrapper_2_t1812 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46156(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1812 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46156_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46157_gshared (Object_t * __this /* static, unused */, double ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46157(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, double, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46157_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t730  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46158_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7005  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46158(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t730  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7005 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46158_gshared)(__this /* static, unused */, ___pair, method)
