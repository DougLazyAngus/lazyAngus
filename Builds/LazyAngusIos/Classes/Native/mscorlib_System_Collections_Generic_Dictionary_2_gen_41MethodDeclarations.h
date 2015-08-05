#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t2767;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t9536;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>
struct ICollection_1_t9537;
// System.Collections.ICollection
struct ICollection_t707;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t2765;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct KeyCollection_t8420;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct ValueCollection_t8421;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t8403;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct IDictionary_2_t9538;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>[]
struct KeyValuePair_2U5BU5D_t9539;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
struct IEnumerator_1_t9540;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_134.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__67.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor()
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_70MethodDeclarations.h"
#define Dictionary_2__ctor_m9887(__this, method) (( void (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2__ctor_m60801_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m60802(__this, ___comparer, method) (( void (*) (Dictionary_2_t2767 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60803_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m60804(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2767 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60805_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Int32)
#define Dictionary_2__ctor_m60806(__this, ___capacity, method) (( void (*) (Dictionary_2_t2767 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m60807_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m60808(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2767 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m60809_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m60810(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2767 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m60811_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60812(__this, method) (( Object_t* (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60813_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60814(__this, method) (( Object_t* (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60815_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m60816(__this, method) (( Object_t * (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m60817_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m60818(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2767 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m60819_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m60820(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2767 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m60821_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m60822(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2767 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m60823_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m60824(__this, ___key, method) (( bool (*) (Dictionary_2_t2767 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m60825_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m60826(__this, ___key, method) (( void (*) (Dictionary_2_t2767 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m60827_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60828(__this, method) (( bool (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60829_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60830(__this, method) (( Object_t * (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60831_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60832(__this, method) (( bool (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60833_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60834(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2767 *, KeyValuePair_2_t8419 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60835_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60836(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2767 *, KeyValuePair_2_t8419 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60837_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60838(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2767 *, KeyValuePair_2U5BU5D_t9539*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60839_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60840(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2767 *, KeyValuePair_2_t8419 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60841_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m60842(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2767 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m60843_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60844(__this, method) (( Object_t * (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60845_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60846(__this, method) (( Object_t* (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60847_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60848(__this, method) (( Object_t * (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60849_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
#define Dictionary_2_get_Count_m60850(__this, method) (( int32_t (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_get_Count_m60851_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Item(TKey)
#define Dictionary_2_get_Item_m60852(__this, ___key, method) (( NetworkAccessToken_t2765 * (*) (Dictionary_2_t2767 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m60853_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m60854(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2767 *, uint64_t, NetworkAccessToken_t2765 *, const MethodInfo*))Dictionary_2_set_Item_m60855_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m60856(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2767 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m60857_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m60858(__this, ___size, method) (( void (*) (Dictionary_2_t2767 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m60859_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m60860(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2767 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m60861_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m60862(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8419  (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t2765 *, const MethodInfo*))Dictionary_2_make_pair_m60863_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m60864(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t2765 *, const MethodInfo*))Dictionary_2_pick_key_m60865_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m60866(__this /* static, unused */, ___key, ___value, method) (( NetworkAccessToken_t2765 * (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t2765 *, const MethodInfo*))Dictionary_2_pick_value_m60867_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m60868(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2767 *, KeyValuePair_2U5BU5D_t9539*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m60869_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Resize()
#define Dictionary_2_Resize_m60870(__this, method) (( void (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_Resize_m60871_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Add(TKey,TValue)
#define Dictionary_2_Add_m60872(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2767 *, uint64_t, NetworkAccessToken_t2765 *, const MethodInfo*))Dictionary_2_Add_m60873_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Clear()
#define Dictionary_2_Clear_m60874(__this, method) (( void (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_Clear_m60875_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m60876(__this, ___key, method) (( bool (*) (Dictionary_2_t2767 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m60877_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m60878(__this, ___value, method) (( bool (*) (Dictionary_2_t2767 *, NetworkAccessToken_t2765 *, const MethodInfo*))Dictionary_2_ContainsValue_m60879_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m60880(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2767 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m60881_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m60882(__this, ___sender, method) (( void (*) (Dictionary_2_t2767 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m60883_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Remove(TKey)
#define Dictionary_2_Remove_m60884(__this, ___key, method) (( bool (*) (Dictionary_2_t2767 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m60885_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m60886(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2767 *, uint64_t, NetworkAccessToken_t2765 **, const MethodInfo*))Dictionary_2_TryGetValue_m60887_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Keys()
#define Dictionary_2_get_Keys_m60888(__this, method) (( KeyCollection_t8420 * (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_get_Keys_m60889_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Values()
#define Dictionary_2_get_Values_m60890(__this, method) (( ValueCollection_t8421 * (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_get_Values_m60891_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m60892(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t2767 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m60893_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m60894(__this, ___value, method) (( NetworkAccessToken_t2765 * (*) (Dictionary_2_t2767 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m60895_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m60896(__this, ___pair, method) (( bool (*) (Dictionary_2_t2767 *, KeyValuePair_2_t8419 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m60897_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m60898(__this, method) (( Enumerator_t8422  (*) (Dictionary_2_t2767 *, const MethodInfo*))Dictionary_2_GetEnumerator_m60899_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m60900(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t2765 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m60901_gshared)(__this /* static, unused */, ___key, ___value, method)
