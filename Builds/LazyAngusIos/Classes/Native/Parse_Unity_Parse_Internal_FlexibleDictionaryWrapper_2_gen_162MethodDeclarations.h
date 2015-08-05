#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1964;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8843;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7160;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t7836;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7208;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54380_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54380(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54380_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54381_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54381(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54381_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54382_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54382(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54382_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54383_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54383(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54383_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54384_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54384(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54384_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54385_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54385(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54385_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54386_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54386(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54386_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m54387_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54387(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54387_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54388_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54388(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54388_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54389_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t6985  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54389(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54389_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54390_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54390(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54390_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54391_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t6985  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54391(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54391_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54392_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2U5BU5D_t7836* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54392(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2U5BU5D_t7836*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54392_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54393_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54393(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54393_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m54394_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m54394(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m54394_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54395_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, KeyValuePair_2_t6985  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54395(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1964 *, KeyValuePair_2_t6985 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54395_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m54396_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m54396(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m54396_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54397_gshared (FlexibleDictionaryWrapper_2_t1964 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54397(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1964 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m54397_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54398_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54398(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m54398_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6985  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54399_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7164  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54399(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6985  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7164 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m54399_gshared)(__this /* static, unused */, ___pair, method)
