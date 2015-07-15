#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>
struct Dictionary_2_t587;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1237;
// System.Collections.Generic.ICollection`1<FBLikeInfo>
struct ICollection_1_t4271;
// System.Collections.ICollection
struct ICollection_t592;
// System.Object
struct Object_t;
// FBLikeInfo
struct FBLikeInfo_t221;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FBLikeInfo>
struct KeyCollection_t3493;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBLikeInfo>
struct ValueCollection_t3494;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3301;
// System.Collections.Generic.IDictionary`2<System.String,FBLikeInfo>
struct IDictionary_2_t4272;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>[]
struct KeyValuePair_2U5BU5D_t4273;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>>
struct IEnumerator_1_t4274;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1443;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FBLikeInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FBLikeInfo>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_31MethodDeclarations.h"
#define Dictionary_2__ctor_m2734(__this, method) (( void (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2__ctor_m17033_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19768(__this, ___comparer, method) (( void (*) (Dictionary_2_t587 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17035_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19769(__this, ___dictionary, method) (( void (*) (Dictionary_2_t587 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17037_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19770(__this, ___capacity, method) (( void (*) (Dictionary_2_t587 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17039_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19771(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t587 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17041_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19772(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t587 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2__ctor_m17043_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19773(__this, method) (( Object_t* (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17045_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19774(__this, method) (( Object_t* (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17047_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m19775(__this, method) (( Object_t * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17049_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19776(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17051_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19777(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t587 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17053_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19778(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t587 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17055_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19779(__this, ___key, method) (( bool (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17057_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19780(__this, ___key, method) (( void (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17059_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19781(__this, method) (( bool (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17061_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19782(__this, method) (( Object_t * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17063_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19783(__this, method) (( bool (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17065_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19784(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t587 *, KeyValuePair_2_t585 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17067_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19785(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t587 *, KeyValuePair_2_t585 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17069_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19786(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t587 *, KeyValuePair_2U5BU5D_t4273*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17071_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19787(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t587 *, KeyValuePair_2_t585 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17073_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19788(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t587 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17075_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19789(__this, method) (( Object_t * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17077_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19790(__this, method) (( Object_t* (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17079_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19791(__this, method) (( Object_t * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17081_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Count()
#define Dictionary_2_get_Count_m19792(__this, method) (( int32_t (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_get_Count_m17083_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Item(TKey)
#define Dictionary_2_get_Item_m19793(__this, ___key, method) (( FBLikeInfo_t221 * (*) (Dictionary_2_t587 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m17085_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m19794(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t587 *, String_t*, FBLikeInfo_t221 *, const MethodInfo*))Dictionary_2_set_Item_m17087_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19795(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t587 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17089_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19796(__this, ___size, method) (( void (*) (Dictionary_2_t587 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17091_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19797(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t587 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17093_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19798(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t585  (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t221 *, const MethodInfo*))Dictionary_2_make_pair_m17095_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19799(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t221 *, const MethodInfo*))Dictionary_2_pick_key_m17097_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19800(__this /* static, unused */, ___key, ___value, method) (( FBLikeInfo_t221 * (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t221 *, const MethodInfo*))Dictionary_2_pick_value_m17099_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19801(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t587 *, KeyValuePair_2U5BU5D_t4273*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17101_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Resize()
#define Dictionary_2_Resize_m19802(__this, method) (( void (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_Resize_m17103_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Add(TKey,TValue)
#define Dictionary_2_Add_m19803(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t587 *, String_t*, FBLikeInfo_t221 *, const MethodInfo*))Dictionary_2_Add_m17105_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Clear()
#define Dictionary_2_Clear_m19804(__this, method) (( void (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_Clear_m17107_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19805(__this, ___key, method) (( bool (*) (Dictionary_2_t587 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m17109_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19806(__this, ___value, method) (( bool (*) (Dictionary_2_t587 *, FBLikeInfo_t221 *, const MethodInfo*))Dictionary_2_ContainsValue_m17111_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19807(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t587 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2_GetObjectData_m17113_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19808(__this, ___sender, method) (( void (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17115_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::Remove(TKey)
#define Dictionary_2_Remove_m19809(__this, ___key, method) (( bool (*) (Dictionary_2_t587 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m17117_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m19810(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t587 *, String_t*, FBLikeInfo_t221 **, const MethodInfo*))Dictionary_2_TryGetValue_m17119_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Keys()
#define Dictionary_2_get_Keys_m19811(__this, method) (( KeyCollection_t3493 * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_get_Keys_m17120_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::get_Values()
#define Dictionary_2_get_Values_m19812(__this, method) (( ValueCollection_t3494 * (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_get_Values_m17122_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19813(__this, ___key, method) (( String_t* (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17124_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19814(__this, ___value, method) (( FBLikeInfo_t221 * (*) (Dictionary_2_t587 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17126_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m19815(__this, ___pair, method) (( bool (*) (Dictionary_2_t587 *, KeyValuePair_2_t585 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17128_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m2719(__this, method) (( Enumerator_t586  (*) (Dictionary_2_t587 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17129_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FBLikeInfo>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19816(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Object_t * /* static, unused */, String_t*, FBLikeInfo_t221 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17131_gshared)(__this /* static, unused */, ___key, ___value, method)
