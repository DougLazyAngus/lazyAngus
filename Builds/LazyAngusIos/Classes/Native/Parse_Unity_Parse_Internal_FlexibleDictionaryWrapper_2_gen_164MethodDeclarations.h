#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>
struct FlexibleDictionaryWrapper_2_t2032;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9555;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7823;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8477;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7849;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59850_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59850(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59850_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59851_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59851(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59851_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59852_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59852(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59852_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59853_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59853(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59853_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59854_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59854(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59854_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59855_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59855(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59855_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59856_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59856(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59856_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59857_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59857(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59857_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59858_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59858(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59858_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59859_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59859(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59859_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59860_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59860(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59860_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59861_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59861(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59861_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59862_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2U5BU5D_t8477* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59862(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2U5BU5D_t8477*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59862_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59863_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59863(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59863_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59864_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59864(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59864_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59865_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, KeyValuePair_2_t7626  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59865(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2032 *, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59865_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59866_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59866(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59866_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59867_gshared (FlexibleDictionaryWrapper_2_t2032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59867(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59867_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59868_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59868(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59868_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7626  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59869_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7827  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59869(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7626  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59869_gshared)(__this /* static, unused */, ___pair, method)
