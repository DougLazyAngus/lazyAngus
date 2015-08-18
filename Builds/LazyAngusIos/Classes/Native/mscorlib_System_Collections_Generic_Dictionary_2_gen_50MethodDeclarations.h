#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>
struct Dictionary_2_t251;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1213;
// System.Collections.Generic.ICollection`1<GP_TBM_Match>
struct ICollection_1_t8818;
// System.Collections.ICollection
struct ICollection_t754;
// System.Object
struct Object_t;
// GP_TBM_Match
struct GP_TBM_Match_t248;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GP_TBM_Match>
struct KeyCollection_t5564;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GP_TBM_Match>
struct ValueCollection_t5565;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5379;
// System.Collections.Generic.IDictionary`2<System.String,GP_TBM_Match>
struct IDictionary_2_t8819;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Collections.Generic.KeyValuePair`2<System.String,GP_TBM_Match>[]
struct KeyValuePair_2U5BU5D_t8820;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,GP_TBM_Match>>
struct IEnumerator_1_t8821;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t784;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,GP_TBM_Match>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,GP_TBM_Match>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m24294(__this, method) (( void (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2__ctor_m21795_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24295(__this, ___comparer, method) (( void (*) (Dictionary_2_t251 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21797_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24296(__this, ___dictionary, method) (( void (*) (Dictionary_2_t251 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21799_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24297(__this, ___capacity, method) (( void (*) (Dictionary_2_t251 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21801_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24298(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t251 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21803_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24299(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t251 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2__ctor_m21805_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24300(__this, method) (( Object_t* (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21807_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24301(__this, method) (( Object_t* (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21809_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m24302(__this, method) (( Object_t * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21811_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24303(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21813_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24304(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t251 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24305(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t251 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21817_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24306(__this, ___key, method) (( bool (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21819_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24307(__this, ___key, method) (( void (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21821_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24308(__this, method) (( bool (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21823_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24309(__this, method) (( Object_t * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21825_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24310(__this, method) (( bool (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21827_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24311(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t251 *, KeyValuePair_2_t5563 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21829_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24312(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t251 *, KeyValuePair_2_t5563 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21831_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24313(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t251 *, KeyValuePair_2U5BU5D_t8820*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21833_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24314(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t251 *, KeyValuePair_2_t5563 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21835_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24315(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t251 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21837_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24316(__this, method) (( Object_t * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21839_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24317(__this, method) (( Object_t* (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21841_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24318(__this, method) (( Object_t * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21843_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Count()
#define Dictionary_2_get_Count_m24319(__this, method) (( int32_t (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_get_Count_m21845_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Item(TKey)
#define Dictionary_2_get_Item_m24320(__this, ___key, method) (( GP_TBM_Match_t248 * (*) (Dictionary_2_t251 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21847_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24321(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t251 *, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_set_Item_m21849_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24322(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t251 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21851_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24323(__this, ___size, method) (( void (*) (Dictionary_2_t251 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21853_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24324(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t251 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21855_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m24325(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5563  (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_make_pair_m21857_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24326(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_pick_key_m21859_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24327(__this /* static, unused */, ___key, ___value, method) (( GP_TBM_Match_t248 * (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_pick_value_m21861_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24328(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t251 *, KeyValuePair_2U5BU5D_t8820*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21863_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Resize()
#define Dictionary_2_Resize_m24329(__this, method) (( void (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_Resize_m21865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Add(TKey,TValue)
#define Dictionary_2_Add_m24330(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t251 *, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_Add_m21867_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Clear()
#define Dictionary_2_Clear_m24331(__this, method) (( void (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_Clear_m21869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m24332(__this, ___key, method) (( bool (*) (Dictionary_2_t251 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21871_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24333(__this, ___value, method) (( bool (*) (Dictionary_2_t251 *, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_ContainsValue_m21873_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24334(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t251 *, SerializationInfo_t2919 *, StreamingContext_t2920 , const MethodInfo*))Dictionary_2_GetObjectData_m21875_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24335(__this, ___sender, method) (( void (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21877_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::Remove(TKey)
#define Dictionary_2_Remove_m24336(__this, ___key, method) (( bool (*) (Dictionary_2_t251 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21879_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m24337(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t251 *, String_t*, GP_TBM_Match_t248 **, const MethodInfo*))Dictionary_2_TryGetValue_m21881_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Keys()
#define Dictionary_2_get_Keys_m24338(__this, method) (( KeyCollection_t5564 * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_get_Keys_m21882_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::get_Values()
#define Dictionary_2_get_Values_m24339(__this, method) (( ValueCollection_t5565 * (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_get_Values_m21884_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24340(__this, ___key, method) (( String_t* (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21886_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24341(__this, ___value, method) (( GP_TBM_Match_t248 * (*) (Dictionary_2_t251 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21888_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m24342(__this, ___pair, method) (( bool (*) (Dictionary_2_t251 *, KeyValuePair_2_t5563 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21890_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m24343(__this, method) (( Enumerator_t5566  (*) (Dictionary_2_t251 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21891_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,GP_TBM_Match>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24344(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2139  (*) (Object_t * /* static, unused */, String_t*, GP_TBM_Match_t248 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21893_gshared)(__this /* static, unused */, ___key, ___value, method)
