#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t1134;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t4510;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>
struct ICollection_1_t4511;
// System.Collections.ICollection
struct ICollection_t592;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t1132;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct KeyCollection_t3923;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct ValueCollection_t3924;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t3902;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct IDictionary_2_t4512;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>[]
struct KeyValuePair_2U5BU5D_t4513;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
struct IEnumerator_1_t4514;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1443;
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
#define Dictionary_2__ctor_m6592(__this, method) (( void (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2__ctor_m25798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25799(__this, ___comparer, method) (( void (*) (Dictionary_2_t1134 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25800_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m25801(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1134 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25802_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Int32)
#define Dictionary_2__ctor_m25803(__this, ___capacity, method) (( void (*) (Dictionary_2_t1134 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25804_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25805(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1134 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25806_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m25807(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1134 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2__ctor_m25808_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25809(__this, method) (( Object_t* (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25810_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25811(__this, method) (( Object_t* (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25812_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25813(__this, method) (( Object_t * (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25814_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25815(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1134 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25816_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25817(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1134 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25818_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m25819(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1134 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25820_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m25821(__this, ___key, method) (( bool (*) (Dictionary_2_t1134 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25822_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m25823(__this, ___key, method) (( void (*) (Dictionary_2_t1134 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25824_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25825(__this, method) (( bool (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25827(__this, method) (( Object_t * (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25828_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25829(__this, method) (( bool (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25831(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1134 *, KeyValuePair_2_t3922 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25832_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25833(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1134 *, KeyValuePair_2_t3922 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25834_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25835(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1134 *, KeyValuePair_2U5BU5D_t4513*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25836_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25837(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1134 *, KeyValuePair_2_t3922 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25838_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25839(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1134 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25840_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25841(__this, method) (( Object_t * (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25842_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25843(__this, method) (( Object_t* (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25844_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25845(__this, method) (( Object_t * (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25846_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
#define Dictionary_2_get_Count_m25847(__this, method) (( int32_t (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_get_Count_m25848_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Item(TKey)
#define Dictionary_2_get_Item_m25849(__this, ___key, method) (( NetworkAccessToken_t1132 * (*) (Dictionary_2_t1134 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m25850_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m25851(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1134 *, uint64_t, NetworkAccessToken_t1132 *, const MethodInfo*))Dictionary_2_set_Item_m25852_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m25853(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1134 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25854_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m25855(__this, ___size, method) (( void (*) (Dictionary_2_t1134 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25856_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m25857(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1134 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25858_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m25859(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3922  (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1132 *, const MethodInfo*))Dictionary_2_make_pair_m25860_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m25861(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1132 *, const MethodInfo*))Dictionary_2_pick_key_m25862_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m25863(__this /* static, unused */, ___key, ___value, method) (( NetworkAccessToken_t1132 * (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1132 *, const MethodInfo*))Dictionary_2_pick_value_m25864_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m25865(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1134 *, KeyValuePair_2U5BU5D_t4513*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25866_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Resize()
#define Dictionary_2_Resize_m25867(__this, method) (( void (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_Resize_m25868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Add(TKey,TValue)
#define Dictionary_2_Add_m25869(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1134 *, uint64_t, NetworkAccessToken_t1132 *, const MethodInfo*))Dictionary_2_Add_m25870_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Clear()
#define Dictionary_2_Clear_m25871(__this, method) (( void (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_Clear_m25872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m25873(__this, ___key, method) (( bool (*) (Dictionary_2_t1134 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m25874_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m25875(__this, ___value, method) (( bool (*) (Dictionary_2_t1134 *, NetworkAccessToken_t1132 *, const MethodInfo*))Dictionary_2_ContainsValue_m25876_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m25877(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1134 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2_GetObjectData_m25878_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m25879(__this, ___sender, method) (( void (*) (Dictionary_2_t1134 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25880_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Remove(TKey)
#define Dictionary_2_Remove_m25881(__this, ___key, method) (( bool (*) (Dictionary_2_t1134 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m25882_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m25883(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1134 *, uint64_t, NetworkAccessToken_t1132 **, const MethodInfo*))Dictionary_2_TryGetValue_m25884_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Keys()
#define Dictionary_2_get_Keys_m25885(__this, method) (( KeyCollection_t3923 * (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_get_Keys_m25886_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Values()
#define Dictionary_2_get_Values_m25887(__this, method) (( ValueCollection_t3924 * (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_get_Values_m25888_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m25889(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t1134 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25890_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m25891(__this, ___value, method) (( NetworkAccessToken_t1132 * (*) (Dictionary_2_t1134 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25892_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m25893(__this, ___pair, method) (( bool (*) (Dictionary_2_t1134 *, KeyValuePair_2_t3922 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25894_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m25895(__this, method) (( Enumerator_t3925  (*) (Dictionary_2_t1134 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25896_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m25897(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1132 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25898_gshared)(__this /* static, unused */, ___key, ___value, method)
