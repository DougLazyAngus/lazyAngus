#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>
struct FlexibleDictionaryWrapper_2_t1944;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9834;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t7570;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t8074;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7792;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m54986_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m54986(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m54986_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54987_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54987(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54987_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m54988_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m54988(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m54988_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m54989_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m54989(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m54989_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m54990_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m54990(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m54990_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m54991_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m54991(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m54991_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m54992_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m54992(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m54992_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m54993_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m54993(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m54993_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m54994_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m54994(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m54994_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m54995_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m54995(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m54995_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m54996_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m54996(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m54996_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m54997_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m54997(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m54997_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m54998_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2U5BU5D_t8074* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m54998(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2U5BU5D_t8074*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m54998_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m54999_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m54999(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m54999_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55000_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55000(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55000_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55001_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, KeyValuePair_2_t7787  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55001(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1944 *, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55001_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55002_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55002(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55002_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55003_gshared (FlexibleDictionaryWrapper_2_t1944 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55003(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1944 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55003_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55004_gshared (Object_t * __this /* static, unused */, float ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55004(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, float, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55004_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7787  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55005_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7626  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55005(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7787  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7626 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55005_gshared)(__this /* static, unused */, ___pair, method)
