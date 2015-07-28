#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t103;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t8625;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.ICollection
struct ICollection_t697;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t5363;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_t5364;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5337;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_t8626;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>[]
struct KeyValuePair_2U5BU5D_t8627;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>
struct IEnumerator_1_t8628;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3902;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44MethodDeclarations.h"
#define Dictionary_2__ctor_m11539(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2__ctor_m9853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m20772(__this, ___comparer, method) (( void (*) (Dictionary_2_t103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20773_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m20774(__this, ___dictionary, method) (( void (*) (Dictionary_2_t103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20775_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m20776(__this, ___capacity, method) (( void (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20777_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m20778(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t103 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20779_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m20780(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t103 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2__ctor_m20781_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20782(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20783_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20784(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20785_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m20786(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m20787_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20788(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20789_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20790(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20791_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m20792(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20793_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m20794(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20795_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m20796(__this, ___key, method) (( void (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20797_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20798(__this, method) (( bool (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20799_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20800(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20801_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20802(__this, method) (( bool (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20803_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20804(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2_t5362 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20805_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20806(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5362 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20807_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20808(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2U5BU5D_t8627*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20809_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20810(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5362 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20811_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20812(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20813_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20814(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20815_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20816(__this, method) (( Object_t* (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20817_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20818(__this, method) (( Object_t * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20819_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Count()
#define Dictionary_2_get_Count_m20820(__this, method) (( int32_t (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Count_m20821_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m20822(__this, ___key, method) (( String_t* (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20823_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m20824(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, int32_t, String_t*, const MethodInfo*))Dictionary_2_set_Item_m20825_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m20826(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t103 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20827_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m20828(__this, ___size, method) (( void (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20829_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m20830(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20831_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m20832(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5362  (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_make_pair_m20833_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m20834(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_pick_key_m20835_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m20836(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_pick_value_m20837_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m20838(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t103 *, KeyValuePair_2U5BU5D_t8627*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20839_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Resize()
#define Dictionary_2_Resize_m20840(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_Resize_m20841_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m20842(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t103 *, int32_t, String_t*, const MethodInfo*))Dictionary_2_Add_m20843_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Clear()
#define Dictionary_2_Clear_m20844(__this, method) (( void (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_Clear_m20845_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m20846(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20847_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m20848(__this, ___value, method) (( bool (*) (Dictionary_2_t103 *, String_t*, const MethodInfo*))Dictionary_2_ContainsValue_m20849_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m20850(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t103 *, SerializationInfo_t2861 *, StreamingContext_t2862 , const MethodInfo*))Dictionary_2_GetObjectData_m20851_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m20852(__this, ___sender, method) (( void (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20853_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m20854(__this, ___key, method) (( bool (*) (Dictionary_2_t103 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20855_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m20856(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t103 *, int32_t, String_t**, const MethodInfo*))Dictionary_2_TryGetValue_m20857_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m20858(__this, method) (( KeyCollection_t5363 * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Keys_m20859_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Values()
#define Dictionary_2_get_Values_m20860(__this, method) (( ValueCollection_t5364 * (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_get_Values_m20861_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m20862(__this, ___key, method) (( int32_t (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20863_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m20864(__this, ___value, method) (( String_t* (*) (Dictionary_2_t103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20865_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m20866(__this, ___pair, method) (( bool (*) (Dictionary_2_t103 *, KeyValuePair_2_t5362 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20867_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m20868(__this, method) (( Enumerator_t5365  (*) (Dictionary_2_t103 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20869_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m20870(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2080  (*) (Object_t * /* static, unused */, int32_t, String_t*, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20871_gshared)(__this /* static, unused */, ___key, ___value, method)
