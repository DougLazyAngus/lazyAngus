#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct Dictionary_2_t85;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4252;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct ICollection_1_t4263;
// System.Collections.ICollection
struct ICollection_t652;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t578;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct KeyCollection_t3458;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct ValueCollection_t3459;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3431;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct IDictionary_2_t4264;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>[]
struct KeyValuePair_2U5BU5D_t4265;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>>
struct IEnumerator_1_t4266;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1942;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_33MethodDeclarations.h"
#define Dictionary_2__ctor_m3150(__this, method) (( void (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2__ctor_m7224_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18659(__this, ___comparer, method) (( void (*) (Dictionary_2_t85 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18413_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m18660(__this, ___dictionary, method) (( void (*) (Dictionary_2_t85 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18415_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18661(__this, ___capacity, method) (( void (*) (Dictionary_2_t85 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18417_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18662(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t85 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18419_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18663(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t85 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2__ctor_m18421_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18664(__this, method) (( Object_t* (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18423_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18665(__this, method) (( Object_t* (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18425_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18666(__this, method) (( Object_t * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18427_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18667(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18429_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18668(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t85 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18431_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18669(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t85 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18433_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m18670(__this, ___key, method) (( bool (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18435_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18671(__this, ___key, method) (( void (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18437_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18672(__this, method) (( bool (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18439_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18673(__this, method) (( Object_t * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18441_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18674(__this, method) (( bool (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18443_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18675(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t85 *, KeyValuePair_2_t3457 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18445_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18676(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t85 *, KeyValuePair_2_t3457 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18447_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18677(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t85 *, KeyValuePair_2U5BU5D_t4265*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18449_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18678(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t85 *, KeyValuePair_2_t3457 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18451_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18679(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t85 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18453_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18680(__this, method) (( Object_t * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18455_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18681(__this, method) (( Object_t* (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18457_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18682(__this, method) (( Object_t * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18459_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Count()
#define Dictionary_2_get_Count_m18683(__this, method) (( int32_t (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_get_Count_m18461_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(TKey)
#define Dictionary_2_get_Item_m18684(__this, ___key, method) (( List_1_t578 * (*) (Dictionary_2_t85 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m18463_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18685(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t85 *, int32_t, List_1_t578 *, const MethodInfo*))Dictionary_2_set_Item_m18465_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18686(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t85 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18467_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18687(__this, ___size, method) (( void (*) (Dictionary_2_t85 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18469_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18688(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t85 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18471_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18689(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3457  (*) (Object_t * /* static, unused */, int32_t, List_1_t578 *, const MethodInfo*))Dictionary_2_make_pair_m18473_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m18690(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, List_1_t578 *, const MethodInfo*))Dictionary_2_pick_key_m18475_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18691(__this /* static, unused */, ___key, ___value, method) (( List_1_t578 * (*) (Object_t * /* static, unused */, int32_t, List_1_t578 *, const MethodInfo*))Dictionary_2_pick_value_m18477_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18692(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t85 *, KeyValuePair_2U5BU5D_t4265*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18479_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Resize()
#define Dictionary_2_Resize_m18693(__this, method) (( void (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_Resize_m18481_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Add(TKey,TValue)
#define Dictionary_2_Add_m18694(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t85 *, int32_t, List_1_t578 *, const MethodInfo*))Dictionary_2_Add_m18483_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Clear()
#define Dictionary_2_Clear_m18695(__this, method) (( void (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_Clear_m18485_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18696(__this, ___key, method) (( bool (*) (Dictionary_2_t85 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m18487_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18697(__this, ___value, method) (( bool (*) (Dictionary_2_t85 *, List_1_t578 *, const MethodInfo*))Dictionary_2_ContainsValue_m18489_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18698(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t85 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2_GetObjectData_m18491_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18699(__this, ___sender, method) (( void (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18493_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Remove(TKey)
#define Dictionary_2_Remove_m18700(__this, ___key, method) (( bool (*) (Dictionary_2_t85 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m18495_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m18701(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t85 *, int32_t, List_1_t578 **, const MethodInfo*))Dictionary_2_TryGetValue_m18497_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Keys()
#define Dictionary_2_get_Keys_m18702(__this, method) (( KeyCollection_t3458 * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_get_Keys_m18498_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Values()
#define Dictionary_2_get_Values_m18703(__this, method) (( ValueCollection_t3459 * (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_get_Values_m18500_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18704(__this, ___key, method) (( int32_t (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18502_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18705(__this, ___value, method) (( List_1_t578 * (*) (Dictionary_2_t85 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18504_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18706(__this, ___pair, method) (( bool (*) (Dictionary_2_t85 *, KeyValuePair_2_t3457 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18506_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m18707(__this, method) (( Enumerator_t3460  (*) (Dictionary_2_t85 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18507_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18708(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Object_t * /* static, unused */, int32_t, List_1_t578 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18509_gshared)(__this /* static, unused */, ___key, ___value, method)
