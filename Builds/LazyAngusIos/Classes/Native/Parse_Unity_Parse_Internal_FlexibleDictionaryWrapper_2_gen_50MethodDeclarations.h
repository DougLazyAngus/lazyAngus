#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>
struct FlexibleDictionaryWrapper_2_t1848;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9104;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t6925;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7299;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7125;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48017_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48017(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48017_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48018_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48018(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48018_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48019_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48019(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48019_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48020_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48020(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48020_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48021_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48021(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48021_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48022_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48022(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48022_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48023_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48023(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48023_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48024_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48024(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48024_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48025_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48025(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48025_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48026_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48026(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48026_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48027_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48027(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48027_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48028_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48028(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48028_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48029_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2U5BU5D_t7299* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48029(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2U5BU5D_t7299*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48029_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48030_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48030(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48030_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48031_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48031(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48031_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48032_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, KeyValuePair_2_t7120  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48032(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1848 *, KeyValuePair_2_t7120 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48032_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48033_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48033(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48033_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48034_gshared (FlexibleDictionaryWrapper_2_t1848 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48034(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1848 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48034_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48035_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48035(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48035_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7120  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48036_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t6981  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48036(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7120  (*) (Object_t * /* static, unused */, KeyValuePair_2_t6981 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48036_gshared)(__this /* static, unused */, ___pair, method)
