#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t2712;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8710;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutUtility/LayoutCache>
struct ICollection_1_t9590;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t2711;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct KeyCollection_t8400;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct ValueCollection_t8401;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5390;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct IDictionary_2_t9591;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>[]
struct KeyValuePair_2U5BU5D_t9592;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
struct IEnumerator_1_t9593;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_132.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__63.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_45MethodDeclarations.h"
#define Dictionary_2__ctor_m10080(__this, method) (( void (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2__ctor_m10163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m60270(__this, ___comparer, method) (( void (*) (Dictionary_2_t2712 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21081_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m60271(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2712 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21083_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Int32)
#define Dictionary_2__ctor_m60272(__this, ___capacity, method) (( void (*) (Dictionary_2_t2712 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21085_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m60273(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2712 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21087_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m60274(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2712 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21089_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m60275(__this, method) (( Object_t* (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21091_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m60276(__this, method) (( Object_t* (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21093_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m60277(__this, method) (( Object_t * (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21095_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m60278(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2712 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21097_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m60279(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2712 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21099_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m60280(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2712 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21101_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m60281(__this, ___key, method) (( bool (*) (Dictionary_2_t2712 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21103_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m60282(__this, ___key, method) (( void (*) (Dictionary_2_t2712 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21105_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m60283(__this, method) (( bool (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21107_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m60284(__this, method) (( Object_t * (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21109_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m60285(__this, method) (( bool (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21111_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m60286(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2712 *, KeyValuePair_2_t8399 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21113_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m60287(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2712 *, KeyValuePair_2_t8399 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21115_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m60288(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2712 *, KeyValuePair_2U5BU5D_t9592*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21117_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m60289(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2712 *, KeyValuePair_2_t8399 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21119_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m60290(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2712 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21121_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m60291(__this, method) (( Object_t * (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21123_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60292(__this, method) (( Object_t* (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21125_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m60293(__this, method) (( Object_t * (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21127_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Count()
#define Dictionary_2_get_Count_m60294(__this, method) (( int32_t (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_get_Count_m21129_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Item(TKey)
#define Dictionary_2_get_Item_m60295(__this, ___key, method) (( LayoutCache_t2711 * (*) (Dictionary_2_t2712 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m21131_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m60296(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2712 *, int32_t, LayoutCache_t2711 *, const MethodInfo*))Dictionary_2_set_Item_m21133_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m60297(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2712 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21135_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m60298(__this, ___size, method) (( void (*) (Dictionary_2_t2712 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21137_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m60299(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2712 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21139_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m60300(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8399  (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t2711 *, const MethodInfo*))Dictionary_2_make_pair_m21141_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m60301(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t2711 *, const MethodInfo*))Dictionary_2_pick_key_m21143_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m60302(__this /* static, unused */, ___key, ___value, method) (( LayoutCache_t2711 * (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t2711 *, const MethodInfo*))Dictionary_2_pick_value_m21145_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m60303(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2712 *, KeyValuePair_2U5BU5D_t9592*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21147_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Resize()
#define Dictionary_2_Resize_m60304(__this, method) (( void (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_Resize_m21149_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Add(TKey,TValue)
#define Dictionary_2_Add_m60305(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2712 *, int32_t, LayoutCache_t2711 *, const MethodInfo*))Dictionary_2_Add_m21151_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Clear()
#define Dictionary_2_Clear_m60306(__this, method) (( void (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_Clear_m21153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m60307(__this, ___key, method) (( bool (*) (Dictionary_2_t2712 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m21155_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m60308(__this, ___value, method) (( bool (*) (Dictionary_2_t2712 *, LayoutCache_t2711 *, const MethodInfo*))Dictionary_2_ContainsValue_m21157_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m60309(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2712 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21159_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m60310(__this, ___sender, method) (( void (*) (Dictionary_2_t2712 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21161_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Remove(TKey)
#define Dictionary_2_Remove_m60311(__this, ___key, method) (( bool (*) (Dictionary_2_t2712 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m21163_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m60312(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2712 *, int32_t, LayoutCache_t2711 **, const MethodInfo*))Dictionary_2_TryGetValue_m21165_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Keys()
#define Dictionary_2_get_Keys_m60313(__this, method) (( KeyCollection_t8400 * (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_get_Keys_m21167_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Values()
#define Dictionary_2_get_Values_m60314(__this, method) (( ValueCollection_t8401 * (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_get_Values_m21169_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m60315(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2712 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21171_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m60316(__this, ___value, method) (( LayoutCache_t2711 * (*) (Dictionary_2_t2712 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21173_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m60317(__this, ___pair, method) (( bool (*) (Dictionary_2_t2712 *, KeyValuePair_2_t8399 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21175_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m60318(__this, method) (( Enumerator_t8402  (*) (Dictionary_2_t2712 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21177_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m60319(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t2711 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21179_gshared)(__this /* static, unused */, ___key, ___value, method)
