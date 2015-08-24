#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
struct Dictionary_2_t587;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8713;
// System.Collections.Generic.ICollection`1<LevelDescription>
struct ICollection_1_t8941;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// LevelDescription
struct LevelDescription_t582;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,LevelDescription>
struct KeyCollection_t5742;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,LevelDescription>
struct ValueCollection_t5743;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5393;
// System.Collections.Generic.IDictionary`2<System.Int32,LevelDescription>
struct IDictionary_2_t8942;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>[]
struct KeyValuePair_2U5BU5D_t8943;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>>
struct IEnumerator_1_t8944;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
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
#define Dictionary_2__ctor_m4246(__this, method) (( void (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2__ctor_m10196_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m27331(__this, ___comparer, method) (( void (*) (Dictionary_2_t587 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21114_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m27332(__this, ___dictionary, method) (( void (*) (Dictionary_2_t587 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21116_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Int32)
#define Dictionary_2__ctor_m27333(__this, ___capacity, method) (( void (*) (Dictionary_2_t587 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m27334(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t587 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21120_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m27335(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t587 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m21122_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m27336(__this, method) (( Object_t* (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21124_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m27337(__this, method) (( Object_t* (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21126_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m27338(__this, method) (( Object_t * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21128_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m27339(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21130_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m27340(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t587 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21132_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m27341(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t587 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21134_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m27342(__this, ___key, method) (( bool (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21136_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m27343(__this, ___key, method) (( void (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21138_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m27344(__this, method) (( bool (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21140_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m27345(__this, method) (( Object_t * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21142_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m27346(__this, method) (( bool (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21144_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m27347(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t587 *, KeyValuePair_2_t5741 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21146_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m27348(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t587 *, KeyValuePair_2_t5741 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21148_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m27349(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t587 *, KeyValuePair_2U5BU5D_t8943*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21150_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m27350(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t587 *, KeyValuePair_2_t5741 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21152_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m27351(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t587 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21154_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m27352(__this, method) (( Object_t * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21156_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m27353(__this, method) (( Object_t* (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21158_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m27354(__this, method) (( Object_t * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21160_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Count()
#define Dictionary_2_get_Count_m27355(__this, method) (( int32_t (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_get_Count_m21162_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(TKey)
#define Dictionary_2_get_Item_m27356(__this, ___key, method) (( LevelDescription_t582 * (*) (Dictionary_2_t587 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21164_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m27357(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t587 *, int32_t, LevelDescription_t582 *, const MethodInfo*))Dictionary_2_set_Item_m21166_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m27358(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t587 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21168_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m27359(__this, ___size, method) (( void (*) (Dictionary_2_t587 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21170_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m27360(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t587 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21172_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m27361(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5741  (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t582 *, const MethodInfo*))Dictionary_2_make_pair_m21174_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m27362(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t582 *, const MethodInfo*))Dictionary_2_pick_key_m21176_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m27363(__this /* static, unused */, ___key, ___value, method) (( LevelDescription_t582 * (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t582 *, const MethodInfo*))Dictionary_2_pick_value_m21178_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m27364(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t587 *, KeyValuePair_2U5BU5D_t8943*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21180_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Resize()
#define Dictionary_2_Resize_m27365(__this, method) (( void (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_Resize_m21182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(TKey,TValue)
#define Dictionary_2_Add_m27366(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t587 *, int32_t, LevelDescription_t582 *, const MethodInfo*))Dictionary_2_Add_m21184_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Clear()
#define Dictionary_2_Clear_m27367(__this, method) (( void (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_Clear_m21186_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m27368(__this, ___key, method) (( bool (*) (Dictionary_2_t587 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21188_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m27369(__this, ___value, method) (( bool (*) (Dictionary_2_t587 *, LevelDescription_t582 *, const MethodInfo*))Dictionary_2_ContainsValue_m21190_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m27370(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t587 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m21192_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m27371(__this, ___sender, method) (( void (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21194_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Remove(TKey)
#define Dictionary_2_Remove_m27372(__this, ___key, method) (( bool (*) (Dictionary_2_t587 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21196_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m27373(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t587 *, int32_t, LevelDescription_t582 **, const MethodInfo*))Dictionary_2_TryGetValue_m21198_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Keys()
#define Dictionary_2_get_Keys_m27374(__this, method) (( KeyCollection_t5742 * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_get_Keys_m21200_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Values()
#define Dictionary_2_get_Values_m27375(__this, method) (( ValueCollection_t5743 * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_get_Values_m21202_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m27376(__this, ___key, method) (( int32_t (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21204_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m27377(__this, ___value, method) (( LevelDescription_t582 * (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21206_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m27378(__this, ___pair, method) (( bool (*) (Dictionary_2_t587 *, KeyValuePair_2_t5741 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21208_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m27379(__this, method) (( Enumerator_t5744  (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21210_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m27380(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t582 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21212_gshared)(__this /* static, unused */, ___key, ___value, method)
