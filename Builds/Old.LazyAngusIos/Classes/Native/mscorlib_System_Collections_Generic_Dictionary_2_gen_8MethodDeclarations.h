﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,GPScore>
struct Dictionary_2_t156;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4177;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t4224;
// System.Collections.ICollection
struct ICollection_t592;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t275;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GPScore>
struct KeyCollection_t3453;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GPScore>
struct ValueCollection_t573;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3379;
// System.Collections.Generic.IDictionary`2<System.Int32,GPScore>
struct IDictionary_2_t4226;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>[]
struct KeyValuePair_2U5BU5D_t4227;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>>
struct IEnumerator_1_t4228;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1443;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29MethodDeclarations.h"
#define Dictionary_2__ctor_m2670(__this, method) (( void (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2__ctor_m6639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18896(__this, ___comparer, method) (( void (*) (Dictionary_2_t156 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17832_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m18897(__this, ___dictionary, method) (( void (*) (Dictionary_2_t156 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17834_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18898(__this, ___capacity, method) (( void (*) (Dictionary_2_t156 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17836_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18899(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t156 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17838_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18900(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t156 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2__ctor_m17840_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18901(__this, method) (( Object_t* (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17842_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18902(__this, method) (( Object_t* (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17844_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18903(__this, method) (( Object_t * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18904(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17848_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18905(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t156 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17850_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18906(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t156 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17852_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m18907(__this, ___key, method) (( bool (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17854_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18908(__this, ___key, method) (( void (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17856_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18909(__this, method) (( bool (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18910(__this, method) (( Object_t * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18911(__this, method) (( bool (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17862_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18912(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t156 *, KeyValuePair_2_t3452 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17864_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18913(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t156 *, KeyValuePair_2_t3452 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17866_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18914(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t156 *, KeyValuePair_2U5BU5D_t4227*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17868_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18915(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t156 *, KeyValuePair_2_t3452 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17870_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18916(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t156 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17872_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18917(__this, method) (( Object_t * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17874_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18918(__this, method) (( Object_t* (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17876_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18919(__this, method) (( Object_t * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17878_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Count()
#define Dictionary_2_get_Count_m18920(__this, method) (( int32_t (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_get_Count_m17880_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m18921(__this, ___key, method) (( GPScore_t275 * (*) (Dictionary_2_t156 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17882_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18922(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t156 *, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_set_Item_m17884_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18923(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t156 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17886_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18924(__this, ___size, method) (( void (*) (Dictionary_2_t156 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17888_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18925(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t156 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17890_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18926(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3452  (*) (Object_t * /* static, unused */, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_make_pair_m17892_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m18927(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_pick_key_m17894_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18928(__this /* static, unused */, ___key, ___value, method) (( GPScore_t275 * (*) (Object_t * /* static, unused */, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_pick_value_m17896_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18929(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t156 *, KeyValuePair_2U5BU5D_t4227*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17898_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Resize()
#define Dictionary_2_Resize_m18930(__this, method) (( void (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_Resize_m17900_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m18931(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t156 *, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_Add_m17902_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Clear()
#define Dictionary_2_Clear_m18932(__this, method) (( void (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_Clear_m17904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18933(__this, ___key, method) (( bool (*) (Dictionary_2_t156 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17906_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18934(__this, ___value, method) (( bool (*) (Dictionary_2_t156 *, GPScore_t275 *, const MethodInfo*))Dictionary_2_ContainsValue_m17908_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18935(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t156 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2_GetObjectData_m17910_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18936(__this, ___sender, method) (( void (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17912_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Remove(TKey)
#define Dictionary_2_Remove_m18937(__this, ___key, method) (( bool (*) (Dictionary_2_t156 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17914_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m18938(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t156 *, int32_t, GPScore_t275 **, const MethodInfo*))Dictionary_2_TryGetValue_m17916_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Keys()
#define Dictionary_2_get_Keys_m18939(__this, method) (( KeyCollection_t3453 * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_get_Keys_m17917_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Values()
#define Dictionary_2_get_Values_m2665(__this, method) (( ValueCollection_t573 * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_get_Values_m17919_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18940(__this, ___key, method) (( int32_t (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17921_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18941(__this, ___value, method) (( GPScore_t275 * (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17923_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18942(__this, ___pair, method) (( bool (*) (Dictionary_2_t156 *, KeyValuePair_2_t3452 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17925_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m18943(__this, method) (( Enumerator_t3454  (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17926_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18944(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Object_t * /* static, unused */, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17928_gshared)(__this /* static, unused */, ___key, ___value, method)