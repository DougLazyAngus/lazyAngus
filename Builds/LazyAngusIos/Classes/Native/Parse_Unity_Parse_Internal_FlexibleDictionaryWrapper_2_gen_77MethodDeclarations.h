#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>
struct FlexibleDictionaryWrapper_2_t1929;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8713;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t823;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7575;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7235;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50435_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50435(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50435_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50436_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50436(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50436_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50437_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50437(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50437_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50438_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50438(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50438_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50439_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50439(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50439_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50440_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50440(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50440_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50441_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50441(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50441_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Item(System.String)
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Item_m50442_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50442(__this, ___key, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50442_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50443_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50443(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50443_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50444_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t5544  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50444(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50444_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50445_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50445(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50445_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50446_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t5544  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50446(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50446_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50447_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2U5BU5D_t7575* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50447(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2U5BU5D_t7575*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50447_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50448_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50448(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50448_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50449_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50449(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50449_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50450_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, KeyValuePair_2_t5544  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50450(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1929 *, KeyValuePair_2_t5544 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50450_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50451_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50451(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50451_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50452_gshared (FlexibleDictionaryWrapper_2_t1929 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50452(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1929 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50452_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::<get_Values>b__0(TIn)
extern "C" int32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50453_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50453(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50453_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t5544  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50454_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t778  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50454(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t5544  (*) (Object_t * /* static, unused */, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50454_gshared)(__this /* static, unused */, ___pair, method)
