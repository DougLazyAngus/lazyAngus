﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8713;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t5545;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t5546;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5380;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t7002;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t7575;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t7235;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__20.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_49MethodDeclarations.h"
#define Dictionary_2__ctor_m3840(__this, method) (( void (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2__ctor_m23774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23775(__this, ___comparer, method) (( void (*) (Dictionary_2_t223 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23776_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m23777(__this, ___dictionary, method) (( void (*) (Dictionary_2_t223 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23778_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m3861(__this, ___capacity, method) (( void (*) (Dictionary_2_t223 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23779_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23780(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t223 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23781_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m23782(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t223 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m23783_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23784(__this, method) (( Object_t* (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23785_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23786(__this, method) (( Object_t* (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23787_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23788(__this, method) (( Object_t * (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m23789_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23790(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t223 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23791_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23792(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t223 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23793_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m23794(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t223 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23795_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m23796(__this, ___key, method) (( bool (*) (Dictionary_2_t223 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23797_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m23798(__this, ___key, method) (( void (*) (Dictionary_2_t223 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23799_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23800(__this, method) (( bool (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23802(__this, method) (( Object_t * (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23803_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23804(__this, method) (( bool (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23805_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23806(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t223 *, KeyValuePair_2_t5544 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23807_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23808(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t223 *, KeyValuePair_2_t5544 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23809_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23810(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t223 *, KeyValuePair_2U5BU5D_t7575*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23811_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23812(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t223 *, KeyValuePair_2_t5544 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23813_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23814(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t223 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23815_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23816(__this, method) (( Object_t * (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23817_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23818(__this, method) (( Object_t* (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23819_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23820(__this, method) (( Object_t * (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23821_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m23822(__this, method) (( int32_t (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_get_Count_m23823_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m23824(__this, ___key, method) (( int32_t (*) (Dictionary_2_t223 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m23825_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m23826(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t223 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_set_Item_m23827_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m23828(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t223 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23829_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m23830(__this, ___size, method) (( void (*) (Dictionary_2_t223 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23831_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m23832(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t223 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23833_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m23834(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5544  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_make_pair_m23835_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m23836(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_key_m23837_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m23838(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_value_m23839_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m23840(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t223 *, KeyValuePair_2U5BU5D_t7575*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23841_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m23842(__this, method) (( void (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_Resize_m23843_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m23844(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t223 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_Add_m23845_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m23846(__this, method) (( void (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_Clear_m23847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m23848(__this, ___key, method) (( bool (*) (Dictionary_2_t223 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m23849_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m23850(__this, ___value, method) (( bool (*) (Dictionary_2_t223 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m23851_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m23852(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t223 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m23853_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m23854(__this, ___sender, method) (( void (*) (Dictionary_2_t223 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23855_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m23856(__this, ___key, method) (( bool (*) (Dictionary_2_t223 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m23857_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m23858(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t223 *, String_t*, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m23859_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m23860(__this, method) (( KeyCollection_t5545 * (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_get_Keys_m23861_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m23862(__this, method) (( ValueCollection_t5546 * (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_get_Values_m23863_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m23864(__this, ___key, method) (( String_t* (*) (Dictionary_2_t223 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23865_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m23866(__this, ___value, method) (( int32_t (*) (Dictionary_2_t223 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23867_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m23868(__this, ___pair, method) (( bool (*) (Dictionary_2_t223 *, KeyValuePair_2_t5544 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23869_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m23870(__this, method) (( Enumerator_t5547  (*) (Dictionary_2_t223 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23871_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m23872(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23873_gshared)(__this /* static, unused */, ___key, ___value, method)
