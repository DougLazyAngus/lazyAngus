#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t1132;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t4508;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>
struct ICollection_1_t4509;
// System.Collections.ICollection
struct ICollection_t590;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t1130;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct KeyCollection_t3921;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct ValueCollection_t3922;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t3900;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct IDictionary_2_t4510;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1245;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>[]
struct KeyValuePair_2U5BU5D_t4511;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
struct IEnumerator_1_t4512;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1441;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_35.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__32.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor()
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_35MethodDeclarations.h"
#define Dictionary_2__ctor_m6567(__this, method) (( void (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2__ctor_m25773_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25774(__this, ___comparer, method) (( void (*) (Dictionary_2_t1132 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25775_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m25776(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1132 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25777_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Int32)
#define Dictionary_2__ctor_m25778(__this, ___capacity, method) (( void (*) (Dictionary_2_t1132 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25779_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25780(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1132 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25781_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m25782(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1132 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2__ctor_m25783_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25784(__this, method) (( Object_t* (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25785_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25786(__this, method) (( Object_t* (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25787_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25788(__this, method) (( Object_t * (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25789_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25790(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1132 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25791_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25792(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1132 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25793_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m25794(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1132 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25795_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m25796(__this, ___key, method) (( bool (*) (Dictionary_2_t1132 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25797_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m25798(__this, ___key, method) (( void (*) (Dictionary_2_t1132 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25799_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25800(__this, method) (( bool (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25802(__this, method) (( Object_t * (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25804(__this, method) (( bool (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25806(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1132 *, KeyValuePair_2_t3920 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25807_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25808(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1132 *, KeyValuePair_2_t3920 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25809_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25810(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1132 *, KeyValuePair_2U5BU5D_t4511*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25811_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25812(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1132 *, KeyValuePair_2_t3920 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25813_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25814(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1132 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25815_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25816(__this, method) (( Object_t * (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25817_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25818(__this, method) (( Object_t* (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25819_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25820(__this, method) (( Object_t * (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25821_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
#define Dictionary_2_get_Count_m25822(__this, method) (( int32_t (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_get_Count_m25823_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Item(TKey)
#define Dictionary_2_get_Item_m25824(__this, ___key, method) (( NetworkAccessToken_t1130 * (*) (Dictionary_2_t1132 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m25825_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m25826(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1132 *, uint64_t, NetworkAccessToken_t1130 *, const MethodInfo*))Dictionary_2_set_Item_m25827_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m25828(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1132 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25829_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m25830(__this, ___size, method) (( void (*) (Dictionary_2_t1132 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25831_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m25832(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1132 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25833_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m25834(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3920  (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1130 *, const MethodInfo*))Dictionary_2_make_pair_m25835_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m25836(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1130 *, const MethodInfo*))Dictionary_2_pick_key_m25837_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m25838(__this /* static, unused */, ___key, ___value, method) (( NetworkAccessToken_t1130 * (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1130 *, const MethodInfo*))Dictionary_2_pick_value_m25839_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m25840(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1132 *, KeyValuePair_2U5BU5D_t4511*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25841_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Resize()
#define Dictionary_2_Resize_m25842(__this, method) (( void (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_Resize_m25843_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Add(TKey,TValue)
#define Dictionary_2_Add_m25844(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1132 *, uint64_t, NetworkAccessToken_t1130 *, const MethodInfo*))Dictionary_2_Add_m25845_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Clear()
#define Dictionary_2_Clear_m25846(__this, method) (( void (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_Clear_m25847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m25848(__this, ___key, method) (( bool (*) (Dictionary_2_t1132 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m25849_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m25850(__this, ___value, method) (( bool (*) (Dictionary_2_t1132 *, NetworkAccessToken_t1130 *, const MethodInfo*))Dictionary_2_ContainsValue_m25851_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m25852(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1132 *, SerializationInfo_t1245 *, StreamingContext_t1246 , const MethodInfo*))Dictionary_2_GetObjectData_m25853_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m25854(__this, ___sender, method) (( void (*) (Dictionary_2_t1132 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25855_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Remove(TKey)
#define Dictionary_2_Remove_m25856(__this, ___key, method) (( bool (*) (Dictionary_2_t1132 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m25857_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m25858(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1132 *, uint64_t, NetworkAccessToken_t1130 **, const MethodInfo*))Dictionary_2_TryGetValue_m25859_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Keys()
#define Dictionary_2_get_Keys_m25860(__this, method) (( KeyCollection_t3921 * (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_get_Keys_m25861_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Values()
#define Dictionary_2_get_Values_m25862(__this, method) (( ValueCollection_t3922 * (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_get_Values_m25863_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m25864(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t1132 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25865_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m25866(__this, ___value, method) (( NetworkAccessToken_t1130 * (*) (Dictionary_2_t1132 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25867_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m25868(__this, ___pair, method) (( bool (*) (Dictionary_2_t1132 *, KeyValuePair_2_t3920 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25869_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m25870(__this, method) (( Enumerator_t3923  (*) (Dictionary_2_t1132 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25871_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m25872(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1708  (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1130 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25873_gshared)(__this /* static, unused */, ___key, ___value, method)
