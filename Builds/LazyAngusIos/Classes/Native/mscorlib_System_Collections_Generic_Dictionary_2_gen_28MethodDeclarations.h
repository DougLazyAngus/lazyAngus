#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct Dictionary_2_t1171;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Type,System.Type>>
struct ICollection_1_t8989;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t9000;
// System.Collections.ICollection
struct ICollection_t704;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1388;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct KeyCollection_t6026;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<System.Type,System.Type>,System.Type>
struct ValueCollection_t6027;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IEqualityComparer_1_t5997;
// System.Collections.Generic.IDictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct IDictionary_2_t9001;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>[]
struct KeyValuePair_2U5BU5D_t9002;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Tuple`2<System.Type,System.Type>,System.Type>>
struct IEnumerator_1_t9003;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3909;
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
#define Dictionary_2__ctor_m7188(__this, method) (( void (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2__ctor_m21523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31559(__this, ___comparer, method) (( void (*) (Dictionary_2_t1171 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21525_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m31560(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1171 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21527_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Int32)
#define Dictionary_2__ctor_m31561(__this, ___capacity, method) (( void (*) (Dictionary_2_t1171 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21529_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31562(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1171 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21531_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m31563(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1171 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2__ctor_m21533_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31564(__this, method) (( Object_t* (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21535_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31565(__this, method) (( Object_t* (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21537_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m31566(__this, method) (( Object_t * (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21539_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31567(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1171 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21541_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31568(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1171 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21543_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m31569(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1171 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21545_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m31570(__this, ___key, method) (( bool (*) (Dictionary_2_t1171 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21547_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m31571(__this, ___key, method) (( void (*) (Dictionary_2_t1171 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21549_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31572(__this, method) (( bool (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21551_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31573(__this, method) (( Object_t * (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21553_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31574(__this, method) (( bool (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21555_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31575(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1171 *, KeyValuePair_2_t6025 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21557_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31576(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1171 *, KeyValuePair_2_t6025 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21559_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31577(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1171 *, KeyValuePair_2U5BU5D_t9002*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21561_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31578(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1171 *, KeyValuePair_2_t6025 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21563_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31579(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1171 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21565_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31580(__this, method) (( Object_t * (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21567_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31581(__this, method) (( Object_t* (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21569_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31582(__this, method) (( Object_t * (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21571_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Count()
#define Dictionary_2_get_Count_m31583(__this, method) (( int32_t (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_get_Count_m21573_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Item(TKey)
#define Dictionary_2_get_Item_m31584(__this, ___key, method) (( Type_t * (*) (Dictionary_2_t1171 *, Tuple_2_t1388 *, const MethodInfo*))Dictionary_2_get_Item_m21575_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m31585(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1171 *, Tuple_2_t1388 *, Type_t *, const MethodInfo*))Dictionary_2_set_Item_m21577_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m31586(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1171 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21579_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m31587(__this, ___size, method) (( void (*) (Dictionary_2_t1171 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21581_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m31588(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1171 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21583_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m31589(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6025  (*) (Object_t * /* static, unused */, Tuple_2_t1388 *, Type_t *, const MethodInfo*))Dictionary_2_make_pair_m21585_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m31590(__this /* static, unused */, ___key, ___value, method) (( Tuple_2_t1388 * (*) (Object_t * /* static, unused */, Tuple_2_t1388 *, Type_t *, const MethodInfo*))Dictionary_2_pick_key_m21587_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m31591(__this /* static, unused */, ___key, ___value, method) (( Type_t * (*) (Object_t * /* static, unused */, Tuple_2_t1388 *, Type_t *, const MethodInfo*))Dictionary_2_pick_value_m21589_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m31592(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1171 *, KeyValuePair_2U5BU5D_t9002*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21591_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Resize()
#define Dictionary_2_Resize_m31593(__this, method) (( void (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_Resize_m21593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Add(TKey,TValue)
#define Dictionary_2_Add_m31594(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1171 *, Tuple_2_t1388 *, Type_t *, const MethodInfo*))Dictionary_2_Add_m21595_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Clear()
#define Dictionary_2_Clear_m31595(__this, method) (( void (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_Clear_m21597_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m31596(__this, ___key, method) (( bool (*) (Dictionary_2_t1171 *, Tuple_2_t1388 *, const MethodInfo*))Dictionary_2_ContainsKey_m21599_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m31597(__this, ___value, method) (( bool (*) (Dictionary_2_t1171 *, Type_t *, const MethodInfo*))Dictionary_2_ContainsValue_m21601_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m31598(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1171 *, SerializationInfo_t2867 *, StreamingContext_t2868 , const MethodInfo*))Dictionary_2_GetObjectData_m21603_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m31599(__this, ___sender, method) (( void (*) (Dictionary_2_t1171 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21605_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::Remove(TKey)
#define Dictionary_2_Remove_m31600(__this, ___key, method) (( bool (*) (Dictionary_2_t1171 *, Tuple_2_t1388 *, const MethodInfo*))Dictionary_2_Remove_m21607_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m31601(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1171 *, Tuple_2_t1388 *, Type_t **, const MethodInfo*))Dictionary_2_TryGetValue_m21609_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Keys()
#define Dictionary_2_get_Keys_m31602(__this, method) (( KeyCollection_t6026 * (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_get_Keys_m21610_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::get_Values()
#define Dictionary_2_get_Values_m31603(__this, method) (( ValueCollection_t6027 * (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_get_Values_m21612_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m31604(__this, ___key, method) (( Tuple_2_t1388 * (*) (Dictionary_2_t1171 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21614_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m31605(__this, ___value, method) (( Type_t * (*) (Dictionary_2_t1171 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21616_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m31606(__this, ___pair, method) (( bool (*) (Dictionary_2_t1171 *, KeyValuePair_2_t6025 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21618_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m31607(__this, method) (( Enumerator_t6028  (*) (Dictionary_2_t1171 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21619_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m31608(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2086  (*) (Object_t * /* static, unused */, Tuple_2_t1388 *, Type_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21621_gshared)(__this /* static, unused */, ___key, ___value, method)
