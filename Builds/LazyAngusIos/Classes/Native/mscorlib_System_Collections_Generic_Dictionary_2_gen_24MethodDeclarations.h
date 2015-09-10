#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct Dictionary_2_t942;
// System.Collections.Generic.ICollection`1<UnityEngine.Font>
struct ICollection_1_t9641;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct ICollection_1_t9642;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t1088;
// UnityEngine.Font
struct Font_t940;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct KeyCollection_t6423;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct ValueCollection_t6424;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Font>
struct IEqualityComparer_1_t6414;
// System.Collections.Generic.IDictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct IDictionary_2_t9643;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>[]
struct KeyValuePair_2U5BU5D_t9644;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
struct IEnumerator_1_t9645;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_35.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_52MethodDeclarations.h"
#define Dictionary_2__ctor_m6124(__this, method) (( void (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2__ctor_m26205_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33610(__this, ___comparer, method) (( void (*) (Dictionary_2_t942 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26207_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m33611(__this, ___dictionary, method) (( void (*) (Dictionary_2_t942 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26209_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m33612(__this, ___capacity, method) (( void (*) (Dictionary_2_t942 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26211_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m33613(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t942 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26213_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m33614(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t942 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m26215_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33615(__this, method) (( Object_t* (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26217_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m33616(__this, method) (( Object_t* (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26219_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m33617(__this, method) (( Object_t * (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26221_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m33618(__this, method) (( Object_t * (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m26223_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m33619(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t942 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26225_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m33620(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t942 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26227_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m33621(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t942 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26229_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m33622(__this, ___key, method) (( bool (*) (Dictionary_2_t942 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26231_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m33623(__this, ___key, method) (( void (*) (Dictionary_2_t942 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26233_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m33624(__this, method) (( bool (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26235_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m33625(__this, method) (( Object_t * (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26237_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m33626(__this, method) (( bool (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26239_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m33627(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t942 *, KeyValuePair_2_t6422 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26241_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m33628(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t942 *, KeyValuePair_2_t6422 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26243_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m33629(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t942 *, KeyValuePair_2U5BU5D_t9644*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26245_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m33630(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t942 *, KeyValuePair_2_t6422 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26247_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m33631(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t942 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26249_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m33632(__this, method) (( Object_t * (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26251_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m33633(__this, method) (( Object_t* (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26253_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m33634(__this, method) (( Object_t * (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26255_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Count()
#define Dictionary_2_get_Count_m33635(__this, method) (( int32_t (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_get_Count_m26257_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Item(TKey)
#define Dictionary_2_get_Item_m33636(__this, ___key, method) (( List_1_t1088 * (*) (Dictionary_2_t942 *, Font_t940 *, const MethodInfo*))Dictionary_2_get_Item_m26259_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m33637(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t942 *, Font_t940 *, List_1_t1088 *, const MethodInfo*))Dictionary_2_set_Item_m26261_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m33638(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t942 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26263_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m33639(__this, ___size, method) (( void (*) (Dictionary_2_t942 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26265_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m33640(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t942 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26267_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m33641(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6422  (*) (Object_t * /* static, unused */, Font_t940 *, List_1_t1088 *, const MethodInfo*))Dictionary_2_make_pair_m26269_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m33642(__this /* static, unused */, ___key, ___value, method) (( Font_t940 * (*) (Object_t * /* static, unused */, Font_t940 *, List_1_t1088 *, const MethodInfo*))Dictionary_2_pick_key_m26271_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m33643(__this /* static, unused */, ___key, ___value, method) (( List_1_t1088 * (*) (Object_t * /* static, unused */, Font_t940 *, List_1_t1088 *, const MethodInfo*))Dictionary_2_pick_value_m26273_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m33644(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t942 *, KeyValuePair_2U5BU5D_t9644*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26275_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Resize()
#define Dictionary_2_Resize_m33645(__this, method) (( void (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_Resize_m26277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Add(TKey,TValue)
#define Dictionary_2_Add_m33646(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t942 *, Font_t940 *, List_1_t1088 *, const MethodInfo*))Dictionary_2_Add_m26279_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Clear()
#define Dictionary_2_Clear_m33647(__this, method) (( void (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_Clear_m26281_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m33648(__this, ___key, method) (( bool (*) (Dictionary_2_t942 *, Font_t940 *, const MethodInfo*))Dictionary_2_ContainsKey_m26283_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m33649(__this, ___value, method) (( bool (*) (Dictionary_2_t942 *, List_1_t1088 *, const MethodInfo*))Dictionary_2_ContainsValue_m26285_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m33650(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t942 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m26287_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m33651(__this, ___sender, method) (( void (*) (Dictionary_2_t942 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26289_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Remove(TKey)
#define Dictionary_2_Remove_m33652(__this, ___key, method) (( bool (*) (Dictionary_2_t942 *, Font_t940 *, const MethodInfo*))Dictionary_2_Remove_m26291_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m33653(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t942 *, Font_t940 *, List_1_t1088 **, const MethodInfo*))Dictionary_2_TryGetValue_m26293_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Keys()
#define Dictionary_2_get_Keys_m33654(__this, method) (( KeyCollection_t6423 * (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_get_Keys_m26294_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Values()
#define Dictionary_2_get_Values_m33655(__this, method) (( ValueCollection_t6424 * (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_get_Values_m26296_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m33656(__this, ___key, method) (( Font_t940 * (*) (Dictionary_2_t942 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26298_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m33657(__this, ___value, method) (( List_1_t1088 * (*) (Dictionary_2_t942 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26300_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m33658(__this, ___pair, method) (( bool (*) (Dictionary_2_t942 *, KeyValuePair_2_t6422 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26302_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m33659(__this, method) (( Enumerator_t6425  (*) (Dictionary_2_t942 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26303_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m33660(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, Font_t940 *, List_1_t1088 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m26305_gshared)(__this /* static, unused */, ___key, ___value, method)
