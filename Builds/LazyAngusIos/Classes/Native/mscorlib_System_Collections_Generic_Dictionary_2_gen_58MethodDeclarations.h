﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct Dictionary_2_t6992;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t9104;
// System.Collections.ICollection
struct ICollection_t696;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Double>
struct KeyCollection_t6994;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Double>
struct ValueCollection_t6995;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5323;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t6923;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t7759;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t7189;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3901;
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
#define Dictionary_2__ctor_m44106(__this, method) (( void (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2__ctor_m44107_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44108(__this, ___comparer, method) (( void (*) (Dictionary_2_t6992 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44109_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m44110(__this, ___dictionary, method) (( void (*) (Dictionary_2_t6992 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44111_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Int32)
#define Dictionary_2__ctor_m44112(__this, ___capacity, method) (( void (*) (Dictionary_2_t6992 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m44113_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m44114(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t6992 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m44115_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m44116(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6992 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2__ctor_m44117_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44118(__this, method) (( Object_t* (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m44119_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44120(__this, method) (( Object_t* (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m44121_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m44122(__this, method) (( Object_t * (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m44123_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m44124(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t6992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m44125_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m44126(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6992 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m44127_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m44128(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6992 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m44129_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m44130(__this, ___key, method) (( bool (*) (Dictionary_2_t6992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m44131_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m44132(__this, ___key, method) (( void (*) (Dictionary_2_t6992 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m44133_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44134(__this, method) (( bool (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m44135_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44136(__this, method) (( Object_t * (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m44137_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44138(__this, method) (( bool (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m44139_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44140(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t6992 *, KeyValuePair_2_t6993 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m44141_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44142(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6992 *, KeyValuePair_2_t6993 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44143_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44144(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6992 *, KeyValuePair_2U5BU5D_t7759*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m44145_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44146(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t6992 *, KeyValuePair_2_t6993 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m44147_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m44148(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6992 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m44149_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44150(__this, method) (( Object_t * (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44151_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44152(__this, method) (( Object_t* (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m44153_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Double>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44154(__this, method) (( Object_t * (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m44155_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Count()
#define Dictionary_2_get_Count_m44156(__this, method) (( int32_t (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_get_Count_m44157_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Item(TKey)
#define Dictionary_2_get_Item_m44158(__this, ___key, method) (( double (*) (Dictionary_2_t6992 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m44159_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m44160(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6992 *, String_t*, double, const MethodInfo*))Dictionary_2_set_Item_m44161_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m44162(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t6992 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m44163_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m44164(__this, ___size, method) (( void (*) (Dictionary_2_t6992 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m44165_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m44166(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6992 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m44167_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m44168(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t6993  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_make_pair_m44169_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m44170(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_key_m44171_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m44172(__this /* static, unused */, ___key, ___value, method) (( double (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_pick_value_m44173_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m44174(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t6992 *, KeyValuePair_2U5BU5D_t7759*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m44175_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Resize()
#define Dictionary_2_Resize_m44176(__this, method) (( void (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_Resize_m44177_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Add(TKey,TValue)
#define Dictionary_2_Add_m44178(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t6992 *, String_t*, double, const MethodInfo*))Dictionary_2_Add_m44179_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::Clear()
#define Dictionary_2_Clear_m44180(__this, method) (( void (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_Clear_m44181_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m44182(__this, ___key, method) (( bool (*) (Dictionary_2_t6992 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m44183_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m44184(__this, ___value, method) (( bool (*) (Dictionary_2_t6992 *, double, const MethodInfo*))Dictionary_2_ContainsValue_m44185_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m44186(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t6992 *, SerializationInfo_t2860 *, StreamingContext_t2861 , const MethodInfo*))Dictionary_2_GetObjectData_m44187_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Double>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m44188(__this, ___sender, method) (( void (*) (Dictionary_2_t6992 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m44189_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::Remove(TKey)
#define Dictionary_2_Remove_m44190(__this, ___key, method) (( bool (*) (Dictionary_2_t6992 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m44191_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m44192(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t6992 *, String_t*, double*, const MethodInfo*))Dictionary_2_TryGetValue_m44193_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Keys()
#define Dictionary_2_get_Keys_m44194(__this, method) (( KeyCollection_t6994 * (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_get_Keys_m44195_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::get_Values()
#define Dictionary_2_get_Values_m44196(__this, method) (( ValueCollection_t6995 * (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_get_Values_m44197_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m44198(__this, ___key, method) (( String_t* (*) (Dictionary_2_t6992 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m44199_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Double>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m44200(__this, ___value, method) (( double (*) (Dictionary_2_t6992 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m44201_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Double>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m44202(__this, ___pair, method) (( bool (*) (Dictionary_2_t6992 *, KeyValuePair_2_t6993 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m44203_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Double>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m44204(__this, method) (( Enumerator_t6996  (*) (Dictionary_2_t6992 *, const MethodInfo*))Dictionary_2_GetEnumerator_m44205_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Double>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m44206(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2079  (*) (Object_t * /* static, unused */, String_t*, double, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m44207_gshared)(__this /* static, unused */, ___key, ___value, method)