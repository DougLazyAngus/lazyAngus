#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t103;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9329;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1230;
// System.Collections.ICollection
struct ICollection_t768;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t5968;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_t5969;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5942;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_t9330;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>[]
struct KeyValuePair_2U5BU5D_t9331;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>
struct IEnumerator_1_t9332;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t798;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45MethodDeclarations.h"
#define Dictionary_2__ctor_m15165(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2__ctor_m10328_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25429(__this, ___comparer, method) (( void (*) (Dictionary_2_t103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25430_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m25431(__this, ___dictionary, method) (( void (*) (Dictionary_2_t103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25432_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m25433(__this, ___capacity, method) (( void (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25434_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25435(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t103 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25436_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m25437(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t103 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2__ctor_m25438_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25439(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25440_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25441(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25442_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25443(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25444_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m25445(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m25446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25447(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25448_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25449(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25450_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m25451(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25452_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m25453(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25454_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m25455(__this, ___key, method) (( void (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25456_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25457(__this, method) (( bool (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25458_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25459(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25460_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25461(__this, method) (( bool (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25462_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25463(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2_t5967 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25464_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25465(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5967 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25466_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25467(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2U5BU5D_t9331*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25468_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25469(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5967 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25470_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25471(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25472_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25473(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25474_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25475(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25476_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25477(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Count()
#define Dictionary_2_get_Count_m25479(__this, method) (( int32_t (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Count_m25480_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m25481(__this, ___key, method) (( String_t* (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m25482_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m25483(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, int32_t, String_t*, const MethodInfo*))Dictionary_2_set_Item_m25484_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m25485(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t103 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25486_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m25487(__this, ___size, method) (( void (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25488_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m25489(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25490_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m25491(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5967  (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_make_pair_m25492_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m25493(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_pick_key_m25494_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m25495(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_pick_value_m25496_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m25497(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2U5BU5D_t9331*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25498_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Resize()
#define Dictionary_2_Resize_m25499(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_Resize_m25500_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m25501(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, int32_t, String_t*, const MethodInfo*))Dictionary_2_Add_m25502_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Clear()
#define Dictionary_2_Clear_m25503(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_Clear_m25504_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m25505(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m25506_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m25507(__this, ___value, method) (( bool (*) (Dictionary_2_t103 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m25508_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m25509(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t103 *, SerializationInfo_t2936 *, StreamingContext_t2937 , const MethodInfo*))Dictionary_2_GetObjectData_m25510_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m25511(__this, ___sender, method) (( void (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25512_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m25513(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m25514_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m25515(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t103 *, int32_t, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m25516_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m25517(__this, method) (( KeyCollection_t5968 * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Keys_m25518_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Values()
#define Dictionary_2_get_Values_m25519(__this, method) (( ValueCollection_t5969 * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Values_m25520_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m25521(__this, ___key, method) (( int32_t (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25522_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m25523(__this, ___value, method) (( String_t* (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25524_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m25525(__this, ___pair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5967 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25526_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m25527(__this, method) (( Enumerator_t5970  (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25528_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.String>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m25529(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2156  (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m25530_gshared)(__this /* static, unused */, ___key, ___value, method)
