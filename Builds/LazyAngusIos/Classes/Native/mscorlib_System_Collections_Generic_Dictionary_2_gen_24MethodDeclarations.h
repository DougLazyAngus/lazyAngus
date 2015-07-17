#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct Dictionary_2_t959;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t958;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4251;
// System.Collections.ICollection
struct ICollection_t651;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t810;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.Graphic,System.Int32>
struct KeyCollection_t3819;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
struct ValueCollection_t3820;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Graphic>
struct IEqualityComparer_1_t3812;
// System.Collections.Generic.IDictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct IDictionary_2_t4527;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1299;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4528;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
struct IEnumerator_1_t4529;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1941;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_36MethodDeclarations.h"
#define Dictionary_2__ctor_m24639(__this, method) (( void (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2__ctor_m19638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24640(__this, ___comparer, method) (( void (*) (Dictionary_2_t959 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19640_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24641(__this, ___dictionary, method) (( void (*) (Dictionary_2_t959 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19642_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24642(__this, ___capacity, method) (( void (*) (Dictionary_2_t959 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19643_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24643(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t959 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19645_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24644(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t959 *, SerializationInfo_t1299 *, StreamingContext_t1300 , const MethodInfo*))Dictionary_2__ctor_m19647_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24645(__this, method) (( Object_t* (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19649_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24646(__this, method) (( Object_t* (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19651_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24647(__this, method) (( Object_t * (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m19653_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24648(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t959 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19655_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24649(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t959 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19657_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24650(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t959 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19659_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24651(__this, ___key, method) (( bool (*) (Dictionary_2_t959 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19661_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24652(__this, ___key, method) (( void (*) (Dictionary_2_t959 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19663_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24653(__this, method) (( bool (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19665_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24654(__this, method) (( Object_t * (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19667_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24655(__this, method) (( bool (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24656(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t959 *, KeyValuePair_2_t3818 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19671_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24657(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t959 *, KeyValuePair_2_t3818 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19673_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24658(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t959 *, KeyValuePair_2U5BU5D_t4528*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19675_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24659(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t959 *, KeyValuePair_2_t3818 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19677_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24660(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t959 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19679_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24661(__this, method) (( Object_t * (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19681_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24662(__this, method) (( Object_t* (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19683_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24663(__this, method) (( Object_t * (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19685_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m24664(__this, method) (( int32_t (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_get_Count_m19687_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m24665(__this, ___key, method) (( int32_t (*) (Dictionary_2_t959 *, Graphic_t810 *, const MethodInfo*))Dictionary_2_get_Item_m19689_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24666(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t959 *, Graphic_t810 *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m19691_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24667(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t959 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19693_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24668(__this, ___size, method) (( void (*) (Dictionary_2_t959 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19695_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24669(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t959 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19697_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m24670(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3818  (*) (Object_t * /* static, unused */, Graphic_t810 *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m19699_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24671(__this /* static, unused */, ___key, ___value, method) (( Graphic_t810 * (*) (Object_t * /* static, unused */, Graphic_t810 *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m19701_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24672(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Graphic_t810 *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m19703_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24673(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t959 *, KeyValuePair_2U5BU5D_t4528*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19705_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Resize()
#define Dictionary_2_Resize_m24674(__this, method) (( void (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_Resize_m19707_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m24675(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t959 *, Graphic_t810 *, int32_t, const MethodInfo*))Dictionary_2_Add_m19709_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Clear()
#define Dictionary_2_Clear_m24676(__this, method) (( void (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_Clear_m19711_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m24677(__this, ___key, method) (( bool (*) (Dictionary_2_t959 *, Graphic_t810 *, const MethodInfo*))Dictionary_2_ContainsKey_m19713_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24678(__this, ___value, method) (( bool (*) (Dictionary_2_t959 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m19715_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24679(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t959 *, SerializationInfo_t1299 *, StreamingContext_t1300 , const MethodInfo*))Dictionary_2_GetObjectData_m19717_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24680(__this, ___sender, method) (( void (*) (Dictionary_2_t959 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19719_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m24681(__this, ___key, method) (( bool (*) (Dictionary_2_t959 *, Graphic_t810 *, const MethodInfo*))Dictionary_2_Remove_m19721_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m24682(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t959 *, Graphic_t810 *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m19723_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m24683(__this, method) (( KeyCollection_t3819 * (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_get_Keys_m19725_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m24684(__this, method) (( ValueCollection_t3820 * (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_get_Values_m19727_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24685(__this, ___key, method) (( Graphic_t810 * (*) (Dictionary_2_t959 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19729_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24686(__this, ___value, method) (( int32_t (*) (Dictionary_2_t959 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19731_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m24687(__this, ___pair, method) (( bool (*) (Dictionary_2_t959 *, KeyValuePair_2_t3818 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19733_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m24688(__this, method) (( Enumerator_t3821  (*) (Dictionary_2_t959 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19735_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24689(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2179  (*) (Object_t * /* static, unused */, Graphic_t810 *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19737_gshared)(__this /* static, unused */, ___key, ___value, method)
