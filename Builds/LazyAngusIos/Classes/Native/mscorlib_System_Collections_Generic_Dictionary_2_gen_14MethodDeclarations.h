#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,FBScore>
struct Dictionary_2_t273;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<FBScore>
struct ICollection_1_t8834;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// FBScore
struct FBScore_t293;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,FBScore>
struct KeyCollection_t5577;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,FBScore>
struct ValueCollection_t5578;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5379;
// System.Collections.Generic.IDictionary`2<System.String,FBScore>
struct IDictionary_2_t8835;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>[]
struct KeyValuePair_2U5BU5D_t8836;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,FBScore>>
struct IEnumerator_1_t8837;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,FBScore>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m3856(__this, method) (( void (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2__ctor_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24596(__this, ___comparer, method) (( void (*) (Dictionary_2_t273 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21797_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24597(__this, ___dictionary, method) (( void (*) (Dictionary_2_t273 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21799_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24598(__this, ___capacity, method) (( void (*) (Dictionary_2_t273 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21801_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24599(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t273 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21803_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24600(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t273 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21805_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24601(__this, method) (( Object_t* (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21807_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24602(__this, method) (( Object_t* (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21809_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24603(__this, method) (( Object_t * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21811_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24604(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21813_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24605(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t273 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24606(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t273 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21817_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24607(__this, ___key, method) (( bool (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21819_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24608(__this, ___key, method) (( void (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21821_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24609(__this, method) (( bool (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21823_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24610(__this, method) (( Object_t * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21825_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24611(__this, method) (( bool (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21827_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24612(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t273 *, KeyValuePair_2_t752 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21829_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24613(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t273 *, KeyValuePair_2_t752 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21831_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24614(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t273 *, KeyValuePair_2U5BU5D_t8836*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21833_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24615(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t273 *, KeyValuePair_2_t752 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21835_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24616(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t273 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21837_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24617(__this, method) (( Object_t * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21839_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24618(__this, method) (( Object_t* (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21841_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,FBScore>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24619(__this, method) (( Object_t * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21843_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Count()
#define Dictionary_2_get_Count_m24620(__this, method) (( int32_t (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_get_Count_m21845_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Item(TKey)
#define Dictionary_2_get_Item_m24621(__this, ___key, method) (( FBScore_t293 * (*) (Dictionary_2_t273 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21847_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24622(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t273 *, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_set_Item_m21849_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24623(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t273 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21851_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24624(__this, ___size, method) (( void (*) (Dictionary_2_t273 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21853_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24625(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t273 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21855_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m24626(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t752  (*) (Object_t * /* static, unused */, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_make_pair_m21857_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24627(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_pick_key_m21859_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24628(__this /* static, unused */, ___key, ___value, method) (( FBScore_t293 * (*) (Object_t * /* static, unused */, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_pick_value_m21861_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24629(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t273 *, KeyValuePair_2U5BU5D_t8836*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21863_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Resize()
#define Dictionary_2_Resize_m24630(__this, method) (( void (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_Resize_m21865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Add(TKey,TValue)
#define Dictionary_2_Add_m24631(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t273 *, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_Add_m21867_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::Clear()
#define Dictionary_2_Clear_m24632(__this, method) (( void (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_Clear_m21869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m24633(__this, ___key, method) (( bool (*) (Dictionary_2_t273 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21871_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24634(__this, ___value, method) (( bool (*) (Dictionary_2_t273 *, FBScore_t293 *, const MethodInfo*))Dictionary_2_ContainsValue_m21873_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24635(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t273 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21875_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,FBScore>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24636(__this, ___sender, method) (( void (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21877_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::Remove(TKey)
#define Dictionary_2_Remove_m24637(__this, ___key, method) (( bool (*) (Dictionary_2_t273 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21879_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m24638(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t273 *, String_t*, FBScore_t293 **, const MethodInfo*))Dictionary_2_TryGetValue_m21881_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Keys()
#define Dictionary_2_get_Keys_m24639(__this, method) (( KeyCollection_t5577 * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_get_Keys_m21882_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::get_Values()
#define Dictionary_2_get_Values_m24640(__this, method) (( ValueCollection_t5578 * (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_get_Values_m21884_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24641(__this, ___key, method) (( String_t* (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21886_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,FBScore>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24642(__this, ___value, method) (( FBScore_t293 * (*) (Dictionary_2_t273 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21888_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,FBScore>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m24643(__this, ___pair, method) (( bool (*) (Dictionary_2_t273 *, KeyValuePair_2_t752 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21890_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,FBScore>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3884(__this, method) (( Enumerator_t753  (*) (Dictionary_2_t273 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21891_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,FBScore>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24644(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, String_t*, FBScore_t293 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21893_gshared)(__this /* static, unused */, ___key, ___value, method)
