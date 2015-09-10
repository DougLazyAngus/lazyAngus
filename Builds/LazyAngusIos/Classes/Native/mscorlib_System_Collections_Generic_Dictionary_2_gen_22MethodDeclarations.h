#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>
struct Dictionary_2_t677;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9342;
// System.Collections.Generic.ICollection`1<LevelDescription>
struct ICollection_1_t9582;
// System.Collections.ICollection
struct ICollection_t779;
// System.Object
struct Object_t;
// LevelDescription
struct LevelDescription_t673;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,LevelDescription>
struct KeyCollection_t6330;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,LevelDescription>
struct ValueCollection_t6331;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5953;
// System.Collections.Generic.IDictionary`2<System.Int32,LevelDescription>
struct IDictionary_2_t9583;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>[]
struct KeyValuePair_2U5BU5D_t9584;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>>
struct IEnumerator_1_t9585;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t809;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,LevelDescription>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45MethodDeclarations.h"
#define Dictionary_2__ctor_m4518(__this, method) (( void (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2__ctor_m10398_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m32106(__this, ___comparer, method) (( void (*) (Dictionary_2_t677 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25500_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m32107(__this, ___dictionary, method) (( void (*) (Dictionary_2_t677 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25502_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Int32)
#define Dictionary_2__ctor_m32108(__this, ___capacity, method) (( void (*) (Dictionary_2_t677 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25504_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m32109(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t677 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25506_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m32110(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t677 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2__ctor_m25508_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32111(__this, method) (( Object_t* (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25510_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32112(__this, method) (( Object_t* (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25512_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m32113(__this, method) (( Object_t * (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25514_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m32114(__this, method) (( Object_t * (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m25516_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32115(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t677 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25518_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32116(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t677 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25520_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m32117(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t677 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25522_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m32118(__this, ___key, method) (( bool (*) (Dictionary_2_t677 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25524_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m32119(__this, ___key, method) (( void (*) (Dictionary_2_t677 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25526_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32120(__this, method) (( bool (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25528_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32121(__this, method) (( Object_t * (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25530_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32122(__this, method) (( bool (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25532_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32123(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t677 *, KeyValuePair_2_t6329 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25534_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32124(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t677 *, KeyValuePair_2_t6329 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25536_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32125(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t677 *, KeyValuePair_2U5BU5D_t9584*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25538_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32126(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t677 *, KeyValuePair_2_t6329 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25540_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32127(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t677 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25542_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32128(__this, method) (( Object_t * (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25544_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32129(__this, method) (( Object_t* (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25546_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32130(__this, method) (( Object_t * (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25548_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Count()
#define Dictionary_2_get_Count_m32131(__this, method) (( int32_t (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_get_Count_m25550_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Item(TKey)
#define Dictionary_2_get_Item_m32132(__this, ___key, method) (( LevelDescription_t673 * (*) (Dictionary_2_t677 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m25552_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m32133(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t677 *, int32_t, LevelDescription_t673 *, const MethodInfo*))Dictionary_2_set_Item_m25554_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m32134(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t677 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25556_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m32135(__this, ___size, method) (( void (*) (Dictionary_2_t677 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25558_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m32136(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t677 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25560_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m32137(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6329  (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t673 *, const MethodInfo*))Dictionary_2_make_pair_m25562_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m32138(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t673 *, const MethodInfo*))Dictionary_2_pick_key_m25564_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m32139(__this /* static, unused */, ___key, ___value, method) (( LevelDescription_t673 * (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t673 *, const MethodInfo*))Dictionary_2_pick_value_m25566_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m32140(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t677 *, KeyValuePair_2U5BU5D_t9584*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25568_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Resize()
#define Dictionary_2_Resize_m32141(__this, method) (( void (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_Resize_m25570_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Add(TKey,TValue)
#define Dictionary_2_Add_m32142(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t677 *, int32_t, LevelDescription_t673 *, const MethodInfo*))Dictionary_2_Add_m25572_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Clear()
#define Dictionary_2_Clear_m32143(__this, method) (( void (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_Clear_m25574_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m32144(__this, ___key, method) (( bool (*) (Dictionary_2_t677 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m25576_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m32145(__this, ___value, method) (( bool (*) (Dictionary_2_t677 *, LevelDescription_t673 *, const MethodInfo*))Dictionary_2_ContainsValue_m25578_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m32146(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t677 *, SerializationInfo_t2947 *, StreamingContext_t2948 , const MethodInfo*))Dictionary_2_GetObjectData_m25580_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m32147(__this, ___sender, method) (( void (*) (Dictionary_2_t677 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25582_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::Remove(TKey)
#define Dictionary_2_Remove_m32148(__this, ___key, method) (( bool (*) (Dictionary_2_t677 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m25584_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m32149(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t677 *, int32_t, LevelDescription_t673 **, const MethodInfo*))Dictionary_2_TryGetValue_m25586_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Keys()
#define Dictionary_2_get_Keys_m32150(__this, method) (( KeyCollection_t6330 * (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_get_Keys_m25588_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::get_Values()
#define Dictionary_2_get_Values_m32151(__this, method) (( ValueCollection_t6331 * (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_get_Values_m25590_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m32152(__this, ___key, method) (( int32_t (*) (Dictionary_2_t677 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25592_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m32153(__this, ___value, method) (( LevelDescription_t673 * (*) (Dictionary_2_t677 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25594_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m32154(__this, ___pair, method) (( bool (*) (Dictionary_2_t677 *, KeyValuePair_2_t6329 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25596_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m32155(__this, method) (( Enumerator_t6332  (*) (Dictionary_2_t677 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25598_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,LevelDescription>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m32156(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2167  (*) (Object_t * /* static, unused */, int32_t, LevelDescription_t673 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m25600_gshared)(__this /* static, unused */, ___key, ___value, method)
