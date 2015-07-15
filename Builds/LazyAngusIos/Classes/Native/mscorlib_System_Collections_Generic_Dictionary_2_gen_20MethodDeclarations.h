#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct Dictionary_2_t905;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>
struct ICollection_1_t904;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4177;
// System.Collections.ICollection
struct ICollection_t592;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t756;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.Graphic,System.Int32>
struct KeyCollection_t3745;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
struct ValueCollection_t3746;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Graphic>
struct IEqualityComparer_1_t3738;
// System.Collections.Generic.IDictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct IDictionary_2_t4423;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4424;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
struct IEnumerator_1_t4425;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1443;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_32MethodDeclarations.h"
#define Dictionary_2__ctor_m23576(__this, method) (( void (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2__ctor_m18573_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23577(__this, ___comparer, method) (( void (*) (Dictionary_2_t905 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18575_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m23578(__this, ___dictionary, method) (( void (*) (Dictionary_2_t905 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18577_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m23579(__this, ___capacity, method) (( void (*) (Dictionary_2_t905 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18578_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m23580(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t905 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18580_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m23581(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t905 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2__ctor_m18582_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23582(__this, method) (( Object_t* (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18584_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23583(__this, method) (( Object_t* (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18586_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23584(__this, method) (( Object_t * (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m18588_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23585(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t905 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18590_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23586(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t905 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18592_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m23587(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t905 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18594_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m23588(__this, ___key, method) (( bool (*) (Dictionary_2_t905 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18596_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m23589(__this, ___key, method) (( void (*) (Dictionary_2_t905 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18598_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23590(__this, method) (( bool (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18600_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23591(__this, method) (( Object_t * (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18602_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23592(__this, method) (( bool (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18604_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23593(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t905 *, KeyValuePair_2_t3744 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18606_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23594(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t905 *, KeyValuePair_2_t3744 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18608_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23595(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t905 *, KeyValuePair_2U5BU5D_t4424*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18610_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23596(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t905 *, KeyValuePair_2_t3744 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18612_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23597(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t905 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18614_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23598(__this, method) (( Object_t * (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18616_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23599(__this, method) (( Object_t* (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18618_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23600(__this, method) (( Object_t * (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m23601(__this, method) (( int32_t (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_get_Count_m18622_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m23602(__this, ___key, method) (( int32_t (*) (Dictionary_2_t905 *, Graphic_t756 *, const MethodInfo*))Dictionary_2_get_Item_m18624_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m23603(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t905 *, Graphic_t756 *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m18626_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m23604(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t905 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18628_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m23605(__this, ___size, method) (( void (*) (Dictionary_2_t905 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18630_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m23606(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t905 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18632_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m23607(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3744  (*) (Object_t * /* static, unused */, Graphic_t756 *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m18634_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m23608(__this /* static, unused */, ___key, ___value, method) (( Graphic_t756 * (*) (Object_t * /* static, unused */, Graphic_t756 *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m18636_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m23609(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Graphic_t756 *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m18638_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m23610(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t905 *, KeyValuePair_2U5BU5D_t4424*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18640_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Resize()
#define Dictionary_2_Resize_m23611(__this, method) (( void (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_Resize_m18642_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m23612(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t905 *, Graphic_t756 *, int32_t, const MethodInfo*))Dictionary_2_Add_m18644_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Clear()
#define Dictionary_2_Clear_m23613(__this, method) (( void (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_Clear_m18646_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m23614(__this, ___key, method) (( bool (*) (Dictionary_2_t905 *, Graphic_t756 *, const MethodInfo*))Dictionary_2_ContainsKey_m18648_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m23615(__this, ___value, method) (( bool (*) (Dictionary_2_t905 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m18650_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m23616(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t905 *, SerializationInfo_t1247 *, StreamingContext_t1248 , const MethodInfo*))Dictionary_2_GetObjectData_m18652_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m23617(__this, ___sender, method) (( void (*) (Dictionary_2_t905 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18654_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m23618(__this, ___key, method) (( bool (*) (Dictionary_2_t905 *, Graphic_t756 *, const MethodInfo*))Dictionary_2_Remove_m18656_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m23619(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t905 *, Graphic_t756 *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m18658_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m23620(__this, method) (( KeyCollection_t3745 * (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_get_Keys_m18660_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m23621(__this, method) (( ValueCollection_t3746 * (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_get_Values_m18662_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m23622(__this, ___key, method) (( Graphic_t756 * (*) (Dictionary_2_t905 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18664_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m23623(__this, ___value, method) (( int32_t (*) (Dictionary_2_t905 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18666_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m23624(__this, ___pair, method) (( bool (*) (Dictionary_2_t905 *, KeyValuePair_2_t3744 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18668_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m23625(__this, method) (( Enumerator_t3747  (*) (Dictionary_2_t905 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18670_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m23626(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1710  (*) (Object_t * /* static, unused */, Graphic_t756 *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18672_gshared)(__this /* static, unused */, ___key, ___value, method)
