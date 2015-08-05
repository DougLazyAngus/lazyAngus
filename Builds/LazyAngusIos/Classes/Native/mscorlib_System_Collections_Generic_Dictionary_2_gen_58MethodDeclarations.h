#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct Dictionary_2_t7004;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9116;
// System.Collections.ICollection
struct ICollection_t707;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Double>
struct KeyCollection_t7006;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>
struct ValueCollection_t7007;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5335;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6935;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7771;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7201;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__50.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_59MethodDeclarations.h"
#define Dictionary_2__ctor_m44184(__this, method) (( void (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2__ctor_m44185_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44186(__this, ___comparer, method) (( void (*) (Dictionary_2_t7004 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44187_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44188(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7004 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44189_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44190(__this, ___capacity, method) (( void (*) (Dictionary_2_t7004 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44191_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44192(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7004 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44193_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44194(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7004 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m44195_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44196(__this, method) (( Object_t* (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44197_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44198(__this, method) (( Object_t* (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44199_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44200(__this, method) (( Object_t * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44201_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44202(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44203_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44204(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7004 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44205_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44206(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7004 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44207_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44208(__this, ___key, method) (( bool (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44209_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44210(__this, ___key, method) (( void (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44211_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44212(__this, method) (( bool (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44213_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44214(__this, method) (( Object_t * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44215_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44216(__this, method) (( bool (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44217_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44218(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7004 *, KeyValuePair_2_t7005 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44219_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44220(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7004 *, KeyValuePair_2_t7005 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44221_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44222(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7004 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44223_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44224(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7004 *, KeyValuePair_2_t7005 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44225_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44226(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7004 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44227_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44228(__this, method) (( Object_t * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44229_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44230(__this, method) (( Object_t* (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44231_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44232(__this, method) (( Object_t * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44233_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Count()
#define Dictionary_2_get_Count_m44234(__this, method) (( int32_t (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_get_Count_m44235_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Item(TKey)
#define Dictionary_2_get_Item_m44236(__this, ___key, method) (( double (*) (Dictionary_2_t7004 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44237_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44238(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7004 *, String_t*, double, const MethodInfo*))Dictionary_2_set_Item_m44239_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44240(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7004 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44241_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44242(__this, ___size, method) (( void (*) (Dictionary_2_t7004 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44243_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44244(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7004 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44245_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44246(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7005  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_make_pair_m44247_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44248(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_key_m44249_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44250(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_value_m44251_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44252(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7004 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44253_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Resize()
#define Dictionary_2_Resize_m44254(__this, method) (( void (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_Resize_m44255_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Add(TKey,TValue)
#define Dictionary_2_Add_m44256(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7004 *, String_t*, double, const MethodInfo*))Dictionary_2_Add_m44257_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Clear()
#define Dictionary_2_Clear_m44258(__this, method) (( void (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_Clear_m44259_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44260(__this, ___key, method) (( bool (*) (Dictionary_2_t7004 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44261_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44262(__this, ___value, method) (( bool (*) (Dictionary_2_t7004 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m44263_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44264(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7004 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m44265_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44266(__this, ___sender, method) (( void (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44267_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::Remove(TKey)
#define Dictionary_2_Remove_m44268(__this, ___key, method) (( bool (*) (Dictionary_2_t7004 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44269_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44270(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7004 *, String_t*, double*, const MethodInfo*))Dictionary_2_TryGetValue_m44271_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Keys()
#define Dictionary_2_get_Keys_m44272(__this, method) (( KeyCollection_t7006 * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_get_Keys_m44273_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Values()
#define Dictionary_2_get_Values_m44274(__this, method) (( ValueCollection_t7007 * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_get_Values_m44275_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44276(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44277_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44278(__this, ___value, method) (( double (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44279_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44280(__this, ___pair, method) (( bool (*) (Dictionary_2_t7004 *, KeyValuePair_2_t7005 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44281_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44282(__this, method) (( Enumerator_t7008  (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44283_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Double>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44284(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44285_gshared)(__this /* static, unused */, ___key, ___value, method)
