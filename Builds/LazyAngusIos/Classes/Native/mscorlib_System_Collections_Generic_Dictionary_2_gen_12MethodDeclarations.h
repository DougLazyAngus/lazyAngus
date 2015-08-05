#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,GPScore>
struct Dictionary_2_t225;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8636;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t8737;
// System.Collections.ICollection
struct ICollection_t707;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GPScore>
struct KeyCollection_t5510;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GPScore>
struct ValueCollection_t689;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5348;
// System.Collections.Generic.IDictionary`2<System.Int32,GPScore>
struct IDictionary_2_t8739;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>[]
struct KeyValuePair_2U5BU5D_t8740;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>>
struct IEnumerator_1_t8741;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3913;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__21.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44MethodDeclarations.h"
#define Dictionary_2__ctor_m3605(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2__ctor_m9930_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23850(__this, ___comparer, method) (( void (*) (Dictionary_2_t225 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20851_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m23851(__this, ___dictionary, method) (( void (*) (Dictionary_2_t225 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20853_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m23852(__this, ___capacity, method) (( void (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20855_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23853(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t225 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20857_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m23854(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t225 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m20859_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23855(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20861_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23856(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20863_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23857(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20865_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23858(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20867_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23859(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20869_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m23860(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20871_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m23861(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20873_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m23862(__this, ___key, method) (( void (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20875_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23863(__this, method) (( bool (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20877_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23864(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20879_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23865(__this, method) (( bool (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23866(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2_t5509 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20883_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23867(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5509 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20885_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23868(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2U5BU5D_t8740*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20887_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23869(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5509 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20889_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23870(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20891_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23871(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20893_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23872(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20895_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23873(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20897_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Count()
#define Dictionary_2_get_Count_m23874(__this, method) (( int32_t (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Count_m20899_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m23875(__this, ___key, method) (( GPScore_t343 * (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20901_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m23876(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_set_Item_m20903_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m23877(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t225 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20905_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m23878(__this, ___size, method) (( void (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20907_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m23879(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20909_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m23880(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5509  (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_make_pair_m20911_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m23881(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_pick_key_m20913_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m23882(__this /* static, unused */, ___key, ___value, method) (( GPScore_t343 * (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_pick_value_m20915_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m23883(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2U5BU5D_t8740*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20917_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Resize()
#define Dictionary_2_Resize_m23884(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_Resize_m20919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m23885(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_Add_m20921_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Clear()
#define Dictionary_2_Clear_m23886(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_Clear_m20923_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m23887(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20925_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m23888(__this, ___value, method) (( bool (*) (Dictionary_2_t225 *, GPScore_t343 *, const MethodInfo*))Dictionary_2_ContainsValue_m20927_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m23889(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t225 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m20929_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m23890(__this, ___sender, method) (( void (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20931_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Remove(TKey)
#define Dictionary_2_Remove_m23891(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20933_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m23892(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 **, const MethodInfo*))Dictionary_2_TryGetValue_m20935_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Keys()
#define Dictionary_2_get_Keys_m23893(__this, method) (( KeyCollection_t5510 * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Keys_m20937_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Values()
#define Dictionary_2_get_Values_m3600(__this, method) (( ValueCollection_t689 * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Values_m20939_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m23894(__this, ___key, method) (( int32_t (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20941_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m23895(__this, ___value, method) (( GPScore_t343 * (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20943_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m23896(__this, ___pair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5509 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20945_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m23897(__this, method) (( Enumerator_t5511  (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20947_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m23898(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20949_gshared)(__this /* static, unused */, ___key, ___value, method)
