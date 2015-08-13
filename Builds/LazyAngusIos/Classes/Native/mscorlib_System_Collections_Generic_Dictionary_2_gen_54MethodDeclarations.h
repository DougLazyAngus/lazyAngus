#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t6153;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1223;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<System.Object>>
struct ICollection_1_t9115;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t684;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.List`1<System.Object>>
struct KeyCollection_t6160;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.List`1<System.Object>>
struct ValueCollection_t6161;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1187;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct IDictionary_2_t9116;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>[]
struct KeyValuePair_2U5BU5D_t9117;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.List`1<System.Object>>>
struct IEnumerator_1_t9118;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m32940(__this, method) (( void (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2__ctor_m21798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m32941(__this, ___comparer, method) (( void (*) (Dictionary_2_t6153 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21800_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m32942(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6153 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21802_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m32943(__this, ___capacity, method) (( void (*) (Dictionary_2_t6153 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21804_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m32944(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6153 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21806_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m32945(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6153 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21808_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32946(__this, method) (( Object_t* (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21810_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32947(__this, method) (( Object_t* (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21812_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m32948(__this, method) (( Object_t * (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21814_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32949(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6153 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21816_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32950(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6153 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21818_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m32951(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6153 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21820_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m32952(__this, ___key, method) (( bool (*) (Dictionary_2_t6153 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21822_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m32953(__this, ___key, method) (( void (*) (Dictionary_2_t6153 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21824_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32954(__this, method) (( bool (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21826_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32955(__this, method) (( Object_t * (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21828_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32956(__this, method) (( bool (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32957(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6153 *, KeyValuePair_2_t6157 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21832_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32958(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6153 *, KeyValuePair_2_t6157 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21834_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32959(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6153 *, KeyValuePair_2U5BU5D_t9117*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21836_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32960(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6153 *, KeyValuePair_2_t6157 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21838_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32961(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6153 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21840_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32962(__this, method) (( Object_t * (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21842_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32963(__this, method) (( Object_t* (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21844_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32964(__this, method) (( Object_t * (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21846_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Count()
#define Dictionary_2_get_Count_m32965(__this, method) (( int32_t (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_get_Count_m21848_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Item(TKey)
#define Dictionary_2_get_Item_m32966(__this, ___key, method) (( List_1_t684 * (*) (Dictionary_2_t6153 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21850_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m32967(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6153 *, Object_t *, List_1_t684 *, const MethodInfo*))Dictionary_2_set_Item_m21852_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m32968(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6153 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21854_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m32969(__this, ___size, method) (( void (*) (Dictionary_2_t6153 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21856_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m32970(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6153 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21858_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m32971(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6157  (*) (Object_t * /* static, unused */, Object_t *, List_1_t684 *, const MethodInfo*))Dictionary_2_make_pair_m21860_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m32972(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, List_1_t684 *, const MethodInfo*))Dictionary_2_pick_key_m21862_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m32973(__this /* static, unused */, ___key, ___value, method) (( List_1_t684 * (*) (Object_t * /* static, unused */, Object_t *, List_1_t684 *, const MethodInfo*))Dictionary_2_pick_value_m21864_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m32974(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6153 *, KeyValuePair_2U5BU5D_t9117*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21866_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Resize()
#define Dictionary_2_Resize_m32975(__this, method) (( void (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_Resize_m21868_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Add(TKey,TValue)
#define Dictionary_2_Add_m32976(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6153 *, Object_t *, List_1_t684 *, const MethodInfo*))Dictionary_2_Add_m21870_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Clear()
#define Dictionary_2_Clear_m32977(__this, method) (( void (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_Clear_m21872_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m32978(__this, ___key, method) (( bool (*) (Dictionary_2_t6153 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21874_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m32979(__this, ___value, method) (( bool (*) (Dictionary_2_t6153 *, List_1_t684 *, const MethodInfo*))Dictionary_2_ContainsValue_m21876_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m32980(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6153 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21878_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m32981(__this, ___sender, method) (( void (*) (Dictionary_2_t6153 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21880_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::Remove(TKey)
#define Dictionary_2_Remove_m32982(__this, ___key, method) (( bool (*) (Dictionary_2_t6153 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21882_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m32983(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6153 *, Object_t *, List_1_t684 **, const MethodInfo*))Dictionary_2_TryGetValue_m21884_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Keys()
#define Dictionary_2_get_Keys_m32984(__this, method) (( KeyCollection_t6160 * (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_get_Keys_m21885_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::get_Values()
#define Dictionary_2_get_Values_m32985(__this, method) (( ValueCollection_t6161 * (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_get_Values_m21887_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m32986(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6153 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21889_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m32987(__this, ___value, method) (( List_1_t684 * (*) (Dictionary_2_t6153 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21891_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m32988(__this, ___pair, method) (( bool (*) (Dictionary_2_t6153 *, KeyValuePair_2_t6157 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21893_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m32989(__this, method) (( Enumerator_t6156  (*) (Dictionary_2_t6153 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21894_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m32990(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Object_t *, List_1_t684 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21896_gshared)(__this /* static, unused */, ___key, ___value, method)
