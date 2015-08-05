#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>
struct FlexibleDictionaryWrapper_2_t1917;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9113;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t766;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7692;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7190;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m51968_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51968(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51968_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51969_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51969(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51969_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m51970_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m51970(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m51970_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m51971_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m51971(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m51971_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51972_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51972(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51972_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m51973_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m51973(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m51973_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m51974_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m51974(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m51974_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m51975_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m51975(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m51975_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m51976_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m51976(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m51976_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m51977_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7185  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m51977(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m51977_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m51978_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m51978(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m51978_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m51979_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7185  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m51979(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m51979_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m51980_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2U5BU5D_t7692* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m51980(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2U5BU5D_t7692*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m51980_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m51981_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m51981(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m51981_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m51982_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m51982(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m51982_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m51983_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7185  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m51983(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7185 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m51983_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m51984_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m51984(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m51984_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51985_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51985(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m51985_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51986_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51986(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m51986_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7185  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51987_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t728  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51987(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7185  (*) (Object_t * /* static, unused */, KeyValuePair_2_t728 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m51987_gshared)(__this /* static, unused */, ___pair, method)
