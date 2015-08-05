#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>
struct Dictionary_2_t151;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8635;
// System.Collections.Generic.ICollection`1<IOSADBanner>
struct ICollection_1_t8710;
// System.Collections.ICollection
struct ICollection_t705;
// System.Object
struct Object_t;
// IOSADBanner
struct IOSADBanner_t150;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,IOSADBanner>
struct KeyCollection_t5474;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,IOSADBanner>
struct ValueCollection_t5475;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5347;
// System.Collections.Generic.IDictionary`2<System.Int32,IOSADBanner>
struct IDictionary_2_t8711;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>[]
struct KeyValuePair_2U5BU5D_t8712;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>>
struct IEnumerator_1_t8713;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3912;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,IOSADBanner>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44MethodDeclarations.h"
#define Dictionary_2__ctor_m3554(__this, method) (( void (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2__ctor_m9922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23226(__this, ___comparer, method) (( void (*) (Dictionary_2_t151 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20843_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m23227(__this, ___dictionary, method) (( void (*) (Dictionary_2_t151 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20845_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Int32)
#define Dictionary_2__ctor_m23228(__this, ___capacity, method) (( void (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20847_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23229(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t151 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20849_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m23230(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t151 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2__ctor_m20851_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23231(__this, method) (( Object_t* (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20853_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23232(__this, method) (( Object_t* (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20855_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23233(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20857_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23234(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20859_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23235(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20861_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m23236(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20863_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m23237(__this, ___key, method) (( bool (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20865_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m23238(__this, ___key, method) (( void (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20867_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23239(__this, method) (( bool (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20869_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23240(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20871_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23241(__this, method) (( bool (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20873_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23242(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t151 *, KeyValuePair_2_t679 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20875_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23243(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t151 *, KeyValuePair_2_t679 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20877_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23244(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, KeyValuePair_2U5BU5D_t8712*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20879_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23245(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t151 *, KeyValuePair_2_t679 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20881_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23246(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20883_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23247(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20885_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23248(__this, method) (( Object_t* (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20887_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23249(__this, method) (( Object_t * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20889_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Count()
#define Dictionary_2_get_Count_m23250(__this, method) (( int32_t (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_get_Count_m20891_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Item(TKey)
#define Dictionary_2_get_Item_m23251(__this, ___key, method) (( IOSADBanner_t150 * (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20893_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m23252(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_set_Item_m20895_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m23253(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t151 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20897_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m23254(__this, ___size, method) (( void (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20899_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m23255(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20901_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m23256(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t679  (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_make_pair_m20903_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m23257(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_pick_key_m20905_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m23258(__this /* static, unused */, ___key, ___value, method) (( IOSADBanner_t150 * (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_pick_value_m20907_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m23259(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t151 *, KeyValuePair_2U5BU5D_t8712*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20909_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Resize()
#define Dictionary_2_Resize_m23260(__this, method) (( void (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_Resize_m20911_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Add(TKey,TValue)
#define Dictionary_2_Add_m23261(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t151 *, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_Add_m20913_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Clear()
#define Dictionary_2_Clear_m23262(__this, method) (( void (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_Clear_m20915_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m23263(__this, ___key, method) (( bool (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20917_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m23264(__this, ___value, method) (( bool (*) (Dictionary_2_t151 *, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_ContainsValue_m20919_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m23265(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t151 *, SerializationInfo_t2870 *, StreamingContext_t2871 , const MethodInfo*))Dictionary_2_GetObjectData_m20921_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m23266(__this, ___sender, method) (( void (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20923_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::Remove(TKey)
#define Dictionary_2_Remove_m23267(__this, ___key, method) (( bool (*) (Dictionary_2_t151 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20925_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m23268(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t151 *, int32_t, IOSADBanner_t150 **, const MethodInfo*))Dictionary_2_TryGetValue_m20927_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Keys()
#define Dictionary_2_get_Keys_m23269(__this, method) (( KeyCollection_t5474 * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_get_Keys_m20929_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::get_Values()
#define Dictionary_2_get_Values_m23270(__this, method) (( ValueCollection_t5475 * (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_get_Values_m20931_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m23271(__this, ___key, method) (( int32_t (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20933_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m23272(__this, ___value, method) (( IOSADBanner_t150 * (*) (Dictionary_2_t151 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20935_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m23273(__this, ___pair, method) (( bool (*) (Dictionary_2_t151 *, KeyValuePair_2_t679 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20937_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3557(__this, method) (( Enumerator_t680  (*) (Dictionary_2_t151 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20939_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m23274(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2089  (*) (Object_t * /* static, unused */, int32_t, IOSADBanner_t150 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20941_gshared)(__this /* static, unused */, ___key, ___value, method)
