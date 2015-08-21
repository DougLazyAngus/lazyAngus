#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>
struct Dictionary_2_t151;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8710;
// System.Collections.Generic.ICollection`1<IOSADBanner>
struct ICollection_1_t8785;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// IOSADBanner
struct IOSADBanner_t150;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,IOSADBanner>
struct KeyCollection_t5517;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,IOSADBanner>
struct ValueCollection_t5518;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5390;
// System.Collections.Generic.IDictionary`2<System.Int32,IOSADBanner>
struct IDictionary_2_t8786;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>[]
struct KeyValuePair_2U5BU5D_t8787;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>>
struct IEnumerator_1_t8788;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
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
#define Dictionary_2__ctor_m3771(__this, method) (( void (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2__ctor_m10163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23464(__this, ___comparer, method) (( void (*) (Dictionary_2_t151 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21081_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m23465(__this, ___dictionary, method) (( void (*) (Dictionary_2_t151 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21083_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Int32)
#define Dictionary_2__ctor_m23466(__this, ___capacity, method) (( void (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21085_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23467(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t151 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21087_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m23468(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t151 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21089_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23469(__this, method) (( Object_t* (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21091_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23470(__this, method) (( Object_t* (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21093_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23471(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21095_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23472(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21097_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23473(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21099_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m23474(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21101_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m23475(__this, ___key, method) (( bool (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21103_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m23476(__this, ___key, method) (( void (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21105_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23477(__this, method) (( bool (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21107_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23478(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21109_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23479(__this, method) (( bool (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21111_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23480(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t151 *, KeyValuePair_2_t726 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21113_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23481(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t151 *, KeyValuePair_2_t726 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21115_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23482(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, KeyValuePair_2U5BU5D_t8787*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21117_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23483(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t151 *, KeyValuePair_2_t726 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21119_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23484(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21121_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23485(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21123_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23486(__this, method) (( Object_t* (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21125_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23487(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21127_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Count()
#define Dictionary_2_get_Count_m23488(__this, method) (( int32_t (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_get_Count_m21129_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Item(TKey)
#define Dictionary_2_get_Item_m23489(__this, ___key, method) (( IOSADBanner_t150 * (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21131_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m23490(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_set_Item_m21133_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m23491(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t151 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21135_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m23492(__this, ___size, method) (( void (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21137_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m23493(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21139_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m23494(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t726  (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_make_pair_m21141_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m23495(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_pick_key_m21143_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m23496(__this /* static, unused */, ___key, ___value, method) (( IOSADBanner_t150 * (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_pick_value_m21145_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m23497(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, KeyValuePair_2U5BU5D_t8787*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21147_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Resize()
#define Dictionary_2_Resize_m23498(__this, method) (( void (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_Resize_m21149_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Add(TKey,TValue)
#define Dictionary_2_Add_m23499(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_Add_m21151_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Clear()
#define Dictionary_2_Clear_m23500(__this, method) (( void (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_Clear_m21153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m23501(__this, ___key, method) (( bool (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21155_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m23502(__this, ___value, method) (( bool (*) (Dictionary_2_t151 *, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_ContainsValue_m21157_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m23503(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t151 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21159_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m23504(__this, ___sender, method) (( void (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21161_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Remove(TKey)
#define Dictionary_2_Remove_m23505(__this, ___key, method) (( bool (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21163_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m23506(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t151 *, int32_t, IOSADBanner_t150 **, const MethodInfo*))Dictionary_2_TryGetValue_m21165_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Keys()
#define Dictionary_2_get_Keys_m23507(__this, method) (( KeyCollection_t5517 * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_get_Keys_m21167_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Values()
#define Dictionary_2_get_Values_m23508(__this, method) (( ValueCollection_t5518 * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_get_Values_m21169_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m23509(__this, ___key, method) (( int32_t (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21171_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m23510(__this, ___value, method) (( IOSADBanner_t150 * (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21173_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m23511(__this, ___pair, method) (( bool (*) (Dictionary_2_t151 *, KeyValuePair_2_t726 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21175_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3774(__this, method) (( Enumerator_t727  (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21177_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m23512(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21179_gshared)(__this /* static, unused */, ___key, ___value, method)
