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
struct ICollection_t706;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GPScore>
struct KeyCollection_t5510;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GPScore>
struct ValueCollection_t688;
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
#define Dictionary_2__ctor_m3604(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2__ctor_m9927_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23847(__this, ___comparer, method) (( void (*) (Dictionary_2_t225 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20848_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m23848(__this, ___dictionary, method) (( void (*) (Dictionary_2_t225 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20850_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m23849(__this, ___capacity, method) (( void (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20852_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23850(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t225 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20854_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m23851(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t225 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2__ctor_m20856_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23852(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20858_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23853(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20860_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23854(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20862_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23855(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20864_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23856(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20866_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m23857(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20868_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m23858(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20870_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m23859(__this, ___key, method) (( void (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20872_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23860(__this, method) (( bool (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20874_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23861(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20876_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23862(__this, method) (( bool (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20878_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23863(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2_t5509 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20880_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23864(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5509 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20882_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23865(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2U5BU5D_t8740*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20884_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23866(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5509 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20886_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23867(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20888_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23868(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20890_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23869(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20892_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23870(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20894_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Count()
#define Dictionary_2_get_Count_m23871(__this, method) (( int32_t (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Count_m20896_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m23872(__this, ___key, method) (( GPScore_t343 * (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20898_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m23873(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_set_Item_m20900_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m23874(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t225 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20902_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m23875(__this, ___size, method) (( void (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20904_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m23876(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20906_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m23877(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5509  (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_make_pair_m20908_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m23878(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_pick_key_m20910_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m23879(__this /* static, unused */, ___key, ___value, method) (( GPScore_t343 * (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_pick_value_m20912_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m23880(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2U5BU5D_t8740*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20914_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Resize()
#define Dictionary_2_Resize_m23881(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_Resize_m20916_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m23882(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_Add_m20918_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Clear()
#define Dictionary_2_Clear_m23883(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_Clear_m20920_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m23884(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20922_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m23885(__this, ___value, method) (( bool (*) (Dictionary_2_t225 *, GPScore_t343 *, const MethodInfo*))Dictionary_2_ContainsValue_m20924_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m23886(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t225 *, SerializationInfo_t2871 *, StreamingContext_t2872 , const MethodInfo*))Dictionary_2_GetObjectData_m20926_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m23887(__this, ___sender, method) (( void (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20928_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Remove(TKey)
#define Dictionary_2_Remove_m23888(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20930_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m23889(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 **, const MethodInfo*))Dictionary_2_TryGetValue_m20932_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Keys()
#define Dictionary_2_get_Keys_m23890(__this, method) (( KeyCollection_t5510 * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Keys_m20934_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Values()
#define Dictionary_2_get_Values_m3599(__this, method) (( ValueCollection_t688 * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Values_m20936_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m23891(__this, ___key, method) (( int32_t (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20938_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m23892(__this, ___value, method) (( GPScore_t343 * (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20940_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m23893(__this, ___pair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5509 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20942_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m23894(__this, method) (( Enumerator_t5511  (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20944_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m23895(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2090  (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20946_gshared)(__this /* static, unused */, ___key, ___value, method)
