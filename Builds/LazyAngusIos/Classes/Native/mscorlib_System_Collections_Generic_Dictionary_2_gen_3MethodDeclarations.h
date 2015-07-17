#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct Dictionary_2_t79;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1289;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct ICollection_1_t4241;
// System.Collections.ICollection
struct ICollection_t651;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<AN_PropertyTemplate>
struct List_1_t81;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct KeyCollection_t615;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct ValueCollection_t3427;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3353;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct IDictionary_2_t4242;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1299;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>[]
struct KeyValuePair_2U5BU5D_t4243;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>>
struct IEnumerator_1_t4244;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1941;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_35MethodDeclarations.h"
#define Dictionary_2__ctor_m3115(__this, method) (( void (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2__ctor_m17606_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18215(__this, ___comparer, method) (( void (*) (Dictionary_2_t79 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17608_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m18216(__this, ___dictionary, method) (( void (*) (Dictionary_2_t79 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17610_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18217(__this, ___capacity, method) (( void (*) (Dictionary_2_t79 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17612_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18218(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t79 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17614_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18219(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t79 *, SerializationInfo_t1299 *, StreamingContext_t1300 , const MethodInfo*))Dictionary_2__ctor_m17616_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18220(__this, method) (( Object_t* (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17618_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18221(__this, method) (( Object_t* (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17620_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18222(__this, method) (( Object_t * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17622_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18223(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17624_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18224(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t79 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17626_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18225(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t79 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17628_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m18226(__this, ___key, method) (( bool (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17630_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18227(__this, ___key, method) (( void (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17632_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18228(__this, method) (( bool (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17634_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18229(__this, method) (( Object_t * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17636_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18230(__this, method) (( bool (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18231(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t79 *, KeyValuePair_2_t3426 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17640_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18232(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t79 *, KeyValuePair_2_t3426 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17642_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18233(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t79 *, KeyValuePair_2U5BU5D_t4243*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17644_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18234(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t79 *, KeyValuePair_2_t3426 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17646_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18235(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t79 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17648_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18236(__this, method) (( Object_t * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17650_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18237(__this, method) (( Object_t* (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17652_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18238(__this, method) (( Object_t * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17654_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Count()
#define Dictionary_2_get_Count_m18239(__this, method) (( int32_t (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_get_Count_m17656_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(TKey)
#define Dictionary_2_get_Item_m18240(__this, ___key, method) (( List_1_t81 * (*) (Dictionary_2_t79 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m17658_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18241(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t79 *, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_set_Item_m17660_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18242(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t79 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17662_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18243(__this, ___size, method) (( void (*) (Dictionary_2_t79 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17664_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18244(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t79 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17666_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18245(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3426  (*) (Object_t * /* static, unused */, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_make_pair_m17668_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m18246(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_pick_key_m17670_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18247(__this /* static, unused */, ___key, ___value, method) (( List_1_t81 * (*) (Object_t * /* static, unused */, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_pick_value_m17672_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18248(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t79 *, KeyValuePair_2U5BU5D_t4243*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17674_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Resize()
#define Dictionary_2_Resize_m18249(__this, method) (( void (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_Resize_m17676_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Add(TKey,TValue)
#define Dictionary_2_Add_m18250(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t79 *, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_Add_m17678_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Clear()
#define Dictionary_2_Clear_m18251(__this, method) (( void (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_Clear_m17680_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18252(__this, ___key, method) (( bool (*) (Dictionary_2_t79 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m17682_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18253(__this, ___value, method) (( bool (*) (Dictionary_2_t79 *, List_1_t81 *, const MethodInfo*))Dictionary_2_ContainsValue_m17684_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18254(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t79 *, SerializationInfo_t1299 *, StreamingContext_t1300 , const MethodInfo*))Dictionary_2_GetObjectData_m17686_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18255(__this, ___sender, method) (( void (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17688_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Remove(TKey)
#define Dictionary_2_Remove_m18256(__this, ___key, method) (( bool (*) (Dictionary_2_t79 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m17690_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m18257(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t79 *, String_t*, List_1_t81 **, const MethodInfo*))Dictionary_2_TryGetValue_m17692_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Keys()
#define Dictionary_2_get_Keys_m3130(__this, method) (( KeyCollection_t615 * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_get_Keys_m17693_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Values()
#define Dictionary_2_get_Values_m18258(__this, method) (( ValueCollection_t3427 * (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_get_Values_m17695_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18259(__this, ___key, method) (( String_t* (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17697_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18260(__this, ___value, method) (( List_1_t81 * (*) (Dictionary_2_t79 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17699_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18261(__this, ___pair, method) (( bool (*) (Dictionary_2_t79 *, KeyValuePair_2_t3426 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17701_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m18262(__this, method) (( Enumerator_t3428  (*) (Dictionary_2_t79 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17702_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18263(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2179  (*) (Object_t * /* static, unused */, String_t*, List_1_t81 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17704_gshared)(__this /* static, unused */, ___key, ___value, method)
