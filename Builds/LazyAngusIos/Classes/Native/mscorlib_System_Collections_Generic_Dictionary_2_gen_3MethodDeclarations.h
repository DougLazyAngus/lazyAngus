﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct Dictionary_2_t121;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct ICollection_1_t8737;
// System.Collections.ICollection
struct ICollection_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<AN_PropertyTemplate>
struct List_1_t123;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct KeyCollection_t720;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct ValueCollection_t5472;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5380;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
struct IDictionary_2_t8738;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>[]
struct KeyValuePair_2U5BU5D_t8739;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>>
struct IEnumerator_1_t8740;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t785;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m3735(__this, method) (( void (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2__ctor_m21817_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22436(__this, ___comparer, method) (( void (*) (Dictionary_2_t121 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21819_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m22437(__this, ___dictionary, method) (( void (*) (Dictionary_2_t121 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21821_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m22438(__this, ___capacity, method) (( void (*) (Dictionary_2_t121 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21823_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22439(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t121 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21825_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m22440(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t121 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2__ctor_m21827_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22441(__this, method) (( Object_t* (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21829_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22442(__this, method) (( Object_t* (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21831_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m22443(__this, method) (( Object_t * (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21833_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22444(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t121 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21835_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22445(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t121 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21837_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m22446(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t121 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21839_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m22447(__this, ___key, method) (( bool (*) (Dictionary_2_t121 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21841_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m22448(__this, ___key, method) (( void (*) (Dictionary_2_t121 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21843_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22449(__this, method) (( bool (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21845_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22450(__this, method) (( Object_t * (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21847_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22451(__this, method) (( bool (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21849_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22452(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t121 *, KeyValuePair_2_t5471 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21851_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22453(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t121 *, KeyValuePair_2_t5471 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21853_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22454(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t121 *, KeyValuePair_2U5BU5D_t8739*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21855_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22455(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t121 *, KeyValuePair_2_t5471 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21857_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22456(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t121 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21859_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22457(__this, method) (( Object_t * (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21861_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22458(__this, method) (( Object_t* (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21863_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22459(__this, method) (( Object_t * (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21865_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Count()
#define Dictionary_2_get_Count_m22460(__this, method) (( int32_t (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_get_Count_m21867_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Item(TKey)
#define Dictionary_2_get_Item_m22461(__this, ___key, method) (( List_1_t123 * (*) (Dictionary_2_t121 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21869_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m22462(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t121 *, String_t*, List_1_t123 *, const MethodInfo*))Dictionary_2_set_Item_m21871_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m22463(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t121 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21873_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m22464(__this, ___size, method) (( void (*) (Dictionary_2_t121 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21875_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m22465(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t121 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21877_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m22466(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5471  (*) (Object_t * /* static, unused */, String_t*, List_1_t123 *, const MethodInfo*))Dictionary_2_make_pair_m21879_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m22467(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, List_1_t123 *, const MethodInfo*))Dictionary_2_pick_key_m21881_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m22468(__this /* static, unused */, ___key, ___value, method) (( List_1_t123 * (*) (Object_t * /* static, unused */, String_t*, List_1_t123 *, const MethodInfo*))Dictionary_2_pick_value_m21883_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m22469(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t121 *, KeyValuePair_2U5BU5D_t8739*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21885_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Resize()
#define Dictionary_2_Resize_m22470(__this, method) (( void (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_Resize_m21887_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Add(TKey,TValue)
#define Dictionary_2_Add_m22471(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t121 *, String_t*, List_1_t123 *, const MethodInfo*))Dictionary_2_Add_m21889_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Clear()
#define Dictionary_2_Clear_m22472(__this, method) (( void (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_Clear_m21891_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m22473(__this, ___key, method) (( bool (*) (Dictionary_2_t121 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21893_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m22474(__this, ___value, method) (( bool (*) (Dictionary_2_t121 *, List_1_t123 *, const MethodInfo*))Dictionary_2_ContainsValue_m21895_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m22475(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t121 *, SerializationInfo_t2920 *, StreamingContext_t2921 , const MethodInfo*))Dictionary_2_GetObjectData_m21897_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m22476(__this, ___sender, method) (( void (*) (Dictionary_2_t121 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21899_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::Remove(TKey)
#define Dictionary_2_Remove_m22477(__this, ___key, method) (( bool (*) (Dictionary_2_t121 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21901_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m22478(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t121 *, String_t*, List_1_t123 **, const MethodInfo*))Dictionary_2_TryGetValue_m21903_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Keys()
#define Dictionary_2_get_Keys_m3750(__this, method) (( KeyCollection_t720 * (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_get_Keys_m21904_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::get_Values()
#define Dictionary_2_get_Values_m22479(__this, method) (( ValueCollection_t5472 * (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_get_Values_m21906_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m22480(__this, ___key, method) (( String_t* (*) (Dictionary_2_t121 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21908_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m22481(__this, ___value, method) (( List_1_t123 * (*) (Dictionary_2_t121 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21910_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m22482(__this, ___pair, method) (( bool (*) (Dictionary_2_t121 *, KeyValuePair_2_t5471 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21912_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m22483(__this, method) (( Enumerator_t5473  (*) (Dictionary_2_t121 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21913_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<AN_PropertyTemplate>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m22484(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2140  (*) (Object_t * /* static, unused */, String_t*, List_1_t123 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21915_gshared)(__this /* static, unused */, ___key, ___value, method)
