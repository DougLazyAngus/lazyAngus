#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>
struct FlexibleDictionaryWrapper_2_t1922;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7576;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7950;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7776;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53457_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53457(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53457_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53458_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53458(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53458_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53459_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53459(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53459_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53460_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53460(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53460_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53461_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53461(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53461_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53462_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53462(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53462_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53463_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53463(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53463_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m53464_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53464(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53464_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53465_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53465(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53465_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53466_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53466(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53466_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53467_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53467(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53467_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53468_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53468(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53468_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53469_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2U5BU5D_t7950* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53469(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2U5BU5D_t7950*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53469_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53470_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53470(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53470_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53471_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53471(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53471_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53472_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, KeyValuePair_2_t7771  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53472(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1922 *, KeyValuePair_2_t7771 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53472_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53473_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53473(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53473_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53474_gshared (FlexibleDictionaryWrapper_2_t1922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53474(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53474_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53475_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53475(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53475_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7771  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53476_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7632  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53476(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7771  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7632 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53476_gshared)(__this /* static, unused */, ___pair, method)
