#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>
struct FlexibleDictionaryWrapper_2_t1962;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9836;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7772;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8204;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7810;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56215_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56215(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56215_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56216_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56216(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56216_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56217_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56217(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56217_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56218_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56218(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56218_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56219_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56219(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56219_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56220_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56220(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56220_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56221_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56221(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56221_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56222_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56222(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56222_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56223_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56223(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56223_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56224_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56224(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56224_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56225_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56225(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56225_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56226_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56226(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56226_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56227_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2U5BU5D_t8204* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56227(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2U5BU5D_t8204*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56227_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56228_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56228(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56228_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56229_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56229(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56229_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56230_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, KeyValuePair_2_t7805  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56230(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1962 *, KeyValuePair_2_t7805 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56230_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56231_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56231(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56231_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56232_gshared (FlexibleDictionaryWrapper_2_t1962 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56232(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1962 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56232_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56233_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56233(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56233_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7805  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56234_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7776  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56234(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7805  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7776 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56234_gshared)(__this /* static, unused */, ___pair, method)
