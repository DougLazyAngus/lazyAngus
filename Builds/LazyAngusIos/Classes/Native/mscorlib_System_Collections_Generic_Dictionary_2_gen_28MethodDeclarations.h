#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct Dictionary_2_t1175;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t8993;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t9004;
// System.Collections.ICollection
struct ICollection_t706;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1392;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct KeyCollection_t6030;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct ValueCollection_t6031;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IEqualityComparer_1_t6001;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct IDictionary_2_t9005;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>[]
struct KeyValuePair_2U5BU5D_t9006;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>>
struct IEnumerator_1_t9007;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_41.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Tuple`2<System.Type,System.Type>,System.Type>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__36.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m7213(__this, method) (( void (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2__ctor_m21551_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31587(__this, ___comparer, method) (( void (*) (Dictionary_2_t1175 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21553_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m31588(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1175 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21555_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Int32)
#define Dictionary_2__ctor_m31589(__this, ___capacity, method) (( void (*) (Dictionary_2_t1175 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31590(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1175 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21559_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m31591(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1175 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m21561_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31592(__this, method) (( Object_t* (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21563_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31593(__this, method) (( Object_t* (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21565_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31594(__this, method) (( Object_t * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21567_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31595(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21569_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31596(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1175 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21571_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m31597(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1175 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21573_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m31598(__this, ___key, method) (( bool (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21575_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m31599(__this, ___key, method) (( void (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21577_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31600(__this, method) (( bool (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21579_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31601(__this, method) (( Object_t * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31602(__this, method) (( bool (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21583_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31603(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1175 *, KeyValuePair_2_t6029 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21585_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31604(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1175 *, KeyValuePair_2_t6029 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21587_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31605(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1175 *, KeyValuePair_2U5BU5D_t9006*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21589_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31606(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1175 *, KeyValuePair_2_t6029 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21591_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31607(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1175 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21593_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31608(__this, method) (( Object_t * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21595_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31609(__this, method) (( Object_t* (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21597_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31610(__this, method) (( Object_t * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21599_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Count()
#define Dictionary_2_get_Count_m31611(__this, method) (( int32_t (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_get_Count_m21601_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Item(TKey)
#define Dictionary_2_get_Item_m31612(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t1175 *, Tuple_2_t1392 *, const MethodInfo*))Dictionary_2_get_Item_m21603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m31613(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1175 *, Tuple_2_t1392 *, Type_t *, const MethodInfo*))Dictionary_2_set_Item_m21605_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m31614(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1175 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21607_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m31615(__this, ___size, method) (( void (*) (Dictionary_2_t1175 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21609_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m31616(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1175 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21611_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m31617(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6029  (*) (Object_t * /* static, unused */, Tuple_2_t1392 *, Type_t *, const MethodInfo*))Dictionary_2_make_pair_m21613_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m31618(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1392 * (*) (Object_t * /* static, unused */, Tuple_2_t1392 *, Type_t *, const MethodInfo*))Dictionary_2_pick_key_m21615_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m31619(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, Tuple_2_t1392 *, Type_t *, const MethodInfo*))Dictionary_2_pick_value_m21617_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m31620(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1175 *, KeyValuePair_2U5BU5D_t9006*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21619_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Resize()
#define Dictionary_2_Resize_m31621(__this, method) (( void (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_Resize_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Add(TKey,TValue)
#define Dictionary_2_Add_m31622(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1175 *, Tuple_2_t1392 *, Type_t *, const MethodInfo*))Dictionary_2_Add_m21623_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Clear()
#define Dictionary_2_Clear_m31623(__this, method) (( void (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_Clear_m21625_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m31624(__this, ___key, method) (( bool (*) (Dictionary_2_t1175 *, Tuple_2_t1392 *, const MethodInfo*))Dictionary_2_ContainsKey_m21627_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m31625(__this, ___value, method) (( bool (*) (Dictionary_2_t1175 *, Type_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21629_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m31626(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1175 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m21631_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m31627(__this, ___sender, method) (( void (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21633_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Remove(TKey)
#define Dictionary_2_Remove_m31628(__this, ___key, method) (( bool (*) (Dictionary_2_t1175 *, Tuple_2_t1392 *, const MethodInfo*))Dictionary_2_Remove_m21635_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m31629(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1175 *, Tuple_2_t1392 *, Type_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21637_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Keys()
#define Dictionary_2_get_Keys_m31630(__this, method) (( KeyCollection_t6030 * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_get_Keys_m21638_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Values()
#define Dictionary_2_get_Values_m31631(__this, method) (( ValueCollection_t6031 * (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_get_Values_m21640_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m31632(__this, ___key, method) (( Tuple_2_t1392 * (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21642_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m31633(__this, ___value, method) (( Type_t * (*) (Dictionary_2_t1175 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21644_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m31634(__this, ___pair, method) (( bool (*) (Dictionary_2_t1175 *, KeyValuePair_2_t6029 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21646_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m31635(__this, method) (( Enumerator_t6032  (*) (Dictionary_2_t1175 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21647_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m31636(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, Tuple_2_t1392 *, Type_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21649_gshared)(__this /* static, unused */, ___key, ___value, method)
