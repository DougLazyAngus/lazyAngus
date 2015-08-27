﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t8453;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9083;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t8454;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t8458;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1188;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t9625;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t7693;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t7255;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__65.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m61161_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m61161(__this, method) (( void (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2__ctor_m61161_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61163_gshared (Dictionary_2_t8453 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61163(__this, ___comparer, method) (( void (*) (Dictionary_2_t8453 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61163_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m61165_gshared (Dictionary_2_t8453 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m61165(__this, ___dictionary, method) (( void (*) (Dictionary_2_t8453 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61165_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m61167_gshared (Dictionary_2_t8453 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m61167(__this, ___capacity, method) (( void (*) (Dictionary_2_t8453 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m61167_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m61169_gshared (Dictionary_2_t8453 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m61169(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t8453 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m61169_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m61171_gshared (Dictionary_2_t8453 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m61171(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8453 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m61171_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61173_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61173(__this, method) (( Object_t* (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m61173_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61175_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61175(__this, method) (( Object_t* (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m61175_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m61177_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m61177(__this, method) (( Object_t * (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m61177_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m61179_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m61179(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8453 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m61179_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m61181_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m61181(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8453 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m61181_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m61183_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m61183(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8453 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m61183_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m61185_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m61185(__this, ___key, method) (( bool (*) (Dictionary_2_t8453 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m61185_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m61187_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m61187(__this, ___key, method) (( void (*) (Dictionary_2_t8453 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m61187_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61189_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61189(__this, method) (( bool (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m61189_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61191_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61191(__this, method) (( Object_t * (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m61191_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61193_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61193(__this, method) (( bool (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61193_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61195_gshared (Dictionary_2_t8453 * __this, KeyValuePair_2_t7250  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61195(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t8453 *, KeyValuePair_2_t7250 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m61195_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61197_gshared (Dictionary_2_t8453 * __this, KeyValuePair_2_t7250  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61197(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8453 *, KeyValuePair_2_t7250 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m61197_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61199_gshared (Dictionary_2_t8453 * __this, KeyValuePair_2U5BU5D_t7693* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61199(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8453 *, KeyValuePair_2U5BU5D_t7693*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61199_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61201_gshared (Dictionary_2_t8453 * __this, KeyValuePair_2_t7250  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61201(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t8453 *, KeyValuePair_2_t7250 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m61201_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m61203_gshared (Dictionary_2_t8453 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m61203(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8453 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m61203_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61205_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61205(__this, method) (( Object_t * (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m61205_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61207_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61207(__this, method) (( Object_t* (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m61207_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61209_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61209(__this, method) (( Object_t * (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m61209_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m61211_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m61211(__this, method) (( int32_t (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_get_Count_m61211_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m61213_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m61213(__this, ___key, method) (( int64_t (*) (Dictionary_2_t8453 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m61213_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m61215_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m61215(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8453 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m61215_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m61217_gshared (Dictionary_2_t8453 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m61217(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t8453 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m61217_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m61219_gshared (Dictionary_2_t8453 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m61219(__this, ___size, method) (( void (*) (Dictionary_2_t8453 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m61219_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m61221_gshared (Dictionary_2_t8453 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m61221(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8453 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m61221_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t7250  Dictionary_2_make_pair_m61223_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m61223(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7250  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m61223_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m61225_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m61225(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m61225_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m61227_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m61227(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m61227_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m61229_gshared (Dictionary_2_t8453 * __this, KeyValuePair_2U5BU5D_t7693* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m61229(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t8453 *, KeyValuePair_2U5BU5D_t7693*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m61229_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m61231_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m61231(__this, method) (( void (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_Resize_m61231_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m61233_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m61233(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t8453 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m61233_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m61235_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m61235(__this, method) (( void (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_Clear_m61235_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m61237_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m61237(__this, ___key, method) (( bool (*) (Dictionary_2_t8453 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m61237_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m61239_gshared (Dictionary_2_t8453 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m61239(__this, ___value, method) (( bool (*) (Dictionary_2_t8453 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m61239_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m61241_gshared (Dictionary_2_t8453 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m61241(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t8453 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m61241_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m61243_gshared (Dictionary_2_t8453 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m61243(__this, ___sender, method) (( void (*) (Dictionary_2_t8453 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m61243_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m61245_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m61245(__this, ___key, method) (( bool (*) (Dictionary_2_t8453 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m61245_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m61247_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m61247(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t8453 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m61247_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t8454 * Dictionary_2_get_Keys_m61249_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m61249(__this, method) (( KeyCollection_t8454 * (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_get_Keys_m61249_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t8458 * Dictionary_2_get_Values_m61251_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m61251(__this, method) (( ValueCollection_t8458 * (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_get_Values_m61251_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m61253_gshared (Dictionary_2_t8453 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m61253(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t8453 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m61253_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m61255_gshared (Dictionary_2_t8453 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m61255(__this, ___value, method) (( int64_t (*) (Dictionary_2_t8453 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m61255_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m61257_gshared (Dictionary_2_t8453 * __this, KeyValuePair_2_t7250  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m61257(__this, ___pair, method) (( bool (*) (Dictionary_2_t8453 *, KeyValuePair_2_t7250 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m61257_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t8456  Dictionary_2_GetEnumerator_m61259_gshared (Dictionary_2_t8453 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m61259(__this, method) (( Enumerator_t8456  (*) (Dictionary_2_t8453 *, const MethodInfo*))Dictionary_2_GetEnumerator_m61259_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2140  Dictionary_2_U3CCopyToU3Em__0_m61261_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m61261(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m61261_gshared)(__this /* static, unused */, ___key, ___value, method)
