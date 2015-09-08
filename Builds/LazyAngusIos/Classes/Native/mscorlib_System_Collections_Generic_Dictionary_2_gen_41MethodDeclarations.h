#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t2817;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t9713;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int64>
struct KeyCollection_t9033;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int64>
struct ValueCollection_t9034;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5771;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7818;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t8275;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t7827;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__66.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_74MethodDeclarations.h"
#define Dictionary_2__ctor_m65782(__this, method) (( void (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2__ctor_m65783_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m65784(__this, ___comparer, method) (( void (*) (Dictionary_2_t2817 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65785_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m65786(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2817 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65787_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Int32)
#define Dictionary_2__ctor_m65788(__this, ___capacity, method) (( void (*) (Dictionary_2_t2817 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m65789_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m65790(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2817 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m65791_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m65792(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2817 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m65793_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65794(__this, method) (( Object_t* (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m65795_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65796(__this, method) (( Object_t* (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m65797_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m65798(__this, method) (( Object_t * (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m65799_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m65800(__this, method) (( Object_t * (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m65801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m65802(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2817 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m65803_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m65804(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2817 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m65805_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m65806(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2817 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m65807_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m65808(__this, ___key, method) (( bool (*) (Dictionary_2_t2817 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m65809_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m65810(__this, ___key, method) (( void (*) (Dictionary_2_t2817 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m65811_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65812(__this, method) (( bool (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m65813_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65814(__this, method) (( Object_t * (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m65815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65816(__this, method) (( bool (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m65817_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65818(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2817 *, KeyValuePair_2_t7822 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m65819_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65820(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2817 *, KeyValuePair_2_t7822 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m65821_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65822(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2817 *, KeyValuePair_2U5BU5D_t8275*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m65823_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65824(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2817 *, KeyValuePair_2_t7822 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m65825_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m65826(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2817 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m65827_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65828(__this, method) (( Object_t * (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m65829_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65830(__this, method) (( Object_t* (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m65831_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int64>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65832(__this, method) (( Object_t * (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m65833_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count()
#define Dictionary_2_get_Count_m65834(__this, method) (( int32_t (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_get_Count_m65835_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Item(TKey)
#define Dictionary_2_get_Item_m65836(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2817 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m65837_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m65838(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2817 *, String_t*, int64_t, const MethodInfo*))Dictionary_2_set_Item_m65839_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m65840(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2817 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m65841_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m65842(__this, ___size, method) (( void (*) (Dictionary_2_t2817 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m65843_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m65844(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2817 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m65845_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m65846(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7822  (*) (Object_t * /* static, unused */, String_t*, int64_t, const MethodInfo*))Dictionary_2_make_pair_m65847_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m65848(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int64_t, const MethodInfo*))Dictionary_2_pick_key_m65849_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m65850(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, String_t*, int64_t, const MethodInfo*))Dictionary_2_pick_value_m65851_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m65852(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2817 *, KeyValuePair_2U5BU5D_t8275*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m65853_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Resize()
#define Dictionary_2_Resize_m65854(__this, method) (( void (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_Resize_m65855_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Add(TKey,TValue)
#define Dictionary_2_Add_m65856(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2817 *, String_t*, int64_t, const MethodInfo*))Dictionary_2_Add_m65857_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Clear()
#define Dictionary_2_Clear_m65858(__this, method) (( void (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_Clear_m65859_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m65860(__this, ___key, method) (( bool (*) (Dictionary_2_t2817 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m65861_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m65862(__this, ___value, method) (( bool (*) (Dictionary_2_t2817 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m65863_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m65864(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2817 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m65865_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int64>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m65866(__this, ___sender, method) (( void (*) (Dictionary_2_t2817 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m65867_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::Remove(TKey)
#define Dictionary_2_Remove_m65868(__this, ___key, method) (( bool (*) (Dictionary_2_t2817 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m65869_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m65870(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2817 *, String_t*, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m65871_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Keys()
#define Dictionary_2_get_Keys_m65872(__this, method) (( KeyCollection_t9033 * (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_get_Keys_m65873_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Values()
#define Dictionary_2_get_Values_m65874(__this, method) (( ValueCollection_t9034 * (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_get_Values_m65875_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m65876(__this, ___key, method) (( String_t* (*) (Dictionary_2_t2817 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m65877_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m65878(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2817 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m65879_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m65880(__this, ___pair, method) (( bool (*) (Dictionary_2_t2817 *, KeyValuePair_2_t7822 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m65881_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int64>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m65882(__this, method) (( Enumerator_t9035  (*) (Dictionary_2_t2817 *, const MethodInfo*))Dictionary_2_GetEnumerator_m65883_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int64>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m65884(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, String_t*, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m65885_gshared)(__this /* static, unused */, ___key, ___value, method)
