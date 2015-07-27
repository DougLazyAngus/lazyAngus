#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>
struct Dictionary_2_t275;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1290;
// System.Collections.Generic.ICollection`1<TwitterUserInfo>
struct ICollection_1_t4401;
// System.Collections.ICollection
struct ICollection_t652;
// System.Object
struct Object_t;
// TwitterUserInfo
struct TwitterUserInfo_t266;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TwitterUserInfo>
struct KeyCollection_t3597;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TwitterUserInfo>
struct ValueCollection_t3598;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3354;
// System.Collections.Generic.IDictionary`2<System.String,TwitterUserInfo>
struct IDictionary_2_t4402;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Collections.Generic.KeyValuePair`2<System.String,TwitterUserInfo>[]
struct KeyValuePair_2U5BU5D_t4403;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TwitterUserInfo>>
struct IEnumerator_1_t4404;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1942;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,TwitterUserInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,TwitterUserInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_35MethodDeclarations.h"
#define Dictionary_2__ctor_m3327(__this, method) (( void (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2__ctor_m17614_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m21267(__this, ___comparer, method) (( void (*) (Dictionary_2_t275 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17616_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m21268(__this, ___dictionary, method) (( void (*) (Dictionary_2_t275 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17618_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor(System.Int32)
#define Dictionary_2__ctor_m21269(__this, ___capacity, method) (( void (*) (Dictionary_2_t275 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17620_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m21270(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t275 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17622_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m21271(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t275 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2__ctor_m17624_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21272(__this, method) (( Object_t* (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17626_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21273(__this, method) (( Object_t* (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17628_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21274(__this, method) (( Object_t * (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17630_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21275(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t275 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17632_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21276(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t275 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17634_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m21277(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t275 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17636_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m21278(__this, ___key, method) (( bool (*) (Dictionary_2_t275 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17638_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m21279(__this, ___key, method) (( void (*) (Dictionary_2_t275 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17640_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21280(__this, method) (( bool (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17642_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21281(__this, method) (( Object_t * (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21282(__this, method) (( bool (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17646_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21283(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t275 *, KeyValuePair_2_t3596 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17648_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21284(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t275 *, KeyValuePair_2_t3596 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17650_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21285(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t275 *, KeyValuePair_2U5BU5D_t4403*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17652_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21286(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t275 *, KeyValuePair_2_t3596 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17654_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21287(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t275 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17656_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21288(__this, method) (( Object_t * (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17658_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21289(__this, method) (( Object_t* (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17660_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21290(__this, method) (( Object_t * (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17662_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::get_Count()
#define Dictionary_2_get_Count_m21291(__this, method) (( int32_t (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_get_Count_m17664_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::get_Item(TKey)
#define Dictionary_2_get_Item_m21292(__this, ___key, method) (( TwitterUserInfo_t266 * (*) (Dictionary_2_t275 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m17666_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m21293(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t275 *, String_t*, TwitterUserInfo_t266 *, const MethodInfo*))Dictionary_2_set_Item_m17668_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m21294(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t275 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17670_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m21295(__this, ___size, method) (( void (*) (Dictionary_2_t275 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17672_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m21296(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t275 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17674_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m21297(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3596  (*) (Object_t * /* static, unused */, String_t*, TwitterUserInfo_t266 *, const MethodInfo*))Dictionary_2_make_pair_m17676_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m21298(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, TwitterUserInfo_t266 *, const MethodInfo*))Dictionary_2_pick_key_m17678_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m21299(__this /* static, unused */, ___key, ___value, method) (( TwitterUserInfo_t266 * (*) (Object_t * /* static, unused */, String_t*, TwitterUserInfo_t266 *, const MethodInfo*))Dictionary_2_pick_value_m17680_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m21300(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t275 *, KeyValuePair_2U5BU5D_t4403*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17682_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::Resize()
#define Dictionary_2_Resize_m21301(__this, method) (( void (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_Resize_m17684_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::Add(TKey,TValue)
#define Dictionary_2_Add_m21302(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t275 *, String_t*, TwitterUserInfo_t266 *, const MethodInfo*))Dictionary_2_Add_m17686_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::Clear()
#define Dictionary_2_Clear_m21303(__this, method) (( void (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_Clear_m17688_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m21304(__this, ___key, method) (( bool (*) (Dictionary_2_t275 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m17690_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m21305(__this, ___value, method) (( bool (*) (Dictionary_2_t275 *, TwitterUserInfo_t266 *, const MethodInfo*))Dictionary_2_ContainsValue_m17692_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m21306(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t275 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2_GetObjectData_m17694_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m21307(__this, ___sender, method) (( void (*) (Dictionary_2_t275 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17696_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::Remove(TKey)
#define Dictionary_2_Remove_m21308(__this, ___key, method) (( bool (*) (Dictionary_2_t275 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m17698_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m21309(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t275 *, String_t*, TwitterUserInfo_t266 **, const MethodInfo*))Dictionary_2_TryGetValue_m17700_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::get_Keys()
#define Dictionary_2_get_Keys_m21310(__this, method) (( KeyCollection_t3597 * (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_get_Keys_m17701_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::get_Values()
#define Dictionary_2_get_Values_m21311(__this, method) (( ValueCollection_t3598 * (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_get_Values_m17703_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m21312(__this, ___key, method) (( String_t* (*) (Dictionary_2_t275 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17705_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m21313(__this, ___value, method) (( TwitterUserInfo_t266 * (*) (Dictionary_2_t275 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17707_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m21314(__this, ___pair, method) (( bool (*) (Dictionary_2_t275 *, KeyValuePair_2_t3596 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17709_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m21315(__this, method) (( Enumerator_t3599  (*) (Dictionary_2_t275 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17710_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,TwitterUserInfo>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m21316(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Object_t * /* static, unused */, String_t*, TwitterUserInfo_t266 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17712_gshared)(__this /* static, unused */, ___key, ___value, method)
