#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,GPScore>
struct Dictionary_2_t156;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4158;
// System.Collections.Generic.ICollection`1<GPScore>
struct ICollection_1_t4205;
// System.Collections.ICollection
struct ICollection_t571;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t275;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GPScore>
struct KeyCollection_t3428;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GPScore>
struct ValueCollection_t552;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3354;
// System.Collections.Generic.IDictionary`2<System.Int32,GPScore>
struct IDictionary_2_t4207;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>[]
struct KeyValuePair_2U5BU5D_t4208;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>>
struct IEnumerator_1_t4209;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1418;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,GPScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_29MethodDeclarations.h"
#define Dictionary_2__ctor_m2542(__this, method) (( void (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2__ctor_m6467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18716(__this, ___comparer, method) (( void (*) (Dictionary_2_t156 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17652_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m18717(__this, ___dictionary, method) (( void (*) (Dictionary_2_t156 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17654_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18718(__this, ___capacity, method) (( void (*) (Dictionary_2_t156 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17656_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18719(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t156 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17658_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18720(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t156 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2__ctor_m17660_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18721(__this, method) (( Object_t* (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17662_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18722(__this, method) (( Object_t* (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17664_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m18723(__this, method) (( Object_t * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m17666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18724(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17668_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18725(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t156 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17670_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18726(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t156 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17672_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m18727(__this, ___key, method) (( bool (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17674_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18728(__this, ___key, method) (( void (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17676_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18729(__this, method) (( bool (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17678_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18730(__this, method) (( Object_t * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17680_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18731(__this, method) (( bool (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17682_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18732(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t156 *, KeyValuePair_2_t3427 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17684_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18733(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t156 *, KeyValuePair_2_t3427 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17686_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18734(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t156 *, KeyValuePair_2U5BU5D_t4208*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17688_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18735(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t156 *, KeyValuePair_2_t3427 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17690_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18736(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t156 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17692_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18737(__this, method) (( Object_t * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17694_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18738(__this, method) (( Object_t* (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17696_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18739(__this, method) (( Object_t * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17698_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Count()
#define Dictionary_2_get_Count_m18740(__this, method) (( int32_t (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_get_Count_m17700_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m18741(__this, ___key, method) (( GPScore_t275 * (*) (Dictionary_2_t156 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17702_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18742(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t156 *, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_set_Item_m17704_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18743(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t156 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17706_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18744(__this, ___size, method) (( void (*) (Dictionary_2_t156 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17708_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18745(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t156 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17710_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18746(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3427  (*) (Object_t * /* static, unused */, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_make_pair_m17712_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m18747(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_pick_key_m17714_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18748(__this /* static, unused */, ___key, ___value, method) (( GPScore_t275 * (*) (Object_t * /* static, unused */, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_pick_value_m17716_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18749(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t156 *, KeyValuePair_2U5BU5D_t4208*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17718_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Resize()
#define Dictionary_2_Resize_m18750(__this, method) (( void (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_Resize_m17720_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m18751(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t156 *, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_Add_m17722_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Clear()
#define Dictionary_2_Clear_m18752(__this, method) (( void (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_Clear_m17724_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18753(__this, ___key, method) (( bool (*) (Dictionary_2_t156 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17726_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18754(__this, ___value, method) (( bool (*) (Dictionary_2_t156 *, GPScore_t275 *, const MethodInfo*))Dictionary_2_ContainsValue_m17728_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18755(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t156 *, SerializationInfo_t1220 *, StreamingContext_t1221 , const MethodInfo*))Dictionary_2_GetObjectData_m17730_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18756(__this, ___sender, method) (( void (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17732_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::Remove(TKey)
#define Dictionary_2_Remove_m18757(__this, ___key, method) (( bool (*) (Dictionary_2_t156 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17734_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m18758(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t156 *, int32_t, GPScore_t275 **, const MethodInfo*))Dictionary_2_TryGetValue_m17736_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Keys()
#define Dictionary_2_get_Keys_m18759(__this, method) (( KeyCollection_t3428 * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_get_Keys_m17737_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::get_Values()
#define Dictionary_2_get_Values_m2537(__this, method) (( ValueCollection_t552 * (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_get_Values_m17739_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18760(__this, ___key, method) (( int32_t (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17741_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18761(__this, ___value, method) (( GPScore_t275 * (*) (Dictionary_2_t156 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17743_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18762(__this, ___pair, method) (( bool (*) (Dictionary_2_t156 *, KeyValuePair_2_t3427 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17745_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m18763(__this, method) (( Enumerator_t3429  (*) (Dictionary_2_t156 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17746_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,GPScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18764(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1685  (*) (Object_t * /* static, unused */, int32_t, GPScore_t275 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17748_gshared)(__this /* static, unused */, ___key, ___value, method)
