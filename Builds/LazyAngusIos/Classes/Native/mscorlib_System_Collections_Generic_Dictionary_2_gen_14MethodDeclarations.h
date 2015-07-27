﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t233;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1291;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t4357;
// System.Collections.ICollection
struct ICollection_t653;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t253;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FBScore>
struct KeyCollection_t3552;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>
struct ValueCollection_t3553;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3355;
// System.Collections.Generic.IDictionary`2<System.String,FBScore>
struct IDictionary_2_t4358;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>[]
struct KeyValuePair_2U5BU5D_t4359;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FBScore>>
struct IEnumerator_1_t4360;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1943;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_35MethodDeclarations.h"
#define Dictionary_2__ctor_m3267(__this, method) (( void (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2__ctor_m17617_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m20455(__this, ___comparer, method) (( void (*) (Dictionary_2_t233 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17619_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m20456(__this, ___dictionary, method) (( void (*) (Dictionary_2_t233 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17621_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m20457(__this, ___capacity, method) (( void (*) (Dictionary_2_t233 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m20458(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t233 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17625_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m20459(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t233 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2__ctor_m17627_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20460(__this, method) (( Object_t* (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17629_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20461(__this, method) (( Object_t* (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17631_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m20462(__this, method) (( Object_t * (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17633_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20463(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t233 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17635_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20464(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t233 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17637_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m20465(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t233 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17639_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m20466(__this, ___key, method) (( bool (*) (Dictionary_2_t233 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17641_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m20467(__this, ___key, method) (( void (*) (Dictionary_2_t233 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17643_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20468(__this, method) (( bool (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17645_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20469(__this, method) (( Object_t * (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20470(__this, method) (( bool (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17649_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20471(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t233 *, KeyValuePair_2_t651 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17651_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20472(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t233 *, KeyValuePair_2_t651 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17653_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20473(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t233 *, KeyValuePair_2U5BU5D_t4359*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17655_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20474(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t233 *, KeyValuePair_2_t651 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17657_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20475(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t233 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17659_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20476(__this, method) (( Object_t * (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17661_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20477(__this, method) (( Object_t* (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17663_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20478(__this, method) (( Object_t * (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17665_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Count()
#define Dictionary_2_get_Count_m20479(__this, method) (( int32_t (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_get_Count_m17667_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m20480(__this, ___key, method) (( FBScore_t253 * (*) (Dictionary_2_t233 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m17669_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m20481(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t233 *, String_t*, FBScore_t253 *, const MethodInfo*))Dictionary_2_set_Item_m17671_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m20482(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t233 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17673_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m20483(__this, ___size, method) (( void (*) (Dictionary_2_t233 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17675_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m20484(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t233 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17677_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m20485(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t651  (*) (Object_t * /* static, unused */, String_t*, FBScore_t253 *, const MethodInfo*))Dictionary_2_make_pair_m17679_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m20486(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FBScore_t253 *, const MethodInfo*))Dictionary_2_pick_key_m17681_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m20487(__this /* static, unused */, ___key, ___value, method) (( FBScore_t253 * (*) (Object_t * /* static, unused */, String_t*, FBScore_t253 *, const MethodInfo*))Dictionary_2_pick_value_m17683_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m20488(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t233 *, KeyValuePair_2U5BU5D_t4359*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17685_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Resize()
#define Dictionary_2_Resize_m20489(__this, method) (( void (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_Resize_m17687_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m20490(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t233 *, String_t*, FBScore_t253 *, const MethodInfo*))Dictionary_2_Add_m17689_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Clear()
#define Dictionary_2_Clear_m20491(__this, method) (( void (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_Clear_m17691_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m20492(__this, ___key, method) (( bool (*) (Dictionary_2_t233 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m17693_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m20493(__this, ___value, method) (( bool (*) (Dictionary_2_t233 *, FBScore_t253 *, const MethodInfo*))Dictionary_2_ContainsValue_m17695_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m20494(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t233 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2_GetObjectData_m17697_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m20495(__this, ___sender, method) (( void (*) (Dictionary_2_t233 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17699_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::Remove(TKey)
#define Dictionary_2_Remove_m20496(__this, ___key, method) (( bool (*) (Dictionary_2_t233 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m17701_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m20497(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t233 *, String_t*, FBScore_t253 **, const MethodInfo*))Dictionary_2_TryGetValue_m17703_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Keys()
#define Dictionary_2_get_Keys_m20498(__this, method) (( KeyCollection_t3552 * (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_get_Keys_m17704_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Values()
#define Dictionary_2_get_Values_m20499(__this, method) (( ValueCollection_t3553 * (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_get_Values_m17706_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m20500(__this, ___key, method) (( String_t* (*) (Dictionary_2_t233 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17708_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m20501(__this, ___value, method) (( FBScore_t253 * (*) (Dictionary_2_t233 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17710_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m20502(__this, ___pair, method) (( bool (*) (Dictionary_2_t233 *, KeyValuePair_2_t651 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17712_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3295(__this, method) (( Enumerator_t652  (*) (Dictionary_2_t233 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17713_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FBScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m20503(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Object_t * /* static, unused */, String_t*, FBScore_t253 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17715_gshared)(__this /* static, unused */, ___key, ___value, method)
