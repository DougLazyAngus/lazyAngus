#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,GPScore>
struct Dictionary_2_t225;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8625;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t8726;
// System.Collections.ICollection
struct ICollection_t697;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GPScore>
struct KeyCollection_t5499;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GPScore>
struct ValueCollection_t679;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5337;
// System.Collections.Generic.IDictionary`2<System.Int32,GPScore>
struct IDictionary_2_t8728;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>[]
struct KeyValuePair_2U5BU5D_t8729;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>>
struct IEnumerator_1_t8730;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3902;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44MethodDeclarations.h"
#define Dictionary_2__ctor_m3538(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2__ctor_m9853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23772(__this, ___comparer, method) (( void (*) (Dictionary_2_t225 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20773_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m23773(__this, ___dictionary, method) (( void (*) (Dictionary_2_t225 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20775_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m23774(__this, ___capacity, method) (( void (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20777_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23775(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t225 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20779_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m23776(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t225 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2__ctor_m20781_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23777(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20783_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23778(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20785_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23779(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20787_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23780(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20789_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23781(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20791_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m23782(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20793_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m23783(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20795_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m23784(__this, ___key, method) (( void (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20797_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23785(__this, method) (( bool (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20799_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23786(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20801_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23787(__this, method) (( bool (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20803_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23788(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2_t5498 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20805_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23789(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5498 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20807_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23790(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2U5BU5D_t8729*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20809_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23791(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5498 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20811_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23792(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20813_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23793(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20815_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23794(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20817_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23795(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20819_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Count()
#define Dictionary_2_get_Count_m23796(__this, method) (( int32_t (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Count_m20821_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m23797(__this, ___key, method) (( GPScore_t343 * (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20823_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m23798(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_set_Item_m20825_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m23799(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t225 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20827_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m23800(__this, ___size, method) (( void (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20829_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m23801(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20831_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m23802(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5498  (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_make_pair_m20833_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m23803(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_pick_key_m20835_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m23804(__this /* static, unused */, ___key, ___value, method) (( GPScore_t343 * (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_pick_value_m20837_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m23805(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2U5BU5D_t8729*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20839_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Resize()
#define Dictionary_2_Resize_m23806(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_Resize_m20841_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m23807(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_Add_m20843_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Clear()
#define Dictionary_2_Clear_m23808(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_Clear_m20845_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m23809(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20847_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m23810(__this, ___value, method) (( bool (*) (Dictionary_2_t225 *, GPScore_t343 *, const MethodInfo*))Dictionary_2_ContainsValue_m20849_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m23811(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t225 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2_GetObjectData_m20851_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m23812(__this, ___sender, method) (( void (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20853_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Remove(TKey)
#define Dictionary_2_Remove_m23813(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20855_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m23814(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 **, const MethodInfo*))Dictionary_2_TryGetValue_m20857_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Keys()
#define Dictionary_2_get_Keys_m23815(__this, method) (( KeyCollection_t5499 * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Keys_m20859_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Values()
#define Dictionary_2_get_Values_m3533(__this, method) (( ValueCollection_t679 * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Values_m20861_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m23816(__this, ___key, method) (( int32_t (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20863_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m23817(__this, ___value, method) (( GPScore_t343 * (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20865_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m23818(__this, ___pair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5498 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20867_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m23819(__this, method) (( Enumerator_t5500  (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20869_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m23820(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20871_gshared)(__this /* static, unused */, ___key, ___value, method)
