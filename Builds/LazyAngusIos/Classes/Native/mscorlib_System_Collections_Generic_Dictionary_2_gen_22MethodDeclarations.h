#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
struct Dictionary_2_t591;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.Collections.Generic.ICollection`1<LevelDescription>
struct ICollection_1_t9557;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// LevelDescription
struct LevelDescription_t586;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,LevelDescription>
struct KeyCollection_t6292;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,LevelDescription>
struct ValueCollection_t6293;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5942;
// System.Collections.Generic.IDictionary`2<System.Int32,LevelDescription>
struct IDictionary_2_t9558;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>[]
struct KeyValuePair_2U5BU5D_t9559;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>>
struct IEnumerator_1_t9560;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45MethodDeclarations.h"
#define Dictionary_2__ctor_m4385(__this, method) (( void (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2__ctor_m10328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31675(__this, ___comparer, method) (( void (*) (Dictionary_2_t591 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25430_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m31676(__this, ___dictionary, method) (( void (*) (Dictionary_2_t591 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25432_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Int32)
#define Dictionary_2__ctor_m31677(__this, ___capacity, method) (( void (*) (Dictionary_2_t591 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25434_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31678(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t591 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25436_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m31679(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t591 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m25438_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31680(__this, method) (( Object_t* (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25440_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31681(__this, method) (( Object_t* (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25442_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31682(__this, method) (( Object_t * (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25444_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m31683(__this, method) (( Object_t * (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m25446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31684(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t591 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25448_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31685(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t591 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25450_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m31686(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t591 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25452_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m31687(__this, ___key, method) (( bool (*) (Dictionary_2_t591 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25454_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m31688(__this, ___key, method) (( void (*) (Dictionary_2_t591 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25456_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31689(__this, method) (( bool (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25458_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31690(__this, method) (( Object_t * (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25460_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31691(__this, method) (( bool (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25462_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31692(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t591 *, KeyValuePair_2_t6291 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25464_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31693(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t591 *, KeyValuePair_2_t6291 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25466_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31694(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t591 *, KeyValuePair_2U5BU5D_t9559*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25468_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31695(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t591 *, KeyValuePair_2_t6291 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25470_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31696(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t591 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25472_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31697(__this, method) (( Object_t * (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25474_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31698(__this, method) (( Object_t* (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25476_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31699(__this, method) (( Object_t * (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Count()
#define Dictionary_2_get_Count_m31700(__this, method) (( int32_t (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_get_Count_m25480_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(TKey)
#define Dictionary_2_get_Item_m31701(__this, ___key, method) (( LevelDescription_t586 * (*) (Dictionary_2_t591 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m25482_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m31702(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t591 *, int32_t, LevelDescription_t586 *, const MethodInfo*))Dictionary_2_set_Item_m25484_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m31703(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t591 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25486_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m31704(__this, ___size, method) (( void (*) (Dictionary_2_t591 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25488_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m31705(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t591 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25490_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m31706(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6291  (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t586 *, const MethodInfo*))Dictionary_2_make_pair_m25492_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m31707(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t586 *, const MethodInfo*))Dictionary_2_pick_key_m25494_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m31708(__this /* static, unused */, ___key, ___value, method) (( LevelDescription_t586 * (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t586 *, const MethodInfo*))Dictionary_2_pick_value_m25496_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m31709(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t591 *, KeyValuePair_2U5BU5D_t9559*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25498_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Resize()
#define Dictionary_2_Resize_m31710(__this, method) (( void (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_Resize_m25500_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(TKey,TValue)
#define Dictionary_2_Add_m31711(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t591 *, int32_t, LevelDescription_t586 *, const MethodInfo*))Dictionary_2_Add_m25502_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Clear()
#define Dictionary_2_Clear_m31712(__this, method) (( void (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_Clear_m25504_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m31713(__this, ___key, method) (( bool (*) (Dictionary_2_t591 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m25506_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m31714(__this, ___value, method) (( bool (*) (Dictionary_2_t591 *, LevelDescription_t586 *, const MethodInfo*))Dictionary_2_ContainsValue_m25508_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m31715(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t591 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m25510_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m31716(__this, ___sender, method) (( void (*) (Dictionary_2_t591 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25512_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Remove(TKey)
#define Dictionary_2_Remove_m31717(__this, ___key, method) (( bool (*) (Dictionary_2_t591 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m25514_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m31718(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t591 *, int32_t, LevelDescription_t586 **, const MethodInfo*))Dictionary_2_TryGetValue_m25516_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Keys()
#define Dictionary_2_get_Keys_m31719(__this, method) (( KeyCollection_t6292 * (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_get_Keys_m25518_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Values()
#define Dictionary_2_get_Values_m31720(__this, method) (( ValueCollection_t6293 * (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_get_Values_m25520_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m31721(__this, ___key, method) (( int32_t (*) (Dictionary_2_t591 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25522_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m31722(__this, ___value, method) (( LevelDescription_t586 * (*) (Dictionary_2_t591 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25524_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m31723(__this, ___pair, method) (( bool (*) (Dictionary_2_t591 *, KeyValuePair_2_t6291 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25526_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m31724(__this, method) (( Enumerator_t6294  (*) (Dictionary_2_t591 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25528_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m31725(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t586 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m25530_gshared)(__this /* static, unused */, ___key, ___value, method)
