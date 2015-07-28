﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5475;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8624;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t5478;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t5482;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1125;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t8720;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7474;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t7144;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m23433_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23433(__this, method) (( void (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2__ctor_m23433_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23435_gshared (Dictionary_2_t5475 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23435(__this, ___comparer, method) (( void (*) (Dictionary_2_t5475 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23435_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m23437_gshared (Dictionary_2_t5475 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m23437(__this, ___dictionary, method) (( void (*) (Dictionary_2_t5475 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23437_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23438_gshared (Dictionary_2_t5475 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23438(__this, ___capacity, method) (( void (*) (Dictionary_2_t5475 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23438_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23440_gshared (Dictionary_2_t5475 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23440(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t5475 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23440_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23442_gshared (Dictionary_2_t5475 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23442(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5475 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m23442_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23444_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23444(__this, method) (( Object_t* (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23444_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23446_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23446(__this, method) (( Object_t* (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23446_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m23448_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23448(__this, method) (( Object_t * (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m23448_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23450_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23450(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5475 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23450_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23452_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23452(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5475 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23452_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23454_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23454(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5475 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23454_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23456_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23456(__this, ___key, method) (( bool (*) (Dictionary_2_t5475 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23456_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23458_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23458(__this, ___key, method) (( void (*) (Dictionary_2_t5475 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23458_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23460_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23460(__this, method) (( bool (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23460_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23462_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23462(__this, method) (( Object_t * (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23462_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23464_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23464(__this, method) (( bool (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23464_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23466_gshared (Dictionary_2_t5475 * __this, KeyValuePair_2_t5476  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23466(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t5475 *, KeyValuePair_2_t5476 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23466_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23468_gshared (Dictionary_2_t5475 * __this, KeyValuePair_2_t5476  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23468(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5475 *, KeyValuePair_2_t5476 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23468_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23470_gshared (Dictionary_2_t5475 * __this, KeyValuePair_2U5BU5D_t7474* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23470(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5475 *, KeyValuePair_2U5BU5D_t7474*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23470_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23472_gshared (Dictionary_2_t5475 * __this, KeyValuePair_2_t5476  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23472(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t5475 *, KeyValuePair_2_t5476 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23472_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23474_gshared (Dictionary_2_t5475 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23474(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5475 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23474_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23476_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23476(__this, method) (( Object_t * (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23476_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23478_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23478(__this, method) (( Object_t* (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23478_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23480_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23480(__this, method) (( Object_t * (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23480_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23482_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23482(__this, method) (( int32_t (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_get_Count_m23482_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m23484_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23484(__this, ___key, method) (( int32_t (*) (Dictionary_2_t5475 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23484_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23486_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23486(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5475 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m23486_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23488_gshared (Dictionary_2_t5475 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23488(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t5475 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23488_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23490_gshared (Dictionary_2_t5475 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23490(__this, ___size, method) (( void (*) (Dictionary_2_t5475 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23490_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23492_gshared (Dictionary_2_t5475 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23492(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5475 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23492_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t5476  Dictionary_2_make_pair_m23494_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23494(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5476  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m23494_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23496_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23496(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m23496_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m23498_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23498(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m23498_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23500_gshared (Dictionary_2_t5475 * __this, KeyValuePair_2U5BU5D_t7474* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23500(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t5475 *, KeyValuePair_2U5BU5D_t7474*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23500_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m23502_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23502(__this, method) (( void (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_Resize_m23502_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23504_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23504(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t5475 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m23504_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m23506_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23506(__this, method) (( void (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_Clear_m23506_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23508_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23508(__this, ___key, method) (( bool (*) (Dictionary_2_t5475 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23508_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23510_gshared (Dictionary_2_t5475 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23510(__this, ___value, method) (( bool (*) (Dictionary_2_t5475 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m23510_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23512_gshared (Dictionary_2_t5475 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23512(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t5475 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m23512_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23514_gshared (Dictionary_2_t5475 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23514(__this, ___sender, method) (( void (*) (Dictionary_2_t5475 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23514_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23516_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23516(__this, ___key, method) (( bool (*) (Dictionary_2_t5475 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23516_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23518_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23518(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t5475 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m23518_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t5478 * Dictionary_2_get_Keys_m23520_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23520(__this, method) (( KeyCollection_t5478 * (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_get_Keys_m23520_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t5482 * Dictionary_2_get_Values_m23522_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23522(__this, method) (( ValueCollection_t5482 * (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_get_Values_m23522_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23524_gshared (Dictionary_2_t5475 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23524(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t5475 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23524_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m23526_gshared (Dictionary_2_t5475 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23526(__this, ___value, method) (( int32_t (*) (Dictionary_2_t5475 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23526_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23528_gshared (Dictionary_2_t5475 * __this, KeyValuePair_2_t5476  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23528(__this, ___pair, method) (( bool (*) (Dictionary_2_t5475 *, KeyValuePair_2_t5476 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23528_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t5480  Dictionary_2_GetEnumerator_m23530_gshared (Dictionary_2_t5475 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23530(__this, method) (( Enumerator_t5480  (*) (Dictionary_2_t5475 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23530_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2079  Dictionary_2_U3CCopyToU3Em__0_m23532_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23532(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23532_gshared)(__this /* static, unused */, ___key, ___value, method)