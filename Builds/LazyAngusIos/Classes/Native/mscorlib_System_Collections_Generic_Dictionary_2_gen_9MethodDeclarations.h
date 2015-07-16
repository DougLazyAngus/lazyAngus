#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>
struct Dictionary_2_t203;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1245;
// System.Collections.Generic.ICollection`1<FacebookUserInfo>
struct ICollection_1_t4251;
// System.Collections.ICollection
struct ICollection_t600;
// System.Object
struct Object_t;
// FacebookUserInfo
struct FacebookUserInfo_t202;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FacebookUserInfo>
struct KeyCollection_t3477;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FacebookUserInfo>
struct ValueCollection_t3478;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3309;
// System.Collections.Generic.IDictionary`2<System.String,FacebookUserInfo>
struct IDictionary_2_t4252;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Collections.Generic.KeyValuePair`2<System.String,FacebookUserInfo>[]
struct KeyValuePair_2U5BU5D_t4253;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FacebookUserInfo>>
struct IEnumerator_1_t4254;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1451;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FacebookUserInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FacebookUserInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
#define Dictionary_2__ctor_m2770(__this, method) (( void (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2__ctor_m17069_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19236(__this, ___comparer, method) (( void (*) (Dictionary_2_t203 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17071_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19237(__this, ___dictionary, method) (( void (*) (Dictionary_2_t203 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17073_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19238(__this, ___capacity, method) (( void (*) (Dictionary_2_t203 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17075_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19239(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t203 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17077_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19240(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t203 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2__ctor_m17079_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19241(__this, method) (( Object_t* (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17081_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19242(__this, method) (( Object_t* (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17083_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19243(__this, method) (( Object_t * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17085_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19244(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17087_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19245(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t203 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17089_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19246(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t203 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17091_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19247(__this, ___key, method) (( bool (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17093_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19248(__this, ___key, method) (( void (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17095_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19249(__this, method) (( bool (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17097_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19250(__this, method) (( Object_t * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17099_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19251(__this, method) (( bool (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17101_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19252(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t203 *, KeyValuePair_2_t596 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17103_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19253(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t203 *, KeyValuePair_2_t596 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17105_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19254(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t203 *, KeyValuePair_2U5BU5D_t4253*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17107_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19255(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t203 *, KeyValuePair_2_t596 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17109_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19256(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t203 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17111_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19257(__this, method) (( Object_t * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17113_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19258(__this, method) (( Object_t* (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17115_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19259(__this, method) (( Object_t * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17117_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Count()
#define Dictionary_2_get_Count_m19260(__this, method) (( int32_t (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_get_Count_m17119_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Item(TKey)
#define Dictionary_2_get_Item_m19261(__this, ___key, method) (( FacebookUserInfo_t202 * (*) (Dictionary_2_t203 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m17121_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m19262(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t203 *, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_set_Item_m17123_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19263(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t203 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17125_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19264(__this, ___size, method) (( void (*) (Dictionary_2_t203 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17127_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19265(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t203 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17129_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19266(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t596  (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_make_pair_m17131_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19267(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_pick_key_m17133_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19268(__this /* static, unused */, ___key, ___value, method) (( FacebookUserInfo_t202 * (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_pick_value_m17135_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19269(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t203 *, KeyValuePair_2U5BU5D_t4253*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17137_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Resize()
#define Dictionary_2_Resize_m19270(__this, method) (( void (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_Resize_m17139_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Add(TKey,TValue)
#define Dictionary_2_Add_m19271(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t203 *, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_Add_m17141_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Clear()
#define Dictionary_2_Clear_m19272(__this, method) (( void (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_Clear_m17143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19273(__this, ___key, method) (( bool (*) (Dictionary_2_t203 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m17145_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19274(__this, ___value, method) (( bool (*) (Dictionary_2_t203 *, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_ContainsValue_m17147_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19275(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t203 *, SerializationInfo_t1255 *, StreamingContext_t1256 , const MethodInfo*))Dictionary_2_GetObjectData_m17149_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19276(__this, ___sender, method) (( void (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17151_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::Remove(TKey)
#define Dictionary_2_Remove_m19277(__this, ___key, method) (( bool (*) (Dictionary_2_t203 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m17153_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m19278(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t203 *, String_t*, FacebookUserInfo_t202 **, const MethodInfo*))Dictionary_2_TryGetValue_m17155_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Keys()
#define Dictionary_2_get_Keys_m19279(__this, method) (( KeyCollection_t3477 * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_get_Keys_m17156_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::get_Values()
#define Dictionary_2_get_Values_m19280(__this, method) (( ValueCollection_t3478 * (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_get_Values_m17158_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19281(__this, ___key, method) (( String_t* (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17160_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19282(__this, ___value, method) (( FacebookUserInfo_t202 * (*) (Dictionary_2_t203 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17162_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m19283(__this, ___pair, method) (( bool (*) (Dictionary_2_t203 *, KeyValuePair_2_t596 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17164_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m2757(__this, method) (( Enumerator_t597  (*) (Dictionary_2_t203 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17165_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FacebookUserInfo>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19284(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1718  (*) (Object_t * /* static, unused */, String_t*, FacebookUserInfo_t202 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17167_gshared)(__this /* static, unused */, ___key, ___value, method)
