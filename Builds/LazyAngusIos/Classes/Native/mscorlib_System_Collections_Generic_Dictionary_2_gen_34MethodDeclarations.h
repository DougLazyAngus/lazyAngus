#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct Dictionary_2_t1536;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.String>>
struct ICollection_1_t9802;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Tuple`2<System.Type,System.String>
struct Tuple_2_t1527;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>
struct KeyCollection_t6828;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>
struct ValueCollection_t6829;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.String>>
struct IEqualityComparer_1_t6825;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct IDictionary_2_t1302;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>[]
struct KeyValuePair_2U5BU5D_t9803;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>
struct IEnumerator_1_t9804;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_49.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.String>,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__45.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_52MethodDeclarations.h"
#define Dictionary_2__ctor_m7853(__this, method) (( void (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2__ctor_m26205_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m38848(__this, ___comparer, method) (( void (*) (Dictionary_2_t1536 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26207_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m38849(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1536 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26209_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m38850(__this, ___capacity, method) (( void (*) (Dictionary_2_t1536 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m26211_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m38851(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1536 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m26213_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m38852(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1536 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m26215_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m38853(__this, method) (( Object_t* (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26217_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m38854(__this, method) (( Object_t* (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m26219_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m38855(__this, method) (( Object_t * (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m26221_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m38856(__this, method) (( Object_t * (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m26223_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m38857(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1536 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m26225_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m38858(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1536 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m26227_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m38859(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1536 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m26229_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m38860(__this, ___key, method) (( bool (*) (Dictionary_2_t1536 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m26231_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m38861(__this, ___key, method) (( void (*) (Dictionary_2_t1536 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m26233_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m38862(__this, method) (( bool (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m26235_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m38863(__this, method) (( Object_t * (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m26237_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m38864(__this, method) (( bool (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m26239_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m38865(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1536 *, KeyValuePair_2_t6827 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m26241_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m38866(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1536 *, KeyValuePair_2_t6827 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m26243_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m38867(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1536 *, KeyValuePair_2U5BU5D_t9803*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m26245_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m38868(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1536 *, KeyValuePair_2_t6827 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m26247_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m38869(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1536 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m26249_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m38870(__this, method) (( Object_t * (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m26251_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m38871(__this, method) (( Object_t* (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m26253_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m38872(__this, method) (( Object_t * (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m26255_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Count()
#define Dictionary_2_get_Count_m38873(__this, method) (( int32_t (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_get_Count_m26257_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m38874(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1536 *, Tuple_2_t1527 *, const MethodInfo*))Dictionary_2_get_Item_m26259_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m38875(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1536 *, Tuple_2_t1527 *, String_t*, const MethodInfo*))Dictionary_2_set_Item_m26261_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m38876(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1536 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m26263_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m38877(__this, ___size, method) (( void (*) (Dictionary_2_t1536 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m26265_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m38878(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1536 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m26267_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m38879(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6827  (*) (Object_t * /* static, unused */, Tuple_2_t1527 *, String_t*, const MethodInfo*))Dictionary_2_make_pair_m26269_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m38880(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1527 * (*) (Object_t * /* static, unused */, Tuple_2_t1527 *, String_t*, const MethodInfo*))Dictionary_2_pick_key_m26271_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m38881(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, Tuple_2_t1527 *, String_t*, const MethodInfo*))Dictionary_2_pick_value_m26273_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m38882(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1536 *, KeyValuePair_2U5BU5D_t9803*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m26275_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Resize()
#define Dictionary_2_Resize_m38883(__this, method) (( void (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_Resize_m26277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m38884(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1536 *, Tuple_2_t1527 *, String_t*, const MethodInfo*))Dictionary_2_Add_m26279_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Clear()
#define Dictionary_2_Clear_m38885(__this, method) (( void (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_Clear_m26281_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m38886(__this, ___key, method) (( bool (*) (Dictionary_2_t1536 *, Tuple_2_t1527 *, const MethodInfo*))Dictionary_2_ContainsKey_m26283_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m38887(__this, ___value, method) (( bool (*) (Dictionary_2_t1536 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m26285_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m38888(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1536 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m26287_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m38889(__this, ___sender, method) (( void (*) (Dictionary_2_t1536 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m26289_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m38890(__this, ___key, method) (( bool (*) (Dictionary_2_t1536 *, Tuple_2_t1527 *, const MethodInfo*))Dictionary_2_Remove_m26291_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m38891(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1536 *, Tuple_2_t1527 *, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m26293_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m38892(__this, method) (( KeyCollection_t6828 * (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_get_Keys_m26294_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Values()
#define Dictionary_2_get_Values_m38893(__this, method) (( ValueCollection_t6829 * (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_get_Values_m26296_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m38894(__this, ___key, method) (( Tuple_2_t1527 * (*) (Dictionary_2_t1536 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m26298_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m38895(__this, ___value, method) (( String_t* (*) (Dictionary_2_t1536 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m26300_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m38896(__this, ___pair, method) (( bool (*) (Dictionary_2_t1536 *, KeyValuePair_2_t6827 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m26302_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m38897(__this, method) (( Enumerator_t6830  (*) (Dictionary_2_t1536 *, const MethodInfo*))Dictionary_2_GetEnumerator_m26303_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m38898(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, Tuple_2_t1527 *, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m26305_gshared)(__this /* static, unused */, ___key, ___value, method)
