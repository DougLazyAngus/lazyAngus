#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct Dictionary_2_t127;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct ICollection_1_t8746;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>
struct List_1_t679;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct KeyCollection_t5485;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct ValueCollection_t5486;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5392;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
struct IDictionary_2_t8747;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>[]
struct KeyValuePair_2U5BU5D_t8748;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>>
struct IEnumerator_1_t8749;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45MethodDeclarations.h"
#define Dictionary_2__ctor_m3747(__this, method) (( void (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2__ctor_m10172_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22723(__this, ___comparer, method) (( void (*) (Dictionary_2_t127 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21094_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m22724(__this, ___dictionary, method) (( void (*) (Dictionary_2_t127 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21096_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m22725(__this, ___capacity, method) (( void (*) (Dictionary_2_t127 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21098_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22726(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t127 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21100_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m22727(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t127 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21102_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22728(__this, method) (( Object_t* (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21104_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22729(__this, method) (( Object_t* (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21106_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m22730(__this, method) (( Object_t * (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21108_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22731(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t127 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21110_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22732(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t127 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21112_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m22733(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t127 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21114_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m22734(__this, ___key, method) (( bool (*) (Dictionary_2_t127 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21116_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m22735(__this, ___key, method) (( void (*) (Dictionary_2_t127 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21118_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22736(__this, method) (( bool (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21120_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22737(__this, method) (( Object_t * (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22738(__this, method) (( bool (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21124_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22739(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t127 *, KeyValuePair_2_t5484 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21126_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22740(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t127 *, KeyValuePair_2_t5484 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21128_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22741(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t127 *, KeyValuePair_2U5BU5D_t8748*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21130_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22742(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t127 *, KeyValuePair_2_t5484 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21132_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22743(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t127 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21134_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22744(__this, method) (( Object_t * (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21136_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22745(__this, method) (( Object_t* (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21138_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22746(__this, method) (( Object_t * (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21140_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Count()
#define Dictionary_2_get_Count_m22747(__this, method) (( int32_t (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_get_Count_m21142_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Item(TKey)
#define Dictionary_2_get_Item_m22748(__this, ___key, method) (( List_1_t679 * (*) (Dictionary_2_t127 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21144_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m22749(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t127 *, int32_t, List_1_t679 *, const MethodInfo*))Dictionary_2_set_Item_m21146_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m22750(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t127 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21148_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m22751(__this, ___size, method) (( void (*) (Dictionary_2_t127 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21150_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m22752(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t127 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21152_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m22753(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5484  (*) (Object_t * /* static, unused */, int32_t, List_1_t679 *, const MethodInfo*))Dictionary_2_make_pair_m21154_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m22754(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, List_1_t679 *, const MethodInfo*))Dictionary_2_pick_key_m21156_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m22755(__this /* static, unused */, ___key, ___value, method) (( List_1_t679 * (*) (Object_t * /* static, unused */, int32_t, List_1_t679 *, const MethodInfo*))Dictionary_2_pick_value_m21158_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m22756(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t127 *, KeyValuePair_2U5BU5D_t8748*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21160_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Resize()
#define Dictionary_2_Resize_m22757(__this, method) (( void (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_Resize_m21162_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Add(TKey,TValue)
#define Dictionary_2_Add_m22758(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t127 *, int32_t, List_1_t679 *, const MethodInfo*))Dictionary_2_Add_m21164_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Clear()
#define Dictionary_2_Clear_m22759(__this, method) (( void (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_Clear_m21166_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m22760(__this, ___key, method) (( bool (*) (Dictionary_2_t127 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21168_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m22761(__this, ___value, method) (( bool (*) (Dictionary_2_t127 *, List_1_t679 *, const MethodInfo*))Dictionary_2_ContainsValue_m21170_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m22762(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t127 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21172_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m22763(__this, ___sender, method) (( void (*) (Dictionary_2_t127 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21174_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::Remove(TKey)
#define Dictionary_2_Remove_m22764(__this, ___key, method) (( bool (*) (Dictionary_2_t127 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21176_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m22765(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t127 *, int32_t, List_1_t679 **, const MethodInfo*))Dictionary_2_TryGetValue_m21178_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Keys()
#define Dictionary_2_get_Keys_m22766(__this, method) (( KeyCollection_t5485 * (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_get_Keys_m21180_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::get_Values()
#define Dictionary_2_get_Values_m22767(__this, method) (( ValueCollection_t5486 * (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_get_Values_m21182_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m22768(__this, ___key, method) (( int32_t (*) (Dictionary_2_t127 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21184_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m22769(__this, ___value, method) (( List_1_t679 * (*) (Dictionary_2_t127 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21186_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m22770(__this, ___pair, method) (( bool (*) (Dictionary_2_t127 *, KeyValuePair_2_t5484 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21188_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m22771(__this, method) (( Enumerator_t5487  (*) (Dictionary_2_t127 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21190_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnionAssets.FLE.EventHandlerFunction>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m22772(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, int32_t, List_1_t679 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21192_gshared)(__this /* static, unused */, ___key, ___value, method)
