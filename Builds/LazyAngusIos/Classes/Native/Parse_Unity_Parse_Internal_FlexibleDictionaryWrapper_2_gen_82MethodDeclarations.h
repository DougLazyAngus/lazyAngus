#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1950;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7783;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8139;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7799;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55481_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55481(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55481_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55482_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55482(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55482_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55483_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55483(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55483_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55484_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55484(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55484_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55485_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55485(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55485_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55486_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55486(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55486_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55487_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55487(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55487_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55488_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55488(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55488_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55489_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55489(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55489_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55490_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55490(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55490_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55491_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55491(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55491_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55492_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55492(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55492_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55493_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2U5BU5D_t8139* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55493(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2U5BU5D_t8139*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55493_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55494_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55494(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55494_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55495_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55495(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55495_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55496_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55496(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1950 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55496_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55497_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55497(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55497_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55498_gshared (FlexibleDictionaryWrapper_2_t1950 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55498(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1950 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55498_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55499_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55499(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55499_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6093  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55500_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7787  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55500(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6093  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7787 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55500_gshared)(__this /* static, unused */, ___pair, method)
