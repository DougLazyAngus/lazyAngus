#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>
struct FlexibleDictionaryWrapper_2_t1923;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t9839;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t840;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t8015;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t7787;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m53500_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m53500(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1923 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m53500_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53501_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53501(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1923 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53501_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m53502_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m53502(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1923 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m53502_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m53503_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m53503(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1923 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m53503_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53504_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53504(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1923 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53504_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m53505_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m53505(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1923 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m53505_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m53506_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m53506(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1923 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m53506_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Item(System.String)
extern "C" int16_t FlexibleDictionaryWrapper_2_get_Item_m53507_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m53507(__this, ___key, method) (( int16_t (*) (FlexibleDictionaryWrapper_2_t1923 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m53507_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m53508_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m53508(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1923 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m53508_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m53509_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m53509(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1923 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m53509_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m53510_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m53510(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1923 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m53510_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m53511_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m53511(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1923 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m53511_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m53512_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, KeyValuePair_2U5BU5D_t8015* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m53512(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1923 *, KeyValuePair_2U5BU5D_t8015*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m53512_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m53513_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m53513(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1923 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m53513_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m53514_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m53514(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1923 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m53514_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m53515_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, KeyValuePair_2_t7782  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m53515(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1923 *, KeyValuePair_2_t7782 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m53515_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m53516_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m53516(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1923 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m53516_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53517_gshared (FlexibleDictionaryWrapper_2_t1923 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53517(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1923 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m53517_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::<get_Values>b__0(TIn)
extern "C" int16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53518_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53518(__this /* static, unused */, ___item, method) (( int16_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m53518_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7782  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53519_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t795  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53519(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7782  (*) (Object_t * /* static, unused */, KeyValuePair_2_t795 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m53519_gshared)(__this /* static, unused */, ___pair, method)
