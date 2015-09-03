#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>
struct FlexibleDictionaryWrapper_2_t1949;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7772;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t8139;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7799;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m55438_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m55438(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m55438_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55439_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55439(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55439_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m55440_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m55440(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m55440_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m55441_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m55441(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m55441_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55442_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55442(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55442_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m55443_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m55443(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m55443_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m55444_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m55444(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m55444_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m55445_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m55445(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m55445_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m55446_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m55446(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m55446_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m55447_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m55447(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m55447_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m55448_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m55448(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m55448_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m55449_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m55449(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m55449_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m55450_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2U5BU5D_t8139* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m55450(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2U5BU5D_t8139*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m55450_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m55451_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m55451(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m55451_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m55452_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m55452(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m55452_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m55453_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, KeyValuePair_2_t6093  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m55453(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1949 *, KeyValuePair_2_t6093 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m55453_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m55454_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m55454(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m55454_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55455_gshared (FlexibleDictionaryWrapper_2_t1949 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55455(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1949 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m55455_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55456_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55456(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m55456_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t6093  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55457_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7776  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55457(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t6093  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m55457_gshared)(__this /* static, unused */, ___pair, method)
