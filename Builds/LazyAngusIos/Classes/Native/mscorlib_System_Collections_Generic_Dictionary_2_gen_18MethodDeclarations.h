#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>
struct Dictionary_2_t316;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<TweetTemplate>
struct ICollection_1_t8876;
// System.Collections.ICollection
struct ICollection_t752;
// System.Object
struct Object_t;
// TweetTemplate
struct TweetTemplate_t323;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TweetTemplate>
struct KeyCollection_t5615;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TweetTemplate>
struct ValueCollection_t5616;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t5377;
// System.Collections.Generic.IDictionary`2<System.String,TweetTemplate>
struct IDictionary_2_t8877;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.Generic.KeyValuePair`2<System.String,TweetTemplate>[]
struct KeyValuePair_2U5BU5D_t8878;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TweetTemplate>>
struct IEnumerator_1_t8879;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,TweetTemplate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,TweetTemplate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_48MethodDeclarations.h"
#define Dictionary_2__ctor_m3907(__this, method) (( void (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2__ctor_m21785_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25333(__this, ___comparer, method) (( void (*) (Dictionary_2_t316 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21787_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m25334(__this, ___dictionary, method) (( void (*) (Dictionary_2_t316 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21789_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Int32)
#define Dictionary_2__ctor_m25335(__this, ___capacity, method) (( void (*) (Dictionary_2_t316 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21791_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m25336(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t316 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21793_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m25337(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t316 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2__ctor_m21795_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25338(__this, method) (( Object_t* (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21797_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25339(__this, method) (( Object_t* (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21799_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.get_Keys()
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m25340(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25341(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21803_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25342(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21805_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m25343(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21807_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m25344(__this, ___key, method) (( bool (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21809_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m25345(__this, ___key, method) (( void (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21811_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25346(__this, method) (( bool (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21813_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25347(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21815_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25348(__this, method) (( bool (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21817_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25349(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t316 *, KeyValuePair_2_t5614 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21819_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25350(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t316 *, KeyValuePair_2_t5614 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21821_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25351(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, KeyValuePair_2U5BU5D_t8878*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21823_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25352(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t316 *, KeyValuePair_2_t5614 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21825_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25353(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21827_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25354(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21829_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25355(__this, method) (( Object_t* (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21831_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25356(__this, method) (( Object_t * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21833_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Count()
#define Dictionary_2_get_Count_m25357(__this, method) (( int32_t (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_get_Count_m21835_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Item(TKey)
#define Dictionary_2_get_Item_m25358(__this, ___key, method) (( TweetTemplate_t323 * (*) (Dictionary_2_t316 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m21837_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m25359(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_set_Item_m21839_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m25360(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t316 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21841_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m25361(__this, ___size, method) (( void (*) (Dictionary_2_t316 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21843_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m25362(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21845_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m25363(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t5614  (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_make_pair_m21847_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m25364(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_pick_key_m21849_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m25365(__this /* static, unused */, ___key, ___value, method) (( TweetTemplate_t323 * (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_pick_value_m21851_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m25366(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t316 *, KeyValuePair_2U5BU5D_t8878*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21853_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Resize()
#define Dictionary_2_Resize_m25367(__this, method) (( void (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_Resize_m21855_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Add(TKey,TValue)
#define Dictionary_2_Add_m25368(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t316 *, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_Add_m21857_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Clear()
#define Dictionary_2_Clear_m25369(__this, method) (( void (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_Clear_m21859_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m25370(__this, ___key, method) (( bool (*) (Dictionary_2_t316 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m21861_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m25371(__this, ___value, method) (( bool (*) (Dictionary_2_t316 *, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_ContainsValue_m21863_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m25372(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t316 *, SerializationInfo_t2917 *, StreamingContext_t2918 , const MethodInfo*))Dictionary_2_GetObjectData_m21865_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m25373(__this, ___sender, method) (( void (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21867_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::Remove(TKey)
#define Dictionary_2_Remove_m25374(__this, ___key, method) (( bool (*) (Dictionary_2_t316 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m21869_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m25375(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t316 *, String_t*, TweetTemplate_t323 **, const MethodInfo*))Dictionary_2_TryGetValue_m21871_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Keys()
#define Dictionary_2_get_Keys_m25376(__this, method) (( KeyCollection_t5615 * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_get_Keys_m21872_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::get_Values()
#define Dictionary_2_get_Values_m25377(__this, method) (( ValueCollection_t5616 * (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_get_Values_m21874_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m25378(__this, ___key, method) (( String_t* (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21876_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m25379(__this, ___value, method) (( TweetTemplate_t323 * (*) (Dictionary_2_t316 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21878_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m25380(__this, ___pair, method) (( bool (*) (Dictionary_2_t316 *, KeyValuePair_2_t5614 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21880_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m25381(__this, method) (( Enumerator_t5617  (*) (Dictionary_2_t316 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21881_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,TweetTemplate>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m25382(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t2137  (*) (Object_t * /* static, unused */, String_t*, TweetTemplate_t323 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21883_gshared)(__this /* static, unused */, ___key, ___value, method)
