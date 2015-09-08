#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>
struct Dictionary_2_t151;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9335;
// System.Collections.Generic.ICollection`1<IOSADBanner>
struct ICollection_1_t9410;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// IOSADBanner
struct IOSADBanner_t150;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,IOSADBanner>
struct KeyCollection_t6073;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,IOSADBanner>
struct ValueCollection_t6074;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5946;
// System.Collections.Generic.IDictionary`2<System.Int32,IOSADBanner>
struct IDictionary_2_t9411;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>[]
struct KeyValuePair_2U5BU5D_t9412;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>>
struct IEnumerator_1_t9413;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45MethodDeclarations.h"
#define Dictionary_2__ctor_m3946(__this, method) (( void (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2__ctor_m10341_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m27837(__this, ___comparer, method) (( void (*) (Dictionary_2_t151 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25443_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m27838(__this, ___dictionary, method) (( void (*) (Dictionary_2_t151 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25445_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Int32)
#define Dictionary_2__ctor_m27839(__this, ___capacity, method) (( void (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25447_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m27840(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t151 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25449_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m27841(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t151 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m25451_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27842(__this, method) (( Object_t* (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25453_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27843(__this, method) (( Object_t* (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25455_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27844(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25457_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m27845(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m25459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27846(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25461_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27847(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25463_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m27848(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25465_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m27849(__this, ___key, method) (( bool (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25467_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m27850(__this, ___key, method) (( void (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25469_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27851(__this, method) (( bool (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25471_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27852(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27853(__this, method) (( bool (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25475_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27854(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t151 *, KeyValuePair_2_t746 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25477_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27855(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t151 *, KeyValuePair_2_t746 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25479_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27856(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, KeyValuePair_2U5BU5D_t9412*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25481_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27857(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t151 *, KeyValuePair_2_t746 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25483_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27858(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25485_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27859(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25487_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27860(__this, method) (( Object_t* (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25489_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27861(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Count()
#define Dictionary_2_get_Count_m27862(__this, method) (( int32_t (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_get_Count_m25493_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Item(TKey)
#define Dictionary_2_get_Item_m27863(__this, ___key, method) (( IOSADBanner_t150 * (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m25495_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m27864(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_set_Item_m25497_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m27865(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t151 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25499_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m27866(__this, ___size, method) (( void (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25501_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m27867(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25503_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m27868(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t746  (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_make_pair_m25505_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m27869(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_pick_key_m25507_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m27870(__this /* static, unused */, ___key, ___value, method) (( IOSADBanner_t150 * (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_pick_value_m25509_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m27871(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, KeyValuePair_2U5BU5D_t9412*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25511_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Resize()
#define Dictionary_2_Resize_m27872(__this, method) (( void (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_Resize_m25513_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Add(TKey,TValue)
#define Dictionary_2_Add_m27873(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_Add_m25515_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Clear()
#define Dictionary_2_Clear_m27874(__this, method) (( void (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_Clear_m25517_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m27875(__this, ___key, method) (( bool (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m25519_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m27876(__this, ___value, method) (( bool (*) (Dictionary_2_t151 *, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_ContainsValue_m25521_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m27877(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t151 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m25523_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m27878(__this, ___sender, method) (( void (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25525_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Remove(TKey)
#define Dictionary_2_Remove_m27879(__this, ___key, method) (( bool (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m25527_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m27880(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t151 *, int32_t, IOSADBanner_t150 **, const MethodInfo*))Dictionary_2_TryGetValue_m25529_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Keys()
#define Dictionary_2_get_Keys_m27881(__this, method) (( KeyCollection_t6073 * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_get_Keys_m25531_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Values()
#define Dictionary_2_get_Values_m27882(__this, method) (( ValueCollection_t6074 * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_get_Values_m25533_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m27883(__this, ___key, method) (( int32_t (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25535_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m27884(__this, ___value, method) (( IOSADBanner_t150 * (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25537_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m27885(__this, ___pair, method) (( bool (*) (Dictionary_2_t151 *, KeyValuePair_2_t746 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25539_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3949(__this, method) (( Enumerator_t747  (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25541_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m27886(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m25543_gshared)(__this /* static, unused */, ___key, ___value, method)
