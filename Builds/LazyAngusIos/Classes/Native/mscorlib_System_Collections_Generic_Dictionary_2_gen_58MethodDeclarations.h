#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t6728;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1244;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<System.Object>>
struct ICollection_1_t9756;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t702;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.List`1<System.Object>>
struct KeyCollection_t6735;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.List`1<System.Object>>
struct ValueCollection_t6736;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1208;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct IDictionary_2_t9757;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>[]
struct KeyValuePair_2U5BU5D_t9758;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>>
struct IEnumerator_1_t9759;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.List`1<System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_52MethodDeclarations.h"
#define Dictionary_2__ctor_m37651(__this, method) (( void (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2__ctor_m26148_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m37652(__this, ___comparer, method) (( void (*) (Dictionary_2_t6728 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26150_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m37653(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6728 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26152_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m37654(__this, ___capacity, method) (( void (*) (Dictionary_2_t6728 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26154_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m37655(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6728 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26156_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m37656(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6728 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m26158_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m37657(__this, method) (( Object_t* (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26160_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m37658(__this, method) (( Object_t* (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26162_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m37659(__this, method) (( Object_t * (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26164_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m37660(__this, method) (( Object_t * (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m26166_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m37661(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6728 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26168_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m37662(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6728 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26170_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m37663(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6728 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26172_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m37664(__this, ___key, method) (( bool (*) (Dictionary_2_t6728 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26174_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m37665(__this, ___key, method) (( void (*) (Dictionary_2_t6728 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26176_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m37666(__this, method) (( bool (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26178_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m37667(__this, method) (( Object_t * (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26180_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m37668(__this, method) (( bool (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37669(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6728 *, KeyValuePair_2_t6732 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26184_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m37670(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6728 *, KeyValuePair_2_t6732 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26186_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m37671(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6728 *, KeyValuePair_2U5BU5D_t9758*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26188_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m37672(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6728 *, KeyValuePair_2_t6732 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26190_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m37673(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6728 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26192_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m37674(__this, method) (( Object_t * (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26194_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m37675(__this, method) (( Object_t* (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26196_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m37676(__this, method) (( Object_t * (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26198_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Count()
#define Dictionary_2_get_Count_m37677(__this, method) (( int32_t (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_get_Count_m26200_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Item(TKey)
#define Dictionary_2_get_Item_m37678(__this, ___key, method) (( List_1_t702 * (*) (Dictionary_2_t6728 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m26202_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m37679(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6728 *, Object_t *, List_1_t702 *, const MethodInfo*))Dictionary_2_set_Item_m26204_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m37680(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6728 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26206_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m37681(__this, ___size, method) (( void (*) (Dictionary_2_t6728 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26208_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m37682(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6728 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26210_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m37683(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6732  (*) (Object_t * /* static, unused */, Object_t *, List_1_t702 *, const MethodInfo*))Dictionary_2_make_pair_m26212_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m37684(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, List_1_t702 *, const MethodInfo*))Dictionary_2_pick_key_m26214_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m37685(__this /* static, unused */, ___key, ___value, method) (( List_1_t702 * (*) (Object_t * /* static, unused */, Object_t *, List_1_t702 *, const MethodInfo*))Dictionary_2_pick_value_m26216_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m37686(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6728 *, KeyValuePair_2U5BU5D_t9758*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26218_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Resize()
#define Dictionary_2_Resize_m37687(__this, method) (( void (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_Resize_m26220_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Add(TKey,TValue)
#define Dictionary_2_Add_m37688(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6728 *, Object_t *, List_1_t702 *, const MethodInfo*))Dictionary_2_Add_m26222_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Clear()
#define Dictionary_2_Clear_m37689(__this, method) (( void (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_Clear_m26224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m37690(__this, ___key, method) (( bool (*) (Dictionary_2_t6728 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m26226_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m37691(__this, ___value, method) (( bool (*) (Dictionary_2_t6728 *, List_1_t702 *, const MethodInfo*))Dictionary_2_ContainsValue_m26228_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m37692(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6728 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m26230_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m37693(__this, ___sender, method) (( void (*) (Dictionary_2_t6728 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26232_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Remove(TKey)
#define Dictionary_2_Remove_m37694(__this, ___key, method) (( bool (*) (Dictionary_2_t6728 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m26234_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m37695(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6728 *, Object_t *, List_1_t702 **, const MethodInfo*))Dictionary_2_TryGetValue_m26236_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Keys()
#define Dictionary_2_get_Keys_m37696(__this, method) (( KeyCollection_t6735 * (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_get_Keys_m26237_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Values()
#define Dictionary_2_get_Values_m37697(__this, method) (( ValueCollection_t6736 * (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_get_Values_m26239_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m37698(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6728 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26241_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m37699(__this, ___value, method) (( List_1_t702 * (*) (Dictionary_2_t6728 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26243_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m37700(__this, ___pair, method) (( bool (*) (Dictionary_2_t6728 *, KeyValuePair_2_t6732 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26245_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m37701(__this, method) (( Enumerator_t6731  (*) (Dictionary_2_t6728 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26246_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m37702(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, Object_t *, List_1_t702 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m26248_gshared)(__this /* static, unused */, ___key, ___value, method)
