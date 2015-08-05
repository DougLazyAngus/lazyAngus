#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t116;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1162;
// System.Collections.Generic.ICollection`1<System.String[]>
struct ICollection_1_t8653;
// System.Collections.ICollection
struct ICollection_t706;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t75;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String[]>
struct KeyCollection_t5417;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String[]>
struct ValueCollection_t5418;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5335;
// System.Collections.Generic.IDictionary`2<System.String,System.String[]>
struct IDictionary_2_t8654;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>[]
struct KeyValuePair_2U5BU5D_t8655;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>>
struct IEnumerator_1_t8656;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_47MethodDeclarations.h"
#define Dictionary_2__ctor_m3481(__this, method) (( void (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2__ctor_m21551_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22063(__this, ___comparer, method) (( void (*) (Dictionary_2_t116 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21553_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m22064(__this, ___dictionary, method) (( void (*) (Dictionary_2_t116 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21555_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor(System.Int32)
#define Dictionary_2__ctor_m22065(__this, ___capacity, method) (( void (*) (Dictionary_2_t116 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21557_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22066(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t116 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21559_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m22067(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t116 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m21561_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22068(__this, method) (( Object_t* (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21563_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22069(__this, method) (( Object_t* (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21565_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m22070(__this, method) (( Object_t * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21567_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22071(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21569_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22072(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t116 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21571_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m22073(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t116 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21573_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m22074(__this, ___key, method) (( bool (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21575_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m22075(__this, ___key, method) (( void (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21577_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22076(__this, method) (( bool (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21579_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22077(__this, method) (( Object_t * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21581_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22078(__this, method) (( bool (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21583_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22079(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t116 *, KeyValuePair_2_t725 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21585_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22080(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t116 *, KeyValuePair_2_t725 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21587_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22081(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t116 *, KeyValuePair_2U5BU5D_t8655*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21589_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22082(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t116 *, KeyValuePair_2_t725 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21591_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22083(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t116 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21593_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22084(__this, method) (( Object_t * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21595_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22085(__this, method) (( Object_t* (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21597_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String[]>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22086(__this, method) (( Object_t * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21599_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String[]>::get_Count()
#define Dictionary_2_get_Count_m22087(__this, method) (( int32_t (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_get_Count_m21601_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String[]>::get_Item(TKey)
#define Dictionary_2_get_Item_m22088(__this, ___key, method) (( StringU5BU5D_t75* (*) (Dictionary_2_t116 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21603_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m22089(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t116 *, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_set_Item_m21605_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m22090(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t116 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21607_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m22091(__this, ___size, method) (( void (*) (Dictionary_2_t116 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21609_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m22092(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t116 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21611_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m22093(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t725  (*) (Object_t * /* static, unused */, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_make_pair_m21613_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String[]>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m22094(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_pick_key_m21615_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String[]>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m22095(__this /* static, unused */, ___key, ___value, method) (( StringU5BU5D_t75* (*) (Object_t * /* static, unused */, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_pick_value_m21617_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m22096(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t116 *, KeyValuePair_2U5BU5D_t8655*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21619_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Resize()
#define Dictionary_2_Resize_m22097(__this, method) (( void (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_Resize_m21621_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Add(TKey,TValue)
#define Dictionary_2_Add_m22098(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t116 *, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_Add_m21623_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Clear()
#define Dictionary_2_Clear_m22099(__this, method) (( void (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_Clear_m21625_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m22100(__this, ___key, method) (( bool (*) (Dictionary_2_t116 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21627_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m22101(__this, ___value, method) (( bool (*) (Dictionary_2_t116 *, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_ContainsValue_m21629_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m22102(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t116 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m21631_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m22103(__this, ___sender, method) (( void (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21633_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Remove(TKey)
#define Dictionary_2_Remove_m22104(__this, ___key, method) (( bool (*) (Dictionary_2_t116 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21635_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m22105(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t116 *, String_t*, StringU5BU5D_t75**, const MethodInfo*))Dictionary_2_TryGetValue_m21637_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::get_Keys()
#define Dictionary_2_get_Keys_m22106(__this, method) (( KeyCollection_t5417 * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_get_Keys_m21638_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::get_Values()
#define Dictionary_2_get_Values_m22107(__this, method) (( ValueCollection_t5418 * (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_get_Values_m21640_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String[]>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m22108(__this, ___key, method) (( String_t* (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21642_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String[]>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m22109(__this, ___value, method) (( StringU5BU5D_t75* (*) (Dictionary_2_t116 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21644_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String[]>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m22110(__this, ___pair, method) (( bool (*) (Dictionary_2_t116 *, KeyValuePair_2_t725 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21646_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String[]>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3850(__this, method) (( Enumerator_t726  (*) (Dictionary_2_t116 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21647_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String[]>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m22111(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, String_t*, StringU5BU5D_t75*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21649_gshared)(__this /* static, unused */, ___key, ___value, method)
