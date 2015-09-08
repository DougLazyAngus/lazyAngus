#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t2735;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t9335;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutUtility/LayoutCache>
struct ICollection_1_t10223;
// System.Collections.ICollection
struct ICollection_t772;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t2734;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct KeyCollection_t8973;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct ValueCollection_t8974;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5946;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct IDictionary_2_t10224;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>[]
struct KeyValuePair_2U5BU5D_t10225;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
struct IEnumerator_1_t10226;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t802;
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
#define Dictionary_2__ctor_m10258(__this, method) (( void (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2__ctor_m10341_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m64923(__this, ___comparer, method) (( void (*) (Dictionary_2_t2735 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25443_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m64924(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2735 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25445_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Int32)
#define Dictionary_2__ctor_m64925(__this, ___capacity, method) (( void (*) (Dictionary_2_t2735 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25447_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m64926(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2735 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25449_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m64927(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2735 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2__ctor_m25451_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m64928(__this, method) (( Object_t* (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25453_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m64929(__this, method) (( Object_t* (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25455_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m64930(__this, method) (( Object_t * (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m25457_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.get_Values()
#define Dictionary_2_System_Collections_IDictionary_get_Values_m64931(__this, method) (( Object_t * (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m25459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m64932(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2735 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25461_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m64933(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2735 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25463_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m64934(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2735 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25465_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m64935(__this, ___key, method) (( bool (*) (Dictionary_2_t2735 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25467_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m64936(__this, ___key, method) (( void (*) (Dictionary_2_t2735 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25469_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m64937(__this, method) (( bool (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25471_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m64938(__this, method) (( Object_t * (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m64939(__this, method) (( bool (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25475_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m64940(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2735 *, KeyValuePair_2_t8972 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25477_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m64941(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2735 *, KeyValuePair_2_t8972 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25479_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m64942(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2735 *, KeyValuePair_2U5BU5D_t10225*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25481_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m64943(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2735 *, KeyValuePair_2_t8972 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25483_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m64944(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2735 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25485_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m64945(__this, method) (( Object_t * (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25487_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m64946(__this, method) (( Object_t* (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25489_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m64947(__this, method) (( Object_t * (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Count()
#define Dictionary_2_get_Count_m64948(__this, method) (( int32_t (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_get_Count_m25493_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Item(TKey)
#define Dictionary_2_get_Item_m64949(__this, ___key, method) (( LayoutCache_t2734 * (*) (Dictionary_2_t2735 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m25495_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m64950(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2735 *, int32_t, LayoutCache_t2734 *, const MethodInfo*))Dictionary_2_set_Item_m25497_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m64951(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2735 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25499_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m64952(__this, ___size, method) (( void (*) (Dictionary_2_t2735 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25501_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m64953(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2735 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25503_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m64954(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t8972  (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t2734 *, const MethodInfo*))Dictionary_2_make_pair_m25505_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m64955(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t2734 *, const MethodInfo*))Dictionary_2_pick_key_m25507_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m64956(__this /* static, unused */, ___key, ___value, method) (( LayoutCache_t2734 * (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t2734 *, const MethodInfo*))Dictionary_2_pick_value_m25509_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m64957(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2735 *, KeyValuePair_2U5BU5D_t10225*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25511_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Resize()
#define Dictionary_2_Resize_m64958(__this, method) (( void (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_Resize_m25513_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Add(TKey,TValue)
#define Dictionary_2_Add_m64959(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2735 *, int32_t, LayoutCache_t2734 *, const MethodInfo*))Dictionary_2_Add_m25515_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Clear()
#define Dictionary_2_Clear_m64960(__this, method) (( void (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_Clear_m25517_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m64961(__this, ___key, method) (( bool (*) (Dictionary_2_t2735 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m25519_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m64962(__this, ___value, method) (( bool (*) (Dictionary_2_t2735 *, LayoutCache_t2734 *, const MethodInfo*))Dictionary_2_ContainsValue_m25521_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m64963(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2735 *, SerializationInfo_t2940 *, StreamingContext_t2941 , const MethodInfo*))Dictionary_2_GetObjectData_m25523_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m64964(__this, ___sender, method) (( void (*) (Dictionary_2_t2735 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25525_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Remove(TKey)
#define Dictionary_2_Remove_m64965(__this, ___key, method) (( bool (*) (Dictionary_2_t2735 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m25527_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m64966(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2735 *, int32_t, LayoutCache_t2734 **, const MethodInfo*))Dictionary_2_TryGetValue_m25529_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Keys()
#define Dictionary_2_get_Keys_m64967(__this, method) (( KeyCollection_t8973 * (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_get_Keys_m25531_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Values()
#define Dictionary_2_get_Values_m64968(__this, method) (( ValueCollection_t8974 * (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_get_Values_m25533_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m64969(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2735 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25535_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m64970(__this, ___value, method) (( LayoutCache_t2734 * (*) (Dictionary_2_t2735 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25537_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m64971(__this, ___pair, method) (( bool (*) (Dictionary_2_t2735 *, KeyValuePair_2_t8972 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25539_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m64972(__this, method) (( Enumerator_t8975  (*) (Dictionary_2_t2735 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25541_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::<CopyTo>m__2(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__2_m64973(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2160  (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t2734 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__2_m25543_gshared)(__this /* static, unused */, ___key, ___value, method)
