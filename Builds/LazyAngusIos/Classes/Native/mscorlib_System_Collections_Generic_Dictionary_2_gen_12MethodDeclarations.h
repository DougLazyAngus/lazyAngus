#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,GPScore>
struct Dictionary_2_t225;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8706;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t8807;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GPScore>
struct KeyCollection_t5554;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GPScore>
struct ValueCollection_t736;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5392;
// System.Collections.Generic.IDictionary`2<System.Int32,GPScore>
struct IDictionary_2_t8809;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>[]
struct KeyValuePair_2U5BU5D_t8810;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>>
struct IEnumerator_1_t8811;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45MethodDeclarations.h"
#define Dictionary_2__ctor_m3829(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2__ctor_m10174_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24091(__this, ___comparer, method) (( void (*) (Dictionary_2_t225 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21092_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24092(__this, ___dictionary, method) (( void (*) (Dictionary_2_t225 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21094_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24093(__this, ___capacity, method) (( void (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21096_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24094(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t225 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21098_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24095(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t225 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21100_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24096(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21102_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24097(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21104_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24098(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21106_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24099(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21108_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24100(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21110_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24101(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21112_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24102(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21114_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24103(__this, ___key, method) (( void (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21116_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24104(__this, method) (( bool (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21118_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24105(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21120_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24106(__this, method) (( bool (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21122_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24107(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2_t5553 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21124_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24108(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5553 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21126_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24109(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2U5BU5D_t8810*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21128_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24110(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5553 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21130_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24111(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21132_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24112(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21134_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24113(__this, method) (( Object_t* (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21136_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24114(__this, method) (( Object_t * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21138_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Count()
#define Dictionary_2_get_Count_m24115(__this, method) (( int32_t (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Count_m21140_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m24116(__this, ___key, method) (( GPScore_t343 * (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21142_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24117(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_set_Item_m21144_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24118(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t225 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21146_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24119(__this, ___size, method) (( void (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21148_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24120(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21150_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m24121(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5553  (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_make_pair_m21152_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24122(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_pick_key_m21154_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24123(__this /* static, unused */, ___key, ___value, method) (( GPScore_t343 * (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_pick_value_m21156_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24124(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t225 *, KeyValuePair_2U5BU5D_t8810*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21158_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Resize()
#define Dictionary_2_Resize_m24125(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_Resize_m21160_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m24126(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_Add_m21162_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Clear()
#define Dictionary_2_Clear_m24127(__this, method) (( void (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_Clear_m21164_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m24128(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21166_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24129(__this, ___value, method) (( bool (*) (Dictionary_2_t225 *, GPScore_t343 *, const MethodInfo*))Dictionary_2_ContainsValue_m21168_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24130(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t225 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21170_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24131(__this, ___sender, method) (( void (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21172_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Remove(TKey)
#define Dictionary_2_Remove_m24132(__this, ___key, method) (( bool (*) (Dictionary_2_t225 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21174_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m24133(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t225 *, int32_t, GPScore_t343 **, const MethodInfo*))Dictionary_2_TryGetValue_m21176_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Keys()
#define Dictionary_2_get_Keys_m24134(__this, method) (( KeyCollection_t5554 * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Keys_m21178_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Values()
#define Dictionary_2_get_Values_m3824(__this, method) (( ValueCollection_t736 * (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_get_Values_m21180_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24135(__this, ___key, method) (( int32_t (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21182_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24136(__this, ___value, method) (( GPScore_t343 * (*) (Dictionary_2_t225 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21184_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m24137(__this, ___pair, method) (( bool (*) (Dictionary_2_t225 *, KeyValuePair_2_t5553 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21186_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m24138(__this, method) (( Enumerator_t5555  (*) (Dictionary_2_t225 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21188_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24139(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, int32_t, GPScore_t343 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21190_gshared)(__this /* static, unused */, ___key, ___value, method)
