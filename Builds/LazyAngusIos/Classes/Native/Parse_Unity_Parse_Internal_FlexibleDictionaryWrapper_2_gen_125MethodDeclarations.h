#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1993;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9838;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7823;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t8334;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7832;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m57984_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m57984(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m57984_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57985_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57985(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57985_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m57986_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m57986(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m57986_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m57987_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m57987(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m57987_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57988_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57988(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57988_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m57989_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m57989(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m57989_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m57990_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m57990(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m57990_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m57991_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m57991(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m57991_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m57992_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m57992(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m57992_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m57993_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m57993(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m57993_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m57994_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m57994(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m57994_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m57995_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m57995(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m57995_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m57996_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, KeyValuePair_2U5BU5D_t8334* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m57996(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1993 *, KeyValuePair_2U5BU5D_t8334*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m57996_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m57997_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m57997(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m57997_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m57998_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m57998(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m57998_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m57999_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, KeyValuePair_2_t7827  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m57999(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1993 *, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m57999_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m58000_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m58000(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m58000_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58001_gshared (FlexibleDictionaryWrapper_2_t1993 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58001(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1993 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m58001_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58002_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58002(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m58002_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7827  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58003_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7827  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58003(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7827  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7827 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m58003_gshared)(__this /* static, unused */, ___pair, method)
