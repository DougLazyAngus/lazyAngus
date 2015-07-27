#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t272;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1291;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1292;
// System.Collections.ICollection
struct ICollection_t653;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t671;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t1315;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3355;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t716;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1293;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1294;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1943;
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
#define Dictionary_2__ctor_m3125(__this, method) (( void (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2__ctor_m17621_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17885(__this, ___comparer, method) (( void (*) (Dictionary_2_t272 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17623_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m3511(__this, ___dictionary, method) (( void (*) (Dictionary_2_t272 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17625_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m17886(__this, ___capacity, method) (( void (*) (Dictionary_2_t272 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17627_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17887(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t272 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17629_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17888(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t272 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2__ctor_m17631_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m3937(__this, method) (( Object_t* (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17633_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m3938(__this, method) (( Object_t* (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17635_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m3941(__this, method) (( Object_t * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17637_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3939(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17639_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3940(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t272 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17641_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m3942(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t272 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17643_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m3943(__this, ___key, method) (( bool (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17645_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m3945(__this, ___key, method) (( void (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17647_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3922(__this, method) (( bool (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17649_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3923(__this, method) (( Object_t * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17651_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3925(__this, method) (( bool (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17653_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3926(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t272 *, KeyValuePair_2_t676 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17655_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3928(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t272 *, KeyValuePair_2_t676 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17657_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3929(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t272 *, KeyValuePair_2U5BU5D_t1293*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17659_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3930(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t272 *, KeyValuePair_2_t676 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17661_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3924(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t272 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17663_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3919(__this, method) (( Object_t * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17665_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m3931(__this, method) (( Object_t* (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17667_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3944(__this, method) (( Object_t * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17669_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m3921(__this, method) (( int32_t (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_get_Count_m17671_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m3935(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t272 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m17673_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m3936(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t272 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m17675_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17889(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t272 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17677_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17890(__this, ___size, method) (( void (*) (Dictionary_2_t272 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17679_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17891(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t272 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17681_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17892(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t676  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m17683_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m17893(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m17685_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17894(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m17687_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17895(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t272 *, KeyValuePair_2U5BU5D_t1293*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17689_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
#define Dictionary_2_Resize_m17896(__this, method) (( void (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_Resize_m17691_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m3932(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t272 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m17693_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m3927(__this, method) (( void (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_Clear_m17695_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m3947(__this, ___key, method) (( bool (*) (Dictionary_2_t272 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m17697_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17897(__this, ___value, method) (( bool (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m17699_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m3920(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t272 *, SerializationInfo_t1301 *, StreamingContext_t1302 , const MethodInfo*))Dictionary_2_GetObjectData_m17701_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m3946(__this, ___sender, method) (( void (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17703_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m3933(__this, ___key, method) (( bool (*) (Dictionary_2_t272 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m17705_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m3934(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t272 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m17707_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m3487(__this, method) (( KeyCollection_t671 * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_get_Keys_m17708_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m7195(__this, method) (( ValueCollection_t1315 * (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_get_Values_m17710_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17898(__this, ___key, method) (( String_t* (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17712_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17899(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t272 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17714_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17900(__this, ___pair, method) (( bool (*) (Dictionary_2_t272 *, KeyValuePair_2_t676 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17716_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3499(__this, method) (( Enumerator_t677  (*) (Dictionary_2_t272 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17717_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17901(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2181  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17719_gshared)(__this /* static, unused */, ___key, ___value, method)
