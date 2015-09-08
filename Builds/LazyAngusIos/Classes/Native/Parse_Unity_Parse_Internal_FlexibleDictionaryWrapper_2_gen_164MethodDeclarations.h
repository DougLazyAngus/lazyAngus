#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>
struct FlexibleDictionaryWrapper_2_t2033;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1231;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t9556;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7824;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t8478;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t7850;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m59863_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m59863(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t2033 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m59863_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59864_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59864(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2033 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59864_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m59865_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m59865(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2033 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m59865_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m59866_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m59866(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2033 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m59866_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59867_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59867(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2033 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59867_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m59868_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m59868(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2033 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m59868_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m59869_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m59869(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2033 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m59869_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Item(System.String)
extern "C" float FlexibleDictionaryWrapper_2_get_Item_m59870_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m59870(__this, ___key, method) (( float (*) (FlexibleDictionaryWrapper_2_t2033 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m59870_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m59871_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m59871(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t2033 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m59871_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m59872_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, KeyValuePair_2_t7627  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59872(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t2033 *, KeyValuePair_2_t7627 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59872_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m59873_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m59873(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t2033 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m59873_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m59874_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, KeyValuePair_2_t7627  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m59874(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2033 *, KeyValuePair_2_t7627 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m59874_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m59875_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, KeyValuePair_2U5BU5D_t8478* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m59875(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t2033 *, KeyValuePair_2U5BU5D_t8478*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m59875_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m59876_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59876(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t2033 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59876_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m59877_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m59877(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2033 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m59877_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m59878_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, KeyValuePair_2_t7627  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m59878(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t2033 *, KeyValuePair_2_t7627 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m59878_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m59879_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m59879(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t2033 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m59879_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59880_gshared (FlexibleDictionaryWrapper_2_t2033 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59880(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t2033 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m59880_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<get_Values>b__0(TIn)
extern "C" float FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59881_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59881(__this /* static, unused */, ___item, method) (( float (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m59881_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7627  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59882_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7828  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59882(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7627  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7828 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m59882_gshared)(__this /* static, unused */, ___pair, method)
