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
struct ICollection_t706;
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
#define Dictionary_2__ctor_m44181(__this, method) (( void (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2__ctor_m44182_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44183(__this, ___comparer, method) (( void (*) (Dictionary_2_t7004 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44184_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44185(__this, ___dictionary, method) (( void (*) (Dictionary_2_t7004 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44186_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44187(__this, ___capacity, method) (( void (*) (Dictionary_2_t7004 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44188_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44189(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t7004 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44190_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44191(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7004 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m44192_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44193(__this, method) (( Object_t* (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44194_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44195(__this, method) (( Object_t* (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44196_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44197(__this, method) (( Object_t * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44198_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44199(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44200_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44201(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7004 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44202_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44203(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7004 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44204_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44205(__this, ___key, method) (( bool (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44206_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44207(__this, ___key, method) (( void (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44208_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44209(__this, method) (( bool (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44210_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44211(__this, method) (( Object_t * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44212_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44213(__this, method) (( bool (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44214_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44215(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t7004 *, KeyValuePair_2_t7005 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44216_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44217(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7004 *, KeyValuePair_2_t7005 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44218_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44219(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7004 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44220_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44221(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t7004 *, KeyValuePair_2_t7005 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44222_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44223(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7004 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44224_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44225(__this, method) (( Object_t * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44226_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44227(__this, method) (( Object_t* (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44228_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44229(__this, method) (( Object_t * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44230_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Count()
#define Dictionary_2_get_Count_m44231(__this, method) (( int32_t (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_get_Count_m44232_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Item(TKey)
#define Dictionary_2_get_Item_m44233(__this, ___key, method) (( double (*) (Dictionary_2_t7004 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44234_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44235(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7004 *, String_t*, double, const MethodInfo*))Dictionary_2_set_Item_m44236_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44237(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t7004 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44238_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44239(__this, ___size, method) (( void (*) (Dictionary_2_t7004 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44240_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44241(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7004 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44242_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44243(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t7005  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_make_pair_m44244_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44245(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_key_m44246_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44247(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_value_m44248_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44249(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t7004 *, KeyValuePair_2U5BU5D_t7771*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44250_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Resize()
#define Dictionary_2_Resize_m44251(__this, method) (( void (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_Resize_m44252_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Add(TKey,TValue)
#define Dictionary_2_Add_m44253(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t7004 *, String_t*, double, const MethodInfo*))Dictionary_2_Add_m44254_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Clear()
#define Dictionary_2_Clear_m44255(__this, method) (( void (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_Clear_m44256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44257(__this, ___key, method) (( bool (*) (Dictionary_2_t7004 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44258_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44259(__this, ___value, method) (( bool (*) (Dictionary_2_t7004 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m44260_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44261(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t7004 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m44262_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44263(__this, ___sender, method) (( void (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44264_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::Remove(TKey)
#define Dictionary_2_Remove_m44265(__this, ___key, method) (( bool (*) (Dictionary_2_t7004 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44266_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44267(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t7004 *, String_t*, double*, const MethodInfo*))Dictionary_2_TryGetValue_m44268_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Keys()
#define Dictionary_2_get_Keys_m44269(__this, method) (( KeyCollection_t7006 * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_get_Keys_m44270_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Values()
#define Dictionary_2_get_Values_m44271(__this, method) (( ValueCollection_t7007 * (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_get_Values_m44272_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44273(__this, ___key, method) (( String_t* (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44274_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44275(__this, ___value, method) (( double (*) (Dictionary_2_t7004 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44276_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44277(__this, ___pair, method) (( bool (*) (Dictionary_2_t7004 *, KeyValuePair_2_t7005 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44278_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44279(__this, method) (( Enumerator_t7008  (*) (Dictionary_2_t7004 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44280_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Double>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44281(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44282_gshared)(__this /* static, unused */, ___key, ___value, method)
