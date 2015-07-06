#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t1109;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t4507;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkAccessToken>
struct ICollection_1_t4508;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t1107;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct KeyCollection_t3904;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct ValueCollection_t3905;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t3883;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct IDictionary_2_t4509;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>[]
struct KeyValuePair_2U5BU5D_t4510;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>>
struct IEnumerator_1_t4511;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
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
#define Dictionary_2__ctor_m6420(__this, method) (( void (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2__ctor_m25742_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25743(__this, ___comparer, method) (( void (*) (Dictionary_2_t1109 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25744_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m25745(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1109 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25746_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Int32)
#define Dictionary_2__ctor_m25747(__this, ___capacity, method) (( void (*) (Dictionary_2_t1109 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25748_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25749(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1109 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25750_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m25751(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1109 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m25752_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25753(__this, method) (( Object_t* (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25754_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25755(__this, method) (( Object_t* (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25756_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25757(__this, method) (( Object_t * (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25758_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25759(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25760_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25761(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1109 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25762_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m25763(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1109 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25764_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m25765(__this, ___key, method) (( bool (*) (Dictionary_2_t1109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25766_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m25767(__this, ___key, method) (( void (*) (Dictionary_2_t1109 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25768_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25769(__this, method) (( bool (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25770_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25771(__this, method) (( Object_t * (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25772_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25773(__this, method) (( bool (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25775(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1109 *, KeyValuePair_2_t3903 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25776_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25777(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1109 *, KeyValuePair_2_t3903 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25778_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25779(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1109 *, KeyValuePair_2U5BU5D_t4510*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25780_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25781(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1109 *, KeyValuePair_2_t3903 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25782_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25783(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1109 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25784_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25785(__this, method) (( Object_t * (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25786_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25787(__this, method) (( Object_t* (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25788_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25789(__this, method) (( Object_t * (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25790_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
#define Dictionary_2_get_Count_m25791(__this, method) (( int32_t (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_get_Count_m25792_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Item(TKey)
#define Dictionary_2_get_Item_m25793(__this, ___key, method) (( NetworkAccessToken_t1107 * (*) (Dictionary_2_t1109 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m25794_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m25795(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1109 *, uint64_t, NetworkAccessToken_t1107 *, const MethodInfo*))Dictionary_2_set_Item_m25796_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m25797(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1109 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25798_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m25799(__this, ___size, method) (( void (*) (Dictionary_2_t1109 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25800_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m25801(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1109 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25802_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m25803(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3903  (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1107 *, const MethodInfo*))Dictionary_2_make_pair_m25804_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m25805(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1107 *, const MethodInfo*))Dictionary_2_pick_key_m25806_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m25807(__this /* static, unused */, ___key, ___value, method) (( NetworkAccessToken_t1107 * (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1107 *, const MethodInfo*))Dictionary_2_pick_value_m25808_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m25809(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1109 *, KeyValuePair_2U5BU5D_t4510*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25810_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Resize()
#define Dictionary_2_Resize_m25811(__this, method) (( void (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_Resize_m25812_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Add(TKey,TValue)
#define Dictionary_2_Add_m25813(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1109 *, uint64_t, NetworkAccessToken_t1107 *, const MethodInfo*))Dictionary_2_Add_m25814_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Clear()
#define Dictionary_2_Clear_m25815(__this, method) (( void (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_Clear_m25816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m25817(__this, ___key, method) (( bool (*) (Dictionary_2_t1109 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m25818_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m25819(__this, ___value, method) (( bool (*) (Dictionary_2_t1109 *, NetworkAccessToken_t1107 *, const MethodInfo*))Dictionary_2_ContainsValue_m25820_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m25821(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1109 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m25822_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m25823(__this, ___sender, method) (( void (*) (Dictionary_2_t1109 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25824_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Remove(TKey)
#define Dictionary_2_Remove_m25825(__this, ___key, method) (( bool (*) (Dictionary_2_t1109 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m25826_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m25827(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1109 *, uint64_t, NetworkAccessToken_t1107 **, const MethodInfo*))Dictionary_2_TryGetValue_m25828_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Keys()
#define Dictionary_2_get_Keys_m25829(__this, method) (( KeyCollection_t3904 * (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_get_Keys_m25830_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Values()
#define Dictionary_2_get_Values_m25831(__this, method) (( ValueCollection_t3905 * (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_get_Values_m25832_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m25833(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t1109 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25834_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m25835(__this, ___value, method) (( NetworkAccessToken_t1107 * (*) (Dictionary_2_t1109 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25836_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m25837(__this, ___pair, method) (( bool (*) (Dictionary_2_t1109 *, KeyValuePair_2_t3903 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25838_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m25839(__this, method) (( Enumerator_t3906  (*) (Dictionary_2_t1109 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25840_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m25841(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, uint64_t, NetworkAccessToken_t1107 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25842_gshared)(__this /* static, unused */, ___key, ___value, method)
