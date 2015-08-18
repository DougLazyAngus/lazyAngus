#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct Dictionary_2_t1508;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.String>>
struct ICollection_1_t9154;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Tuple`2<System.Type,System.String>
struct Tuple_2_t1499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.String>,System.String>
struct KeyCollection_t6246;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.String>,System.String>
struct ValueCollection_t6247;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.String>>
struct IEqualityComparer_1_t6243;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct IDictionary_2_t1274;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>[]
struct KeyValuePair_2U5BU5D_t9155;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.String>,System.String>>
struct IEnumerator_1_t9156;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m7624(__this, method) (( void (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2__ctor_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m34067(__this, ___comparer, method) (( void (*) (Dictionary_2_t1508 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21797_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m34068(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1508 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21799_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m34069(__this, ___capacity, method) (( void (*) (Dictionary_2_t1508 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21801_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m34070(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1508 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21803_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m34071(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1508 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21805_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m34072(__this, method) (( Object_t* (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21807_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m34073(__this, method) (( Object_t* (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21809_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m34074(__this, method) (( Object_t * (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21811_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m34075(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1508 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21813_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m34076(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1508 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m34077(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1508 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21817_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m34078(__this, ___key, method) (( bool (*) (Dictionary_2_t1508 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21819_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m34079(__this, ___key, method) (( void (*) (Dictionary_2_t1508 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21821_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m34080(__this, method) (( bool (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21823_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34081(__this, method) (( Object_t * (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21825_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m34082(__this, method) (( bool (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21827_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m34083(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1508 *, KeyValuePair_2_t6245 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21829_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34084(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1508 *, KeyValuePair_2_t6245 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21831_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m34085(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1508 *, KeyValuePair_2U5BU5D_t9155*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21833_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m34086(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1508 *, KeyValuePair_2_t6245 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21835_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m34087(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1508 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21837_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m34088(__this, method) (( Object_t * (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21839_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m34089(__this, method) (( Object_t* (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21841_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m34090(__this, method) (( Object_t * (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21843_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Count()
#define Dictionary_2_get_Count_m34091(__this, method) (( int32_t (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_get_Count_m21845_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m34092(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1508 *, Tuple_2_t1499 *, const MethodInfo*))Dictionary_2_get_Item_m21847_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m34093(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1508 *, Tuple_2_t1499 *, String_t*, const MethodInfo*))Dictionary_2_set_Item_m21849_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m34094(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1508 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21851_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m34095(__this, ___size, method) (( void (*) (Dictionary_2_t1508 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21853_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m34096(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1508 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21855_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m34097(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6245  (*) (Object_t * /* static, unused */, Tuple_2_t1499 *, String_t*, const MethodInfo*))Dictionary_2_make_pair_m21857_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m34098(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1499 * (*) (Object_t * /* static, unused */, Tuple_2_t1499 *, String_t*, const MethodInfo*))Dictionary_2_pick_key_m21859_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m34099(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, Tuple_2_t1499 *, String_t*, const MethodInfo*))Dictionary_2_pick_value_m21861_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m34100(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1508 *, KeyValuePair_2U5BU5D_t9155*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21863_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Resize()
#define Dictionary_2_Resize_m34101(__this, method) (( void (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_Resize_m21865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m34102(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1508 *, Tuple_2_t1499 *, String_t*, const MethodInfo*))Dictionary_2_Add_m21867_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Clear()
#define Dictionary_2_Clear_m34103(__this, method) (( void (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_Clear_m21869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m34104(__this, ___key, method) (( bool (*) (Dictionary_2_t1508 *, Tuple_2_t1499 *, const MethodInfo*))Dictionary_2_ContainsKey_m21871_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m34105(__this, ___value, method) (( bool (*) (Dictionary_2_t1508 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m21873_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m34106(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1508 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21875_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m34107(__this, ___sender, method) (( void (*) (Dictionary_2_t1508 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21877_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m34108(__this, ___key, method) (( bool (*) (Dictionary_2_t1508 *, Tuple_2_t1499 *, const MethodInfo*))Dictionary_2_Remove_m21879_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m34109(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1508 *, Tuple_2_t1499 *, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m21881_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m34110(__this, method) (( KeyCollection_t6246 * (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_get_Keys_m21882_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::get_Values()
#define Dictionary_2_get_Values_m34111(__this, method) (( ValueCollection_t6247 * (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_get_Values_m21884_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m34112(__this, ___key, method) (( Tuple_2_t1499 * (*) (Dictionary_2_t1508 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21886_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m34113(__this, ___value, method) (( String_t* (*) (Dictionary_2_t1508 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21888_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m34114(__this, ___pair, method) (( bool (*) (Dictionary_2_t1508 *, KeyValuePair_2_t6245 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21890_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m34115(__this, method) (( Enumerator_t6248  (*) (Dictionary_2_t1508 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21891_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m34116(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, Tuple_2_t1499 *, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21893_gshared)(__this /* static, unused */, ___key, ___value, method)
