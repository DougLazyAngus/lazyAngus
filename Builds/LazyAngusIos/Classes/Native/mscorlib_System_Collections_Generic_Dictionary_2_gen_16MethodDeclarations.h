#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>
struct Dictionary_2_t747;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<FBLikeInfo>
struct ICollection_1_t8858;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// FBLikeInfo
struct FBLikeInfo_t289;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FBLikeInfo>
struct KeyCollection_t5591;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBLikeInfo>
struct ValueCollection_t5592;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5377;
// System.Collections.Generic.IDictionary`2<System.String,FBLikeInfo>
struct IDictionary_2_t8859;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>[]
struct KeyValuePair_2U5BU5D_t8860;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>>
struct IEnumerator_1_t8861;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FBLikeInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m3877(__this, method) (( void (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2__ctor_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24988(__this, ___comparer, method) (( void (*) (Dictionary_2_t747 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24989(__this, ___dictionary, method) (( void (*) (Dictionary_2_t747 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21789_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24990(__this, ___capacity, method) (( void (*) (Dictionary_2_t747 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21791_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24991(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t747 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21793_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24992(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t747 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21795_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24993(__this, method) (( Object_t* (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21797_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24994(__this, method) (( Object_t* (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21799_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24995(__this, method) (( Object_t * (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24996(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t747 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21803_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24997(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t747 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21805_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24998(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t747 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21807_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24999(__this, ___key, method) (( bool (*) (Dictionary_2_t747 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21809_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m25000(__this, ___key, method) (( void (*) (Dictionary_2_t747 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21811_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25001(__this, method) (( bool (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21813_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25002(__this, method) (( Object_t * (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25003(__this, method) (( bool (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21817_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25004(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t747 *, KeyValuePair_2_t745 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21819_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25005(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t747 *, KeyValuePair_2_t745 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21821_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25006(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t747 *, KeyValuePair_2U5BU5D_t8860*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21823_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25007(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t747 *, KeyValuePair_2_t745 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21825_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25008(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t747 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21827_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25009(__this, method) (( Object_t * (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21829_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25010(__this, method) (( Object_t* (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21831_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25011(__this, method) (( Object_t * (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21833_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Count()
#define Dictionary_2_get_Count_m25012(__this, method) (( int32_t (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_get_Count_m21835_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Item(TKey)
#define Dictionary_2_get_Item_m25013(__this, ___key, method) (( FBLikeInfo_t289 * (*) (Dictionary_2_t747 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21837_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m25014(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t747 *, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_set_Item_m21839_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m25015(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t747 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21841_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m25016(__this, ___size, method) (( void (*) (Dictionary_2_t747 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21843_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m25017(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t747 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21845_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m25018(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t745  (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_make_pair_m21847_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m25019(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_pick_key_m21849_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m25020(__this /* static, unused */, ___key, ___value, method) (( FBLikeInfo_t289 * (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_pick_value_m21851_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m25021(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t747 *, KeyValuePair_2U5BU5D_t8860*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21853_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Resize()
#define Dictionary_2_Resize_m25022(__this, method) (( void (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_Resize_m21855_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Add(TKey,TValue)
#define Dictionary_2_Add_m25023(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t747 *, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_Add_m21857_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Clear()
#define Dictionary_2_Clear_m25024(__this, method) (( void (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_Clear_m21859_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m25025(__this, ___key, method) (( bool (*) (Dictionary_2_t747 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21861_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m25026(__this, ___value, method) (( bool (*) (Dictionary_2_t747 *, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_ContainsValue_m21863_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m25027(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t747 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21865_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m25028(__this, ___sender, method) (( void (*) (Dictionary_2_t747 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21867_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Remove(TKey)
#define Dictionary_2_Remove_m25029(__this, ___key, method) (( bool (*) (Dictionary_2_t747 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21869_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m25030(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t747 *, String_t*, FBLikeInfo_t289 **, const MethodInfo*))Dictionary_2_TryGetValue_m21871_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Keys()
#define Dictionary_2_get_Keys_m25031(__this, method) (( KeyCollection_t5591 * (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_get_Keys_m21872_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Values()
#define Dictionary_2_get_Values_m25032(__this, method) (( ValueCollection_t5592 * (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_get_Values_m21874_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m25033(__this, ___key, method) (( String_t* (*) (Dictionary_2_t747 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21876_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m25034(__this, ___value, method) (( FBLikeInfo_t289 * (*) (Dictionary_2_t747 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21878_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m25035(__this, ___pair, method) (( bool (*) (Dictionary_2_t747 *, KeyValuePair_2_t745 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21880_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3862(__this, method) (( Enumerator_t746  (*) (Dictionary_2_t747 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21881_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m25036(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t289 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21883_gshared)(__this /* static, unused */, ___key, ___value, method)
