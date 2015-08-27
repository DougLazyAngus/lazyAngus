#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>
struct FlexibleDictionaryWrapper_2_t1954;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9212;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7006;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7640;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7246;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51946_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51946(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51946_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51947_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51947(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51947_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51948_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51948(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51948_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51949_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51949(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51949_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51950_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51950(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51950_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51951_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51951(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51951_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51952_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51952(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51952_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m51953_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51953(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51953_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51954_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51954(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51954_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51955_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51955(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51955_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51956_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51956(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51956_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51957_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51957(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51957_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51958_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2U5BU5D_t7640* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51958(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2U5BU5D_t7640*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51958_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51959_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51959(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51959_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51960_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51960(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51960_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51961_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, KeyValuePair_2_t7241  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51961(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1954 *, KeyValuePair_2_t7241 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51961_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51962_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51962(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51962_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51963_gshared (FlexibleDictionaryWrapper_2_t1954 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51963(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1954 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51963_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51964_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51964(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51964_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7241  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51965_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7062  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51965(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7241  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7062 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51965_gshared)(__this /* static, unused */, ___pair, method)
