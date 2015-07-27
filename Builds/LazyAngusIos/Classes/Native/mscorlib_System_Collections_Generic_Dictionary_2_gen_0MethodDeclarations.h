#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t270;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1290;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1291;
// System.Collections.ICollection
struct ICollection_t652;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t670;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t1314;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3354;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t715;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1292;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1293;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1942;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_35MethodDeclarations.h"
#define Dictionary_2__ctor_m3118(__this, method) (( void (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2__ctor_m17614_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17878(__this, ___comparer, method) (( void (*) (Dictionary_2_t270 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17616_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m3504(__this, ___dictionary, method) (( void (*) (Dictionary_2_t270 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17618_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m17879(__this, ___capacity, method) (( void (*) (Dictionary_2_t270 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17620_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17880(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t270 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17622_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17881(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t270 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2__ctor_m17624_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3930(__this, method) (( Object_t* (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17626_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m3931(__this, method) (( Object_t* (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17628_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m3934(__this, method) (( Object_t * (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17630_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3932(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t270 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17632_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3933(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t270 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17634_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m3935(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t270 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17636_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m3936(__this, ___key, method) (( bool (*) (Dictionary_2_t270 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17638_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m3938(__this, ___key, method) (( void (*) (Dictionary_2_t270 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17640_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3915(__this, method) (( bool (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17642_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3916(__this, method) (( Object_t * (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3918(__this, method) (( bool (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17646_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3919(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t270 *, KeyValuePair_2_t675 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17648_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3921(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t270 *, KeyValuePair_2_t675 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17650_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3922(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t270 *, KeyValuePair_2U5BU5D_t1292*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17652_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3923(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t270 *, KeyValuePair_2_t675 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17654_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3917(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t270 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17656_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3912(__this, method) (( Object_t * (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17658_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3924(__this, method) (( Object_t* (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17660_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3937(__this, method) (( Object_t * (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17662_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m3914(__this, method) (( int32_t (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_get_Count_m17664_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m3928(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t270 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m17666_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m3929(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t270 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m17668_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17882(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t270 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17670_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17883(__this, ___size, method) (( void (*) (Dictionary_2_t270 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17672_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17884(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t270 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17674_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17885(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t675  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m17676_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m17886(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m17678_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17887(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m17680_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17888(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t270 *, KeyValuePair_2U5BU5D_t1292*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17682_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
#define Dictionary_2_Resize_m17889(__this, method) (( void (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_Resize_m17684_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m3925(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t270 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m17686_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m3920(__this, method) (( void (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_Clear_m17688_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m3940(__this, ___key, method) (( bool (*) (Dictionary_2_t270 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m17690_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17890(__this, ___value, method) (( bool (*) (Dictionary_2_t270 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m17692_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m3913(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t270 *, SerializationInfo_t1300 *, StreamingContext_t1301 , const MethodInfo*))Dictionary_2_GetObjectData_m17694_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m3939(__this, ___sender, method) (( void (*) (Dictionary_2_t270 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17696_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m3926(__this, ___key, method) (( bool (*) (Dictionary_2_t270 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m17698_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m3927(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t270 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m17700_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m3480(__this, method) (( KeyCollection_t670 * (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_get_Keys_m17701_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m7188(__this, method) (( ValueCollection_t1314 * (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_get_Values_m17703_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17891(__this, ___key, method) (( String_t* (*) (Dictionary_2_t270 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17705_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17892(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t270 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17707_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17893(__this, ___pair, method) (( bool (*) (Dictionary_2_t270 *, KeyValuePair_2_t675 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17709_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3492(__this, method) (( Enumerator_t676  (*) (Dictionary_2_t270 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17710_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17894(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2180  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17712_gshared)(__this /* static, unused */, ___key, ___value, method)
