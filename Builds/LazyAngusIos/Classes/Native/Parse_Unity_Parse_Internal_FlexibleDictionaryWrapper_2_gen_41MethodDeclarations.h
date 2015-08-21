#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>
struct FlexibleDictionaryWrapper_2_t1890;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t9205;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7194;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t7377;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t7203;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m48437_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m48437(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m48437_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48438_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48438(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48438_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m48439_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m48439(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m48439_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m48440_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m48440(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m48440_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48441_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48441(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48441_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m48442_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m48442(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m48442_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m48443_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m48443(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m48443_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Item(System.String)
extern "C" int8_t FlexibleDictionaryWrapper_2_get_Item_m48444_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m48444(__this, ___key, method) (( int8_t (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m48444_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m48445_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m48445(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m48445_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m48446_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m48446(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m48446_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m48447_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m48447(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m48447_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m48448_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m48448(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m48448_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m48449_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, KeyValuePair_2U5BU5D_t7377* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m48449(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1890 *, KeyValuePair_2U5BU5D_t7377*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m48449_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m48450_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m48450(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m48450_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m48451_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m48451(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m48451_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m48452_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, KeyValuePair_2_t7198  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m48452(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1890 *, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m48452_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m48453_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m48453(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m48453_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48454_gshared (FlexibleDictionaryWrapper_2_t1890 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48454(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1890 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m48454_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::<get_Values>b__0(TIn)
extern "C" int8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48455_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48455(__this /* static, unused */, ___item, method) (( int8_t (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m48455_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7198  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48456_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7198  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48456(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7198  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7198 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m48456_gshared)(__this /* static, unused */, ___pair, method)
